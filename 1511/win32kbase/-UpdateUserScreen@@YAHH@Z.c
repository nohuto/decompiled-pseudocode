/*
 * XREFs of ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 * Callees:
 *     UpdatePointerDevices_0 @ 0x1C0002290 (UpdatePointerDevices_0.c)
 *     IsUpdateCursorSizesSupported_0 @ 0x1C00022B8 (IsUpdateCursorSizesSupported_0.c)
 *     UpdateCursorSizes_0 @ 0x1C00022C0 (UpdateCursorSizes_0.c)
 *     IsBuildMouseAccelerationCurveSupported_0 @ 0x1C00022C8 (IsBuildMouseAccelerationCurveSupported_0.c)
 *     BuildMouseAccelerationCurve_0 @ 0x1C00022D0 (BuildMouseAccelerationCurve_0.c)
 *     IsUpdatePointerDevicesSupported_0 @ 0x1C00022D8 (IsUpdatePointerDevicesSupported_0.c)
 *     IsSetDesktopMetricsSupported_0 @ 0x1C00022E0 (IsSetDesktopMetricsSupported_0.c)
 *     SetDesktopMetrics_0 @ 0x1C00022E8 (SetDesktopMetrics_0.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0026470 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     MonitorFromHdev @ 0x1C0044694 (MonitorFromHdev.c)
 *     MinimumMonitorDpi @ 0x1C0048C84 (MinimumMonitorDpi.c)
 *     GreGetDeviceCaps @ 0x1C004AB10 (GreGetDeviceCaps.c)
 *     DestroyMonitor @ 0x1C0066A80 (DestroyMonitor.c)
 *     InitLoadResources @ 0x1C006B5DC (InitLoadResources.c)
 *     EnforceColorDependentSettings @ 0x1C006B930 (EnforceColorDependentSettings.c)
 *     GetCharDimensions @ 0x1C006B970 (GetCharDimensions.c)
 *     ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C006BA6C (-InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006BB98 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     HdevFromMonitor @ 0x1C006BFF0 (HdevFromMonitor.c)
 *     UserSleep @ 0x1C007C6B0 (UserSleep.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall UpdateUserScreen(__int64 a1)
{
  int v1; // r15d
  int v2; // r12d
  __int64 v3; // r14
  struct tagMONITOR **v4; // rsi
  _QWORD *v5; // rbx
  __int64 CurrentProcessWin32Process; // rdi
  int v7; // eax
  __int16 DeviceCaps; // ax
  struct tagMONITOR *v9; // rdi
  struct tagMONITOR **v10; // r15
  unsigned int v11; // eax
  unsigned __int16 v12; // di
  __int64 i; // rbx
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  int v19; // edi
  int v20; // r14d
  int v21; // r15d
  int v22; // r13d
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  _DWORD *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // edi
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 j; // r8
  unsigned __int8 v39; // al
  __int16 v40; // r9
  char *v41; // rdx
  struct tagMONITOR *v43; // rax
  int v44; // r9d
  int v45; // r10d
  __int128 v46; // [rsp+20h] [rbp-50h]
  __int128 v47; // [rsp+30h] [rbp-40h]
  __int128 v48; // [rsp+40h] [rbp-30h]
  __int128 v49; // [rsp+50h] [rbp-20h]
  __int64 v50; // [rsp+60h] [rbp-10h]
  int v51; // [rsp+68h] [rbp-8h]

  v1 = 0;
  v2 = a1;
  v3 = *(_QWORD *)(gpDispInfo + 8);
  v4 = (struct tagMONITOR **)(gpDispInfo + 96);
  v5 = *(_QWORD **)(gpDispInfo + 96);
  if ( !(_DWORD)a1 )
  {
    while ( _InterlockedCompareExchange(&gdwMonitorBusy, 1, 0) )
      UserSleep(1LL);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = *(_DWORD *)(CurrentProcessWin32Process + 776);
  if ( (v7 & 0x6000) == 0 )
  {
    v1 = 1;
    *(_DWORD *)(CurrentProcessWin32Process + 776) = v7 | 0x4000;
  }
  DeviceCaps = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24), 90);
  *(_WORD *)(gpDispInfo + 176) = DeviceCaps;
  *((_WORD *)gpsi + 3643) = DeviceCaps;
  InitLoadResources(1LL);
  if ( v1 )
    *(_DWORD *)(CurrentProcessWin32Process + 776) &= ~0x4000u;
  while ( v5 )
  {
    v9 = (struct tagMONITOR *)v5;
    v10 = (struct tagMONITOR **)(v5 + 2);
    v5 = (_QWORD *)v5[2];
    v11 = HdevFromMonitor(v9);
    if ( v11 == -1 )
    {
      DestroyMonitor(v9);
    }
    else
    {
      SetMonitorData(v9, v11);
      v4 = v10;
    }
  }
  if ( *(_DWORD *)(v3 + 20) )
  {
    do
    {
      if ( !MonitorFromHdev(*(_QWORD *)(32 * ((unsigned int)v5 + 1LL) + v3)) )
      {
        v43 = SetMonitorData(0LL, (unsigned int)v5);
        if ( v43 )
        {
          *v4 = v43;
          v4 = (struct tagMONITOR **)((char *)v43 + 16);
        }
      }
      LODWORD(v5) = (_DWORD)v5 + 1;
    }
    while ( (unsigned int)v5 < *(_DWORD *)(v3 + 20) );
  }
  v12 = MinimumMonitorDpi();
  for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 16) )
    InitializeMonitorDpiRectsAndTransforms((struct tagMONITOR *)i, v12);
  if ( (int)IsUpdateCursorSizesSupported_0() >= 0 )
    UpdateCursorSizes_0();
  *((_DWORD *)gpsi + 551) = (*(_BYTE *)(v3 + 16) & 1) == 0;
  v14 = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24), 38) & 0x100;
  v46 = 0uLL;
  *(_DWORD *)(gpDispInfo + 180) ^= (*(_DWORD *)(gpDispInfo + 180) ^ (2 * (v14 != 0))) & 2;
  v15 = gpDispInfo;
  *(_QWORD *)(gpDispInfo + 120) = 0LL;
  *(_QWORD *)(v15 + 128) = 0LL;
  v16 = gpDispInfo;
  *(_QWORD *)(gpDispInfo + 136) = 0LL;
  *(_QWORD *)(v16 + 144) = 0LL;
  *(_DWORD *)(gpDispInfo + 80) = 0;
  v17 = gpDispInfo;
  v18 = *(_QWORD *)(gpDispInfo + 96);
  if ( v18 )
  {
    v19 = (unsigned __int128)0LL >> 96;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    do
    {
      if ( (*(_DWORD *)(v18 + 24) & 1) != 0 )
      {
        if ( v22 >= *(_DWORD *)(v18 + 28) )
          v22 = *(_DWORD *)(v18 + 28);
        v23 = *(_DWORD *)(v18 + 60);
        if ( v21 >= *(_DWORD *)(v18 + 32) )
          v21 = *(_DWORD *)(v18 + 32);
        LODWORD(v46) = v22;
        if ( v20 <= *(_DWORD *)(v18 + 36) )
          v20 = *(_DWORD *)(v18 + 36);
        DWORD1(v46) = v21;
        if ( v19 <= *(_DWORD *)(v18 + 40) )
          v19 = *(_DWORD *)(v18 + 40);
        DWORD2(v46) = v20;
        if ( *(_DWORD *)(v17 + 136) < v23 )
          v23 = *(_DWORD *)(v17 + 136);
        HIDWORD(v46) = v19;
        *(_DWORD *)(v17 + 136) = v23;
        v24 = *(_DWORD *)(v18 + 64);
        if ( *(_DWORD *)(gpDispInfo + 140) < v24 )
          v24 = *(_DWORD *)(gpDispInfo + 140);
        *(_DWORD *)(gpDispInfo + 140) = v24;
        v25 = *(_DWORD *)(v18 + 68);
        if ( *(_DWORD *)(gpDispInfo + 144) > v25 )
          v25 = *(_DWORD *)(gpDispInfo + 144);
        *(_DWORD *)(gpDispInfo + 144) = v25;
        v26 = *(_DWORD *)(v18 + 72);
        if ( *(_DWORD *)(gpDispInfo + 148) > v26 )
          v26 = *(_DWORD *)(gpDispInfo + 148);
        *(_DWORD *)(gpDispInfo + 148) = v26;
        v27 = *(_DWORD *)(v18 + 44);
        if ( *(_DWORD *)(gpDispInfo + 120) < v27 )
          v27 = *(_DWORD *)(gpDispInfo + 120);
        *(_DWORD *)(gpDispInfo + 120) = v27;
        v28 = *(_DWORD *)(v18 + 48);
        if ( *(_DWORD *)(gpDispInfo + 124) < v28 )
          v28 = *(_DWORD *)(gpDispInfo + 124);
        *(_DWORD *)(gpDispInfo + 124) = v28;
        v29 = *(_DWORD *)(v18 + 52);
        if ( *(_DWORD *)(gpDispInfo + 128) > v29 )
          v29 = *(_DWORD *)(gpDispInfo + 128);
        *(_DWORD *)(gpDispInfo + 128) = v29;
        v30 = *(_DWORD *)(v18 + 56);
        if ( *(_DWORD *)(gpDispInfo + 132) > v30 )
          v30 = *(_DWORD *)(gpDispInfo + 132);
        *(_DWORD *)(gpDispInfo + 132) = v30;
        ++*(_DWORD *)(gpDispInfo + 80);
      }
      if ( *((_DWORD *)gpsi + 551) )
      {
        if ( v14 )
          *(_DWORD *)(v18 + 24) |= 2u;
        else
          *(_DWORD *)(v18 + 24) &= ~2u;
      }
      else if ( (*(_DWORD *)(*(_QWORD *)(v18 + 160) + 2196LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v18 + 24) |= 2u;
        *(_DWORD *)(gpDispInfo + 180) |= 2u;
      }
      if ( (int)IsBuildMouseAccelerationCurveSupported_0() >= 0 )
        BuildMouseAccelerationCurve_0();
      v18 = *(_QWORD *)(v18 + 16);
      v17 = gpDispInfo;
    }
    while ( v18 );
  }
  *(_OWORD *)(v17 + 104) = v46;
  if ( (int)IsUpdatePointerDevicesSupported_0() >= 0 )
    UpdatePointerDevices_0();
  if ( !v2 )
    _InterlockedExchange(&gdwMonitorBusy, 0);
  if ( !gfRemotingConsole || !gpConsoleShadowDisplayChangeEvent )
    goto LABEL_57;
  v32 = gpDispInfo;
  v31 = gpsi;
  v44 = *(_DWORD *)(gpDispInfo + 104);
  if ( *((_DWORD *)gpsi + 546) != v44
    || (v45 = *(_DWORD *)(gpDispInfo + 108), *((_DWORD *)gpsi + 547) != v45)
    || *((_DWORD *)gpsi + 548) != *(_DWORD *)(gpDispInfo + 112) - v44
    || *((_DWORD *)gpsi + 549) != *(_DWORD *)(gpDispInfo + 116) - v45 )
  {
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
LABEL_57:
    v31 = gpsi;
    v32 = gpDispInfo;
  }
  v31[470] = *(_DWORD *)(*(_QWORD *)(v32 + 88) + 36LL);
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
  v33 = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 152) )
  {
    v34 = *(_QWORD *)(gpDispInfo + 96);
    v35 = 0;
    if ( v34 )
    {
      do
      {
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic((HRGN *)(v34 + 128), (struct _RECTL *)(v34 + 28))
          && (*(_DWORD *)(v34 + 24) & 1) != 0 )
        {
          v35 = GreCombineRgn(*(HRGN *)(gpDispInfo + 152), *(HRGN *)(gpDispInfo + 152), *(HRGN *)(v34 + 128), 2);
        }
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic((HRGN *)(v34 + 136), (struct _RECTL *)(v34 + 44))
          && (*(_DWORD *)(v34 + 24) & 1) != 0 )
        {
          v35 = GreCombineRgn(*(HRGN *)(gpDispInfo + 160), *(HRGN *)(gpDispInfo + 160), *(HRGN *)(v34 + 136), 2);
        }
        *(_DWORD *)(gpDispInfo + 180) ^= (*(_DWORD *)(gpDispInfo + 180) ^ (v35 == 2)) & 1;
        if ( (unsigned int)SetOrCreateRectRgnIndirectPublic((HRGN *)(v34 + 144), (struct _RECTL *)(v34 + 60))
          && (*(_DWORD *)(v34 + 24) & 1) != 0 )
        {
          v35 = GreCombineRgn(*(HRGN *)(gpDispInfo + 168), *(HRGN *)(gpDispInfo + 168), *(HRGN *)(v34 + 144), 2);
        }
        v34 = *(_QWORD *)(v34 + 16);
      }
      while ( v34 );
      v33 = gpDispInfo;
    }
  }
  if ( (*(_DWORD *)(v33 + 180) & 1) != 0 )
    v36 = 0LL;
  else
    v36 = *(_QWORD *)(v33 + 152);
  v37 = grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      for ( j = *(_QWORD *)(v37 + 16); j; j = *(_QWORD *)(j + 16) )
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 8) + 16LL) + 200LL) = v36;
      v37 = *(_QWORD *)(v37 + 8);
    }
    while ( v37 );
    v33 = gpDispInfo;
  }
  *((_BYTE *)gpsi + 7288) = GreGetDeviceCaps(*(_QWORD *)(v33 + 24), 14);
  v39 = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 24), 12);
  *((_BYTE *)gpsi + 7289) = v39;
  v40 = *((unsigned __int8 *)gpsi + 7288) * v39;
  *((_WORD *)gpsi + 3642) = v40;
  *(_WORD *)(gpDispInfo + 178) = v40;
  if ( v14 )
    *((_DWORD *)gpsi + 1823) |= 1u;
  else
    *((_DWORD *)gpsi + 1823) &= ~1u;
  *(_OWORD *)((char *)gpsi + 7236) = *(_OWORD *)(gpDispInfo + 104);
  *(_OWORD *)((char *)gpsi + 7252) = *(_OWORD *)(gpDispInfo + 120);
  *(_OWORD *)((char *)gpsi + 7268) = *(_OWORD *)(gpDispInfo + 136);
  *((_DWORD *)gpsi + 1015) = GetCharDimensions(*(HDC *)(gpDispInfo + 32));
  v41 = (char *)gpsi;
  *(_OWORD *)((char *)gpsi + 4068) = v47;
  *(_OWORD *)(v41 + 4084) = v48;
  *(_OWORD *)(v41 + 4100) = v49;
  *(_QWORD *)(v41 + 4116) = v50;
  *((_DWORD *)v41 + 1031) = v51;
  EnforceColorDependentSettings();
  return 1LL;
}
