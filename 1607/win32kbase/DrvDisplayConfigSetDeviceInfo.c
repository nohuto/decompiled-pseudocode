/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C00C87A0
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00B9A80 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C004A46C (DrvIsWddmDriverPresent.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0064634 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C006465C (GetPathsModality.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00C8B60 (DrvDisplayConfigSetScaleFactorOverride.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // r14
  unsigned int *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  struct _D3DKMT_GETPATHSMODALITY *v29; // rsi
  int PathsModality; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rbp
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  int v60; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v61; // [rsp+20h] [rbp-58h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v62; // [rsp+28h] [rbp-50h]
  struct _D3DKMT_GETPATHSMODALITY *v63; // [rsp+90h] [rbp+18h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent() )
    return 3221225659LL;
  v5 = (unsigned int *)(a1 + 4);
  v6 = (unsigned int *)(a1 + 2);
  result = ((__int64 (__fastcall *)(int *, _QWORD, int *, int *))qword_1C011B830)(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result >= 0 )
  {
    v11 = *a1;
    if ( *a1 == -6 )
    {
      if ( a1[1] == 28 )
      {
        v60 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C011B4B8)(0LL, a1);
        v12 = v60;
        if ( v60 < 0 )
          goto LABEL_12;
        if ( !a1[6] )
          return (unsigned int)v12;
        LODWORD(v62) = 4;
        LODWORD(v61) = 2191;
        v19 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v61, v62, 0, 0LL, 1, 0LL, 0LL, a2);
        goto LABEL_39;
      }
      return -1073741811LL;
    }
    if ( v11 == -4 )
    {
      if ( a1[1] == 24 )
      {
        LODWORD(v12) = DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
        return (unsigned int)v12;
      }
      return -1073741811LL;
    }
    if ( v11 != 5 )
    {
      if ( v11 != 8 )
      {
        LODWORD(v12) = -1073741811;
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9, v10);
        v13[3] = -1073741811LL;
        v13[4] = *a1;
        v13[5] = a1[3];
        v13[6] = *v6;
        v14 = *v5;
LABEL_9:
        v13[7] = v14;
        WdLogEvent5_WdError(v13);
        return (unsigned int)v12;
      }
      if ( a1[1] == 24 )
      {
        v15 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C011B4B8)(0LL, a1);
        v12 = v15;
        if ( v15 < 0 )
        {
LABEL_12:
          v18 = WdLogNewEntry5_WdWarning(v17, v16);
          *(_QWORD *)(v18 + 24) = a1;
          *(_QWORD *)(v18 + 32) = v12;
          goto LABEL_41;
        }
        LODWORD(v62) = 0;
        LODWORD(v61) = 2447;
        v19 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v61, v62, 0, 0LL, 1, 0LL, 0LL, a2);
LABEL_39:
        v12 = v19;
        if ( v19 >= 0 )
          return (unsigned int)v12;
        v18 = WdLogNewEntry5_WdWarning(v21, v20);
        *(_QWORD *)(v18 + 24) = v12;
LABEL_41:
        WdLogEvent5_WdWarning(v18);
        return (unsigned int)v12;
      }
      return -1073741811LL;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7);
    v22[3] = *a1;
    v22[4] = a1[3];
    v22[5] = *v6;
    v22[6] = *v5;
    v22[7] = a1[5] & 1;
    WdLogEvent5_WdEvent(v22);
    v23 = ((__int64 (*)(void))qword_1C011B4D0)();
    v12 = v23;
    if ( v23 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v26, v27);
      v13[3] = v12;
      v13[4] = a1[3];
      v13[5] = *v6;
      v13[6] = *v5;
      v14 = a1[5] & 1;
      goto LABEL_9;
    }
    v28 = a1[5];
    v29 = 0LL;
    v63 = 0LL;
    if ( (v28 & 1) != 0 )
    {
      PathsModality = GetPathsModality(0LL, &v63, 64LL, 0LL);
      v35 = PathsModality;
      if ( PathsModality < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31, v33, v34);
        v36[3] = v35;
        v36[4] = a1[3];
        v36[5] = *v6;
        v36[6] = *v5;
        v36[7] = a1[5] & 1;
        WdLogEvent5_WdError(v36);
        if ( (_DWORD)v35 == -1073741801 )
        {
          if ( (int)((__int64 (*)(void))qword_1C011B4D8)() < 0 )
          {
            v41 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
            WdLogEvent5_WdAssertion(v41);
          }
          return 3221225495LL;
        }
      }
      v29 = v63;
    }
    v42 = (a1[5] & 1) == 0;
    LODWORD(v42) = v42 | 0x80000000;
    v43 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_1C011B490)(*(_QWORD *)v6, *v5, v42, 0LL);
    v12 = v43;
    if ( v43 >= 0 )
    {
      if ( !v29 )
        goto LABEL_29;
      v49 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C011B458)(0x40000000LL, v29);
      v54 = v49;
      if ( v49 >= 0 )
        goto LABEL_29;
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50, v52, v53);
      v48[3] = v54;
    }
    else
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44, v46, v47);
      v48[3] = v12;
    }
    v48[4] = a1[3];
    v48[5] = *v6;
    v48[6] = *v5;
    v48[7] = a1[5] & 1;
    WdLogEvent5_WdError(v48);
LABEL_29:
    if ( (int)((__int64 (*)(void))qword_1C011B4D8)() < 0 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
      WdLogEvent5_WdAssertion(v59);
    }
    FreePathsModality(v29);
    return (unsigned int)v12;
  }
  return result;
}
