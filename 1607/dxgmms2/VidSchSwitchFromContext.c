/*
 * XREFs of VidSchSwitchFromContext @ 0x1C0040B10
 * Callers:
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052128 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C00013B0 (VidSchSubmitDeviceCommand.c)
 *     VidSchWaitForEvents @ 0x1C0001E3C (VidSchWaitForEvents.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

char __fastcall VidSchSwitchFromContext(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // rsi
  __int64 v4; // rdi
  _KEVENT Event; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v7[16]; // [rsp+58h] [rbp-29h] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
  _KEVENT *p_Event; // [rsp+E8h] [rbp+67h] BYREF

  v1 = &retaddr;
  v2 = *(_QWORD *)(a1 + 104);
  v4 = *(_QWORD *)(v2 + 32);
  if ( v2 != *(_QWORD *)(v4 + 200) && (*(_BYTE *)(v4 + 2828) & 1) == 0 )
  {
    LOBYTE(v1) = VidSchIsTDRPending(*(_QWORD *)(v2 + 32));
    if ( !(_BYTE)v1 )
    {
      v1 = *(_UNKNOWN ***)(a1 + 96);
      if ( (_UNKNOWN *)a1 == v1[28] )
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        memset(v7, 0, sizeof(v7));
        LODWORD(v7[0]) = 0;
        v7[3] = VidSchiSwitchNodeFromContext;
        LODWORD(v7[5]) = 1;
        v7[4] = &Event;
        v7[6] = a1;
        VidSchSubmitDeviceCommand(v2, (__int64)v7);
        p_Event = &Event;
        LOBYTE(v1) = VidSchWaitForEvents(v4, 1u, (PVOID *)&p_Event, 0LL, 0);
      }
    }
  }
  return (char)v1;
}
