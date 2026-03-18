/*
 * XREFs of ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C00DA548
 * Callers:
 *     xxxTranslateMessage @ 0x1C00DA330 (xxxTranslateMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

void __fastcall CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage(CEtwTraceTranslateMessage *this)
{
  __int64 v2; // rcx

  LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1092);
  EtwTraceEndTranslateMessage(v2, *(unsigned int *)this);
}
