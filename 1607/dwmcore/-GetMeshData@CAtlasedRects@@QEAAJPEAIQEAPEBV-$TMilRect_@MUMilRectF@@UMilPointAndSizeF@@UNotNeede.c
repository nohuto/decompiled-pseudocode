/*
 * XREFs of ?GetMeshData@CAtlasedRects@@QEAAJPEAIQEAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1QEAPEBM@Z @ 0x18009C2DC
 * Callers:
 *     ?CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAVCAtlasedRectsCommandList@@@Z @ 0x18009BE18 (-CreateNewD2DCommandList@CAtlasedRects@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bit.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x18009BCE4 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRects::GetMeshData(CAtlasedRects *this, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  int v5; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-28h]

  v5 = 0;
  if ( *((_QWORD *)this + 15) )
    goto LABEL_11;
  v10 = (*(__int64 (__fastcall **)(CAtlasedRects *))(*(_QWORD *)this + 112LL))(this);
  v11 = 16LL * v10;
  v12 = v10;
  if ( v11 > 0xFFFFFFFF )
  {
    v28 = -2147024362;
    v29 = 54;
LABEL_19:
    v5 = v28;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v29);
    goto LABEL_20;
  }
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          (unsigned int)v11);
  *((_QWORD *)this + 15) = v13;
  if ( !v13 )
  {
    v29 = 57;
LABEL_17:
    v28 = -2147024882;
    goto LABEL_19;
  }
  v14 = (*(__int64 (__fastcall **)(CAtlasedRects *, __int64, _QWORD))(*(_QWORD *)this + 128LL))(this, v13, v12);
  v5 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x3Bu);
    goto LABEL_12;
  }
  v15 = (*(__int64 (__fastcall **)(CAtlasedRects *))(*(_QWORD *)this + 112LL))(this);
  v16 = 16LL * v15;
  v17 = v15;
  if ( v16 > 0xFFFFFFFF )
  {
    v28 = -2147024362;
    v29 = 66;
    goto LABEL_19;
  }
  v18 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          (unsigned int)v16);
  *((_QWORD *)this + 16) = v18;
  if ( !v18 )
  {
    v29 = 69;
    goto LABEL_17;
  }
  v19 = (*(__int64 (__fastcall **)(CAtlasedRects *, __int64, _QWORD))(*(_QWORD *)this + 136LL))(this, v18, v17);
  v5 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x47u);
    goto LABEL_12;
  }
  v20 = (*(__int64 (__fastcall **)(CAtlasedRects *))(*(_QWORD *)this + 112LL))(this);
  v21 = 4LL * v20;
  v22 = v20;
  if ( v21 > 0xFFFFFFFF )
  {
    v28 = -2147024362;
    v29 = 78;
    goto LABEL_19;
  }
  v23 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          (unsigned int)v21);
  *((_QWORD *)this + 17) = v23;
  if ( !v23 )
  {
    v29 = 81;
    goto LABEL_17;
  }
  v24 = (*(__int64 (__fastcall **)(CAtlasedRects *, __int64, _QWORD))(*(_QWORD *)this + 144LL))(this, v23, v22);
  v5 = v24;
  if ( v24 >= 0 )
  {
LABEL_11:
    v25 = (*(__int64 (__fastcall **)(CAtlasedRects *))(*(_QWORD *)this + 112LL))(this);
    v26 = *((_QWORD *)this + 17);
    *a2 = v25;
    *a3 = *((_QWORD *)this + 15);
    *a4 = *((_QWORD *)this + 16);
    *a5 = v26;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x53u);
LABEL_12:
  if ( v5 < 0 )
LABEL_20:
    CAtlasedRects::FreeCaches(this);
  return (unsigned int)v5;
}
