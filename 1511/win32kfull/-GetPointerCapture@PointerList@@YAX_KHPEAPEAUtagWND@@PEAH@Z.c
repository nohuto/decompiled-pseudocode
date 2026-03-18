/*
 * XREFs of ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01FC8E0
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01E179C (_DelegateCapturePointers.c)
 *     ?GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z @ 0x1C01F8648 (-GetPointerEventTarget@@YAHPEBUtagPOINTERINFONODE@@PEAPEAUHWND__@@@Z.c)
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01F8AFC (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F99C8 (-RecheckPointerCapture@@YAH_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01FAC0C (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C022FAA0 (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 * Callees:
 *     ?GetPointerCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREINFO@@PEAH@Z @ 0x1C01FC91C (-GetPointerCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREINFO@@PEAH@Z.c)
 */

void __fastcall PointerList::GetPointerCapture(PointerList *this, int a2, _QWORD *a3, struct tagWND **a4)
{
  __int64 v4; // rax
  struct tagPOINTERCAPTUREINFO *v5; // rcx

  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    v5 = (struct tagPOINTERCAPTUREINFO *)(v4 + 56);
    if ( !a2 )
      v5 = (struct tagPOINTERCAPTUREINFO *)(v4 + 32);
    *a3 = GetPointerCaptureInt(v5, (int *)a4);
  }
  else
  {
    *a3 = 0LL;
    if ( a4 )
      *(_DWORD *)a4 = 0;
  }
}
