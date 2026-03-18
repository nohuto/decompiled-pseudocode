/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C021F948
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C02202EC (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     _GetPointerDeviceType @ 0x1C01C89BC (_GetPointerDeviceType.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C021FE00 (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C021FF5C (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0220158 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     QueryInertiaInfo @ 0x1C022A1F0 (QueryInertiaInfo.c)
 */

__int64 __fastcall Edgy::_GetArcData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  int v7; // r15d
  __int64 v8; // r14
  int v9; // esi
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // r10d
  int v15; // eax
  __int64 v16; // rax
  int v17; // ebp
  int v18; // r13d
  void *v19; // rdx
  int PointerDeviceType; // ebp
  int IsLegacyDevice; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  const struct Edgy::tagARC_DATA *v27; // r8
  int v28; // r8d
  int v29; // r12d
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  int v35; // ecx
  __int64 InertiaInfo; // rbp
  float v37; // xmm1_4
  float v38; // xmm1_4
  int v39; // eax
  int v40; // eax
  unsigned int DisambiguationArcData; // [rsp+30h] [rbp-88h]
  __int128 v43; // [rsp+38h] [rbp-80h]
  _BYTE v44[104]; // [rsp+50h] [rbp-68h] BYREF
  int v45; // [rsp+C0h] [rbp+8h]
  int v46; // [rsp+C8h] [rbp+10h]
  unsigned int v47; // [rsp+D0h] [rbp+18h]
  int v48; // [rsp+D8h] [rbp+20h]

  memset((void *)(a1 + 8), 0, 0x30uLL);
  v7 = 0;
  *(_QWORD *)a1 = a3;
  v8 = 0LL;
  v9 = 1;
  v10 = 0LL;
  v47 = 0;
  v11 = 0LL;
  v46 = 0;
  if ( *(_DWORD *)(a3 + 40) )
  {
    do
    {
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)(*(_QWORD *)(a3 + 88)
                                                                                  + 216LL * (unsigned int)v11)) )
      {
        v15 = *(_DWORD *)(v12 + 68);
        ++v14;
        if ( (v15 & 4) != 0 )
        {
          v10 = (unsigned int)(v10 + 1);
          if ( (v15 & 0x2000) != 0 )
          {
            v8 = v12 + 56;
            *(_QWORD *)(a1 + 40) = *(_QWORD *)(v12 + 112);
            *(_DWORD *)(a1 + 48) = *(_DWORD *)(v12 + 120);
          }
        }
        v16 = *(_QWORD *)(a2 + 176);
        if ( (unsigned int)(*(_DWORD *)(v12 + 56) - 2) > 1 )
          v9 = 0;
        if ( v16 && *(_QWORD *)(v12 + 72) != v16 )
          v9 = 0;
      }
      v11 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v11 < *(_DWORD *)(a3 + 40) );
    v47 = v14;
    v46 = v10;
  }
  v17 = 0;
  v45 = 0;
  v18 = 0;
  v48 = 0;
  if ( !*(_DWORD *)(a2 + 16) && v9 && v8 && (_DWORD)v10 == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*(_QWORD *)(v8 + 16), v6, v11, v10);
    if ( ((PointerDeviceType - 1) & 0xFFFFFFFD) != 0 )
      v9 = 0;
    if ( v9 )
    {
      IsLegacyDevice = Edgy::_IsLegacyDevice(*(Edgy **)(v8 + 16), v19);
      v22 = Edgy::_HitTestEdgyRegion(
              v44,
              a2,
              *(_QWORD *)(v8 + 16),
              *(_QWORD *)(v8 + 56),
              PointerDeviceType,
              IsLegacyDevice);
      v43 = *(_OWORD *)v22;
      v23 = *(_QWORD *)v22;
      if ( *(_QWORD *)v22 )
      {
        v17 = 1;
        *(_DWORD *)(a1 + 24) = *(_QWORD *)(v22 + 16);
        *(_QWORD *)(a1 + 16) = v23;
        *(_QWORD *)(a1 + 32) = *((_QWORD *)&v43 + 1);
        v48 = *(_DWORD *)(*((_QWORD *)&v43 + 1) + 4LL);
        v45 = 1;
        v24 = ValidateHwnd(*(_QWORD *)(v23 + 8));
        if ( !v24 || *(char *)(v24 + 43) < 0 || *(char *)(v24 + 44) < 0 )
          v18 = 1;
      }
      else
      {
        v17 = 0;
        v45 = 0;
      }
    }
    else
    {
      v17 = 0;
    }
  }
  DisambiguationArcData = 0;
  if ( v9 && *(_DWORD *)(a2 + 16) == 1 )
  {
    v25 = *(_QWORD *)(a2 + 184);
    if ( v25 && (v26 = ValidateHwnd(*(_QWORD *)(v25 + 8))) != 0 && *(char *)(v26 + 43) >= 0 && *(char *)(v26 + 44) >= 0 )
      DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)a1, v27);
    else
      v18 = 1;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 208);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 216);
  }
  v28 = *(_DWORD *)(a2 + 16);
  v29 = 0;
  if ( !v28
    && (unsigned int)(*(_DWORD *)(a1 + 48) - *(_DWORD *)(a2 + 248)) < *(_DWORD *)(a2 + 252)
    && v8
    && *(_QWORD *)(a2 + 240) == *(_QWORD *)(v8 + 16) )
  {
    v30 = *(_DWORD *)(a1 + 40);
    v31 = *(_DWORD *)(a2 + 256);
    v32 = v30 <= v31 ? v31 - v30 : v30 - v31;
    v33 = *(_DWORD *)(a1 + 44);
    v34 = *(_DWORD *)(a2 + 260);
    v35 = v33 <= v34 ? v34 - v33 : v33 - v34;
    if ( v32 < *(_DWORD *)(a2 + 264) && v35 < *(_DWORD *)(a2 + 268) )
      v29 = 1;
  }
  if ( !v28 )
  {
    if ( v17 )
    {
      if ( (unsigned int)(*(_DWORD *)v8 - 2) <= 1 )
      {
        InertiaInfo = QueryInertiaInfo(&gInertiaInfo, *(_QWORD *)(v8 + 48), (unsigned int)(*(_DWORD *)v8 - 1));
        if ( InertiaInfo )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(InertiaInfo + 128)) < *(_QWORD *)(a2 + 280) )
          {
            if ( (v37 = *(float *)(InertiaInfo + 16), v37 > 0.0) && !*(_DWORD *)(a1 + 24)
              || v37 < 0.0 && *(_DWORD *)(a1 + 24) == 2
              || (v38 = *(float *)(InertiaInfo + 20), v38 > 0.0) && *(_DWORD *)(a1 + 24) == 1
              || v38 < 0.0 && *(_DWORD *)(a1 + 24) == 3 )
            {
              v7 = 1;
            }
          }
        }
      }
    }
  }
  v39 = v46 == 0;
  if ( v8 )
    v39 |= 2u;
  if ( v47 > 1 )
    v39 |= 4u;
  if ( v9 )
    v39 |= 8u;
  if ( v45 )
    v39 |= 0x10u;
  if ( v48 )
    v39 |= 0x80u;
  if ( v18 )
    v39 |= 0x1000u;
  v40 = DisambiguationArcData | v39;
  if ( v29 )
    v40 |= 0x40u;
  if ( v7 )
    v40 |= 0x20u;
  *(_DWORD *)(a1 + 8) = v40;
  return a1;
}
