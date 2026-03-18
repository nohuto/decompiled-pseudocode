/*
 * XREFs of ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801299B4
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800788D8 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r8d
  __int64 v6; // r11
  unsigned int v7; // r9d
  _OWORD *v8; // rcx
  __int128 v9; // xmm1
  _OWORD *v10; // r8
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = v4 + 1;
        v8 = (_OWORD *)(v6 + 232LL * (v4 + 1));
        v9 = v8[1];
        v10 = (_OWORD *)(v6 + 232LL * v4);
        *v10 = *v8;
        v11 = v8[2];
        v10[1] = v9;
        v12 = v8[3];
        v10[2] = v11;
        v13 = v8[4];
        v10[3] = v12;
        v14 = v8[5];
        v10[4] = v13;
        v15 = v8[6];
        v10[5] = v14;
        v16 = v8[7];
        v8 += 8;
        v10[6] = v15;
        v10 += 8;
        v17 = *v8;
        *(v10 - 1) = v16;
        v18 = v8[1];
        *v10 = v17;
        v19 = v8[2];
        v10[1] = v18;
        v20 = v8[3];
        v10[2] = v19;
        v21 = v8[4];
        v10[3] = v20;
        v22 = v8[5];
        v23 = *((_QWORD *)v8 + 12);
        v10[4] = v21;
        v10[5] = v22;
        *((_QWORD *)v10 + 12) = v23;
        v4 = v7;
      }
      while ( v7 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  return v3;
}
