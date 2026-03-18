/*
 * XREFs of DitStartRead @ 0x1C01D69E4
 * Callers:
 *     UserProcessDwmInput @ 0x1C00E0620 (UserProcessDwmInput.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0119964 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 * Callees:
 *     StartDeviceRead @ 0x1C01D6BC0 (StartDeviceRead.c)
 */

__int64 DitStartRead()
{
  __int64 v0; // rcx
  __int64 i; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  EnterDeviceInfoListCrit_(v0);
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(i + 96) & 0x20) != 0 )
    {
      StartDeviceRead((PVOID)i);
      *(_DWORD *)(i + 96) &= ~0x20u;
    }
  }
  KeSetEvent(gpkeDITResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v3, v2);
  UserSessionSwitchLeaveCrit(v5, v4);
  return 1LL;
}
