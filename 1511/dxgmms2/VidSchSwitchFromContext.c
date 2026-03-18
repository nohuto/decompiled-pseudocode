/*
 * XREFs of VidSchSwitchFromContext @ 0x1C005ED20
 * Callers:
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0049C34 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchWaitForEvents @ 0x1C0010748 (VidSchWaitForEvents.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

void __fastcall VidSchSwitchFromContext(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KEVENT Event; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[7]; // [rsp+48h] [rbp-38h] BYREF
  struct _KEVENT *p_Event; // [rsp+A0h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 96);
  if ( a1 != *(_QWORD *)(v1 + 32) )
  {
    v3 = *(_QWORD *)(a1 + 104);
    if ( a1 != *(_QWORD *)(v3 + 64) )
    {
      v4 = *(_QWORD *)(v3 + 32);
      if ( (*(_BYTE *)(v4 + 2468) & 1) == 0 && !VidSchIsTDRPending(*(_QWORD *)(v3 + 32)) && a1 == *(_QWORD *)(v1 + 184) )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        memset(v8, 0, sizeof(v8));
        LODWORD(v8[0]) = 0;
        v8[3] = VidSchiSwitchNodeFromContext;
        LODWORD(v8[6]) = 1;
        v8[5] = &Event;
        v8[4] = a1;
        VidSchSubmitDeviceCommand(v3, (__int64)v8, v5, v6);
        p_Event = &Event;
        VidSchWaitForEvents(v4, 1u, (PVOID *)&p_Event, 0LL, 0);
      }
    }
  }
}
