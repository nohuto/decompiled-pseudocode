/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x1C0036EA0
 * Callers:
 *     WerKernelSubmitReport @ 0x1C00375F4 (WerKernelSubmitReport.c)
 * Callees:
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        _QWORD *a2,
        unsigned int a3)
{
  size_t v4; // rbp
  NTSTATUS v6; // edi
  PVOID PoolWithTag; // rax
  void *v8; // rbx
  __int64 result; // rax

  v4 = a3;
  v6 = -1073741823;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (int)a3, 0x7765726Bu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4);
    v6 = RtlInitializeSid(v8, IdentifierAuthority, 1u);
    if ( v6 >= 0 )
    {
      v6 = 0;
      *RtlSubAuthoritySid(v8, 0) = 18;
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR RtlInitializeSid failed\n", 263);
    }
    if ( v6 < 0 )
    {
      ExFreePoolWithTag(v8, 0);
      v8 = 0LL;
    }
  }
  else
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR NtAllocateVirtualMemory failed\n", 253);
  }
  result = (unsigned int)v6;
  *a2 = v8;
  return result;
}
