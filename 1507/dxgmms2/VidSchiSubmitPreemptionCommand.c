/*
 * XREFs of VidSchiSubmitPreemptionCommand @ 0x1C0077200
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiResetEngine @ 0x1C0019770 (VidSchiResetEngine.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0076A74 (VidSchiPreemptEngineNodes.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     VidSchiAllocateDmaPacket @ 0x1C002E664 (VidSchiAllocateDmaPacket.c)
 */

void __fastcall VidSchiSubmitPreemptionCommand(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 *DmaPacket; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  void (__fastcall *v8)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v1 + 104);
  DmaPacket = VidSchiAllocateDmaPacket(a1);
  *(_DWORD *)DmaPacket = 1953189956;
  DmaPacket[6] = v1;
  v6 = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)DmaPacket + 23) = 0;
  DmaPacket[10] = v6;
  *((_DWORD *)DmaPacket + 18) = 7;
  *((_DWORD *)DmaPacket + 22) = 3;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 896));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2844));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 1008));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 760));
  v7 = *(unsigned int *)(a1 + 3080);
  if ( (_DWORD)v7 != -1 )
  {
    v8 = *(void (__fastcall **)(_QWORD))(v3 + 2512);
    if ( v8 )
      v8(*(_QWORD *)(v3 + 2560));
  }
  *((_DWORD *)DmaPacket + 23) |= 0x400u;
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, v7, 0, 0);
}
