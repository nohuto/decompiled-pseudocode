/*
 * XREFs of ?SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800598B0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0 (-GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CTreeData::SetWorldTransform(
        CTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  unsigned int v4; // r14d
  __int128 v7; // xmm1
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  signed __int64 v11; // rsi

  v4 = 0;
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  v7 = *((_OWORD *)a2 + 3);
  *((_BYTE *)this + 16) &= ~2u;
  *((_BYTE *)this + 16) |= 2 * (a3 & 1);
  *(_OWORD *)((char *)this + 88) = v7;
  if ( a4 )
  {
    v9 = (_OWORD *)*((_QWORD *)this + 13);
    if ( v9 )
    {
      *v9 = *(_OWORD *)a4;
      v9[1] = *((_OWORD *)a4 + 1);
      v9[2] = *((_OWORD *)a4 + 2);
      v9[3] = *((_OWORD *)a4 + 3);
    }
    else
    {
      v10 = (_OWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        64LL);
      v11 = (signed __int64)v10;
      if ( v10 )
      {
        *v10 = *(_OWORD *)a4;
        v10[1] = *((_OWORD *)a4 + 1);
        v10[2] = *((_OWORD *)a4 + 2);
        v10[3] = *((_OWORD *)a4 + 3);
      }
      else
      {
        v11 = 0LL;
      }
      if ( !v11 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Eu);
        return v4;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 13, v11, 0LL) )
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, signed __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v11);
    }
  }
  *((_QWORD *)this + 14) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 352LL);
  return v4;
}
