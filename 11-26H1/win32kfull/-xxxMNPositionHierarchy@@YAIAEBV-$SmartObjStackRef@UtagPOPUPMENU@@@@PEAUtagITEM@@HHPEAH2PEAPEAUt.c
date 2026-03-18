/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04
 * Callers:
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _MonitorFromRect @ 0x14002FC00 (_MonitorFromRect.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x140175E24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxSendMinRectMessages @ 0x14021D3B4 (xxxSendMinRectMessages.c)
 *     ?GetMenuRightAlignHint@@YA_NXZ @ 0x140295A68 (-GetMenuRightAlignHint@@YA_NXZ.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(__int64 **a1, __int64 a2, int a3, int a4, int *a5, int *a6, __int64 a7)
{
  __int64 *v10; // rax
  bool v11; // zf
  __int64 *v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // rcx
  _DWORD *v15; // rax
  char v16; // si
  char v17; // si
  int v18; // edi
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rax
  bool v22; // bl
  int v23; // eax
  int v24; // edi
  int v25; // edx
  __int64 v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rbx
  int v29; // ebx
  int v30; // esi
  int v31; // r13d
  _QWORD *v32; // rax
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // r8
  struct tagMONITOR *v36; // rax
  __int64 *v37; // rdx
  struct tagMONITOR *v38; // rbx
  int v39; // edx
  int v40; // r15d
  int v41; // esi
  unsigned int DpiForSystem; // eax
  _QWORD *v43; // rcx
  int v46; // [rsp+24h] [rbp-6Dh]
  __int128 v47; // [rsp+28h] [rbp-69h] BYREF
  int v48; // [rsp+38h] [rbp-59h]
  int v49; // [rsp+3Ch] [rbp-55h]
  int v50; // [rsp+40h] [rbp-51h]
  __int64 v51; // [rsp+48h] [rbp-49h]
  __int64 v52; // [rsp+50h] [rbp-41h]
  int *v53; // [rsp+58h] [rbp-39h]
  int *v54; // [rsp+60h] [rbp-31h]
  __int64 v55; // [rsp+68h] [rbp-29h]
  _QWORD v56[2]; // [rsp+70h] [rbp-21h] BYREF
  __int128 v57; // [rsp+80h] [rbp-11h] BYREF

  v53 = a5;
  v54 = a6;
  v55 = a7;
  v10 = *a1;
  v52 = a2;
  v47 = 0LL;
  v11 = (*(_DWORD *)*v10 & 1) == 0;
  v12 = *a1;
  if ( !v11 )
  {
    v13 = 4;
    v14 = *(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL);
    v15 = *(_DWORD **)a2;
    v16 = *(_BYTE *)(v14 + 31);
    v57 = 0LL;
    v17 = v16 & 0x20;
    v18 = v15[16];
    v49 = v15[17];
    LODWORD(v14) = v15[18];
    v50 = v15[19];
    v19 = *a1;
    v46 = v14;
    v48 = v18;
    v20 = *(_QWORD *)(*(_QWORD *)(*v19 + 16) + 40LL);
    v21 = *a1;
    v57 = *(_OWORD *)(v20 + 88);
    v22 = !*(_QWORD *)(*v21 + 40) || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 40LL) & 0x20) == 0;
    if ( v17 && IsTrayWindow(*(_QWORD **)(**a1 + 16), 1LL) )
      xxxSendMinRectMessages(*(_QWORD *)(**a1 + 16), &v57);
    if ( GetMenuRightAlignHint() || !v22 )
    {
      *(_DWORD *)**a1 |= 0x10u;
      if ( v17 )
      {
        v24 = DWORD2(v57) - a3;
LABEL_20:
        v26 = MonitorFromRect((__int32 *)&v57, 1LL, 0);
        v27 = *a1;
        v28 = v26;
        v51 = v26;
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v56, *v27);
        MNGetPopupBoundsRect(v56, v28, &v47, 0LL);
        v29 = DWORD1(v47);
        if ( v17 )
        {
          v30 = DWORD1(v57) - a4;
          if ( DWORD1(v57) - a4 < SDWORD1(v47) )
            v30 = HIDWORD(v57);
        }
        else
        {
          v30 = HIDWORD(v57);
        }
        if ( v24 >= DWORD2(v47) - a3 )
          v24 = DWORD2(v47) - a3;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
        {
          v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL)
              - v24
              - a3
              + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 96LL);
          if ( v24 >= DWORD2(v47) - a3 )
            v24 = DWORD2(v47) - a3;
        }
        v31 = v47;
        goto LABEL_39;
      }
      v25 = v46;
      v23 = v57;
      v24 = v57 + v46 + v18 - a3;
    }
    else
    {
      v23 = v57;
      if ( v17 )
        v24 = v57;
      else
        v24 = v57 + v18;
      if ( v17 )
        goto LABEL_20;
      v25 = v46;
    }
    LODWORD(v57) = v48 + v23;
    DWORD2(v57) = v25 + v48 + v23;
    DWORD1(v57) += v49;
    HIDWORD(v57) = DWORD1(v57) + v50;
    goto LABEL_20;
  }
  v13 = 1;
  v24 = *(_DWORD *)(*(_QWORD *)a2 + 64LL)
      + *(_DWORD *)(*(_QWORD *)a2 + 72LL)
      + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v12 + 16) + 40LL) + 88LL);
  v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 92LL) + *(_DWORD *)(*(_QWORD *)a2 + 68LL);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 124LL) & 3) != 0 )
  {
    v32 = (_QWORD *)MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 116LL));
    v33 = *(_DWORD *)(*v32 + 68LL);
    v30 += *(_DWORD *)(GetDpiMetricsForCurrentThread(*v32, v34, v35) + 28) - v33;
  }
  v36 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1u, 0);
  v37 = *a1;
  v38 = v36;
  v51 = (__int64)v36;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v56, *v37);
  MNGetPopupBoundsRect(v56, v38, &v47, 0LL);
  v31 = v47;
  if ( ((*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1) != ((*(_DWORD *)**a1 & 0x10) != 0)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3 >= (int)v47 )
  {
    v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
    v13 = 2;
  }
  if ( v24 + a3 > SDWORD2(v47) )
  {
    v13 = 2;
    v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
  }
  v29 = DWORD1(v47);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    v13 ^= 3u;
LABEL_39:
  v39 = a4;
  v40 = HIDWORD(v47);
  if ( v30 + a4 <= SHIDWORD(v47) )
    goto LABEL_47;
  v41 = v30 - a4;
  if ( (*(_DWORD *)**a1 & 1) != 0 )
  {
    DpiForSystem = GetDpiForSystem();
    v30 = v41 - GetDpiDependentMetric(26, DpiForSystem);
    if ( v30 < v29 )
    {
LABEL_46:
      v30 = v40 - a4;
      goto LABEL_47;
    }
    v39 = a4;
    v13 = 8;
  }
  else
  {
    v30 = *(_DWORD *)(*(_QWORD *)v52 + 76LL) + 6 + v41;
  }
  if ( v30 < v29 || v30 + v39 > v40 )
    goto LABEL_46;
LABEL_47:
  v43 = (_QWORD *)v55;
  if ( v24 <= v31 )
    v24 = v31;
  *v53 = v24;
  if ( v30 <= v29 )
    v30 = v29;
  *v54 = v30;
  if ( v43 )
    *v43 = v51;
  return v13;
}
