/*
 * XREFs of ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x180117CC0
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800A0020 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 * Callees:
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x1800A1AD0 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x1800A459C (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801179F0 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     Template_zqqqq @ 0x18011865C (Template_zqqqq.c)
 *     Template_zqqqqq @ 0x180118730 (Template_zqqqqq.c)
 */

void __fastcall CAnimationTracking::SendLongtermStatistics(CAnimationTracking *this)
{
  unsigned __int64 v1; // rbp
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _BYTE *i; // rbx
  _QWORD *v6; // rdi
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE *j; // rbx
  __int64 v11; // r14
  const struct _GUID *v12; // rcx
  unsigned __int64 v13; // r15
  int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // ecx
  unsigned __int64 v20; // r15
  int v21; // r9d
  int v22; // r8d
  int v23; // edx
  int v24; // edx
  int v25; // r9d
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rax
  _BYTE v29[352]; // [rsp+1E0h] [rbp+1E0h] BYREF

  v1 = (unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL;
  v3 = (_QWORD *)*((_QWORD *)this + 69);
  *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v3;
  if ( !v3 )
    goto LABEL_5;
  if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = *(_QWORD **)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  v4 = (_QWORD *)*v3;
  if ( (*v3 & 1) != 0 )
  {
LABEL_5:
    for ( i = v3 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
      {
        v4 = 0LL;
        goto LABEL_10;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v4 = *(_QWORD **)i;
  }
LABEL_10:
  while ( v4 )
  {
    v6 = v4;
    v7 = *((_DWORD *)this + 137);
    *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v4;
    v8 = v4[1] & (-1LL << (v7 & 0x1F));
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
    *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v9;
    if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    {
      v9 = *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      v4 = *(_QWORD **)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    v4 = (_QWORD *)*v4;
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      for ( j = (_BYTE *)(v9 + 8); ; j += 8 )
      {
        if ( (unsigned __int64)j >= *((_QWORD *)this + 69) + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5) )
        {
          v4 = 0LL;
          goto LABEL_21;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v4 = *(_QWORD **)j;
    }
LABEL_21:
    v11 = v6[2];
    *(_QWORD *)v1 = 0LL;
    if ( !v11 )
    {
      if ( (int)CAnimationTracking::ScenarioNameFromGuid(
                  (const struct _GUID *)v6 + 2,
                  (const unsigned __int16 **)((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL)) >= 0 )
      {
        v11 = *(_QWORD *)v1;
      }
      else
      {
        CAnimationTracking::GuidToString(v12, (unsigned __int16 *)(v1 + 80));
        LODWORD(v11) = v1 + 80;
      }
    }
    v13 = *((unsigned int *)v6 + 14);
    v14 = 255;
    v15 = 255;
    v16 = 127;
    if ( *((_DWORD *)v6 + 30) < 0xFFu )
      v14 = *((_DWORD *)v6 + 30);
    if ( *((_DWORD *)v6 + 31) < 0xFFu )
      v15 = *((_DWORD *)v6 + 31);
    if ( (unsigned int)(v6[16] / v13) < 0x7F )
      v16 = v6[16] / v13;
    v17 = 255;
    if ( (unsigned int)(8LL * v6[17] / v13) < 0xFF )
      v17 = 8LL * v6[17] / v13;
    v18 = v14 | ((v15 | ((v16 | (v17 << 8)) << 8)) << 8);
    if ( v6[2] )
      v18 |= 0x800000u;
    v19 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      Template_zqqqqq(
        Microsoft_Windows_Dwm_CoreEnableBits,
        v18,
        v11,
        v13,
        100 * *((_DWORD *)v6 + 24) / (unsigned int)v13,
        100 * *((_DWORD *)v6 + 28) / (unsigned int)v13,
        v18,
        v6[16] / v13);
      v19 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    v20 = *((unsigned int *)v6 + 14);
    v21 = 255;
    v22 = 255;
    if ( *((_DWORD *)v6 + 30) < 0xFFu )
      v21 = *((_DWORD *)v6 + 30);
    if ( *((_DWORD *)v6 + 31) < 0xFFu )
      v22 = *((_DWORD *)v6 + 31);
    v23 = 255;
    if ( (unsigned int)(v6[18] / v20) < 0xFF )
      v23 = v6[18] / v20;
    v24 = v21 | ((v22 | (v23 << 8)) << 8);
    if ( v6[2] )
      v24 |= 0x80000000;
    if ( (v19 & 0x400) != 0 )
      Template_zqqqq(
        v19,
        v24,
        v11,
        v20,
        100 * *((_DWORD *)v6 + 17) / (unsigned int)v20,
        100 * *((_DWORD *)v6 + 21) / (unsigned int)v20,
        v24);
    v25 = *((_DWORD *)this + 137) >> 5;
    v26 = v6[1] & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    *(_QWORD *)v1 = v26;
    v27 = (_QWORD *)(*((_QWORD *)this + 69)
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
                          + 37 * (*(unsigned __int8 *)(v1 + 1) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                     + *(unsigned __int8 *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 7)) & (unsigned int)(v25 - 1)));
    v28 = *v6 & 0x8000000000000002uLL;
    *(_QWORD *)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v27;
    if ( v28 == 0x8000000000000002uLL )
      v27 = *(_QWORD **)(((unsigned __int64)v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    while ( (*v27 & 1) == 0 )
    {
      if ( (_QWORD *)*v27 == v6 )
      {
        *v27 = *v6;
        --*((_DWORD *)this + 136);
        *v6 |= 0x8000000000000002uLL;
        break;
      }
      v27 = (_QWORD *)*v27;
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((CAnimationTracking::AnimationScenarioLongtermStatistics *)v6);
  }
  *((_QWORD *)this + 70) = GetTickCount64() + 3600000;
}
