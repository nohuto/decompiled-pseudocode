/*
 * XREFs of VidSchiSubmitPreemptionCommand @ 0x1C0040C30
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C00098B0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiResetEngine @ 0x1C0024B48 (VidSchiResetEngine.c)
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0068BF8 (VidSchiPreemptEngineNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0040D44 (VidSchiAllocateDmaPacket.c)
 */

__int64 __fastcall VidSchiSubmitPreemptionCommand(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 DmaPacket; // r14
  __int64 v6; // rax
  void (__fastcall *v8)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v1 + 104);
  DmaPacket = VidSchiAllocateDmaPacket();
  *(_DWORD *)DmaPacket = 1953189956;
  *(_QWORD *)(DmaPacket + 48) = v1;
  v6 = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(DmaPacket + 92) = 0;
  *(_QWORD *)(DmaPacket + 80) = v6;
  *(_DWORD *)(DmaPacket + 72) = 7;
  *(_DWORD *)(DmaPacket + 88) = 3;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 940));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2756));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 1132));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 784));
  if ( *(_DWORD *)(a1 + 2788) != -1 )
  {
    v8 = *(void (__fastcall **)(_QWORD))(v3 + 2832);
    if ( v8 )
      v8(*(_QWORD *)(v3 + 2896));
  }
  *(_DWORD *)(DmaPacket + 92) |= 0x400u;
  return VidSchiSendToExecutionQueueWithWait(DmaPacket, 0LL);
}
