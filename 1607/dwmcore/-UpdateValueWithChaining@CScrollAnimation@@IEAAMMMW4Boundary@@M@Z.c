/*
 * XREFs of ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z @ 0x18015E958
 * Callers:
 *     ?GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ @ 0x18015FA00 (-GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18014BEA0 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18014C0D4 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z.c)
 *     ?ClampValueToBoundaries@CScrollAnimation@@AEBAMM@Z @ 0x18015DDDC (-ClampValueToBoundaries@CScrollAnimation@@AEBAMM@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXPEBVCInteractionTracker@@M@Z @ 0x18015E8BC (-UpdateChainingDirection@CScrollAnimation@@AEAAXPEBVCInteractionTracker@@M@Z.c)
 *     ?ChainToParent@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N@Z @ 0x1801688DC (-ChainToParent@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N3@Z @ 0x180168A94 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis.c)
 */

void __fastcall CScrollAnimation::UpdateValueWithChaining(__int64 a1, float a2, float a3, unsigned int a4)
{
  __int64 *v4; // rsi
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // r14d
  int v10; // r12d
  unsigned __int8 ShouldChainForAxis; // al
  const struct CInteractionTracker *v12; // rdx
  const GUID *v13; // r9
  unsigned __int8 v14; // r15
  unsigned int v15; // ecx
  __int64 v16; // r11
  unsigned int v17; // r10d
  __int64 v18; // rdx
  const struct CInteractionTracker **v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // r11
  unsigned int v24; // r10d
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // r11
  unsigned int v28; // r10d
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // r11
  unsigned int v32; // r10d
  __int64 v33; // rdx
  float v34; // xmm1_4
  __int64 *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  int pData; // [rsp+28h] [rbp-D8h]
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  int v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v44; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v49; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  int *v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  int *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  int *v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h]
  int *v58; // [rsp+C0h] [rbp-40h]
  __int64 v59; // [rsp+C8h] [rbp-38h]
  int *v60; // [rsp+D0h] [rbp-30h]
  __int64 v61; // [rsp+D8h] [rbp-28h]
  float *v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  __int64 v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  __int64 v66; // [rsp+100h] [rbp+0h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  __int64 v68; // [rsp+110h] [rbp+10h]
  __int64 v69; // [rsp+118h] [rbp+18h]
  __int64 v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+128h] [rbp+28h]
  float *v72; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+138h] [rbp+38h]
  int *v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  int *v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  int *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  float v80; // [rsp+1D8h] [rbp+D8h] BYREF
  float v81; // [rsp+1E0h] [rbp+E0h] BYREF

  v81 = a3;
  v80 = a2;
  v4 = *(__int64 **)(a1 + 432);
  if ( v4 )
    v7 = *v4;
  else
    v7 = 0LL;
  v8 = *(_QWORD *)(v7 + 544);
  v9 = 0;
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 400);
  v10 = *(_DWORD *)(a1 + 288);
  ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v7, v10);
  v14 = ShouldChainForAxis;
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v15 = *(unsigned __int8 *)(a1 + 468);
    v50 = &v48;
    v52 = &v40;
    v41 = *(_DWORD *)(a1 + 448);
    v54 = &v41;
    v56 = &v42;
    v43 = *(_DWORD *)(a1 + 452);
    v58 = &v43;
    v60 = (int *)&v44;
    v62 = &v81;
    v64 = a1 + 460;
    v66 = a1 + 456;
    v68 = a1 + 464;
    v70 = a1 + 388;
    v72 = &v80;
    v45 = ShouldChainForAxis;
    v74 = &v45;
    v48 = a1;
    v46 = (v15 >> 1) & 1;
    v51 = 8LL;
    v76 = &v46;
    v78 = &v47;
    v40 = v10;
    v53 = 4LL;
    v55 = 4LL;
    v42 = v9;
    v57 = 4LL;
    v59 = 4LL;
    v44 = a4;
    v61 = 4LL;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v69 = 4LL;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v47 = v15 & 1;
    v79 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4AE4, (LPCGUID)4, v13, 0x11u, &v49);
  }
  if ( (*(_BYTE *)(a1 + 468) & 2) == 0 && v9 == 2 )
  {
    LOBYTE(pData) = CInteractionTracker::ShouldChainAllForAxis(v7);
    LOBYTE(cData) = v14;
    CChainingHelper::RestoreSupportedInteractionsWithBoundaries(v16 + 376, v18, v17, a4, cData, pData);
    v19 = *(const struct CInteractionTracker ***)(a1 + 432);
    if ( v19 )
      v12 = *v19;
    else
      v12 = 0LL;
    v20 = 3LL * *(int *)(a1 + 288);
    *((_BYTE *)v12 + 4 * v20 + 376) &= ~4u;
    *((_DWORD *)v12 + v20 + 96) = 0;
    *((_BYTE *)v12 + 412) |= 2u;
    *(_BYTE *)(a1 + 468) |= 2u;
  }
  v21 = *(_DWORD *)(a1 + 448);
  if ( v21 )
  {
    v22 = v21 - 2;
    if ( !v22 )
    {
      CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, v12, v81);
      v26 = *(_DWORD *)(a1 + 452);
      if ( v26 && v14 )
      {
        if ( ((v26 - 1) & 0xFFFFFFFD) == 0 && a4 == v26 && (float)(v81 > 0.0) < 0.0 )
        {
          LOBYTE(cData) = CInteractionTracker::ShouldChainAllForAxis(v7);
          CChainingHelper::ChainToParent(v27 + 376, v29, v28, a4, cData);
        }
        v30 = *(_DWORD *)(a1 + 452);
        if ( (unsigned int)(v30 - 2) > 1 || a4 != v30 || (float)(v81 > 0.0) <= 0.0 )
          goto LABEL_48;
      }
      else if ( !a4 || !v14 )
      {
        if ( (*(_BYTE *)(a1 + 468) & 1) == 0 )
        {
          v34 = *(float *)(a1 + 464);
          if ( v34 != 0.0 && (float)(v81 > 0.0) != (float)(v34 > 0.0) && v81 != 0.0 )
          {
            v35 = *(__int64 **)(a1 + 432);
            if ( v35 )
              v36 = *v35;
            else
              v36 = 0LL;
            v37 = 3LL * *(int *)(a1 + 288);
            *(_BYTE *)(v36 + 4 * v37 + 376) &= ~4u;
            *(_DWORD *)(v36 + 4 * v37 + 384) = 0;
            *(_BYTE *)(v36 + 412) |= 2u;
            *(_DWORD *)(a1 + 464) = 0;
          }
        }
        goto LABEL_48;
      }
      LOBYTE(cData) = CInteractionTracker::ShouldChainAllForAxis(v7);
      CChainingHelper::ChainToParent(v31 + 376, v33, v32, a4, cData);
      goto LABEL_48;
    }
    if ( v22 == 1 )
    {
      if ( *(_DWORD *)(a1 + 452) && v14 )
      {
        if ( v9 == 2 )
        {
          LOBYTE(pData) = CInteractionTracker::ShouldChainAllForAxis(v7);
          LOBYTE(cData) = v14;
          CChainingHelper::RestoreSupportedInteractionsWithBoundaries(v23 + 376, v25, v24, a4, cData, pData);
LABEL_47:
          CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, v12, v81);
        }
      }
      else if ( v9 == 2 )
      {
        *(_BYTE *)(a1 + 468) |= 1u;
        goto LABEL_47;
      }
    }
  }
  else
  {
    *(_BYTE *)(a1 + 468) |= 1u;
    if ( v9 == 2 )
      goto LABEL_47;
  }
LABEL_48:
  if ( a4 && v14 )
    v80 = CScrollAnimation::ClampValueToBoundaries((CScrollAnimation *)a1, v80);
  *(float *)(a1 + 460) = v81;
  *(_DWORD *)(a1 + 452) = a4;
  *(_DWORD *)(a1 + 448) = v9;
}
