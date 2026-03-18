/*
 * XREFs of VidSchSwitchFromDevice @ 0x1C00797A0
 * Callers:
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0050824 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchWaitForEvents @ 0x1C001D6E0 (VidSchWaitForEvents.c)
 */

__int64 __fastcall VidSchSwitchFromDevice(__int64 a1)
{
  struct _VIDSCH_GLOBAL *v2; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v5[7]; // [rsp+48h] [rbp-38h] BYREF
  struct _KEVENT *p_Event; // [rsp+90h] [rbp+10h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  memset(v5, 0, sizeof(v5));
  LODWORD(v5[0]) = 0;
  v5[3] = VidSchiSwitchNodeFromDevice;
  LODWORD(v5[6]) = 4;
  v5[5] = &Event;
  v5[4] = a1;
  VidSchSubmitDeviceCommand(a1, (__int64)v5);
  v2 = *(struct _VIDSCH_GLOBAL **)(a1 + 32);
  p_Event = &Event;
  return VidSchWaitForEvents(v2, 1u, (PVOID *)&p_Event, 0LL, 0);
}
