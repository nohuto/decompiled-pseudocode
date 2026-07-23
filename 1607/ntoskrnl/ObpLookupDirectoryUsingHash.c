/*
 * XREFs of ObpLookupDirectoryUsingHash @ 0x14040BF04
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x14040BDB0 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObpUnlockDirectory @ 0x14008B190 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x1400EC2BC (ObpLockDirectoryShared.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 */

void *__fastcall ObpLookupDirectoryUsingHash(unsigned __int64 *a1, const UNICODE_STRING *a2, __int64 a3, BOOLEAN a4)
{
  char v5; // bp
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rdi
  int v11; // r15d
  void *v12; // rdi
  void *v13; // rcx
  void *result; // rax

  v5 = *(_BYTE *)(a3 + 30);
  v9 = &a1[*(unsigned __int16 *)(a3 + 28)];
  if ( !v5 )
    ObpLockDirectoryShared(a3, a1);
  v10 = *v9;
  if ( !*v9 )
    goto LABEL_15;
  v11 = *(_DWORD *)(a3 + 24);
  do
  {
    if ( *(_DWORD *)(v10 + 16) == v11
      && RtlEqualUnicodeString(
           a2,
           (PCUNICODE_STRING)(*(_QWORD *)(v10 + 8)
                            - 48LL
                            - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(v10 + 8) - 48LL + 26) & 3]
                            + 8),
           a4) )
    {
      break;
    }
    v9 = (unsigned __int64 *)v10;
    v10 = *(_QWORD *)v10;
  }
  while ( v10 );
  if ( v10 )
  {
    v12 = *(void **)(v10 + 8);
    ObfReferenceObject(v12);
    if ( !v5 )
    {
      ObpUnlockDirectory((__int64)a1, a3);
      v9 = 0LL;
    }
    v13 = *(void **)(a3 + 8);
    if ( v13 )
      ObfDereferenceObject(v13);
    *(_QWORD *)(a3 + 8) = v12;
    result = v12;
    *(_QWORD *)(a3 + 16) = v9;
  }
  else
  {
LABEL_15:
    if ( !v5 )
      ObpUnlockDirectory((__int64)a1, a3);
    return 0LL;
  }
  return result;
}
