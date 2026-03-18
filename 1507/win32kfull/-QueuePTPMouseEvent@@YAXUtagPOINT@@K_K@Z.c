/*
 * XREFs of ?QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z @ 0x1C01F1EA0
 * Callers:
 *     ?xxxSendMouseDown@@YAXI_K0@Z @ 0x1C01F6488 (-xxxSendMouseDown@@YAXI_K0@Z.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAI_K@Z @ 0x1C01F6500 (-xxxSendMouseUpIfPending@@YAXPEAI_K@Z.c)
 *     ?xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z @ 0x1C01F6544 (-xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z.c)
 * Callees:
 *     UserBeep @ 0x1C0229040 (UserBeep.c)
 */

void __fastcall QueuePTPMouseEvent(struct tagPOINT a1, int a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  if ( (unsigned int)gdwPTPMouseEvents < 0x20 )
  {
    v5 = ((_BYTE)gdwPTPQueueHead + 1) & 0x1F;
    ++gdwPTPMouseEvents;
    gdwPTPQueueHead = ((_BYTE)gdwPTPQueueHead + 1) & 0x1F;
    v6 = 3 * v5;
    *((_DWORD *)&gPTPMouseEventQueue + 2 * v6 + 2) = a2;
    *((struct tagPOINT *)&gPTPMouseEventQueue + v6) = a1;
    *((_QWORD *)&gPTPMouseEventQueue + v6 + 2) = a3;
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    KeSetEvent(gpevtPTPOperation, 1, 0);
  }
  else
  {
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    UserBeep(440LL, 125LL);
  }
}
