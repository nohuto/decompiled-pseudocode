/*
 * XREFs of ?CollectOcclusion@COcclusionContext@@AEAAJPEAVCOcclusionInfo@@PEAVCVisual@@@Z @ 0x1800E0478
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E0510 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FlushOcclusionRects@COcclusionContext@@QEAAJXZ @ 0x1800E0260 (-FlushOcclusionRects@COcclusionContext@@QEAAJXZ.c)
 */

__int64 __fastcall COcclusionContext::CollectOcclusion(
        COcclusionContext *this,
        struct COcclusionInfo *a2,
        struct CVisual *a3)
{
  int v4; // eax
  int v5; // edx
  __int64 v6; // r8
  int v7; // r9d
  unsigned int v8; // ebx

  *((_QWORD *)this + 64) = a3;
  v4 = (*(__int64 (__fastcall **)(struct CVisual *, _QWORD, COcclusionContext *, struct COcclusionInfo *))(*(_QWORD *)a3 + 160LL))(
         a3,
         *((_QWORD *)this + 91),
         this,
         a2);
  v8 = v4;
  if ( v4 >= 0 )
    COcclusionContext::FlushOcclusionRects(this, v5, v6, v7);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2C4u);
  *((_QWORD *)this + 64) = 0LL;
  return v8;
}
