/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C00BCAD0
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AFDD0 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     DrvIsWddmDriverPresent @ 0x1C004C9D8 (DrvIsWddmDriverPresent.c)
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0052548 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     sub_1C0052570 @ 0x1C0052570 (sub_1C0052570.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00BCE70 (DrvDisplayConfigSetScaleFactorOverride.c)
 */

__int64 __fastcall DrvDisplayConfigSetDeviceInfo(int *a1)
{
  __int64 result; // rax
  unsigned int *v3; // r14
  unsigned int *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  struct _D3DKMT_GETPATHSMODALITY *v27; // rsi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rbp
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  int v58; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v59; // [rsp+20h] [rbp-48h]
  struct _D3DKMT_GETPATHSMODALITY *v60; // [rsp+78h] [rbp+10h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent() )
    return 3221225659LL;
  v3 = (unsigned int *)(a1 + 4);
  v4 = (unsigned int *)(a1 + 2);
  result = ((__int64 (__fastcall *)(int *, _QWORD, int *, int *))qword_1C01044E0)(
             a1 + 2,
             (unsigned int)a1[4],
             a1 + 2,
             a1 + 4);
  if ( (int)result >= 0 )
  {
    v9 = *a1;
    if ( *a1 == -6 )
    {
      if ( a1[1] == 28 )
      {
        v58 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0104178)(0LL, a1);
        v10 = v58;
        if ( v58 < 0 )
          goto LABEL_12;
        if ( !a1[6] )
          return (unsigned int)v10;
        LODWORD(v59) = 2191;
        v17 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v59, 4u, 1, 0LL, 1, 0LL);
        goto LABEL_39;
      }
      return -1073741811LL;
    }
    if ( v9 == -4 )
    {
      if ( a1[1] == 24 )
      {
        LODWORD(v10) = DrvDisplayConfigSetScaleFactorOverride(a1, 0LL);
        return (unsigned int)v10;
      }
      return -1073741811LL;
    }
    if ( v9 != 5 )
    {
      if ( v9 != 8 )
      {
        LODWORD(v10) = -1073741811;
        v11 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7, v8);
        v11[3] = -1073741811LL;
        v11[4] = *a1;
        v11[5] = a1[3];
        v11[6] = *v4;
        v12 = *v3;
LABEL_9:
        v11[7] = v12;
        WdLogEvent5_WdError(v11);
        return (unsigned int)v10;
      }
      if ( a1[1] == 24 )
      {
        v13 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0104178)(0LL, a1);
        v10 = v13;
        if ( v13 < 0 )
        {
LABEL_12:
          v16 = WdLogNewEntry5_WdWarning(v15, v14);
          *(_QWORD *)(v16 + 24) = a1;
          *(_QWORD *)(v16 + 32) = v10;
          goto LABEL_41;
        }
        LODWORD(v59) = 2447;
        v17 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v59, 0, 1, 0LL, 1, 0LL);
LABEL_39:
        v10 = v17;
        if ( v17 >= 0 )
          return (unsigned int)v10;
        v16 = WdLogNewEntry5_WdWarning(v19, v18);
        *(_QWORD *)(v16 + 24) = v10;
LABEL_41:
        WdLogEvent5_WdWarning(v16);
        return (unsigned int)v10;
      }
      return -1073741811LL;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, v5);
    v20[3] = *a1;
    v20[4] = a1[3];
    v20[5] = *v4;
    v20[6] = *v3;
    v20[7] = a1[5] & 1;
    WdLogEvent5_WdEvent(v20);
    v21 = ((__int64 (*)(void))qword_1C0104190)();
    v10 = v21;
    if ( v21 < 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24, v25);
      v11[3] = v10;
      v11[4] = a1[3];
      v11[5] = *v4;
      v11[6] = *v3;
      v12 = a1[5] & 1;
      goto LABEL_9;
    }
    v26 = a1[5];
    v27 = 0LL;
    v60 = 0LL;
    if ( (v26 & 1) != 0 )
    {
      v28 = sub_1C0052570(0LL, &v60, 64LL, 0LL);
      v33 = v28;
      if ( v28 < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31, v32);
        v34[3] = v33;
        v34[4] = a1[3];
        v34[5] = *v4;
        v34[6] = *v3;
        v34[7] = a1[5] & 1;
        WdLogEvent5_WdError(v34);
        if ( (_DWORD)v33 == -1073741801 )
        {
          if ( (int)((__int64 (*)(void))qword_1C0104198)() < 0 )
          {
            v39 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
            WdLogEvent5_WdAssertion(v39);
          }
          return 3221225495LL;
        }
      }
      v27 = v60;
    }
    v40 = (a1[5] & 1) == 0;
    LODWORD(v40) = v40 | 0x80000000;
    v41 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_1C0104150)(*(_QWORD *)v4, *v3, v40, 0LL);
    v10 = v41;
    if ( v41 >= 0 )
    {
      if ( !v27 )
        goto LABEL_29;
      v47 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C0104118)(0x40000000LL, v27);
      v52 = v47;
      if ( v47 >= 0 )
        goto LABEL_29;
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48, v50, v51);
      v46[3] = v52;
    }
    else
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42, v44, v45);
      v46[3] = v10;
    }
    v46[4] = a1[3];
    v46[5] = *v4;
    v46[6] = *v3;
    v46[7] = a1[5] & 1;
    WdLogEvent5_WdError(v46);
LABEL_29:
    if ( (int)((__int64 (*)(void))qword_1C0104198)() < 0 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
      WdLogEvent5_WdAssertion(v57);
    }
    FreePathsModality(v27);
    return (unsigned int)v10;
  }
  return result;
}
