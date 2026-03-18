/*
 * XREFs of ?GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1QEAPEBM@Z @ 0x180025B28
 * Callers:
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x180025620 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x1800254D4 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedRects::GetMeshData(CAtlasedRects *this, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  int v5; // edi
  __int64 v10; // rbp
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-38h]

  v5 = 0;
  if ( *((_QWORD *)this + 6) )
    goto LABEL_11;
  v10 = (*(unsigned int (__fastcall **)(CAtlasedRects *))(*(_QWORD *)this + 104LL))(this);
  if ( (unsigned __int64)(16 * v10) > 0xFFFFFFFF )
  {
    v22 = -2147024362;
    v23 = 54;
LABEL_19:
    v5 = v22;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v23);
    goto LABEL_20;
  }
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          (unsigned int)(16 * v10));
  *((_QWORD *)this + 6) = v11;
  if ( !v11 )
  {
    v23 = 57;
LABEL_17:
    v22 = -2147024882;
    goto LABEL_19;
  }
  v12 = (*(__int64 (__fastcall **)(CAtlasedRects *, __int64, _QWORD))(*(_QWORD *)this + 120LL))(
          this,
          v11,
          (unsigned int)v10);
  v5 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x3Bu);
    goto LABEL_12;
  }
  v13 = (*(unsigned int (__fastcall **)(CAtlasedRects *))(*(_QWORD *)this + 104LL))(this);
  if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF )
  {
    v22 = -2147024362;
    v23 = 66;
    goto LABEL_19;
  }
  v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          (unsigned int)(16 * v13));
  *((_QWORD *)this + 7) = v14;
  if ( !v14 )
  {
    v23 = 69;
    goto LABEL_17;
  }
  v15 = (*(__int64 (__fastcall **)(CAtlasedRects *, __int64, _QWORD))(*(_QWORD *)this + 128LL))(
          this,
          v14,
          (unsigned int)v13);
  v5 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x47u);
    goto LABEL_12;
  }
  v16 = (*(unsigned int (__fastcall **)(CAtlasedRects *))(*(_QWORD *)this + 104LL))(this);
  if ( (unsigned __int64)(4 * v16) > 0xFFFFFFFF )
  {
    v22 = -2147024362;
    v23 = 78;
    goto LABEL_19;
  }
  v17 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          (unsigned int)(4 * v16));
  *((_QWORD *)this + 8) = v17;
  if ( !v17 )
  {
    v23 = 81;
    goto LABEL_17;
  }
  v18 = (*(__int64 (__fastcall **)(CAtlasedRects *, __int64, _QWORD))(*(_QWORD *)this + 136LL))(
          this,
          v17,
          (unsigned int)v16);
  v5 = v18;
  if ( v18 >= 0 )
  {
LABEL_11:
    v19 = (*(__int64 (__fastcall **)(CAtlasedRects *))(*(_QWORD *)this + 104LL))(this);
    v20 = *((_QWORD *)this + 8);
    *a2 = v19;
    *a3 = *((_QWORD *)this + 6);
    *a4 = *((_QWORD *)this + 7);
    *a5 = v20;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x53u);
LABEL_12:
  if ( v5 < 0 )
LABEL_20:
    CAtlasedRects::FreeCaches((void **)this);
  return (unsigned int)v5;
}
