/*
 * XREFs of ViRtlReplaceStringBuffer @ 0x140752FB0
 * Callers:
 *     VerifierRtlAnsiStringToUnicodeString @ 0x140752BD4 (VerifierRtlAnsiStringToUnicodeString.c)
 *     VerifierRtlCreateUnicodeString @ 0x140752C20 (VerifierRtlCreateUnicodeString.c)
 *     VerifierRtlDowncaseUnicodeString @ 0x140752C7C (VerifierRtlDowncaseUnicodeString.c)
 *     VerifierRtlDuplicateUnicodeString @ 0x140752CC0 (VerifierRtlDuplicateUnicodeString.c)
 *     VerifierRtlOemStringToCountedUnicodeString @ 0x140752D1C (VerifierRtlOemStringToCountedUnicodeString.c)
 *     VerifierRtlOemStringToUnicodeString @ 0x140752D60 (VerifierRtlOemStringToUnicodeString.c)
 *     VerifierRtlUnicodeStringToAnsiString @ 0x140752DB4 (VerifierRtlUnicodeStringToAnsiString.c)
 *     VerifierRtlUnicodeStringToCountedOemString @ 0x140752DF8 (VerifierRtlUnicodeStringToCountedOemString.c)
 *     VerifierRtlUnicodeStringToOemString @ 0x140752E3C (VerifierRtlUnicodeStringToOemString.c)
 *     VerifierRtlUpcaseUnicodeString @ 0x140752E90 (VerifierRtlUpcaseUnicodeString.c)
 *     VerifierRtlUpcaseUnicodeStringToAnsiString @ 0x140752ED4 (VerifierRtlUpcaseUnicodeStringToAnsiString.c)
 *     VerifierRtlUpcaseUnicodeStringToCountedOemString @ 0x140752F18 (VerifierRtlUpcaseUnicodeStringToCountedOemString.c)
 *     VerifierRtlUpcaseUnicodeStringToOemString @ 0x140752F5C (VerifierRtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 */

void __fastcall ViRtlReplaceStringBuffer(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned __int16 v4; // cx
  unsigned int v6; // ebp
  PVOID PoolWithTagPriority; // rax
  PVOID v8; // rdi

  v4 = *(_WORD *)(a1 + 2);
  if ( (MmVerifierData & 9) != 0 && v4 )
  {
    v6 = v4;
    PoolWithTagPriority = VeAllocatePoolWithTagPriority((POOL_TYPE)129, v4, 0x72745356u, HighPoolPriority, a3);
    v8 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
      memmove(PoolWithTagPriority, *(const void **)(a1 + 8), v6);
    else
      *a2 = -1073741801;
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    *(_QWORD *)(a1 + 8) = v8;
  }
}
