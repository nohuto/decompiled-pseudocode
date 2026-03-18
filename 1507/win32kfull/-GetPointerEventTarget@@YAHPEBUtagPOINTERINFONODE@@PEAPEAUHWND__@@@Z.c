/*
 * XREFs of ?GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z @ 0x1C01F8198
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F9CDC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01FC440 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 */

__int64 __fastcall GetPointerEventTarget(PointerList **a1, HWND *a2)
{
  __int64 ThreadWin32Thread; // rax
  int *v6; // [rsp+20h] [rbp-8h]
  HWND *v7; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  PointerList::GetPointerCapture(a1[2], (*(_DWORD *)(ThreadWin32Thread + 1080) >> 13) & 1, (int)&v7, 0LL, v6);
  if ( v7 )
    *a2 = *v7;
  else
    *a2 = (HWND)a1[10];
  return 1LL;
}
