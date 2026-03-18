/*
 * XREFs of ?QueuePTPMouseEvent@@YAXUtagPOINT@@K_K@Z @ 0x1C01E836C
 * Callers:
 *     ?xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z @ 0x1C01ED688 (-xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z.c)
 *     ?xxxSendMouseDownAtPoint@@YAXI_K0UtagPOINT@@@Z @ 0x1C01ED9F8 (-xxxSendMouseDownAtPoint@@YAXI_K0UtagPOINT@@@Z.c)
 *     ?xxxSendMouseUpIfPending@@YAXPEAI_K@Z @ 0x1C01EDAAC (-xxxSendMouseUpIfPending@@YAXPEAI_K@Z.c)
 *     ?xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z @ 0x1C01EDB2C (-xxxSendTPAsMouse@@YAXUtagPOINT@@K_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall QueuePTPMouseEvent(struct tagPOINT a1, int a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  if ( (unsigned int)gdwPTPMouseEvents < 0x40 )
  {
    v5 = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
    ++gdwPTPMouseEvents;
    gdwPTPQueueHead = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
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
    ++dword_1C0326D70;
  }
}
