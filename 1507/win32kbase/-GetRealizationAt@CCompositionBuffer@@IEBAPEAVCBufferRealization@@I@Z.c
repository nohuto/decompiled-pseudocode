/*
 * XREFs of ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x1C004A138
 * Callers:
 *     ?GetCurrentRealization@CFlipExBuffer@@UEBAJPEAPEAVCBufferRealization@@@Z @ 0x1C0049530 (-GetCurrentRealization@CFlipExBuffer@@UEBAJPEAPEAVCBufferRealization@@@Z.c)
 * Callees:
 *     <none>
 */

struct CBufferRealization *__fastcall CCompositionBuffer::GetRealizationAt(CCompositionBuffer *this, int a2)
{
  __int64 v2; // r8
  _QWORD **v3; // rcx
  _QWORD *v4; // rax

  v2 = 0LL;
  v3 = (_QWORD **)((char *)this + 264);
  v4 = *v3;
  while ( v4 != v3 )
  {
    if ( !a2 )
      return (struct CBufferRealization *)(v4 - 1);
    v4 = (_QWORD *)*v4;
    --a2;
  }
  return (struct CBufferRealization *)v2;
}
