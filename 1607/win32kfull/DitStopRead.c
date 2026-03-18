/*
 * XREFs of DitStopRead @ 0x1C01D6A50
 * Callers:
 *     UserProcessDwmInput @ 0x1C00E0620 (UserProcessDwmInput.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0119964 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01D5768 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01D5F4C (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

__int64 DitStopRead()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rbx
  int v5; // eax
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  EnterDeviceInfoListCrit_(v0);
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(i + 96) & 0x40) != 0 )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1, v2, v3) == gptiRit
        && (v5 = *(_DWORD *)(i + 96), (v5 & 4) != 0) )
      {
        *(_DWORD *)(i + 96) = v5 | 0x40;
        RitWakeDITAndWaitForResponse(8u);
      }
      else
      {
        v6 = *(void **)(i + 224);
        *(_WORD *)(i + 64) &= ~2u;
        ZwCancelIoFile(v6, &IoStatusBlock);
        CloseDevice((struct DEVICEINFO *)i, v7, v8, v9);
      }
      *(_DWORD *)(i + 96) &= ~0x40u;
    }
  }
  KeSetEvent(gpkeDITResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v11, v10);
  UserSessionSwitchLeaveCrit(v13, v12);
  return 1LL;
}
