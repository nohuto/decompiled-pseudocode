/*
 * XREFs of ObpLookupDirectoryEntryEx @ 0x14062DD54
 * Callers:
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpDeleteNameCheck @ 0x1404701A0 (ObpDeleteNameCheck.c)
 *     ObpCreateSymbolicLinkName @ 0x1404BAF58 (ObpCreateSymbolicLinkName.c)
 *     ObpLookupDirectoryEntry @ 0x140525B20 (ObpLookupDirectoryEntry.c)
 *     ObCreateObjectTypeEx @ 0x140525B54 (ObCreateObjectTypeEx.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x1400428A0 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObpLockDirectoryShared @ 0x1400429F0 (ObpLockDirectoryShared.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     RtlUpcaseUnicodeChar @ 0x1403FB1D0 (RtlUpcaseUnicodeChar.c)
 *     ObpLookupDirectoryUsingHash @ 0x14040F380 (ObpLookupDirectoryUsingHash.c)
 *     ObpGetShadowDirectory @ 0x14041CE20 (ObpGetShadowDirectory.c)
 */

void *__fastcall ObpLookupDirectoryEntryEx(
        unsigned __int64 *Object,
        const UNICODE_STRING *a2,
        char a3,
        char a4,
        char a5,
        __int64 a6)
{
  wchar_t *Buffer; // r14
  char v7; // r15
  BOOLEAN v9; // r12
  unsigned int v10; // edi
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rax
  __int128 v16; // rt0
  unsigned int v17; // ebx
  unsigned int v18; // edx
  int v19; // ebx
  void *v20; // rsi
  unsigned __int64 *ShadowDirectory; // rbx

  Buffer = a2->Buffer;
  v7 = a4;
  v9 = (a3 & 0x40) != 0;
  v10 = a2->Length >> 1;
  if ( v10 < 4 )
  {
    v17 = 0;
  }
  else
  {
    v12 = 0LL;
    do
    {
      v13 = *(_QWORD *)Buffer;
      if ( (*(_QWORD *)Buffer & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v14 = 4LL;
        do
        {
          v15 = (unsigned __int16)v13;
          if ( (unsigned __int16)v13 >= 0x61u )
          {
            if ( (unsigned __int16)v13 <= 0x7Au )
              v15 = (unsigned int)(unsigned __int16)v13 - 32;
            else
              v15 = RtlUpcaseUnicodeChar(v13);
          }
          *(_QWORD *)&v16 = v13;
          *((_QWORD *)&v16 + 1) = v15;
          v13 = v16 >> 16;
          --v14;
        }
        while ( v14 );
      }
      else
      {
        v13 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      Buffer += 4;
      v10 -= 4;
      v12 = v13 + (v12 >> 1) + 3 * v12;
    }
    while ( v10 >= 4 );
    v7 = a4;
    v17 = v12 + HIDWORD(v12);
  }
  while ( v10 )
  {
    v18 = *Buffer;
    v19 = (v17 >> 1) + 3 * v17;
    ++Buffer;
    --v10;
    if ( v18 < 0x61 )
      goto LABEL_18;
    if ( v18 <= 0x7A )
    {
      v19 -= 32;
LABEL_18:
      v17 = v18 + v19;
    }
    else
    {
      v17 = RtlUpcaseUnicodeChar(v18) + v19;
    }
  }
  *(_DWORD *)(a6 + 24) = v17;
  *(_WORD *)(a6 + 28) = v17 % 0x25;
  v20 = ObpLookupDirectoryUsingHash(Object, a2, a6, v9);
  if ( !v20 && v7 )
  {
    do
    {
      ShadowDirectory = (unsigned __int64 *)ObpGetShadowDirectory((__int64)Object, a5);
      if ( ShadowDirectory )
      {
        if ( *(_BYTE *)(a6 + 30) )
        {
          ObfReferenceObject(Object);
          ObpUnlockDirectory((__int64)Object, a6);
          ObpLockDirectoryShared(a6, ShadowDirectory);
          ObfDereferenceObject(Object);
        }
        v20 = ObpLookupDirectoryUsingHash(ShadowDirectory, a2, a6, v9);
      }
      Object = ShadowDirectory;
    }
    while ( !v20 && ShadowDirectory );
  }
  return v20;
}
