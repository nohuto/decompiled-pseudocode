/*
 * XREFs of ?GetCurrentRealization@CFlipExBuffer@@UEBAJPEAPEAVCBufferRealization@@@Z @ 0x1C0049530
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x1C004A138 (-GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z.c)
 */

__int64 __fastcall CFlipExBuffer::GetCurrentRealization(CFlipExBuffer *this, struct CBufferRealization **a2)
{
  struct CBufferRealization *RealizationAt; // rax
  struct CBufferRealization **v3; // r9

  RealizationAt = CCompositionBuffer::GetRealizationAt(this, *((_DWORD *)this + 99));
  *v3 = RealizationAt;
  return 0LL;
}
