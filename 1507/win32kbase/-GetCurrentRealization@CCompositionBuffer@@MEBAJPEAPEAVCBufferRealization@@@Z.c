/*
 * XREFs of ?GetCurrentRealization@CCompositionBuffer@@MEBAJPEAPEAVCBufferRealization@@@Z @ 0x1C00DF6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionBuffer::GetCurrentRealization(CCompositionBuffer *this, struct CBufferRealization **a2)
{
  *a2 = 0LL;
  if ( *((_DWORD *)this + 70) )
    *a2 = (struct CBufferRealization *)(*((_QWORD *)this + 33) - 8LL);
  return 3221226021LL;
}
