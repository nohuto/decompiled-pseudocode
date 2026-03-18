/*
 * XREFs of VidSchiAllocateDmaPacket @ 0x1C005F4A8
 * Callers:
 *     VidSchiSwitchNodeFromContext @ 0x1C005F2A0 (VidSchiSwitchNodeFromContext.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1C005F394 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C008ABB8 (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007FC0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 */

__int64 *__fastcall VidSchiAllocateDmaPacket(__int64 a1)
{
  __int64 i; // rbx
  __int64 *v3; // rax
  __int64 *v4; // rbx
  int v6; // eax
  _DWORD v7[40]; // [rsp+20h] [rbp-B8h] BYREF

  for ( i = *(_QWORD *)(a1 + 24); ; VidSchWaitForCompletionEvent(i, (__int64)v7, 20LL) )
  {
    *(_QWORD *)(i + 1568) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(i + 1528));
    v3 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1832), (__int64 **)(a1 + 2960), 0LL);
    if ( v3 )
      break;
    memset(v7, 0, sizeof(v7));
    v6 = *(unsigned __int16 *)(a1 + 4);
    v7[4] = 0;
    v7[8] |= 0x11u;
    v7[12] = v6;
    v7[5] = 1;
  }
  v4 = v3 - 2;
  memset(v3 - 2, 0, 0xE0uLL);
  return v4;
}
