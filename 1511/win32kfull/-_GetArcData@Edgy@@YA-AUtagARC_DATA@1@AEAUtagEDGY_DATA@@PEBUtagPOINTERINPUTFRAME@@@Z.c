/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C02297F4
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022A094 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     GetDownContactCount @ 0x1C01CCB00 (GetDownContactCount.c)
 *     _GetPointerDeviceType @ 0x1C01CEFEC (_GetPointerDeviceType.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB740 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C0229BA8 (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C0229D04 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0229F00 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     QueryInertia @ 0x1C0239B40 (QueryInertia.c)
 */

__int64 __fastcall Edgy::_GetArcData(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r12d
  int v7; // esi
  __int64 v8; // r14
  unsigned int v9; // r15d
  int DownContactCount; // eax
  unsigned int v11; // r8d
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  int v16; // ebp
  int v17; // r13d
  void *v18; // rdx
  int PointerDeviceType; // ebp
  int IsLegacyDevice; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  const struct Edgy::tagARC_DATA *v26; // r8
  int v27; // r8d
  int v28; // r15d
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // ecx
  __int64 Inertia; // rbp
  float v36; // xmm1_4
  float v37; // xmm1_4
  int v38; // eax
  int v39; // eax
  unsigned int DisambiguationArcData; // [rsp+30h] [rbp-88h]
  __int128 v42; // [rsp+38h] [rbp-80h]
  _BYTE v43[104]; // [rsp+50h] [rbp-68h] BYREF
  int v44; // [rsp+C0h] [rbp+8h]
  int v45; // [rsp+C8h] [rbp+10h]
  unsigned int v46; // [rsp+D0h] [rbp+18h]
  int v47; // [rsp+D8h] [rbp+20h]

  memset((void *)(a1 + 8), 0, 0x30uLL);
  v6 = 0;
  *(_QWORD *)a1 = a3;
  v46 = 0;
  v7 = 1;
  v8 = 0LL;
  v9 = 0;
  DownContactCount = GetDownContactCount();
  v11 = 0;
  v45 = DownContactCount;
  if ( *(_DWORD *)(a3 + 24) )
  {
    do
    {
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)(*(_QWORD *)(a3 + 72) + 216LL * v11)) )
      {
        ++v9;
        if ( (v14 & *(_DWORD *)(v12 + 68)) == v14 )
        {
          v8 = v12 + 56;
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(v12 + 112);
          *(_DWORD *)(a1 + 48) = *(_DWORD *)(v12 + 120);
        }
        v15 = *(_QWORD *)(a2 + 176);
        if ( (unsigned int)(*(_DWORD *)(v12 + 56) - 2) > 1 )
          v7 = 0;
        if ( v15 && *(_QWORD *)(v12 + 72) != v15 )
          v7 = 0;
      }
      v11 = v13 + 1;
    }
    while ( v11 < *(_DWORD *)(a3 + 24) );
    DownContactCount = v45;
    v46 = v9;
  }
  v16 = 0;
  v44 = 0;
  v17 = 0;
  v47 = 0;
  if ( !*(_DWORD *)(a2 + 16) && v7 && v8 && DownContactCount == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*(_QWORD *)(v8 + 16));
    if ( ((PointerDeviceType - 1) & 0xFFFFFFFD) != 0 )
      v7 = 0;
    if ( v7 )
    {
      IsLegacyDevice = Edgy::_IsLegacyDevice(*(Edgy **)(v8 + 16), v18);
      v21 = Edgy::_HitTestEdgyRegion(
              v43,
              a2,
              *(_QWORD *)(v8 + 16),
              *(_QWORD *)(v8 + 56),
              PointerDeviceType,
              IsLegacyDevice);
      v42 = *(_OWORD *)v21;
      v22 = *(_QWORD *)v21;
      if ( *(_QWORD *)v21 )
      {
        v16 = 1;
        *(_DWORD *)(a1 + 24) = *(_QWORD *)(v21 + 16);
        *(_QWORD *)(a1 + 16) = v22;
        *(_QWORD *)(a1 + 32) = *((_QWORD *)&v42 + 1);
        v47 = *(_DWORD *)(*((_QWORD *)&v42 + 1) + 4LL);
        v44 = 1;
        v23 = ValidateHwnd(*(_QWORD *)(v22 + 8));
        if ( !v23 || *(char *)(v23 + 43) < 0 || *(char *)(v23 + 44) < 0 )
          v17 = 1;
        goto LABEL_26;
      }
      v44 = 0;
    }
    v16 = 0;
  }
LABEL_26:
  DisambiguationArcData = 0;
  if ( v7 && *(_DWORD *)(a2 + 16) == 1 )
  {
    v24 = *(_QWORD *)(a2 + 184);
    if ( v24 && (v25 = ValidateHwnd(*(_QWORD *)(v24 + 8))) != 0 && *(char *)(v25 + 43) >= 0 && *(char *)(v25 + 44) >= 0 )
      DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)a1, v26);
    else
      v17 = 1;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 208);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 216);
  }
  v27 = *(_DWORD *)(a2 + 16);
  v28 = 0;
  if ( !v27
    && (unsigned int)(*(_DWORD *)(a1 + 48) - *(_DWORD *)(a2 + 248)) < *(_DWORD *)(a2 + 252)
    && v8
    && *(_QWORD *)(a2 + 240) == *(_QWORD *)(v8 + 16) )
  {
    v29 = *(_DWORD *)(a1 + 40);
    v30 = *(_DWORD *)(a2 + 256);
    v31 = v29 <= v30 ? v30 - v29 : v29 - v30;
    v32 = *(_DWORD *)(a1 + 44);
    v33 = *(_DWORD *)(a2 + 260);
    v34 = v32 <= v33 ? v33 - v32 : v32 - v33;
    if ( v31 < *(_DWORD *)(a2 + 264) && v34 < *(_DWORD *)(a2 + 268) )
      v28 = 1;
  }
  if ( !v27 )
  {
    if ( v16 )
    {
      if ( (unsigned int)(*(_DWORD *)v8 - 2) <= 1 )
      {
        Inertia = QueryInertia(*(_QWORD *)(v8 + 48), (unsigned int)(*(_DWORD *)v8 - 1));
        if ( Inertia )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(Inertia + 128)) < *(_QWORD *)(a2 + 280) )
          {
            if ( (v36 = *(float *)(Inertia + 16), v36 > 0.0) && !*(_DWORD *)(a1 + 24)
              || v36 < 0.0 && *(_DWORD *)(a1 + 24) == 2
              || (v37 = *(float *)(Inertia + 20), v37 > 0.0) && *(_DWORD *)(a1 + 24) == 1
              || v37 < 0.0 && *(_DWORD *)(a1 + 24) == 3 )
            {
              v6 = 1;
            }
          }
        }
      }
    }
  }
  v38 = v45 == 0;
  if ( v8 )
    v38 |= 2u;
  if ( v46 > 1 )
    v38 |= 4u;
  if ( v7 )
    v38 |= 8u;
  if ( v44 )
    v38 |= 0x10u;
  if ( v47 )
    v38 |= 0x80u;
  if ( v17 )
    v38 |= 0x1000u;
  v39 = DisambiguationArcData | v38;
  if ( v28 )
    v39 |= 0x40u;
  if ( v6 )
    v39 |= 0x20u;
  *(_DWORD *)(a1 + 8) = v39;
  return a1;
}
