/*
 * XREFs of IoQueryFullDriverPath @ 0x1401F70FC
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoQueryFullDriverPath(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  unsigned __int64 v6; // rdx
  SIZE_T v7; // rdx
  wchar_t *PoolWithTagPriority; // rax
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  if ( !v2 )
    return 3221226021LL;
  v6 = *(_QWORD *)(v2 + 48);
  if ( retaddr < v6 || retaddr > v6 + *(unsigned int *)(v2 + 64) )
    return 3221225506LL;
  v7 = *(unsigned __int16 *)(v2 + 74);
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (wchar_t *)ExAllocatePoolWithTagPriority(
                                       PagedPool,
                                       v7,
                                       0x20206F49u,
                                       (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x20206F49u);
  a2->Buffer = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    a2->MaximumLength = *(_WORD *)(v2 + 74);
    RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v2 + 72));
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
