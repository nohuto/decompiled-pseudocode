/*
 * XREFs of ??1CEtwTraceDispatchMessage@@QEAA@XZ @ 0x1C0055244
 * Callers:
 *     xxxDispatchMessage @ 0x1C0054E2C (xxxDispatchMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 */

void __fastcall CEtwTraceDispatchMessage::~CEtwTraceDispatchMessage(CEtwTraceDispatchMessage *this)
{
  __int64 v2; // rcx

  LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1084);
  EtwTraceEndDispatchMessage(v2, *(unsigned int *)this);
}
