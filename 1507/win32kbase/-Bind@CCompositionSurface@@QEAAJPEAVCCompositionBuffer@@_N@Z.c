/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z @ 0x1C0049114
 * Callers:
 *     NtBindCompositionSurface @ 0x1C000FEB0 (NtBindCompositionSurface.c)
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C0048C0C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048DA8 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 */

__int64 __fastcall CCompositionSurface::Bind(CCompositionSurface *this, struct CCompositionBuffer *a2)
{
  char v4; // r8
  unsigned int v5; // r9d
  __int64 v6; // rdx
  char *v7; // rcx

  if ( !CCompositionSurface::GetActiveBuffer(this) )
  {
    if ( !v4 )
      CCompositionSurface::ReleaseAllBuffers(this);
    v6 = *((_QWORD *)this + 8);
    v7 = (char *)a2 + 16;
    *((_QWORD *)a2 + 2) = v6;
    *((_QWORD *)a2 + 3) = (char *)this + 64;
    if ( *(CCompositionSurface **)(v6 + 8) != (CCompositionSurface *)((char *)this + 64) )
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v7;
    *((_QWORD *)this + 8) = v7;
    ++*((_QWORD *)this + 6);
    ++*((_DWORD *)this + 20);
    v5 = 0;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 6);
    *((_BYTE *)a2 + 32) = 1;
  }
  return v5;
}
