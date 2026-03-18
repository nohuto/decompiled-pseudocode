/*
 * XREFs of DitPrepRitTakeOver @ 0x1C009EBF4
 * Callers:
 *     UserDeactivateDwmInputProcessing @ 0x1C009F6C0 (UserDeactivateDwmInputProcessing.c)
 *     DitTakeOver @ 0x1C00A0698 (DitTakeOver.c)
 * Callees:
 *     vRemoveAndCleanupRimClient @ 0x1C009CED4 (vRemoveAndCleanupRimClient.c)
 *     ResetPointerDevices @ 0x1C009D940 (ResetPointerDevices.c)
 *     CleanupDitRimIocpSupport @ 0x1C009EC38 (CleanupDitRimIocpSupport.c)
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DDE54 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 */

__int64 DitPrepRitTakeOver()
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  int v2; // edi
  __int64 i; // rbx

  ResetPointerDevices();
  if ( LODWORD(aDeviceTemplate[154]) )
  {
    vRemoveAndCleanupRimClient();
    CleanupDitRimIocpSupport();
  }
  else
  {
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    v2 = IsResourceAcquiredExclusiveLite;
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_();
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 88) & 4) != 0 )
      {
        CloseDevice((struct DEVICEINFO *)i);
        *(_QWORD *)(i + 216) = 0LL;
        *(_DWORD *)(i + 88) |= 0x100u;
      }
      *(_DWORD *)(i + 88) &= 0xFFFFFFF9;
    }
    if ( !v2 )
      LeaveDeviceInfoListCrit_();
  }
  EtwTraceDitDisEngaged();
  return 1LL;
}
