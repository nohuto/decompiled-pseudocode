/*
 * XREFs of PiQueueDeviceRequest @ 0x14064B3D8
 * Callers:
 *     PiCMDeleteDevice @ 0x140646C20 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140647448 (PiCMDeviceAction.c)
 *     PiControlStartDevice @ 0x14064ACD8 (PiControlStartDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 */

__int64 __fastcall PiQueueDeviceRequest(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  _QWORD *v8; // rax
  void *v9; // rdi
  int v10; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v5 = (__int64)a5;
  if ( a5 )
    *a5 = 0;
  v8 = PnpDeviceObjectFromDeviceInstance(a1);
  v9 = v8;
  if ( v8 )
  {
    if ( *(_QWORD *)(v8[39] + 40LL) )
    {
      if ( a4 )
        KeInitializeEvent(&Event, NotificationEvent, 0);
      else
        v5 = 0LL;
      v10 = PnpRequestDeviceAction(v9, a2, 0, 0LL, (unsigned __int64)&Event & -(__int64)(a4 != 0), v5);
      if ( v10 >= 0 && a4 )
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
