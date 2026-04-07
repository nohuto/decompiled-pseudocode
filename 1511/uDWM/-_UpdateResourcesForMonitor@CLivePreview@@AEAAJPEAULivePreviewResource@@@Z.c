/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180073240
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006EB54 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180073A60 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180013E8C (-Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x1800187B8 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18001A4F8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x18003AA40 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x180073728 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct LivePreviewResource *a2)
{
  unsigned int v3; // ebx
  int *v5; // r12
  unsigned int v6; // r14d
  CLivePreview *v7; // rcx
  const struct CTopLevelWindow *v8; // rdx
  int updated; // eax
  int v10; // r9d
  int v11; // r8d
  int RectangleGeometry; // eax
  CResource **v13; // r14
  int v14; // eax
  int *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  CResource *v19; // rcx
  int v20; // eax
  CResource *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  CResource *v26; // rcx
  int v27; // edx
  CResource *v28; // rax
  int v29; // eax
  int v30; // r9d
  int v31; // r8d
  int v32; // eax
  CResource **v33; // r14
  int v34; // eax
  float *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  CResource *v39; // rcx
  int v40; // eax
  CResource *v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  CResource *v46; // rcx
  int v47; // edx
  CResource *v48; // rax
  int v49; // eax
  int GeometryFromHRGN; // eax
  _QWORD v52[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v53; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v54[4]; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE v55[40]; // [rsp+48h] [rbp-B8h] BYREF
  int v56; // [rsp+70h] [rbp-90h]
  int v57; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v58[12]; // [rsp+94h] [rbp-6Ch] BYREF
  __int128 v59; // [rsp+A0h] [rbp-60h]
  __int128 v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+D0h] [rbp-30h]
  int v62; // [rsp+DCh] [rbp-24h]
  int v63; // [rsp+E0h] [rbp-20h]
  int v64; // [rsp+100h] [rbp+0h]

  v3 = 0;
  SetRectEmpty((LPRECT)a2);
  v5 = (int *)((char *)a2 + 40);
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
      v10 = *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1);
      if ( v10 < 0 )
        v10 = 0;
      v11 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
      if ( v11 < 0 )
        v11 = 0;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            *(_DWORD *)a2,
                            *((_DWORD *)a2 + 1),
                            v11,
                            v10,
                            (struct CResource **)a2 + 2);
      v3 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x50Bu);
        return v3;
      }
      v13 = (CResource **)((char *)a2 + 24);
      if ( !*((_QWORD *)a2 + 3) )
      {
        v14 = CResource::Create(0x38u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)a2 + 3);
        v3 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x50Fu);
          return v3;
        }
      }
      v53 = 162;
      memset_0(v54, 0, 0x40uLL);
      v15 = (int *)a2;
      v16 = 4LL;
      do
      {
        *(float *)((char *)v15 + v55 - (_BYTE *)a2) = (float)*v15;
        ++v15;
        --v16;
      }
      while ( v16 );
      v17 = *(_QWORD *)(*((_QWORD *)this + 62) + 16LL);
      v18 = 0;
      if ( v17 )
        v18 = *(_DWORD *)(v17 + 24);
      v19 = *v13;
      v56 = v18;
      v20 = CResource::Send(v19, &v53, 0x44u);
      v3 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x51Au);
        return v3;
      }
      v21 = *v13;
      v52[0] = 163LL;
      v22 = CResource::Send(v21, v52, 8u);
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x51Fu);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 4) )
      {
        v24 = CCachedVisualImageBrushResource::Create(
                v23,
                *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                (CBaseObject **)a2 + 4);
        v3 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x524u);
          return v3;
        }
      }
      v57 = 257;
      memset_0(v58, 0, 0x70uLL);
      v25 = *((_QWORD *)this + 57);
      v26 = (CResource *)*((_QWORD *)a2 + 4);
      v62 = 1;
      v59 = _xmm;
      v63 = 1;
      v60 = _xmm;
      v27 = *(_DWORD *)(v25 + 24);
      v28 = *v13;
      v61 = v27;
      v64 = *((_DWORD *)v28 + 6);
      v29 = CResource::Send(v26, &v57, 0x74u);
      v3 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x534u);
        return v3;
      }
    }
    if ( *((_BYTE *)a2 + 129) )
    {
      v30 = *((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 11);
      if ( v30 < 0 )
        v30 = 0;
      v31 = *((_DWORD *)a2 + 12) - *v5;
      if ( v31 < 0 )
        v31 = 0;
      v32 = ResourceHelper::CreateRectangleGeometry(*v5, *((_DWORD *)a2 + 11), v31, v30, (struct CResource **)a2 + 7);
      v3 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0x53Fu);
        return v3;
      }
      v33 = (CResource **)((char *)a2 + 64);
      if ( !*((_QWORD *)a2 + 8) )
      {
        v34 = CResource::Create(0x38u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)a2 + 8);
        v3 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v34, 0x543u);
          return v3;
        }
      }
      v53 = 162;
      memset_0(v54, 0, 0x40uLL);
      v35 = (float *)v55;
      v36 = 4LL;
      do
      {
        *v35 = (float)*(int *)((char *)v35 + a2 - (struct LivePreviewResource *)v55 + 40);
        ++v35;
        --v36;
      }
      while ( v36 );
      v37 = *(_QWORD *)(*((_QWORD *)this + 64) + 16LL);
      v38 = 0;
      if ( v37 )
        v38 = *(_DWORD *)(v37 + 24);
      v39 = *v33;
      v56 = v38;
      v40 = CResource::Send(v39, &v53, 0x44u);
      v3 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v40, 0x54Cu);
        return v3;
      }
      v41 = *v33;
      v52[0] = 163LL;
      v42 = CResource::Send(v41, v52, 8u);
      v3 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v42, 0x551u);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 9) )
      {
        v44 = CCachedVisualImageBrushResource::Create(
                v43,
                *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                (CBaseObject **)a2 + 9);
        v3 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0x556u);
          return v3;
        }
      }
      v57 = 257;
      memset_0(v58, 0, 0x70uLL);
      v45 = *((_QWORD *)this + 58);
      v46 = (CResource *)*((_QWORD *)a2 + 9);
      v62 = 1;
      v59 = _xmm;
      v63 = 1;
      v60 = _xmm;
      v47 = *(_DWORD *)(v45 + 24);
      v48 = *v33;
      v61 = v47;
      v64 = *((_DWORD *)v48 + 6);
      v49 = CResource::Send(v46, &v57, 0x74u);
      v3 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v49, 0x566u);
        return v3;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(*((HRGN *)a2 + 12), (struct CResource **)a2 + 13);
      v3 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, GeometryFromHRGN, 0x568u);
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
