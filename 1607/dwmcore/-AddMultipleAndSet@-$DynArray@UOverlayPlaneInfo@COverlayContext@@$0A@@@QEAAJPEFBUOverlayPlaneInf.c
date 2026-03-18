/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180126494
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800788D8 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801269C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  _OWORD *v6; // rcx
  __int128 v7; // xmm0
  _OWORD *v8; // rdx
  int v9; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0xE8u, 1, a2);
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      v6 = (_OWORD *)(*(_QWORD *)a1 + 232 * v2);
      *v6 = *a2;
      v6[1] = a2[1];
      v6[2] = a2[2];
      v6[3] = a2[3];
      v6[4] = a2[4];
      v6[5] = a2[5];
      v6[6] = a2[6];
      v6 += 8;
      v7 = a2[7];
      v8 = a2 + 8;
      *(v6 - 1) = v7;
      *v6 = *v8;
      v6[1] = v8[1];
      v6[2] = v8[2];
      v6[3] = v8[3];
      v6[4] = v8[4];
      v6[5] = v8[5];
      *((_QWORD *)v6 + 12) = *((_QWORD *)v8 + 12);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  return v5;
}
