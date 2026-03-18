/*
 * XREFs of DitPrepRitTakeOver @ 0x1C0131AC0
 * Callers:
 *     UserDeactivateDwmInputProcessing @ 0x1C00F3B10 (UserDeactivateDwmInputProcessing.c)
 *     DitTakeOver @ 0x1C0150074 (DitTakeOver.c)
 * Callees:
 *     ResetPointerDevices @ 0x1C0100DBC (ResetPointerDevices.c)
 *     CleanupDitRimIocpSupport @ 0x1C0131B04 (CleanupDitRimIocpSupport.c)
 *     vRemoveAndCleanupRimClient @ 0x1C0144C58 (vRemoveAndCleanupRimClient.c)
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01DD854 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 */

__int64 DitPrepRitTakeOver()
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v2; // rcx
  int v3; // edi
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
    v3 = IsResourceAcquiredExclusiveLite;
    if ( !IsResourceAcquiredExclusiveLite )
      EnterDeviceInfoListCrit_(v2);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 96) & 4) != 0 )
      {
        CloseDevice((struct DEVICEINFO *)i);
        *(_QWORD *)(i + 224) = 0LL;
        *(_DWORD *)(i + 96) |= 0x100u;
      }
      *(_DWORD *)(i + 96) &= 0xFFFFFFF9;
    }
    if ( !v3 )
      LeaveDeviceInfoListCrit_(v2);
  }
  EtwTraceDitDisEngaged();
  return 1LL;
}
