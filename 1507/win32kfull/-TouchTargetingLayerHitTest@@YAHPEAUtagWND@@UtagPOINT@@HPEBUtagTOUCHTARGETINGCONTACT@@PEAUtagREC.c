/*
 * XREFs of ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022BADC
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C022A8A0 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 * Callees:
 *     DCELayerHitTest @ 0x1C00104D8 (DCELayerHitTest.c)
 *     LayerHitTest @ 0x1C00FAD48 (LayerHitTest.c)
 *     TouchTargetingRankForRectDeep @ 0x1C024C428 (TouchTargetingRankForRectDeep.c)
 */

__int64 __fastcall TouchTargetingLayerHitTest(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        _DWORD *a7,
        int a8)
{
  int v12; // r10d
  BOOL v13; // eax
  __int128 v14; // xmm0
  unsigned __int16 v15; // r14
  __int64 v17; // rbx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+50h]
  __int64 v23; // [rsp+A0h] [rbp+50h]

  v12 = a2 + *a7;
  HIDWORD(v22) = a7[1] + HIDWORD(a2);
  LODWORD(v22) = v12;
  if ( a3 )
    v13 = DCELayerHitTest(a1, v22);
  else
    v13 = LayerHitTest(a1, v22);
  if ( !v13 )
  {
    v14 = *(_OWORD *)(a1 + 112);
    v19 = *(_QWORD *)a7;
    v20 = v14;
    v15 = TouchTargetingRankForRectDeep((unsigned int)&v20, a4, a5, (unsigned int)&v19, a8);
    if ( v15 > 0xFFDu )
      return 0LL;
    v17 = v19;
    LODWORD(v23) = v19 + a2;
    HIDWORD(v23) = HIDWORD(v19) + HIDWORD(a2);
    if ( !(a3 ? DCELayerHitTest(a1, v23) : LayerHitTest(a1, v23)) )
      return 0LL;
    *(_QWORD *)a7 = v17;
    *a6 = v15;
  }
  return 1LL;
}
