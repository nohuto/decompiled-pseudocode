/*
 * XREFs of ?GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z @ 0x1C01EF834
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1384 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F3B80 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 */

__int64 __fastcall GetPointerEventTarget(PointerList **a1, HWND *a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  int *v8; // [rsp+20h] [rbp-8h]
  HWND *v9; // [rsp+30h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  PointerList::GetPointerCapture(a1[2], (*(_DWORD *)(ThreadWin32Thread + 1096) >> 13) & 1, (int)&v9, 0LL, v8);
  if ( v9 )
    *a2 = *v9;
  else
    *a2 = (HWND)a1[10];
  return 1LL;
}
