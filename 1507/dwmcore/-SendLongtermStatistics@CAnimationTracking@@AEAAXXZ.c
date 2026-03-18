/*
 * XREFs of ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x1800E6574
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x180063AEC (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x180063578 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x180063898 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1800E6280 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     Template_zqqqq @ 0x1800E7010 (Template_zqqqq.c)
 */

void __fastcall CAnimationTracking::SendLongtermStatistics(CAnimationTracking *this)
{
  unsigned __int64 v1; // rbp
  _QWORD *v3; // rcx
  struct _GUID *v4; // rbx
  _BYTE *i; // rbx
  struct _GUID *v6; // rdi
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE *j; // rbx
  __int64 v11; // r14
  const struct _GUID *v12; // rcx
  int v13; // r9d
  int v14; // ecx
  int v15; // r9d
  int v16; // r9d
  __int64 v17; // rdx
  struct _GUID *v18; // rdx
  unsigned __int64 v19; // rax
  _BYTE v20[352]; // [rsp+1E0h] [rbp+1E0h] BYREF

  v1 = (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = (_QWORD *)*((_QWORD *)this + 69);
  *(_QWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v3;
  if ( !v3 )
    goto LABEL_5;
  if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = *(_QWORD **)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  v4 = (struct _GUID *)*v3;
  if ( (*v3 & 1) != 0 )
  {
LABEL_5:
    for ( i = v3 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
      {
        v4 = 0LL;
        goto LABEL_39;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v4 = *(struct _GUID **)i;
  }
LABEL_39:
  while ( v4 )
  {
    v6 = v4;
    v7 = *((_DWORD *)this + 137);
    *(_QWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v4;
    v8 = *(_QWORD *)v4->Data4 & (-1LL << (v7 & 0x1F));
    *(_QWORD *)v1 = v8;
    v9 = *((_QWORD *)this + 69)
       + 8LL
       * ((37
         * (*(unsigned __int8 *)(v1 + 6)
          + 37
          * (*(unsigned __int8 *)(v1 + 5)
           + 37
           * (*(unsigned __int8 *)(v1 + 4)
            + 37
            * (*(unsigned __int8 *)(v1 + 3)
             + 37
             * (*(unsigned __int8 *)(v1 + 2)
              + 37 * (*(unsigned __int8 *)(v1 + 1) + 37 * ((unsigned __int8)v8 + 11623883)))))))
         + *(unsigned __int8 *)(v1 + 7)) & ((v7 >> 5) - 1));
    *(_QWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v9;
    if ( (*(_QWORD *)&v4->Data1 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v9 = *(_QWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      v4 = *(struct _GUID **)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    v4 = *(struct _GUID **)&v4->Data1;
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      for ( j = (_BYTE *)(v9 + 8); ; j += 8 )
      {
        if ( (unsigned __int64)j >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
        {
          v4 = 0LL;
          goto LABEL_19;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v4 = *(struct _GUID **)j;
    }
LABEL_19:
    v11 = *(_QWORD *)&v6[1].Data1;
    *(_QWORD *)v1 = 0LL;
    if ( !v11 )
    {
      if ( (int)CAnimationTracking::ScenarioNameFromGuid(
                  v6 + 2,
                  (const unsigned __int16 **)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL)) >= 0 )
      {
        v11 = *(_QWORD *)v1;
      }
      else
      {
        CAnimationTracking::GuidToString(v12, (unsigned __int16 *)(v1 + 80));
        LODWORD(v11) = v1 + 80;
      }
    }
    LOBYTE(v13) = -1;
    if ( *(_DWORD *)v6[7].Data4 < 0xFFu )
      v13 = *(_DWORD *)v6[7].Data4;
    v14 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      Template_zqqqq(
        Microsoft_Windows_Dwm_CoreEnableBits,
        (unsigned int)&EVTDESC_TELEMETRY_AGGREGATED_VSYNC_ANALYSIS_EVENT,
        v11,
        *(_DWORD *)v6[3].Data4,
        100 * v6[6].Data1 / *(_DWORD *)v6[3].Data4,
        100 * v6[7].Data1 / *(_DWORD *)v6[3].Data4,
        v13);
      v14 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    LOBYTE(v15) = -1;
    if ( *(_DWORD *)v6[7].Data4 < 0xFFu )
      v15 = *(_DWORD *)v6[7].Data4;
    if ( (v14 & 0x400) != 0 )
      Template_zqqqq(
        v14,
        (unsigned int)&EVTDESC_TELEMETRY_AGGREGATED_TTFF_ANALYSIS_EVENT,
        v11,
        *(_DWORD *)v6[3].Data4,
        (unsigned int)(100 * *(_DWORD *)&v6[4].Data2) / *(_DWORD *)v6[3].Data4,
        (unsigned int)(100 * *(_DWORD *)&v6[5].Data2) / *(_DWORD *)v6[3].Data4,
        v15);
    v16 = *((_DWORD *)this + 137) >> 5;
    v17 = *(_QWORD *)v6->Data4 & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    *(_QWORD *)v1 = v17;
    v18 = (struct _GUID *)(*((_QWORD *)this + 69)
                         + 8LL
                         * ((37
                           * (*(unsigned __int8 *)(v1 + 6)
                            + 37
                            * (*(unsigned __int8 *)(v1 + 5)
                             + 37
                             * (*(unsigned __int8 *)(v1 + 4)
                              + 37
                              * (*(unsigned __int8 *)(v1 + 3)
                               + 37
                               * (*(unsigned __int8 *)(v1 + 2)
                                + 37 * (*(unsigned __int8 *)(v1 + 1) + 37 * ((unsigned __int8)v17 + 11623883)))))))
                           + *(unsigned __int8 *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 7)) & (unsigned int)(v16 - 1)));
    v19 = *(_QWORD *)&v6->Data1 & 0x8000000000000002uLL;
    *(_QWORD *)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v18;
    if ( v19 == 0x8000000000000002uLL )
      v18 = *(struct _GUID **)(((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    while ( (*(_QWORD *)&v18->Data1 & 1) == 0 )
    {
      if ( *(struct _GUID **)&v18->Data1 == v6 )
      {
        *(_QWORD *)&v18->Data1 = *(_QWORD *)&v6->Data1;
        --*((_DWORD *)this + 136);
        *(_QWORD *)&v6->Data1 |= 0x8000000000000002uLL;
        break;
      }
      v18 = *(struct _GUID **)&v18->Data1;
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((CAnimationTracking::AnimationScenarioLongtermStatistics *)v6);
  }
  *((_QWORD *)this + 70) = GetTickCount64() + 3600000;
}
