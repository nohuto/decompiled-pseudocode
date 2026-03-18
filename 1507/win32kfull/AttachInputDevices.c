/*
 * XREFs of AttachInputDevices @ 0x1C012EE0C
 * Callers:
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 * Callees:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C015A56C (xxxRegisterForDeviceClassNotifications.c)
 *     CreateDeviceInfo @ 0x1C01DE948 (CreateDeviceInfo.c)
 */

__int64 __fastcall AttachInputDevices(int a1)
{
  int v1; // ebx
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  bool v5; // di
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int Timeout; // [rsp+20h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  char v21; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 1;
  if ( a1 )
  {
    if ( LODWORD(aDeviceTemplate[12]) )
    {
      v13 = 0LL;
      v14 = 3LL;
      do
      {
        if ( *(_DWORD *)(v13 + aDeviceTemplate[0] + 96) )
        {
          v15 = *(_QWORD *)(v13 + aDeviceTemplate[0] + 112);
          if ( v15 )
          {
            if ( *(struct _KTHREAD **)(v15 + 40) == KeGetCurrentThread() )
            {
              RIMDirectStartDeviceClassNotifications(*(_QWORD *)(v13 + aDeviceTemplate[0] + 104), gpWin32kDriverObject);
            }
            else
            {
              KeSetEvent(*(PRKEVENT *)(v13 + aDeviceTemplate[0] + 416), 1, 0);
              UserSessionSwitchLeaveCrit(v17, v16);
              KeWaitForSingleObject(*(PVOID *)(v13 + aDeviceTemplate[0] + 440), WrUserRequest, 0, 0, 0LL);
              EnterCrit(1LL);
            }
          }
        }
        v13 += 568LL;
        --v14;
      }
      while ( v14 );
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
               &v21);
        v4 = aDeviceTemplate[0];
      }
      else
      {
        LODWORD(aDeviceTemplate[37]) = 0;
        KeSetEvent((PRKEVENT)aDeviceTemplate[35], 1, 0);
        UserSessionSwitchLeaveCrit(v8, v7);
        KeWaitForSingleObject((PVOID)aDeviceTemplate[36], WrUserRequest, 0, 0, 0LL);
        EnterCrit(1LL);
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
    v9 = v5;
    if ( *(_DWORD *)(v4 + 664) )
    {
      if ( gptiCurrent == gptiRit )
      {
        LOBYTE(Timeout) = 0;
        v10 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                *(_QWORD *)(v4 + 672),
                &DestinationString,
                1LL,
                ghRemoteKeyboardChannel,
                Timeout,
                &v21);
      }
      else
      {
        *(_DWORD *)(v4 + 864) = 0;
        KeSetEvent((PRKEVENT)aDeviceTemplate[106], 1, 0);
        UserSessionSwitchLeaveCrit(v12, v11);
        KeWaitForSingleObject((PVOID)aDeviceTemplate[107], WrUserRequest, 0, 0, 0LL);
        EnterCrit(1LL);
        v10 = aDeviceTemplate[108];
      }
      LOBYTE(v1) = v10 >= 0;
    }
    else
    {
      LOBYTE(v1) = CreateDeviceInfo(1LL, &DestinationString, 0LL) != 0;
    }
    return v1 & (unsigned int)v9;
  }
  return v2;
}
