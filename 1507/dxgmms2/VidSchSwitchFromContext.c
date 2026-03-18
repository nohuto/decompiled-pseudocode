/*
 * XREFs of VidSchSwitchFromContext @ 0x1C0079660
 * Callers:
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0050824 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchWaitForEvents @ 0x1C001D6E0 (VidSchWaitForEvents.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C007A380 (VidSchiSwitchNodeFromContext.c)
 */

char __fastcall VidSchSwitchFromContext(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
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
      if ( (*(_BYTE *)(v4 + 2508) & 1) == 0 )
      {
        LOBYTE(v1) = VidSchIsTDRPending(*(_QWORD *)(v3 + 32));
        if ( !(_BYTE)v1 && !*(_BYTE *)(v3 + 172) )
        {
          LODWORD(v1) = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 168), 0, 0);
          if ( !(_DWORD)v1 )
          {
            v1 = *(_QWORD *)(a1 + 96);
            if ( a1 == *(_QWORD *)(v1 + 160) )
            {
              CurrentThread = KeGetCurrentThread();
              if ( CurrentThread == *(struct _KTHREAD **)(v4 + 128) || CurrentThread == *(struct _KTHREAD **)(v4 + 136) )
              {
                LOBYTE(v1) = VidSchiSwitchNodeFromContext(a1);
              }
              else
              {
                KeInitializeEvent(&Event, SynchronizationEvent, 0);
                memset(v8, 0, sizeof(v8));
                LODWORD(v8[6]) = 1;
                v8[3] = VidSchiSwitchNodeFromContext;
                LODWORD(v8[0]) = 0;
                v8[5] = &Event;
                v8[4] = a1;
                VidSchSubmitDeviceCommand(v3, (__int64)v8);
                p_Event = &Event;
                LOBYTE(v1) = VidSchWaitForEvents((struct _VIDSCH_GLOBAL *)v4, 1u, (PVOID *)&p_Event, 0LL, 0);
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
