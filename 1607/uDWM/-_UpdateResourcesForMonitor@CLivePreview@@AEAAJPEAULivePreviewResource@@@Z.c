/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180075098
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006EB34 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180075950 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180009BEC (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000B468 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180015B58 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x18003D0C0 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x180075610 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct LivePreviewResource *a2)
{
  unsigned int v3; // ebx
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  CLivePreview *v7; // rcx
  const struct CTopLevelWindow *v8; // rdx
  int updated; // eax
  __int64 v10; // r9
  __int64 v11; // r8
  int RectangleGeometry; // eax
  char *v13; // r14
  int v14; // eax
  __int64 i; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // eax
  char *v29; // r14
  int v30; // eax
  __int64 j; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  int GeometryFromHRGN; // eax
  __int128 v44; // [rsp+90h] [rbp-19h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-1h]
  __int128 v47; // [rsp+B0h] [rbp+7h] BYREF

  v3 = 0;
  SetRectEmpty((LPRECT)a2);
  v5 = (_DWORD *)((char *)a2 + 40);
  SetRectEmpty((LPRECT)((char *)a2 + 40));
  SetRectEmpty((LPRECT)a2 + 5);
  *((_QWORD *)a2 + 12) = CreateRectRgn(0, 0, 0, 0);
  v6 = 0;
  if ( !*((_DWORD *)this + 78) )
  {
LABEL_5:
    *((_BYTE *)a2 + 128) = !IsRectEmpty((const RECT *)a2);
    *((_BYTE *)a2 + 129) = !IsRectEmpty((const RECT *)((char *)a2 + 40));
    if ( *((_BYTE *)a2 + 128) )
    {
      v10 = (unsigned int)(*((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1));
      if ( (int)v10 < 0 )
        v10 = 0LL;
      v11 = (unsigned int)(*((_DWORD *)a2 + 2) - *(_DWORD *)a2);
      if ( (int)v11 < 0 )
        v11 = 0LL;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            *(unsigned int *)a2,
                            *((unsigned int *)a2 + 1),
                            v11,
                            v10,
                            (struct CResource **)a2 + 2);
      v3 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x50Bu);
        return v3;
      }
      v13 = (char *)a2 + 24;
      if ( !*((_QWORD *)a2 + 3) )
      {
        v14 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)a2 + 3);
        v3 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x50Fu);
          return v3;
        }
      }
      for ( i = 0LL; i < 4; ++i )
        *((float *)&v44 + i) = (float)*(int *)((char *)&v44 + 4 * i + a2 - (struct LivePreviewResource *)&v44);
      v16 = *(_QWORD *)v13;
      v45 = 0LL;
      v46 = 0LL;
      v17 = *(_QWORD *)(*((_QWORD *)this + 62) + 16LL);
      if ( v17 )
        v18 = *(_DWORD *)(v17 + 24);
      else
        v18 = 0;
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64 *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(v16 + 16) + 952LL))(
              *(_QWORD *)(v16 + 16),
              *(unsigned int *)(v16 + 24),
              &v44,
              &v45,
              0,
              0,
              v18,
              0);
      v3 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x51Fu);
        return v3;
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v13 + 16LL) + 960LL))(
              *(_QWORD *)(*(_QWORD *)v13 + 16LL),
              *(unsigned int *)(*(_QWORD *)v13 + 24LL));
      v3 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x522u);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 4) )
      {
        v22 = CCachedVisualImageBrushResource::Create(v21, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)a2 + 4);
        v3 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x527u);
          return v3;
        }
      }
      v23 = *((_QWORD *)a2 + 4);
      v24 = *(_QWORD *)v13;
      v47 = _xmm;
      v44 = _xmm;
      v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v23 + 16) + 1152LL))(
              *(_QWORD *)(v23 + 16),
              *(unsigned int *)(v23 + 24),
              *(unsigned int *)(*((_QWORD *)this + 57) + 24LL),
              &v47,
              &v44,
              *(_DWORD *)(*((_QWORD *)this + 57) + 24LL),
              0,
              0,
              1,
              1,
              0,
              0,
              0,
              0,
              0,
              0,
              *(_DWORD *)(v24 + 24));
      v3 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x545u);
        return v3;
      }
    }
    if ( *((_BYTE *)a2 + 129) )
    {
      v26 = (unsigned int)(*((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 11));
      if ( (int)v26 < 0 )
        v26 = 0LL;
      v27 = (unsigned int)(*((_DWORD *)a2 + 12) - *v5);
      if ( (int)v27 < 0 )
        v27 = 0LL;
      v28 = ResourceHelper::CreateRectangleGeometry(
              (unsigned int)*v5,
              *((unsigned int *)a2 + 11),
              v27,
              v26,
              (struct CResource **)a2 + 7);
      v3 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x550u);
        return v3;
      }
      v29 = (char *)a2 + 64;
      if ( !*((_QWORD *)a2 + 8) )
      {
        v30 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)a2 + 8);
        v3 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0x554u);
          return v3;
        }
      }
      for ( j = 0LL; j < 4; ++j )
        *((float *)&v44 + j) = (float)*(int *)((char *)&v47 + 4 * j + a2 - (struct LivePreviewResource *)&v44 + 8);
      v32 = *(_QWORD *)v29;
      v45 = 0LL;
      v46 = 0LL;
      v33 = *(_QWORD *)(*((_QWORD *)this + 64) + 16LL);
      if ( v33 )
        v34 = *(_DWORD *)(v33 + 24);
      else
        v34 = 0;
      v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64 *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(v32 + 16) + 952LL))(
              *(_QWORD *)(v32 + 16),
              *(unsigned int *)(v32 + 24),
              &v44,
              &v45,
              0,
              0,
              v34,
              0);
      v3 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0x564u);
        return v3;
      }
      v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v29 + 16LL) + 960LL))(
              *(_QWORD *)(*(_QWORD *)v29 + 16LL),
              *(unsigned int *)(*(_QWORD *)v29 + 24LL));
      v3 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v36, 0x567u);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 9) )
      {
        v38 = CCachedVisualImageBrushResource::Create(v37, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)a2 + 9);
        v3 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v38, 0x56Bu);
          return v3;
        }
      }
      v39 = *((_QWORD *)a2 + 9);
      v40 = *(_QWORD *)v29;
      v47 = _xmm;
      v44 = _xmm;
      v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v39 + 16) + 1152LL))(
              *(_QWORD *)(v39 + 16),
              *(unsigned int *)(v39 + 24),
              *(unsigned int *)(*((_QWORD *)this + 58) + 24LL),
              &v47,
              &v44,
              *(_DWORD *)(*((_QWORD *)this + 58) + 24LL),
              0,
              0,
              1,
              1,
              0,
              0,
              0,
              0,
              0,
              0,
              *(_DWORD *)(v40 + 24));
      v3 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v41, 0x589u);
        return v3;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(*((HRGN *)a2 + 12), (struct CResource **)a2 + 13);
      v3 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, GeometryFromHRGN, 0x58Bu);
        return v3;
      }
    }
    ReleaseGDIObject<HRGN__ *>((void **)a2 + 12);
    return v3;
  }
  while ( 1 )
  {
    v7 = *(CLivePreview **)(*((_QWORD *)this + 36) + 40LL * v6);
    v8 = (const struct CTopLevelWindow *)*((_QWORD *)v7 + 48);
    if ( v8 )
    {
      updated = CLivePreview::_UpdateResourcesForMonitorHelper(v7, v8, a2);
      v3 = updated;
      if ( updated < 0 )
        break;
    }
    if ( ++v6 >= *((_DWORD *)this + 78) )
      goto LABEL_5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x4FBu);
  return v3;
}
