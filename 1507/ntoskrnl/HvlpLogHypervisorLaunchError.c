/*
 * XREFs of HvlpLogHypervisorLaunchError @ 0x1401EFC78
 * Callers:
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     sub_1401F030C @ 0x1401F030C (sub_1401F030C.c)
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
    return sub_1401F030C(&HV_EVENTLOG_BAL_HYPERVISOR_INIT_FAILED, 1u, &UserData);
  }
  return result;
}
