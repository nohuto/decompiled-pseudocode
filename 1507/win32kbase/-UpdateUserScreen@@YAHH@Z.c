/*
 * XREFs of ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     UpdatePointerDevices_0 @ 0x1C0002230 (UpdatePointerDevices_0.c)
 *     IsUpdateCursorSizesSupported_0 @ 0x1C0002278 (IsUpdateCursorSizesSupported_0.c)
 *     UpdateCursorSizes_0 @ 0x1C0002280 (UpdateCursorSizes_0.c)
 *     IsBuildMouseAccelerationCurveSupported_0 @ 0x1C0002288 (IsBuildMouseAccelerationCurveSupported_0.c)
 *     BuildMouseAccelerationCurve_0 @ 0x1C0002290 (BuildMouseAccelerationCurve_0.c)
 *     IsUpdatePointerDevicesSupported_0 @ 0x1C0002298 (IsUpdatePointerDevicesSupported_0.c)
 *     IsSetDesktopMetricsSupported_0 @ 0x1C00022A0 (IsSetDesktopMetricsSupported_0.c)
 *     SetDesktopMetrics_0 @ 0x1C00022A8 (SetDesktopMetrics_0.c)
 *     HdevFromMonitor @ 0x1C000AFD0 (HdevFromMonitor.c)
 *     GetCharDimensions @ 0x1C0015D70 (GetCharDimensions.c)
 *     ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C00172E8 (-InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0042050 (SetOrCreateRectRgnIndirectPublic.c)
 *     MonitorFromHdev @ 0x1C0054B40 (MonitorFromHdev.c)
 *     MinimumMonitorDpi @ 0x1C00569C8 (MinimumMonitorDpi.c)
 *     GreGetDeviceCaps @ 0x1C0056DB0 (GreGetDeviceCaps.c)
 *     InitLoadResources @ 0x1C00594A8 (InitLoadResources.c)
 *     EnforceColorDependentSettings @ 0x1C005A3A0 (EnforceColorDependentSettings.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005A4BC (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyMonitor @ 0x1C006D4B0 (DestroyMonitor.c)
 *     UserSleep @ 0x1C0083210 (UserSleep.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall UpdateUserScreen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  int v5; // r12d
  __int64 v6; // r14
  struct tagMONITOR **v7; // rsi
  struct tagMONITOR **v8; // rbx
  __int64 CurrentProcessWin32Process; // rdi
  int v10; // eax
  __int16 DeviceCaps; // ax
  struct tagMONITOR **v12; // rdi
  struct tagMONITOR **v13; // r15
  unsigned int v14; // eax
  unsigned __int16 v15; // di
  __int64 i; // rbx
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // edi
  int v23; // r14d
  int v24; // r15d
  int v25; // r13d
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  _DWORD *v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  int v38; // edi
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 j; // r8
  unsigned __int8 v42; // al
  __int16 v43; // r9
  int CharDimensions; // eax
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  char *v47; // rdx
  int v48; // ecx
  __int128 v49; // xmm0
  struct tagMONITOR *v51; // rax
  int v52; // r9d
  int v53; // r10d
  __int64 v54; // [rsp+20h] [rbp-50h]
  __int128 v55; // [rsp+20h] [rbp-50h]
  __int64 v56; // [rsp+28h] [rbp-48h]
  _OWORD v57[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v58; // [rsp+60h] [rbp-10h]
  int v59; // [rsp+68h] [rbp-8h]

  v4 = 0;
  v5 = a1;
  v6 = *(_QWORD *)(gpDispInfo + 8);
  v7 = (struct tagMONITOR **)(gpDispInfo + 96);
  v8 = *(struct tagMONITOR ***)(gpDispInfo + 96);
  if ( !(_DWORD)a1 )
  {
    while ( _InterlockedCompareExchange(&gdwMonitorBusy, 1, 0) )
      UserSleep(1LL);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4, v54, v56);
  v10 = *(_DWORD *)(CurrentProcessWin32Process + 776);
  if ( (v10 & 0x6000) == 0 )
  {
    v4 = 1;
    *(_DWORD *)(CurrentProcessWin32Process + 776) = v10 | 0x4000;
  }
  DeviceCaps = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 24), 90);
  *(_WORD *)(gpDispInfo + 176) = DeviceCaps;
  *((_WORD *)gpsi + 3643) = DeviceCaps;
  InitLoadResources(1LL);
  if ( v4 )
    *(_DWORD *)(CurrentProcessWin32Process + 776) &= ~0x4000u;
  while ( v8 )
  {
    v12 = v8;
    v13 = v8 + 2;
    v8 = (struct tagMONITOR **)v8[2];
    v14 = HdevFromMonitor((__int64)v12);
    if ( v14 == -1 )
    {
      DestroyMonitor(v12);
    }
    else
    {
      SetMonitorData((struct tagMONITOR *)v12, v14);
      v7 = v13;
    }
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    do
    {
      if ( !MonitorFromHdev(*(_QWORD *)(32 * ((unsigned int)v8 + 1LL) + v6)) )
      {
        v51 = SetMonitorData(0LL, (unsigned int)v8);
        if ( v51 )
        {
          *v7 = v51;
          v7 = (struct tagMONITOR **)((char *)v51 + 16);
        }
      }
      LODWORD(v8) = (_DWORD)v8 + 1;
    }
    while ( (unsigned int)v8 < *(_DWORD *)(v6 + 20) );
  }
  v15 = MinimumMonitorDpi();
  for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 16) )
    InitializeMonitorDpiRectsAndTransforms((struct tagMONITOR *)i, v15);
  if ( (int)IsUpdateCursorSizesSupported_0() >= 0 )
    UpdateCursorSizes_0();
  *((_DWORD *)gpsi + 551) = (*(_BYTE *)(v6 + 16) & 1) == 0;
  v17 = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 24), 38) & 0x100;
  v55 = 0uLL;
  *(_DWORD *)(gpDispInfo + 180) ^= (*(_DWORD *)(gpDispInfo + 180) ^ (2 * (v17 != 0))) & 2;
  v18 = gpDispInfo;
  *(_QWORD *)(gpDispInfo + 120) = 0LL;
  *(_QWORD *)(v18 + 128) = 0LL;
  v19 = gpDispInfo;
  *(_QWORD *)(gpDispInfo + 136) = 0LL;
  *(_QWORD *)(v19 + 144) = 0LL;
  *(_DWORD *)(gpDispInfo + 80) = 0;
  v20 = gpDispInfo;
  v21 = *(_QWORD *)(gpDispInfo + 96);
  if ( v21 )
  {
    v22 = (unsigned __int128)0LL >> 96;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    do
    {
      if ( (*(_DWORD *)(v21 + 24) & 1) != 0 )
      {
        if ( v25 >= *(_DWORD *)(v21 + 28) )
          v25 = *(_DWORD *)(v21 + 28);
        v26 = *(_DWORD *)(v21 + 60);
        if ( v24 >= *(_DWORD *)(v21 + 32) )
          v24 = *(_DWORD *)(v21 + 32);
        LODWORD(v55) = v25;
        if ( v23 <= *(_DWORD *)(v21 + 36) )
          v23 = *(_DWORD *)(v21 + 36);
        DWORD1(v55) = v24;
        if ( v22 <= *(_DWORD *)(v21 + 40) )
          v22 = *(_DWORD *)(v21 + 40);
        DWORD2(v55) = v23;
        if ( *(_DWORD *)(v20 + 136) < v26 )
          v26 = *(_DWORD *)(v20 + 136);
        HIDWORD(v55) = v22;
        *(_DWORD *)(v20 + 136) = v26;
        v27 = *(_DWORD *)(v21 + 64);
        if ( *(_DWORD *)(gpDispInfo + 140) < v27 )
          v27 = *(_DWORD *)(gpDispInfo + 140);
        *(_DWORD *)(gpDispInfo + 140) = v27;
        v28 = *(_DWORD *)(v21 + 68);
        if ( *(_DWORD *)(gpDispInfo + 144) > v28 )
          v28 = *(_DWORD *)(gpDispInfo + 144);
        *(_DWORD *)(gpDispInfo + 144) = v28;
        v29 = *(_DWORD *)(v21 + 72);
        if ( *(_DWORD *)(gpDispInfo + 148) > v29 )
          v29 = *(_DWORD *)(gpDispInfo + 148);
        *(_DWORD *)(gpDispInfo + 148) = v29;
        v30 = *(_DWORD *)(v21 + 44);
        if ( *(_DWORD *)(gpDispInfo + 120) < v30 )
          v30 = *(_DWORD *)(gpDispInfo + 120);
        *(_DWORD *)(gpDispInfo + 120) = v30;
        v31 = *(_DWORD *)(v21 + 48);
        if ( *(_DWORD *)(gpDispInfo + 124) < v31 )
          v31 = *(_DWORD *)(gpDispInfo + 124);
        *(_DWORD *)(gpDispInfo + 124) = v31;
        v32 = *(_DWORD *)(v21 + 52);
        if ( *(_DWORD *)(gpDispInfo + 128) > v32 )
          v32 = *(_DWORD *)(gpDispInfo + 128);
        *(_DWORD *)(gpDispInfo + 128) = v32;
        v33 = *(_DWORD *)(v21 + 56);
        if ( *(_DWORD *)(gpDispInfo + 132) > v33 )
          v33 = *(_DWORD *)(gpDispInfo + 132);
        *(_DWORD *)(gpDispInfo + 132) = v33;
        ++*(_DWORD *)(gpDispInfo + 80);
      }
      if ( *((_DWORD *)gpsi + 551) )
      {
        if ( v17 )
          *(_DWORD *)(v21 + 24) |= 2u;
        else
          *(_DWORD *)(v21 + 24) &= ~2u;
      }
      else if ( (*(_DWORD *)(*(_QWORD *)(v21 + 160) + 2196LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v21 + 24) |= 2u;
        *(_DWORD *)(gpDispInfo + 180) |= 2u;
      }
      if ( (int)IsBuildMouseAccelerationCurveSupported_0() >= 0 )
        BuildMouseAccelerationCurve_0();
      v21 = *(_QWORD *)(v21 + 16);
      v20 = gpDispInfo;
    }
    while ( v21 );
  }
  *(_OWORD *)(v20 + 104) = v55;
  if ( (int)IsUpdatePointerDevicesSupported_0() >= 0 )
    UpdatePointerDevices_0();
  if ( !v5 )
    _InterlockedExchange(&gdwMonitorBusy, 0);
  if ( !gfRemotingConsole || !gpConsoleShadowDisplayChangeEvent )
    goto LABEL_57;
  v35 = gpDispInfo;
  v34 = gpsi;
  v52 = *(_DWORD *)(gpDispInfo + 104);
  if ( *((_DWORD *)gpsi + 546) != v52
    || (v53 = *(_DWORD *)(gpDispInfo + 108), *((_DWORD *)gpsi + 547) != v53)
    || *((_DWORD *)gpsi + 548) != *(_DWORD *)(gpDispInfo + 112) - v52
    || *((_DWORD *)gpsi + 549) != *(_DWORD *)(gpDispInfo + 116) - v53 )
  {
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
LABEL_57:
    v34 = gpsi;
    v35 = gpDispInfo;
  }
  v34[470] = *(_DWORD *)(*(_QWORD *)(v35 + 88) + 36LL);
  *((_DWORD *)gpsi + 471) = *(_DWORD *)(*(_QWORD *)(gpDispInfo + 88) + 40LL);
  *((_DWORD *)gpsi + 546) = *(_DWORD *)(gpDispInfo + 104);
  *((_DWORD *)gpsi + 547) = *(_DWORD *)(gpDispInfo + 108);
  *((_DWORD *)gpsi + 548) = *(_DWORD *)(gpDispInfo + 112) - *(_DWORD *)(gpDispInfo + 104);
  *((_DWORD *)gpsi + 549) = *(_DWORD *)(gpDispInfo + 116) - *(_DWORD *)(gpDispInfo + 108);
  *((_DWORD *)gpsi + 529) = *((_DWORD *)gpsi + 548) + 2 * (*((_DWORD *)gpsi + 502) + *((_DWORD *)gpsi + 515));
  *((_DWORD *)gpsi + 530) = *((_DWORD *)gpsi + 549) + 2 * (*((_DWORD *)gpsi + 503) + *((_DWORD *)gpsi + 516));
  *((_DWORD *)gpsi + 567) = *(_DWORD *)(*(_QWORD *)(gpDispInfo + 88) + 52LL);
  *((_DWORD *)gpsi + 568) = *(_DWORD *)(*(_QWORD *)(gpDispInfo + 88) + 56LL);
  *((_DWORD *)gpsi + 643) = *(_DWORD *)(gpDispInfo + 120);
  *((_DWORD *)gpsi + 644) = *(_DWORD *)(gpDispInfo + 124);
  *((_DWORD *)gpsi + 645) = *(_DWORD *)(gpDispInfo + 128) - *(_DWORD *)(gpDispInfo + 120);
  *((_DWORD *)gpsi + 646) = *(_DWORD *)(gpDispInfo + 132) - *(_DWORD *)(gpDispInfo + 124);
  *((_DWORD *)gpsi + 626) = *((_DWORD *)gpsi + 645) + 2 * (*((_DWORD *)gpsi + 502) + *((_DWORD *)gpsi + 515));
  *((_DWORD *)gpsi + 627) = *((_DWORD *)gpsi + 646) + 2 * (*((_DWORD *)gpsi + 503) + *((_DWORD *)gpsi + 516));
  *((_DWORD *)gpsi + 664) = *(_DWORD *)(*(_QWORD *)(gpDispInfo + 88) + 68LL);
  *((_DWORD *)gpsi + 665) = *(_DWORD *)(*(_QWORD *)(gpDispInfo + 88) + 72LL);
  *((_DWORD *)gpsi + 740) = *(_DWORD *)(gpDispInfo + 136);
  *((_DWORD *)gpsi + 741) = *(_DWORD *)(gpDispInfo + 140);
  *((_DWORD *)gpsi + 742) = *(_DWORD *)(gpDispInfo + 144) - *(_DWORD *)(gpDispInfo + 136);
  *((_DWORD *)gpsi + 743) = *(_DWORD *)(gpDispInfo + 148) - *(_DWORD *)(gpDispInfo + 140);
  *((_DWORD *)gpsi + 723) = *((_DWORD *)gpsi + 742) + 2 * (*((_DWORD *)gpsi + 502) + *((_DWORD *)gpsi + 515));
  *((_DWORD *)gpsi + 724) = *((_DWORD *)gpsi + 743) + 2 * (*((_DWORD *)gpsi + 503) + *((_DWORD *)gpsi + 516));
  *((_DWORD *)gpsi + 550) = *(_DWORD *)(gpDispInfo + 80);
  memset(&gaptMouse, 0, 0x600uLL);
  if ( (int)IsSetDesktopMetricsSupported_0() >= 0 )
    SetDesktopMetrics_0();
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 152), (ERECTL *)&gZero);
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 160), (ERECTL *)&gZero);
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 168), (ERECTL *)&gZero);
  v36 = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 152) )
  {
    v37 = *(_QWORD *)(gpDispInfo + 96);
    v38 = 0;
    if ( v37 )
    {
      do
      {
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic((HRGN *)(v37 + 128), (ERECTL *)(v37 + 28))
          && (*(_DWORD *)(v37 + 24) & 1) != 0 )
        {
          v38 = GreCombineRgn(*(HRGN *)(gpDispInfo + 152), *(HRGN *)(gpDispInfo + 152), *(HRGN *)(v37 + 128), 2);
        }
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic((HRGN *)(v37 + 136), (ERECTL *)(v37 + 44))
          && (*(_DWORD *)(v37 + 24) & 1) != 0 )
        {
          v38 = GreCombineRgn(*(HRGN *)(gpDispInfo + 160), *(HRGN *)(gpDispInfo + 160), *(HRGN *)(v37 + 136), 2);
        }
        *(_DWORD *)(gpDispInfo + 180) ^= (*(_DWORD *)(gpDispInfo + 180) ^ (v38 == 2)) & 1;
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic((HRGN *)(v37 + 144), (ERECTL *)(v37 + 60))
          && (*(_DWORD *)(v37 + 24) & 1) != 0 )
        {
          v38 = GreCombineRgn(*(HRGN *)(gpDispInfo + 168), *(HRGN *)(gpDispInfo + 168), *(HRGN *)(v37 + 144), 2);
        }
        v37 = *(_QWORD *)(v37 + 16);
      }
      while ( v37 );
      v36 = gpDispInfo;
    }
  }
  if ( (*(_DWORD *)(v36 + 180) & 1) != 0 )
    v39 = 0LL;
  else
    v39 = *(_QWORD *)(v36 + 152);
  v40 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( j = *(_QWORD *)(v40 + 16); j; j = *(_QWORD *)(j + 16) )
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 8) + 16LL) + 200LL) = v39;
      v40 = *(_QWORD *)(v40 + 8);
    }
    while ( v40 );
    v36 = gpDispInfo;
  }
  *((_BYTE *)gpsi + 7288) = GreGetDeviceCaps(*(HDC *)(v36 + 24), 14);
  v42 = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 24), 12);
  *((_BYTE *)gpsi + 7289) = v42;
  v43 = *((unsigned __int8 *)gpsi + 7288) * v42;
  *((_WORD *)gpsi + 3642) = v43;
  *(_WORD *)(gpDispInfo + 178) = v43;
  if ( v17 )
    *((_DWORD *)gpsi + 1823) |= 1u;
  else
    *((_DWORD *)gpsi + 1823) &= ~1u;
  *(_OWORD *)((char *)gpsi + 7236) = *(_OWORD *)(gpDispInfo + 104);
  *(_OWORD *)((char *)gpsi + 7252) = *(_OWORD *)(gpDispInfo + 120);
  *(_OWORD *)((char *)gpsi + 7268) = *(_OWORD *)(gpDispInfo + 136);
  CharDimensions = GetCharDimensions(*(HDC *)(gpDispInfo + 32), (__int64)v57, (LONG *)gpsi + 1016);
  v45 = v57[0];
  v46 = v57[1];
  *((_DWORD *)gpsi + 1015) = CharDimensions;
  v47 = (char *)gpsi;
  v48 = v59;
  *(_OWORD *)((char *)gpsi + 4068) = v45;
  v49 = v57[2];
  *(_OWORD *)(v47 + 4084) = v46;
  *(_QWORD *)&v46 = v58;
  *(_OWORD *)(v47 + 4100) = v49;
  *(_QWORD *)(v47 + 4116) = v46;
  *((_DWORD *)v47 + 1031) = v48;
  EnforceColorDependentSettings();
  return 1LL;
}
