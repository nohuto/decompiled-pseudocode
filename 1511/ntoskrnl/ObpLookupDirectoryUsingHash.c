/*
 * XREFs of ObpLookupDirectoryUsingHash @ 0x14040F380
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x14062DD54 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ObpUnlockDirectory @ 0x1400428A0 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObpLockDirectoryShared @ 0x1400429F0 (ObpLockDirectoryShared.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 */

void *__fastcall ObpLookupDirectoryUsingHash(unsigned __int64 *a1, const UNICODE_STRING *a2, __int64 a3, BOOLEAN a4)
{
  char v5; // r15
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rbx
  int v11; // ebp
  void *result; // rax
  void *v13; // rbx
  void *v14; // rcx

  v5 = *(_BYTE *)(a3 + 30);
  v9 = &a1[*(unsigned __int16 *)(a3 + 28)];
  if ( !v5 )
    ObpLockDirectoryShared(a3, a1);
  v10 = *v9;
  if ( *v9 )
  {
    v11 = *(_DWORD *)(a3 + 24);
    while ( *(_DWORD *)(v10 + 16) != v11
         || !RtlEqualUnicodeString(
               a2,
               (PCUNICODE_STRING)(*(_QWORD *)(v10 + 8)
                                - 48LL
                                - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(v10 + 8) - 48LL + 26) & 3]
                                + 8),
               a4) )
    {
      v9 = (unsigned __int64 *)v10;
      v10 = *(_QWORD *)v10;
      if ( !v10 )
        goto LABEL_7;
    }
    v13 = *(void **)(v10 + 8);
    ObfReferenceObject(v13);
    if ( !v5 )
    {
      ObpUnlockDirectory((__int64)a1, a3);
      v9 = 0LL;
    }
    v14 = *(void **)(a3 + 8);
    if ( v14 )
      ObfDereferenceObject(v14);
    *(_QWORD *)(a3 + 8) = v13;
    result = v13;
    *(_QWORD *)(a3 + 16) = v9;
  }
  else
  {
LABEL_7:
    if ( !v5 )
      ObpUnlockDirectory((__int64)a1, a3);
    return 0LL;
  }
  return result;
}
