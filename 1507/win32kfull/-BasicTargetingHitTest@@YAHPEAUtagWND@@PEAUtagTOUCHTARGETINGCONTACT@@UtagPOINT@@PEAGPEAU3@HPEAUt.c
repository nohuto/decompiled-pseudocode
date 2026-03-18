/*
 * XREFs of ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C022A8A0
 * Callers:
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C022AAF8 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B488 (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 * Callees:
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022BADC (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     TouchTargetingRankForRect @ 0x1C024BF7C (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRegion @ 0x1C024C5DC (TouchTargetingRankForRegion.c)
 */

__int64 __fastcall BasicTargetingHitTest(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v13; // r10d
  int v14; // r9d
  int v16; // r14d
  __int64 v17; // rcx
  __int128 v18; // xmm6
  int v19; // r8d
  int v20; // r12d
  __int64 v21; // r9
  unsigned __int16 v23; // ax
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rcx
  unsigned __int16 v27; // ax
  unsigned __int16 *v28; // rcx
  int v29; // [rsp+48h] [rbp-71h]
  __int128 v32; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-41h]
  __int128 v34; // [rsp+88h] [rbp-31h] BYREF

  v13 = a2;
  v14 = 0;
  v33 = a3;
  if ( *(_DWORD *)(a2 + 176) && (!a7 || PtInRect(a7, a3)) )
    v16 = v14;
  else
    v16 = 1;
  v17 = *(_QWORD *)(a1 + 208);
  if ( v17 )
  {
    GreGetRgnBox(v17, &v32);
    v13 = a2;
    v14 = 0;
    v18 = v32;
  }
  else
  {
    v18 = *(_OWORD *)(a1 + 112);
  }
  v19 = a8;
  *a4 = v14;
  v29 = a8;
  *(_QWORD *)a5 = 0LL;
  v32 = v18;
  if ( a11 == v14 )
  {
    if ( (_WORD)a10 == 3 )
    {
      v19 = a10;
      v20 = v14;
      v29 = a10;
    }
    else
    {
      v20 = a9;
    }
    if ( v16 || !PtInRect(&v32, a3) )
    {
      if ( v20 && (*(_BYTE *)(a1 + 54) & 4) == 0 )
        return 0LL;
      v32 = v18;
      v34 = v18;
      v23 = TouchTargetingRankForRect((unsigned int)&v34, (unsigned int)&v32, v13, (_DWORD)a7, a5, v19);
      *a4 = v23;
      if ( v23 > 0xFFDu )
        return 0LL;
      v21 = 0LL;
    }
    v24 = *(_QWORD *)(a1 + 200);
    if ( !v24 && (!a6 || *(_QWORD *)(a1 + 208) == v21) )
      goto LABEL_31;
    if ( v16 )
      goto LABEL_39;
    if ( !v24 )
      v24 = *(_QWORD *)(a1 + 208);
    if ( !(unsigned int)GrePtInRegion(
                          v24,
                          (unsigned int)(*(_DWORD *)a5 + v33),
                          (unsigned int)(*(_DWORD *)(a5 + 4) + HIDWORD(v33))) )
    {
LABEL_39:
      if ( v20 && (*(_BYTE *)(a1 + 54) & 4) == 0 )
        return 0LL;
      v25 = a2;
      v26 = *(_QWORD *)(a1 + 200);
      v34 = *(_OWORD *)(a1 + 112);
      v27 = TouchTargetingRankForRegion(v26, (unsigned int)&v34, a2, a5, v29);
      v28 = a4;
      *a4 = v27;
      if ( v27 > 0xFFDu )
        return 0LL;
    }
    else
    {
LABEL_31:
      v25 = a2;
      v28 = a4;
    }
    if ( (*(_BYTE *)(a1 + 50) & 8) != 0
      && (!a6 || (*(_DWORD *)(a1 + 288) & 0x20) == 0)
      && !(unsigned int)TouchTargetingLayerHitTest(a1, a3, a6, v25, a7, v28, a5, a8) )
    {
      return 0LL;
    }
  }
  return 1LL;
}
