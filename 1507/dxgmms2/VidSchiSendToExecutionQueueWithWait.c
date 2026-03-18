/*
 * XREFs of VidSchiSendToExecutionQueueWithWait @ 0x1C002E5A8
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C002E320 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0076E90 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0077200 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00772CC (VidSchiSubmitRenderCommand.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C007A380 (VidSchiSwitchNodeFromContext.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VidSchiSendToExecutionQueueWithWait(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v7; // rdi
  struct _VIDSCH_GLOBAL *v8; // r15
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // r9
  _DWORD v12[40]; // [rsp+40h] [rbp-B8h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 96LL);
  v8 = *(struct _VIDSCH_GLOBAL **)(v7 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 8;
  *(_QWORD *)(v7 + 208) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)(v7 + 168));
  while ( *(_DWORD *)(a1 + 88) != 3 )
  {
    if ( *(_DWORD *)(v7 + 2848) < 0xEu )
      break;
    memset(v12, 0, sizeof(v12));
    v9 = *(unsigned __int16 *)(v7 + 4);
    v12[4] = 0;
    v12[8] |= 0x22u;
    v12[5] = 1;
    v12[12] = v9;
    VidSchiProfilePerformanceTick(16LL, (__int64)v8, 0LL, v10, 0LL, 0LL, 0LL, 0LL);
    VidSchWaitForCompletionEvent(v8);
    VidSchiProfilePerformanceTick(17LL, (__int64)v8, 0LL, v11, 0LL, 0LL, 0LL, 0LL);
    *(_QWORD *)(v7 + 208) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(v7 + 168));
  }
  VidSchiSendToExecutionQueue(a1, a3, a4);
}
