/*
 * XREFs of AttachInputDevices @ 0x1C015434C
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AttachInputDevices(int a1)
{
  int v1; // ebx
  unsigned int v2; // edi
  unsigned int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  BOOL v13; // edi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char Timeouta; // [rsp+20h] [rbp-38h]
  int Timeout; // [rsp+20h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  char v20; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 1;
  if ( a1 )
  {
    v3 = 0;
    v4 = 0LL;
    do
    {
      v5 = *(_QWORD *)(v4 + aDeviceTemplate[0] + 104);
      if ( v5 )
      {
        if ( *(struct _KTHREAD **)(v5 + 40) == KeGetCurrentThread() )
        {
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          RIMDirectStartDeviceClassNotifications(*(_QWORD *)(v4 + aDeviceTemplate[0] + 96), gpWin32kDriverObject);
        }
        else
        {
          KeSetEvent(*(PRKEVENT *)(v4 + aDeviceTemplate[0] + 408), 1, 0);
          UserSessionSwitchLeaveCrit(v7, v6);
          KeWaitForSingleObject(*(PVOID *)(v4 + aDeviceTemplate[0] + 432), WrUserRequest, 0, 0, 0LL);
          EnterCrit(0LL, 1LL);
        }
      }
      ++v3;
      v4 += 560LL;
    }
    while ( v3 <= 2 );
  }
  else
  {
    gbPendRecreateTouchInjectionDevices = 1;
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) )
    {
      Timeouta = 0;
      v9 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
             aDeviceTemplate[12],
             &DestinationString,
             0LL,
             ghRemoteMouseChannel,
             Timeouta,
             &v20);
      v10 = aDeviceTemplate[0];
    }
    else
    {
      LODWORD(aDeviceTemplate[36]) = 0;
      KeSetEvent((PRKEVENT)aDeviceTemplate[34], 1, 0);
      UserSessionSwitchLeaveCrit(v12, v11);
      KeWaitForSingleObject((PVOID)aDeviceTemplate[35], WrUserRequest, 0, 0, 0LL);
      EnterCrit(0LL, 1LL);
      v10 = aDeviceTemplate[0];
      v9 = aDeviceTemplate[36];
    }
    v13 = v9 >= 0;
    if ( gptiCurrent == gptiRit )
    {
      LOBYTE(Timeout) = 0;
      v14 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
              *(_QWORD *)(v10 + 656),
              &DestinationString,
              1LL,
              ghRemoteKeyboardChannel,
              Timeout,
              &v20);
    }
    else
    {
      *(_DWORD *)(v10 + 848) = 0;
      KeSetEvent((PRKEVENT)aDeviceTemplate[104], 1, 0);
      UserSessionSwitchLeaveCrit(v16, v15);
      KeWaitForSingleObject((PVOID)aDeviceTemplate[105], WrUserRequest, 0, 0, 0LL);
      EnterCrit(0LL, 1LL);
      v14 = aDeviceTemplate[106];
    }
    LOBYTE(v1) = v14 >= 0;
    return v1 & (unsigned int)v13;
  }
  return v2;
}
