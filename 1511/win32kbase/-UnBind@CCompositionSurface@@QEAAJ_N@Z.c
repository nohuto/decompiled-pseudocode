/*
 * XREFs of ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C003A69C
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C0075E50 (NtUnBindCompositionSurface.c)
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C003A134 (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C003A388 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 */

__int64 __fastcall CCompositionSurface::UnBind(CCompositionSurface *this, char a2)
{
  struct CCompositionBuffer *ActiveBuffer; // rax

  if ( a2 )
  {
    ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
    if ( ActiveBuffer )
      *((_BYTE *)ActiveBuffer + 40) = 0;
  }
  else
  {
    CCompositionSurface::ReleaseAllBuffers(this);
  }
  return 0LL;
}
