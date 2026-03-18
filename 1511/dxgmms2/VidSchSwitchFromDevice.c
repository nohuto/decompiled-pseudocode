/*
 * XREFs of VidSchSwitchFromDevice @ 0x1C008C020
 * Callers:
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0049C34 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchWaitForEvents @ 0x1C0010748 (VidSchWaitForEvents.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

void __fastcall VidSchSwitchFromDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v7[7]; // [rsp+48h] [rbp-38h] BYREF
  struct _KEVENT *p_Event; // [rsp+90h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v2 + 2468) & 1) == 0 && !VidSchIsTDRPending(v2) )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v7, 0, sizeof(v7));
    LODWORD(v7[0]) = 0;
    v7[3] = VidSchiSwitchNodeFromDevice;
    LODWORD(v7[6]) = 4;
    v7[5] = &Event;
    v7[4] = a1;
    VidSchSubmitDeviceCommand(a1, (__int64)v7, v3, v4);
    v5 = *(_QWORD *)(a1 + 32);
    p_Event = &Event;
    VidSchWaitForEvents(v5, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
}
