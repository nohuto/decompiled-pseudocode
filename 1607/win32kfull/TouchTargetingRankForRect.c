/*
 * XREFs of TouchTargetingRankForRect @ 0x1C024823C
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C022075C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C0221CCC (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     TouchTargetingRankForRegion @ 0x1C024889C (TouchTargetingRankForRegion.c)
 * Callees:
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     _TTPixelsToHm @ 0x1C0248FA8 (_TTPixelsToHm.c)
 *     _TTUpdateRankWithSegment @ 0x1C0248FF4 (_TTUpdateRankWithSegment.c)
 */

__int64 __fastcall TouchTargetingRankForRect(int *a1, int *a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  int *v10; // r14
  unsigned int v11; // r15d
  int v13; // r10d
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // ecx
  int v23; // ecx
  int v24; // edx
  int v25; // r9d
  int v26; // r10d
  int v27; // r11d
  int v28; // r12d
  int v29; // eax
  int v30; // r13d
  int v31; // r8d
  int v32; // r15d
  int v33; // r9d
  int v34; // r12d
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  bool v40; // cc
  unsigned int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // r9d
  int v47; // r12d
  int v48; // r12d
  int v49; // r8d
  int v50; // edx
  int v51; // eax
  __int128 v52; // [rsp+40h] [rbp-20h] BYREF
  __int128 v53; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v54; // [rsp+A0h] [rbp+40h] BYREF

  v54 = 4094;
  if ( a3[45]
    && (unsigned int)IntersectRect(&v53, a1, a3)
    && (!a4 || (unsigned int)IntersectRect(a1, a1, a4))
    && (unsigned int)IntersectRect(a1, a2, a1)
    && *a1 != a1[2]
    && a1[1] != a1[3] )
  {
    v10 = a5;
    if ( a5 )
      *(_QWORD *)a5 = 0LL;
    v11 = a6;
    if ( !a6 )
    {
      v52 = *(_OWORD *)a2;
      if ( a4 && !(unsigned int)IntersectRect(&v52, (int *)&v52, a4) )
        return 4094LL;
      TTPixelsToHm((unsigned int)(HIDWORD(v52) - DWORD1(v52)), (unsigned int)a3[47]);
      if ( (int)TTPixelsToHm((unsigned int)(DWORD2(v52) - v52), (unsigned int)a3[46]) > 1400 && v13 > 1400 )
        return 4093LL;
    }
    v14 = *a1;
    v15 = a1[2] - 1;
    v16 = a1[1];
    if ( *a1 == v15 )
    {
      v17 = *a1;
      v18 = a1[3] - 1;
    }
    else
    {
      v19 = a1[3] - 1;
      v53 = *(_OWORD *)a2;
      if ( v16 == v19 )
      {
        TTUpdateRankWithSegment(v14, v19, v15, v19, (__int64)&v52, (__int64)&v54, (__int64)&v53, (__int64)a3);
LABEL_23:
        if ( v54 == 4094 || !v10 )
          return v54;
        v26 = DWORD1(v52);
        v27 = v52;
        if ( v11 && (_WORD)v11 != 3 )
          goto LABEL_42;
        v28 = 200;
        if ( (_WORD)v11 == 3 )
          v28 = HIWORD(v11);
        v29 = v52 - a3[8];
        *v10 = v29;
        v30 = v26 - a3[9];
        v10[1] = v30;
        if ( v29 && (int)TTPixelsToHm(abs32(v29), (unsigned int)a3[46]) > v28
          || v30 && (int)TTPixelsToHm(abs32(v30), (unsigned int)a3[47]) > v28 )
        {
          return 4094LL;
        }
        if ( v11 )
        {
LABEL_42:
          v43 = a1[2] - 1;
          if ( v27 == *a1 )
          {
            if ( v27 + 1 < v43 && v27 + 1 < a3[2] )
              ++v27;
          }
          else if ( v27 == v43 && v27 - 1 > *a1 && v27 - 1 >= *a3 )
          {
            --v27;
          }
          v50 = a1[1];
          v51 = a1[3] - 1;
          if ( v26 == v50 )
          {
            if ( v26 + 1 < v51 && v26 + 1 < a3[3] )
              ++v26;
          }
          else if ( v26 == v51 && v26 - 1 > v50 && v26 - 1 >= a3[1] )
          {
            --v26;
          }
          *v10 = v27 - a3[8];
          v10[1] = v26 - a3[9];
          return v54;
        }
        v31 = a3[8];
        v32 = *a2;
        if ( v31 >= *a2 )
        {
          v45 = a2[2];
          if ( v31 < v45 )
            goto LABEL_40;
          v46 = a3[9];
          v47 = a2[1];
          if ( v46 < v47 )
          {
            v39 = abs32(v31 - v45 + 1);
            v38 = v46 - v47;
            goto LABEL_38;
          }
          v48 = a2[3];
          if ( v46 < v48 )
            goto LABEL_53;
          v49 = v31 - v45;
          v36 = (v49 + 1) >> 31;
          v37 = v49 + 1;
          v38 = v46 - v48 + 1;
        }
        else
        {
          v33 = a3[9];
          v34 = a2[1];
          if ( v33 >= v34 )
          {
            v44 = a2[3];
            if ( v33 < v44 )
              goto LABEL_53;
            v40 = (int)abs32(v31 - v32) <= (int)abs32(v33 - v44 + 1);
LABEL_39:
            if ( v40 )
            {
LABEL_40:
              v41 = abs32(v26 - (a2[1] + a2[3]) / 2);
              v42 = (unsigned int)a3[47];
              goto LABEL_41;
            }
LABEL_53:
            v41 = abs32(v27 - (v32 + a2[2]) / 2);
            v42 = (unsigned int)a3[46];
LABEL_41:
            if ( (int)TTPixelsToHm(v41, v42) > 700 )
              return 4094LL;
            goto LABEL_42;
          }
          v35 = v31 - v32;
          v36 = v35 >> 31;
          v37 = v35;
          v38 = v33 - v34;
        }
        v39 = (v36 ^ v37) - v36;
LABEL_38:
        v40 = v39 <= (int)abs32(v38);
        goto LABEL_39;
      }
      TTUpdateRankWithSegment(v14, v16, v14, v19, (__int64)&v52, (__int64)&v54, (__int64)&v53, (__int64)a3);
      v20 = a1[3] - 1;
      v21 = a1[2] - 1;
      v22 = *a1;
      v53 = *(_OWORD *)a2;
      TTUpdateRankWithSegment(v22, v20, v21, v20, (__int64)&v52, (__int64)&v54, (__int64)&v53, (__int64)a3);
      v23 = a1[2] - 1;
      v24 = a1[3] - 1;
      v25 = a1[1];
      v53 = *(_OWORD *)a2;
      TTUpdateRankWithSegment(v23, v24, v23, v25, (__int64)&v52, (__int64)&v54, (__int64)&v53, (__int64)a3);
      v16 = a1[1];
      v14 = a1[2] - 1;
      v17 = *a1;
      v18 = v16;
    }
    v53 = *(_OWORD *)a2;
    TTUpdateRankWithSegment(v14, v16, v17, v18, (__int64)&v52, (__int64)&v54, (__int64)&v53, (__int64)a3);
    goto LABEL_23;
  }
  return 4094LL;
}
