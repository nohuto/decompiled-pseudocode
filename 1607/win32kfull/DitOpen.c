/*
 * XREFs of DitOpen @ 0x1C01D692C
 * Callers:
 *     UserProcessDwmInput @ 0x1C00E0620 (UserProcessDwmInput.c)
 *     ?WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z @ 0x1C0119964 (-WaitForRitToCompleteLastCommand@@YAXHHPEAK@Z.c)
 * Callees:
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01D5C1C (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 DitOpen()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rbx
  void *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD FileInformation[3]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  EnterDeviceInfoListCrit_(v0);
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(i + 96) & 8) != 0 )
    {
      if ( (unsigned int)OpenDevice((struct DEVICEINFO *)i, v1, v2, v3) )
      {
        if ( !gbDITUseIocp
          || (v5 = *(void **)(i + 224),
              FileInformation[0] = ghDITIocp,
              FileInformation[1] = i,
              ZwSetInformationFile(v5, (PIO_STATUS_BLOCK)(i + 256), FileInformation, 0x10u, FileCompletionInformation) >= 0) )
        {
          *(_DWORD *)(i + 96) |= 4u;
        }
      }
      *(_DWORD *)(i + 96) &= ~8u;
    }
  }
  KeSetEvent(gpkeDITResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v7, v6);
  UserSessionSwitchLeaveCrit(v9, v8);
  return 0LL;
}
