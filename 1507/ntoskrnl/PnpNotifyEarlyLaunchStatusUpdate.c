/*
 * XREFs of PnpNotifyEarlyLaunchStatusUpdate @ 0x1407B7E7C
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x1407B7DC8 (PipInitializeCoreDriversAndElam.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     ExNotifyWithProcessing @ 0x1400EDED8 (ExNotifyWithProcessing.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PnpNotifyEarlyLaunchStatusUpdate(int a1)
{
  PCALLBACK_OBJECT v1; // rdi
  REGHANDLE v3; // rbx
  REGHANDLE v4; // rbx
  int v5; // [rsp+30h] [rbp-40h] BYREF
  int v6; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v7[4]; // [rsp+3Ch] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-30h] BYREF
  __int64 v9; // [rsp+50h] [rbp-20h]
  int *v10; // [rsp+58h] [rbp-18h]

  v1 = PnpBootDriverCallbackObject;
  if ( PnpBootDriverCallbackObject )
  {
    v3 = PnpEtwHandle;
    v5 = a1;
    if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_EarlyLaunch_StatusNotification_Start) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 4;
      EtwWrite(v3, &KMPnPEvt_EarlyLaunch_StatusNotification_Start, 0LL, 1u, &UserData);
      v1 = PnpBootDriverCallbackObject;
    }
    *(_QWORD *)&UserData.Size = 0LL;
    v9 = 0LL;
    UserData.Ptr = (ULONGLONG)PnpEarlyLaunchStatusNotificationPreProcess;
    v6 = a1;
    v10 = &v6;
    ExNotifyWithProcessing((__int64)v1, 0LL, (__int64)v7, (__int64)&UserData);
    v4 = PnpEtwHandle;
    v5 = a1;
    if ( PnpEtwHandle )
    {
      if ( EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_EarlyLaunch_StatusNotification_Stop) )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v5;
        UserData.Size = 4;
        EtwWrite(v4, &KMPnPEvt_EarlyLaunch_StatusNotification_Stop, 0LL, 1u, &UserData);
      }
    }
  }
}
