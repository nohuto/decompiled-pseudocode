/*
 * XREFs of ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368
 * Callers:
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 * Callees:
 *     UpdatePointerDevices_0 @ 0x1C0001DF0 (UpdatePointerDevices_0.c)
 *     IsUpdateCursorSizesSupported_0 @ 0x1C0001E18 (IsUpdateCursorSizesSupported_0.c)
 *     UpdateCursorSizes_0 @ 0x1C0001E20 (UpdateCursorSizes_0.c)
 *     IsBuildMouseAccelerationCurveSupported_0 @ 0x1C0001E28 (IsBuildMouseAccelerationCurveSupported_0.c)
 *     BuildMouseAccelerationCurve_0 @ 0x1C0001E30 (BuildMouseAccelerationCurve_0.c)
 *     IsUpdatePointerDevicesSupported_0 @ 0x1C0001E38 (IsUpdatePointerDevicesSupported_0.c)
 *     IsSetDesktopMetricsSupported_0 @ 0x1C0001E40 (IsSetDesktopMetricsSupported_0.c)
 *     SetDesktopMetrics_0 @ 0x1C0001E48 (SetDesktopMetrics_0.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C002F220 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HdevFromMonitor @ 0x1C0054D30 (HdevFromMonitor.c)
 *     MonitorFromHdev @ 0x1C0054FC0 (MonitorFromHdev.c)
 *     InitLoadResources @ 0x1C0056CFC (InitLoadResources.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0057A18 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     EnforceColorDependentSettings @ 0x1C0057AC0 (EnforceColorDependentSettings.c)
 *     GetCharDimensions @ 0x1C0057B00 (GetCharDimensions.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005834C (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C0058580 (-InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z.c)
 *     MinimumMonitorDpi @ 0x1C00591E4 (MinimumMonitorDpi.c)
 *     DestroyMonitor @ 0x1C00760A0 (DestroyMonitor.c)
 *     UserSleep @ 0x1C0080530 (UserSleep.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall UpdateUserScreen(__int64 a1)
{
  int v1; // r15d
  int v2; // r12d
  __int64 v3; // rsi
  struct tagMONITOR **v4; // rdi
  struct tagMONITOR **v5; // rbx
  unsigned int v6; // r14d
  __int16 DeviceCaps; // ax
  struct tagMONITOR **v8; // r14
  struct tagMONITOR **v9; // r15
  unsigned int v10; // eax
  unsigned __int16 v11; // di
  __int64 i; // rbx
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // edi
  int v19; // r14d
  int v20; // r15d
  int v21; // r13d
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  _DWORD *v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  int v34; // edi
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 j; // r8
  unsigned __int8 v38; // al
  __int16 v39; // r9
  char *v40; // rdx
  struct tagMONITOR *v42; // rax
  int v43; // r9d
  int v44; // r10d
  __int128 v45; // [rsp+20h] [rbp-50h]
  __int128 v46; // [rsp+30h] [rbp-40h]
  __int128 v47; // [rsp+40h] [rbp-30h]
  __int128 v48; // [rsp+50h] [rbp-20h]
  __int64 v49; // [rsp+60h] [rbp-10h]
  int v50; // [rsp+68h] [rbp-8h]

  v1 = 0;
  v2 = a1;
  v3 = *(_QWORD *)(gpDispInfo + 8);
  v4 = (struct tagMONITOR **)(gpDispInfo + 96);
  v5 = *(struct tagMONITOR ***)(gpDispInfo + 96);
  if ( !(_DWORD)a1 )
  {
    while ( _InterlockedCompareExchange(&gdwMonitorBusy, 1, 0) )
      UserSleep(1LL);
  }
  PsGetCurrentProcessWin32Process(a1);
  v6 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    v6 = W32SetCurrentThreadDpiAwarenessContext(18LL);
    v1 = 1;
  }
  DeviceCaps = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 24), 90);
  *(_WORD *)(gpDispInfo + 176) = DeviceCaps;
  *((_WORD *)gpsi + 4339) = DeviceCaps;
  InitLoadResources(1LL);
  if ( v1 )
    W32SetCurrentThreadDpiAwarenessContext(v6);
  while ( v5 )
  {
    v8 = v5;
    v9 = v5 + 2;
    v5 = (struct tagMONITOR **)v5[2];
    v10 = HdevFromMonitor((__int64)v8);
    if ( v10 == -1 )
    {
      DestroyMonitor(v8);
    }
    else
    {
      SetMonitorData((struct tagMONITOR *)v8, v10);
      v4 = v9;
    }
  }
  if ( *(_DWORD *)(v3 + 20) )
  {
    do
    {
      if ( !MonitorFromHdev(*(_QWORD *)(32 * ((unsigned int)v5 + 1LL) + v3)) )
      {
        v42 = SetMonitorData(0LL, (unsigned int)v5);
        if ( v42 )
        {
          *v4 = v42;
          v4 = (struct tagMONITOR **)((char *)v42 + 16);
        }
      }
      LODWORD(v5) = (_DWORD)v5 + 1;
    }
    while ( (unsigned int)v5 < *(_DWORD *)(v3 + 20) );
  }
  v11 = MinimumMonitorDpi();
  for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 16) )
    InitializeMonitorDpiRectsAndTransforms((struct tagMONITOR *)i, v11);
  if ( (int)IsUpdateCursorSizesSupported_0() >= 0 )
    UpdateCursorSizes_0();
  *((_DWORD *)gpsi + 551) = (*(_BYTE *)(v3 + 16) & 1) == 0;
  v13 = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 24), 38) & 0x100;
  v45 = 0uLL;
  *(_DWORD *)(gpDispInfo + 180) ^= (*(_DWORD *)(gpDispInfo + 180) ^ (2 * (v13 != 0))) & 2;
  v14 = gpDispInfo;
  *(_QWORD *)(gpDispInfo + 120) = 0LL;
  *(_QWORD *)(v14 + 128) = 0LL;
  v15 = gpDispInfo;
  *(_QWORD *)(gpDispInfo + 136) = 0LL;
  *(_QWORD *)(v15 + 144) = 0LL;
  *(_DWORD *)(gpDispInfo + 80) = 0;
  v16 = gpDispInfo;
  v17 = *(_QWORD *)(gpDispInfo + 96);
  if ( v17 )
  {
    v18 = (unsigned __int128)0LL >> 96;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    do
    {
      if ( (*(_DWORD *)(v17 + 24) & 1) != 0 )
      {
        if ( v21 >= *(_DWORD *)(v17 + 28) )
          v21 = *(_DWORD *)(v17 + 28);
        v22 = *(_DWORD *)(v17 + 60);
        if ( v20 >= *(_DWORD *)(v17 + 32) )
          v20 = *(_DWORD *)(v17 + 32);
        LODWORD(v45) = v21;
        if ( v19 <= *(_DWORD *)(v17 + 36) )
          v19 = *(_DWORD *)(v17 + 36);
        DWORD1(v45) = v20;
        if ( v18 <= *(_DWORD *)(v17 + 40) )
          v18 = *(_DWORD *)(v17 + 40);
        DWORD2(v45) = v19;
        if ( *(_DWORD *)(v16 + 136) < v22 )
          v22 = *(_DWORD *)(v16 + 136);
        HIDWORD(v45) = v18;
        *(_DWORD *)(v16 + 136) = v22;
        v23 = *(_DWORD *)(v17 + 64);
        if ( *(_DWORD *)(gpDispInfo + 140) < v23 )
          v23 = *(_DWORD *)(gpDispInfo + 140);
        *(_DWORD *)(gpDispInfo + 140) = v23;
        v24 = *(_DWORD *)(v17 + 68);
        if ( *(_DWORD *)(gpDispInfo + 144) > v24 )
          v24 = *(_DWORD *)(gpDispInfo + 144);
        *(_DWORD *)(gpDispInfo + 144) = v24;
        v25 = *(_DWORD *)(v17 + 72);
        if ( *(_DWORD *)(gpDispInfo + 148) > v25 )
          v25 = *(_DWORD *)(gpDispInfo + 148);
        *(_DWORD *)(gpDispInfo + 148) = v25;
        v26 = *(_DWORD *)(v17 + 44);
        if ( *(_DWORD *)(gpDispInfo + 120) < v26 )
          v26 = *(_DWORD *)(gpDispInfo + 120);
        *(_DWORD *)(gpDispInfo + 120) = v26;
        v27 = *(_DWORD *)(v17 + 48);
        if ( *(_DWORD *)(gpDispInfo + 124) < v27 )
          v27 = *(_DWORD *)(gpDispInfo + 124);
        *(_DWORD *)(gpDispInfo + 124) = v27;
        v28 = *(_DWORD *)(v17 + 52);
        if ( *(_DWORD *)(gpDispInfo + 128) > v28 )
          v28 = *(_DWORD *)(gpDispInfo + 128);
        *(_DWORD *)(gpDispInfo + 128) = v28;
        v29 = *(_DWORD *)(v17 + 56);
        if ( *(_DWORD *)(gpDispInfo + 132) > v29 )
          v29 = *(_DWORD *)(gpDispInfo + 132);
        *(_DWORD *)(gpDispInfo + 132) = v29;
        ++*(_DWORD *)(gpDispInfo + 80);
      }
      if ( *((_DWORD *)gpsi + 551) )
      {
        if ( v13 )
          *(_DWORD *)(v17 + 24) |= 2u;
        else
          *(_DWORD *)(v17 + 24) &= ~2u;
      }
      else if ( (*(_DWORD *)(*(_QWORD *)(v17 + 160) + 2196LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v17 + 24) |= 2u;
        *(_DWORD *)(gpDispInfo + 180) |= 2u;
      }
      if ( (int)IsBuildMouseAccelerationCurveSupported_0() >= 0 )
        BuildMouseAccelerationCurve_0();
      v17 = *(_QWORD *)(v17 + 16);
      v16 = gpDispInfo;
    }
    while ( v17 );
  }
  *(_OWORD *)(v16 + 104) = v45;
  if ( (int)IsUpdatePointerDevicesSupported_0() >= 0 )
    UpdatePointerDevices_0();
  if ( !v2 )
    _InterlockedExchange(&gdwMonitorBusy, 0);
  if ( !gfRemotingConsole || !gpConsoleShadowDisplayChangeEvent )
    goto LABEL_57;
  v31 = gpDispInfo;
  v30 = gpsi;
  v43 = *(_DWORD *)(gpDispInfo + 104);
  if ( *((_DWORD *)gpsi + 546) != v43
    || (v44 = *(_DWORD *)(gpDispInfo + 108), *((_DWORD *)gpsi + 547) != v44)
    || *((_DWORD *)gpsi + 548) != *(_DWORD *)(gpDispInfo + 112) - v43
    || *((_DWORD *)gpsi + 549) != *(_DWORD *)(gpDispInfo + 116) - v44 )
  {
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
LABEL_57:
    v30 = gpsi;
    v31 = gpDispInfo;
  }
  v30[470] = *(_DWORD *)(*(_QWORD *)(v31 + 88) + 36LL);
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
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 152), (struct _RECTL *)&gZero);
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 160), (struct _RECTL *)&gZero);
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 168), (struct _RECTL *)&gZero);
  v32 = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 152) )
  {
    v33 = *(_QWORD *)(gpDispInfo + 96);
    v34 = 0;
    if ( v33 )
    {
      do
      {
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic((HRGN *)(v33 + 128), (struct _RECTL *)(v33 + 28))
          && (*(_DWORD *)(v33 + 24) & 1) != 0 )
        {
          v34 = GreCombineRgn(*(HRGN *)(gpDispInfo + 152), *(HRGN *)(gpDispInfo + 152), *(HRGN *)(v33 + 128), 2);
        }
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic((HRGN *)(v33 + 136), (struct _RECTL *)(v33 + 44))
          && (*(_DWORD *)(v33 + 24) & 1) != 0 )
        {
          v34 = GreCombineRgn(*(HRGN *)(gpDispInfo + 160), *(HRGN *)(gpDispInfo + 160), *(HRGN *)(v33 + 136), 2);
        }
        *(_DWORD *)(gpDispInfo + 180) ^= (*(_DWORD *)(gpDispInfo + 180) ^ (v34 == 2)) & 1;
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic((HRGN *)(v33 + 144), (struct _RECTL *)(v33 + 60))
          && (*(_DWORD *)(v33 + 24) & 1) != 0 )
        {
          v34 = GreCombineRgn(*(HRGN *)(gpDispInfo + 168), *(HRGN *)(gpDispInfo + 168), *(HRGN *)(v33 + 144), 2);
        }
        v33 = *(_QWORD *)(v33 + 16);
      }
      while ( v33 );
      v32 = gpDispInfo;
    }
  }
  if ( (*(_DWORD *)(v32 + 180) & 1) != 0 )
    v35 = 0LL;
  else
    v35 = *(_QWORD *)(v32 + 152);
  v36 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( j = *(_QWORD *)(v36 + 16); j; j = *(_QWORD *)(j + 16) )
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 8) + 16LL) + 200LL) = v35;
      v36 = *(_QWORD *)(v36 + 8);
    }
    while ( v36 );
    v32 = gpDispInfo;
  }
  *((_BYTE *)gpsi + 8680) = GreGetDeviceCaps(*(HDC *)(v32 + 24), 14);
  v38 = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 24), 12);
  *((_BYTE *)gpsi + 8681) = v38;
  v39 = *((unsigned __int8 *)gpsi + 8680) * v38;
  *((_WORD *)gpsi + 4338) = v39;
  *(_WORD *)(gpDispInfo + 178) = v39;
  if ( v13 )
    *((_DWORD *)gpsi + 2171) |= 1u;
  else
    *((_DWORD *)gpsi + 2171) &= ~1u;
  *(_OWORD *)((char *)gpsi + 8628) = *(_OWORD *)(gpDispInfo + 104);
  *(_OWORD *)((char *)gpsi + 8644) = *(_OWORD *)(gpDispInfo + 120);
  *(_OWORD *)((char *)gpsi + 8660) = *(_OWORD *)(gpDispInfo + 136);
  *((_DWORD *)gpsi + 1363) = GetCharDimensions(*(HDC *)(gpDispInfo + 32));
  v40 = (char *)gpsi;
  *(_OWORD *)((char *)gpsi + 5460) = v46;
  *(_OWORD *)(v40 + 5476) = v47;
  *(_OWORD *)(v40 + 5492) = v48;
  *(_QWORD *)(v40 + 5508) = v49;
  *((_DWORD *)v40 + 1379) = v50;
  EnforceColorDependentSettings();
  return 1LL;
}
