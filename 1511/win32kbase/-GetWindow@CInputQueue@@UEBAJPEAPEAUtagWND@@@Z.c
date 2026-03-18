/*
 * XREFs of ?GetWindow@CInputQueue@@UEBAJPEAPEAUtagWND@@@Z @ 0x1C008D590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputQueue::GetWindow(CInputQueue *this, struct tagWND **a2)
{
  *a2 = (struct tagWND *)*((_QWORD *)this + 3);
  return 0LL;
}
