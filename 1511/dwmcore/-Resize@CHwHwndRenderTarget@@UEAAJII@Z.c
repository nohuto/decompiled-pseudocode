/*
 * XREFs of ?Resize@CHwHwndRenderTarget@@UEAAJII@Z @ 0x18014FD40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z @ 0x18014FDCC (-UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z.c)
 */

__int64 __fastcall CHwHwndRenderTarget::Resize(CHwHwndRenderTarget *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this - 2);
  v10 = v3;
  ++*(_DWORD *)(v3 + 504);
  *(_DWORD *)(v3 + 508) = GetCurrentThreadId();
  updated = CHwHwndRenderTarget::UpdateFlippingChain((CHwHwndRenderTarget *)((char *)this - 176), a2, a3);
  v8 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x95u);
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v10);
  return v8;
}
