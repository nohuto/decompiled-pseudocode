/*
 * XREFs of DrvDisplayConfigSetDeviceInfo @ 0x1C00BB2A0
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AB8D0 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001C8B0 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C001C8D8 (GetPathsModality.c)
 *     DrvIsWddmDriverPresent @ 0x1C001F080 (DrvIsWddmDriverPresent.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00BB640 (DrvDisplayConfigSetScaleFactorOverride.c)
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
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  struct _D3DKMT_GETPATHSMODALITY *v25; // rsi
  int PathsModality; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbp
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  struct _D3DKMT_GETPATHSMODALITY *v51; // [rsp+78h] [rbp+10h] BYREF

  if ( !(unsigned int)DrvIsWddmDriverPresent() )
    return 3221225659LL;
  v3 = (unsigned int *)(a1 + 4);
  v4 = (unsigned int *)(a1 + 2);
  result = ((__int64 (__fastcall *)(int *, _QWORD, int *, int *))qword_1C01016C8)(
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
        v50 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0101358)(0LL, a1);
        v10 = v50;
        if ( v50 < 0 )
          goto LABEL_12;
        if ( !a1[6] )
          return (unsigned int)v10;
        v16 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, 0x88Fu, 4u, 1, 0LL, 1, 0LL);
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
        v13 = ((__int64 (__fastcall *)(_QWORD, int *))qword_1C0101358)(0LL, a1);
        v10 = v13;
        if ( v13 < 0 )
        {
LABEL_12:
          v15 = WdLogNewEntry5_WdWarning(v14);
          *(_QWORD *)(v15 + 24) = a1;
          *(_QWORD *)(v15 + 32) = v10;
          goto LABEL_41;
        }
        v16 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, 0x98Fu, 0, 1, 0LL, 1, 0LL);
LABEL_39:
        v10 = v16;
        if ( v16 >= 0 )
          return (unsigned int)v10;
        v15 = WdLogNewEntry5_WdWarning(v17);
        *(_QWORD *)(v15 + 24) = v10;
LABEL_41:
        WdLogEvent5_WdWarning(v15);
        return (unsigned int)v10;
      }
      return -1073741811LL;
    }
    v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, v5);
    v18[3] = *a1;
    v18[4] = a1[3];
    v18[5] = *v4;
    v18[6] = *v3;
    v18[7] = a1[5] & 1;
    WdLogEvent5_WdEvent(v18);
    v19 = ((__int64 (*)(void))qword_1C0101370)();
    v10 = v19;
    if ( v19 < 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22, v23);
      v11[3] = v10;
      v11[4] = a1[3];
      v11[5] = *v4;
      v11[6] = *v3;
      v12 = a1[5] & 1;
      goto LABEL_9;
    }
    v24 = a1[5];
    v25 = 0LL;
    v51 = 0LL;
    if ( (v24 & 1) != 0 )
    {
      PathsModality = GetPathsModality(0LL, &v51, 0x40u, 0);
      v31 = PathsModality;
      if ( PathsModality < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29, v30);
        v32[3] = v31;
        v32[4] = a1[3];
        v32[5] = *v4;
        v32[6] = *v3;
        v32[7] = a1[5] & 1;
        WdLogEvent5_WdError(v32);
        if ( (_DWORD)v31 == -1073741801 )
        {
          if ( (int)((__int64 (*)(void))qword_1C0101378)() < 0 )
          {
            v34 = WdLogNewEntry5_WdAssertion(v33);
            WdLogEvent5_WdAssertion(v34);
          }
          return 3221225495LL;
        }
      }
      v25 = v51;
    }
    v35 = (a1[5] & 1) == 0;
    LODWORD(v35) = v35 | 0x80000000;
    v36 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD))qword_1C0101330)(*(_QWORD *)v4, *v3, v35, 0LL);
    v10 = v36;
    if ( v36 >= 0 )
    {
      if ( !v25 )
        goto LABEL_29;
      v42 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C01012F8)(0x40000000LL, v25);
      v47 = v42;
      if ( v42 >= 0 )
        goto LABEL_29;
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v45, v46);
      v41[3] = v47;
    }
    else
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37, v39, v40);
      v41[3] = v10;
    }
    v41[4] = a1[3];
    v41[5] = *v4;
    v41[6] = *v3;
    v41[7] = a1[5] & 1;
    WdLogEvent5_WdError(v41);
LABEL_29:
    if ( (int)((__int64 (*)(void))qword_1C0101378)() < 0 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v48);
      WdLogEvent5_WdAssertion(v49);
    }
    FreePathsModality(v25);
    return (unsigned int)v10;
  }
  return result;
}
