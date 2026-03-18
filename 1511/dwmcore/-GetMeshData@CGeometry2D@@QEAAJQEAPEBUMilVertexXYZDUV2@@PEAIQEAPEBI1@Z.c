/*
 * XREFs of ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1800F8D80
 * Callers:
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800B6E30 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeCaches@CGeometry2D@@AEAAXXZ @ 0x180133440 (-FreeCaches@CGeometry2D@@AEAAXXZ.c)
 */

__int64 __fastcall CGeometry2D::GetMeshData(
        CGeometry2D *this,
        const struct MilVertexXYZDUV2 **const a2,
        unsigned int *a3,
        const unsigned int **const a4,
        unsigned int *a5)
{
  int v5; // edi
  __int64 v10; // rbp
  int v11; // r9d
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v18; // [rsp+20h] [rbp-38h]

  v5 = 0;
  if ( *((_QWORD *)this + 5) )
    goto LABEL_17;
  v10 = (*(unsigned int (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 104LL))(this);
  if ( (unsigned __int64)(32 * v10) > 0xFFFFFFFF )
  {
    v11 = -2147024362;
    v18 = 47;
LABEL_7:
    v5 = v11;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v18);
LABEL_19:
    CGeometry2D::FreeCaches(this);
    return (unsigned int)v5;
  }
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          (unsigned int)(32 * v10));
  *((_QWORD *)this + 5) = v12;
  if ( !v12 )
  {
    v18 = 49;
LABEL_6:
    v11 = -2147024882;
    goto LABEL_7;
  }
  v13 = (*(__int64 (__fastcall **)(CGeometry2D *, __int64, _QWORD))(*(_QWORD *)this + 144LL))(
          this,
          v12,
          (unsigned int)v10);
  v5 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x32u);
    goto LABEL_18;
  }
  v14 = (*(unsigned int (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 112LL))(this);
  if ( (unsigned __int64)(4 * v14) > 0xFFFFFFFF )
  {
    v11 = -2147024362;
    v18 = 56;
    goto LABEL_7;
  }
  v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          (unsigned int)(4 * v14));
  *((_QWORD *)this + 6) = v15;
  if ( !v15 )
  {
    v18 = 58;
    goto LABEL_6;
  }
  v16 = (*(__int64 (__fastcall **)(CGeometry2D *, _QWORD, __int64, _QWORD))(*(_QWORD *)this + 136LL))(
          this,
          0LL,
          v15,
          (unsigned int)v14);
  v5 = v16;
  if ( v16 >= 0 )
  {
LABEL_17:
    *a2 = (const struct MilVertexXYZDUV2 *)*((_QWORD *)this + 5);
    *a3 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 104LL))(this);
    *a4 = (const unsigned int *)*((_QWORD *)this + 6);
    *a5 = (*(__int64 (__fastcall **)(CGeometry2D *))(*(_QWORD *)this + 112LL))(this);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3Bu);
  }
LABEL_18:
  if ( v5 < 0 )
    goto LABEL_19;
  return (unsigned int)v5;
}
