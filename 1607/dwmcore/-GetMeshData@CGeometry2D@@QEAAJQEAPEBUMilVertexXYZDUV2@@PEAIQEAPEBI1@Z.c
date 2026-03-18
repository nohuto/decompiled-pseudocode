/*
 * XREFs of ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x18010DE20
 * Callers:
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800BAC7C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x180155BC0 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2D::GetMeshData(
        CGeometry2D *this,
        const struct MilVertexXYZDUV2 **const a2,
        unsigned int *a3,
        const unsigned int **const a4,
        unsigned int *a5)
{
  int v5; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned int v12; // ebx
  int v13; // r9d
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // r8
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-28h]

  v5 = 0;
  if ( *((_QWORD *)this + 14) )
  {
LABEL_17:
    *a2 = (const struct MilVertexXYZDUV2 *)*((_QWORD *)this + 14);
    *a3 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 112LL))(this);
    *a4 = (const unsigned int *)*((_QWORD *)this + 15);
    *a5 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 120LL))(this);
    goto LABEL_18;
  }
  v10 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 112LL))(this);
  v11 = 32LL * v10;
  v12 = v10;
  if ( v11 > 0xFFFFFFFF )
  {
    v13 = -2147024362;
    v22 = 47;
LABEL_7:
    v5 = v13;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v22);
LABEL_19:
    CGeometry2D::FreeCaches(this);
    return (unsigned int)v5;
  }
  v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          (unsigned int)v11);
  *((_QWORD *)this + 14) = v14;
  if ( !v14 )
  {
    v22 = 49;
LABEL_6:
    v13 = -2147024882;
    goto LABEL_7;
  }
  v15 = (*(__int64 (__fastcall **)(CGeometry2D *, __int64, _QWORD))(*(_QWORD *)this + 152LL))(this, v14, v12);
  v5 = v15;
  if ( v15 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 120LL))(this);
    v17 = 4LL * v16;
    v18 = v16;
    if ( v17 > 0xFFFFFFFF )
    {
      v13 = -2147024362;
      v22 = 56;
      goto LABEL_7;
    }
    v19 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            (unsigned int)v17);
    *((_QWORD *)this + 15) = v19;
    if ( !v19 )
    {
      v22 = 58;
      goto LABEL_6;
    }
    v20 = (*(__int64 (__fastcall **)(CGeometry2D *, _QWORD, __int64, _QWORD))(*(_QWORD *)this + 144LL))(
            this,
            0LL,
            v19,
            v18);
    v5 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x3Bu);
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x32u);
LABEL_18:
  if ( v5 < 0 )
    goto LABEL_19;
  return (unsigned int)v5;
}
