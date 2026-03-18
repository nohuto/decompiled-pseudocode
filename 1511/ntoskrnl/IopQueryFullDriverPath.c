/*
 * XREFs of IopQueryFullDriverPath @ 0x1401BC2AC
 * Callers:
 *     IoQueryFullDriverPath @ 0x1401BBBC0 (IoQueryFullDriverPath.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopQueryFullDriverPath(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  SIZE_T v5; // rdx
  wchar_t *PoolWithTagPriority; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 3221226021LL;
  v5 = *(unsigned __int16 *)(v2 + 74);
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (wchar_t *)ExAllocatePoolWithTagPriority(
                                       PagedPool,
                                       v5,
                                       0x20206F49u,
                                       (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x20206F49u);
  a2->Buffer = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return 3221225626LL;
  a2->MaximumLength = *(_WORD *)(v2 + 74);
  RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v2 + 72));
  return 0LL;
}
