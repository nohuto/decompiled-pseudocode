/*
 * XREFs of ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C00E7C4C
 * Callers:
 *     xxxTranslateMessage @ 0x1C00E7A34 (xxxTranslateMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

void __fastcall CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage(
        CEtwTraceTranslateMessage *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx

  LOBYTE(v5) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 1108);
  EtwTraceEndTranslateMessage(v5, *(unsigned int *)this);
}
