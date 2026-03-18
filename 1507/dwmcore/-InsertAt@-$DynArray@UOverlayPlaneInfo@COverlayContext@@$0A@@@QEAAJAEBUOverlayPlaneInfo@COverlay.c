/*
 * XREFs of ?InsertAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x1800F6E6C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003FE30 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::InsertAt(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // r8d
  _OWORD *v9; // r10
  _OWORD *v10; // rdx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  _OWORD *v25; // rdx
  _OWORD *v26; // r8
  _OWORD *v27; // r8
  __int128 v28; // xmm1
  _OWORD *v29; // rdx
  _OWORD *v31; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 <= *(_DWORD *)(a1 + 24) )
  {
    v31 = (_OWORD *)a2;
    v6 = DynArrayImpl<0>::Grow(a1, 0xF0u, 1, 0, (unsigned __int64 *)&v31);
    v5 = v6;
    if ( v6 >= 0 )
    {
      ++*(_DWORD *)(a1 + 24);
      v7 = *(_QWORD *)a1;
      v8 = *(_DWORD *)(a1 + 24) - 1;
      if ( v8 > (unsigned int)v4 )
      {
        v9 = (_OWORD *)(v7 + 240LL * v8);
        do
        {
          v10 = v9 + 8;
          v11 = (_OWORD *)(v7 + 240LL * --v8);
          v12 = v11[1];
          *v9 = *v11;
          v13 = v11[2];
          v9[1] = v12;
          v14 = v11[3];
          v9[2] = v13;
          v15 = v11[4];
          v9[3] = v14;
          v16 = v11[5];
          v9[4] = v15;
          v17 = v11[6];
          v9[5] = v16;
          v18 = v11[7];
          v11 += 8;
          v9[6] = v17;
          v9 -= 15;
          *(v10 - 1) = v18;
          v19 = v11[1];
          *v10 = *v11;
          v20 = v11[2];
          v10[1] = v19;
          v21 = v11[3];
          v10[2] = v20;
          v22 = v11[4];
          v10[3] = v21;
          v23 = v11[5];
          v10[4] = v22;
          v24 = v11[6];
          v10[5] = v23;
          v10[6] = v24;
        }
        while ( v8 > (unsigned int)v4 );
      }
      v25 = v31;
      v26 = (_OWORD *)(v7 + 240 * v4);
      if ( v31 >= v26 && (unsigned __int64)v31 < 240 * (unsigned __int64)*(unsigned int *)(a1 + 24) + v7 - 240 )
        v25 = v31 + 15;
      *v26 = *v25;
      v26[1] = v25[1];
      v26[2] = v25[2];
      v26[3] = v25[3];
      v26[4] = v25[4];
      v26[5] = v25[5];
      v26[6] = v25[6];
      v27 = v26 + 8;
      v28 = v25[7];
      v29 = v25 + 8;
      *(v27 - 1) = v28;
      *v27 = *v29;
      v27[1] = v29[1];
      v27[2] = v29[2];
      v27[3] = v29[3];
      v27[4] = v29[4];
      v27[5] = v29[5];
      v27[6] = v29[6];
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1CDu);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C3u);
  }
  return v5;
}
