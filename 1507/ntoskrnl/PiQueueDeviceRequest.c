/*
 * XREFs of PiQueueDeviceRequest @ 0x14058AF74
 * Callers:
 *     PiCMDeviceAction @ 0x14058ACF4 (PiCMDeviceAction.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PiControlStartDevice @ 0x140694E7C (PiControlStartDevice.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 */

__int64 __fastcall PiQueueDeviceRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // rbx
  int v6; // esi
  int v7; // ebp
  _QWORD *v8; // rax
  void *v9; // rdi
  int v10; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v5 = (__int64)a5;
  v6 = a4;
  v7 = a2;
  if ( a5 )
    *a5 = 0;
  v8 = PnpDeviceObjectFromDeviceInstance(a1, a2, a3, a4);
  v9 = v8;
  if ( v8 )
  {
    if ( *(_QWORD *)(v8[39] + 40LL) )
    {
      if ( v6 )
        KeInitializeEvent(&Event, NotificationEvent, 0);
      else
        v5 = 0LL;
      v10 = PnpRequestDeviceAction(v9, v7, 0, 0LL, (unsigned __int64)&Event & -(__int64)(v6 != 0), v5);
      if ( v10 >= 0 && v6 )
        v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else
    {
      v10 = -1073741810;
    }
    ObfDereferenceObject(v9);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v10;
}
