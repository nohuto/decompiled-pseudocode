/*
 * XREFs of ObpLookupDirectoryEntryEx @ 0x14040BDB0
 * Callers:
 *     ObpDeleteNameCheck @ 0x1404054E0 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     ObpCreateSymbolicLinkName @ 0x1404A33C8 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 *     ObpLookupDirectoryEntry @ 0x140552DA4 (ObpLookupDirectoryEntry.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObpUnlockDirectory @ 0x14008B190 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x1400EC2BC (ObpLockDirectoryShared.c)
 *     ObpLookupDirectoryUsingHash @ 0x14040BF04 (ObpLookupDirectoryUsingHash.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     ObpGetShadowDirectory @ 0x14066550C (ObpGetShadowDirectory.c)
 */

__int64 __fastcall ObpLookupDirectoryEntryEx(
        unsigned __int64 *a1,
        unsigned __int16 *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        __int64 a6)
{
  char v6; // bp
  unsigned __int16 *v7; // r15
  unsigned __int64 *v8; // r13
  bool v9; // r12
  unsigned __int64 v10; // rdi
  unsigned __int16 *v11; // r14
  unsigned int v12; // esi
  __int64 v13; // rbx
  unsigned int v14; // ebx
  unsigned int v15; // edx
  int v16; // ebx
  __int64 result; // rax
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int64 v20; // rax
  __int128 v21; // rt0
  unsigned __int64 *ShadowDirectory; // rsi

  v6 = a4;
  v7 = a2;
  v8 = a1;
  v9 = (a3 & 0x40) != 0;
  v10 = 0LL;
  v11 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v12 = *a2 >> 1;
  if ( v12 < 4 )
  {
    v14 = 0;
  }
  else
  {
    do
    {
      v13 = *(_QWORD *)v11;
      if ( (*(_QWORD *)v11 & 0xFF80FF80FF80FF80uLL) != 0 )
      {
        v19 = 4LL;
        do
        {
          v20 = (unsigned __int16)v13;
          if ( (unsigned __int16)v13 >= 0x61u )
          {
            if ( (unsigned __int16)v13 <= 0x7Au )
              v20 = (unsigned int)(unsigned __int16)v13 - 32;
            else
              v20 = RtlUpcaseUnicodeChar(v13);
          }
          *(_QWORD *)&v21 = v13;
          *((_QWORD *)&v21 + 1) = v20;
          v13 = v21 >> 16;
          --v19;
        }
        while ( v19 );
      }
      else
      {
        v13 &= 0xFFDFFFDFFFDFFFDFuLL;
      }
      v11 += 4;
      v12 -= 4;
      v10 = v13 + (v10 >> 1) + 3 * v10;
    }
    while ( v12 >= 4 );
    v7 = a2;
    v8 = a1;
    v6 = a4;
    v14 = v10 + HIDWORD(v10);
  }
  while ( v12 )
  {
    v15 = *v11++;
    --v12;
    v16 = (v14 >> 1) + 3 * v14;
    if ( v15 >= 0x61 )
    {
      if ( v15 > 0x7A )
      {
        v14 = RtlUpcaseUnicodeChar(v15) + v16;
        continue;
      }
      v16 -= 32;
    }
    v14 = v15 + v16;
  }
  *(_DWORD *)(a6 + 24) = v14;
  *(_WORD *)(a6 + 28) = v14 % 0x25;
  result = ObpLookupDirectoryUsingHash(v8, v7, a6, v9);
  v18 = result;
  if ( !result && v6 )
  {
    do
    {
      ShadowDirectory = (unsigned __int64 *)ObpGetShadowDirectory(v8, a5);
      if ( ShadowDirectory )
      {
        if ( *(_BYTE *)(a6 + 30) )
        {
          ObfReferenceObject(v8);
          ObpUnlockDirectory((__int64)v8, a6);
          ObpLockDirectoryShared(a6, ShadowDirectory);
          ObfDereferenceObject(v8);
        }
        v18 = ObpLookupDirectoryUsingHash(ShadowDirectory, v7, a6, v9);
      }
      v8 = ShadowDirectory;
    }
    while ( !v18 && ShadowDirectory );
    return v18;
  }
  return result;
}
