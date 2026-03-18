/*
 * XREFs of VidSchSwitchFromDevice @ 0x1C0040FC0
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C000F0F0 (VidSchSuspendResumeDevice.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052128 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C00013B0 (VidSchSubmitDeviceCommand.c)
 *     VidSchWaitForEvents @ 0x1C0001E3C (VidSchWaitForEvents.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

void __fastcall VidSchSwitchFromDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v5[16]; // [rsp+50h] [rbp-29h] BYREF
  struct _KEVENT *p_Event; // [rsp+E0h] [rbp+67h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v2 + 2828) & 1) == 0 && !VidSchIsTDRPending(v2) )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v5, 0, sizeof(v5));
    LODWORD(v5[0]) = 0;
    v5[3] = VidSchiSwitchNodeFromDevice;
    LODWORD(v5[5]) = 4;
    v5[4] = &Event;
    v5[6] = a1;
    VidSchSubmitDeviceCommand(a1, (__int64)v5);
    v3 = *(_QWORD *)(a1 + 32);
    p_Event = &Event;
    VidSchWaitForEvents(v3, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
}
