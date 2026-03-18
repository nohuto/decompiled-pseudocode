/*
 * XREFs of VidSchiAllocateDmaPacket @ 0x1C002E664
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C002E320 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0076E90 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C0077200 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00772CC (VidSchiSubmitRenderCommand.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C007A380 (VidSchiSwitchNodeFromContext.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0003310 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

__int64 *__fastcall VidSchiAllocateDmaPacket(__int64 a1)
{
  __int64 i; // rbx
  __int64 *v3; // rax
  __int64 *v4; // rbx
  int v6; // eax
  _DWORD v7[40]; // [rsp+20h] [rbp-B8h] BYREF

  for ( i = *(_QWORD *)(a1 + 24); ; VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)i) )
  {
    *(_QWORD *)(i + 1616) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(i + 1576));
    v3 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1880), (__int64 **)(a1 + 3088), 0LL);
    if ( v3 )
      break;
    memset(v7, 0, sizeof(v7));
    v6 = *(unsigned __int16 *)(a1 + 4);
    v7[4] = 0;
    v7[8] |= 0x22u;
    v7[5] = 1;
    v7[12] = v6;
  }
  v4 = v3 - 2;
  memset(v3 - 2, 0, 0xE0uLL);
  return v4;
}
