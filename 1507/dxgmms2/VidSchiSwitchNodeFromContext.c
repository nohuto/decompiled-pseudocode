/*
 * XREFs of VidSchiSwitchNodeFromContext @ 0x1C007A380
 * Callers:
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C001BD20 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchSwitchFromContext @ 0x1C0079660 (VidSchSwitchFromContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     VidSchWaitForEvents @ 0x1C001D6E0 (VidSchWaitForEvents.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C002E5A8 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C002E664 (VidSchiAllocateDmaPacket.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C002F228 (VidSchGetNewSubmissionFenceId.c)
 */

void __fastcall VidSchiSwitchNodeFromContext(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 *DmaPacket; // rbx
  __int64 v4; // rdx
  void (__fastcall *v5)(_QWORD); // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  struct _KEVENT *p_Event; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 96);
  if ( a1 == *(_QWORD *)(v1 + 160) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL);
    DmaPacket = VidSchiAllocateDmaPacket(*(_QWORD *)(a1 + 96));
    *((_DWORD *)DmaPacket + 22) = 0;
    *(_DWORD *)DmaPacket = 1953189956;
    DmaPacket[10] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)DmaPacket + 18) = 7;
    DmaPacket[6] = *(_QWORD *)(v1 + 32);
    VidSchGetNewSubmissionFenceId(v2, 0LL, *(unsigned __int16 *)(v1 + 4), DmaPacket + 13);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *((_DWORD *)DmaPacket + 23) |= 0x1000u;
    DmaPacket[25] = (__int64)&Event;
    v4 = *(unsigned int *)(v1 + 3080);
    if ( (_DWORD)v4 != -1 )
    {
      v5 = *(void (__fastcall **)(_QWORD))(v2 + 2512);
      if ( v5 )
        v5(*(_QWORD *)(v2 + 2560));
    }
    *((_DWORD *)DmaPacket + 23) |= 0x400u;
    VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, v4, 0, 0);
    p_Event = &Event;
    VidSchWaitForEvents((struct _VIDSCH_GLOBAL *)v2, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
}
