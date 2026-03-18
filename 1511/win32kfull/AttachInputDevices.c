/*
 * XREFs of AttachInputDevices @ 0x1C014E8A0
 * Callers:
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 * Callees:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C010AA30 (xxxRegisterForDeviceClassNotifications.c)
 *     CreateDeviceInfo @ 0x1C01DEF4C (CreateDeviceInfo.c)
 */

__int64 __fastcall AttachInputDevices(int a1)
{
  int v1; // ebx
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  BOOL v5; // edi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int Timeout; // [rsp+20h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  char v20; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 1;
  if ( a1 )
  {
    if ( LODWORD(aDeviceTemplate[12]) )
    {
      v12 = 0LL;
      v13 = 3LL;
      do
      {
        if ( *(_DWORD *)(v12 + aDeviceTemplate[0] + 96) )
        {
          v14 = *(_QWORD *)(v12 + aDeviceTemplate[0] + 112);
          if ( v14 )
          {
            if ( *(struct _KTHREAD **)(v14 + 40) == KeGetCurrentThread() )
            {
              RIMDirectStartDeviceClassNotifications(*(_QWORD *)(v12 + aDeviceTemplate[0] + 104), gpWin32kDriverObject);
            }
            else
            {
              KeSetEvent(*(PRKEVENT *)(v12 + aDeviceTemplate[0] + 416), 1, 0);
              UserSessionSwitchLeaveCrit(v16, v15);
              KeWaitForSingleObject(*(PVOID *)(v12 + aDeviceTemplate[0] + 440), WrUserRequest, 0, 0, 0LL);
              EnterCrit(0LL, 1LL);
            }
          }
        }
        v12 += 568LL;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      xxxRegisterForDeviceClassNotifications();
    }
  }
  else
  {
    gbPendRecreateTouchInjectionDevices = 1;
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( LODWORD(aDeviceTemplate[12]) )
    {
      if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) )
      {
        v6 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
               aDeviceTemplate[13],
               &DestinationString,
               0LL,
               ghRemoteMouseChannel,
               0,
               &v20);
        v4 = aDeviceTemplate[0];
      }
      else
      {
        LODWORD(aDeviceTemplate[37]) = 0;
        KeSetEvent((PRKEVENT)aDeviceTemplate[35], 1, 0);
        UserSessionSwitchLeaveCrit(v8, v7);
        KeWaitForSingleObject((PVOID)aDeviceTemplate[36], WrUserRequest, 0, 0, 0LL);
        EnterCrit(0LL, 1LL);
        v4 = aDeviceTemplate[0];
        v6 = aDeviceTemplate[37];
      }
      v5 = v6 >= 0;
    }
    else
    {
      v3 = CreateDeviceInfo(0LL, &DestinationString, 0LL);
      v4 = aDeviceTemplate[0];
      v5 = v3 != 0;
    }
    if ( *(_DWORD *)(v4 + 664) )
    {
      if ( gptiCurrent == gptiRit )
      {
        LOBYTE(Timeout) = 0;
        v9 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
               *(_QWORD *)(v4 + 672),
               &DestinationString,
               1LL,
               ghRemoteKeyboardChannel,
               Timeout,
               &v20);
      }
      else
      {
        *(_DWORD *)(v4 + 864) = 0;
        KeSetEvent((PRKEVENT)aDeviceTemplate[106], 1, 0);
        UserSessionSwitchLeaveCrit(v11, v10);
        KeWaitForSingleObject((PVOID)aDeviceTemplate[107], WrUserRequest, 0, 0, 0LL);
        EnterCrit(0LL, 1LL);
        v9 = aDeviceTemplate[108];
      }
      LOBYTE(v1) = v9 >= 0;
    }
    else
    {
      LOBYTE(v1) = CreateDeviceInfo(1LL, &DestinationString, 0LL) != 0;
    }
    return v1 & (unsigned int)v5;
  }
  return v2;
}
