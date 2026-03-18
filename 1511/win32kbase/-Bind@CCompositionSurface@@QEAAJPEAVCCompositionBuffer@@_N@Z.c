/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z @ 0x1C003A624
 * Callers:
 *     NtBindCompositionSurface @ 0x1C00720B0 (NtBindCompositionSurface.c)
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C003A134 (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C003A388 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 */

__int64 __fastcall CCompositionSurface::Bind(CCompositionSurface *this, struct CCompositionBuffer *a2)
{
  unsigned int v4; // edx
  char v5; // r8
  __int64 v6; // rdx
  char *v7; // rcx
  __int64 v8; // rcx

  if ( !CCompositionSurface::GetActiveBuffer(this) )
  {
    if ( !v5 )
      CCompositionSurface::ReleaseAllBuffers(this);
    v6 = *((_QWORD *)this + 8);
    v7 = (char *)a2 + 24;
    *((_QWORD *)a2 + 3) = v6;
    *((_QWORD *)a2 + 4) = (char *)this + 64;
    if ( *(CCompositionSurface **)(v6 + 8) != (CCompositionSurface *)((char *)this + 64) )
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v7;
    *((_QWORD *)this + 8) = v7;
    ++*((_QWORD *)this + 6);
    ++*((_DWORD *)this + 20);
    v8 = *((_QWORD *)this + 6);
    v4 = 0;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this - 1);
    *((_QWORD *)a2 + 2) = v8;
    *((_BYTE *)a2 + 40) = 1;
  }
  return v4;
}
