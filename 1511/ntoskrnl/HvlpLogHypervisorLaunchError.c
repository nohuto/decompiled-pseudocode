/*
 * XREFs of HvlpLogHypervisorLaunchError @ 0x1401B4DA4
 * Callers:
 *     HvlPhase2Initialize @ 0x140142738 (HvlPhase2Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     sub_1401B5178 @ 0x1401B5178 (sub_1401B5178.c)
 */

__int64 __fastcall HvlpLogHypervisorLaunchError(_QWORD *a1)
{
  __int64 result; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-58h] BYREF

  if ( *a1 == 35LL )
  {
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)(a1 + 1);
    UserData.Size = 4;
    return sub_1401B5178(&HV_EVENTLOG_BAL_HYPERVISOR_INIT_FAILED, 1u, &UserData);
  }
  return result;
}
