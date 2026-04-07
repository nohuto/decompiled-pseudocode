/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180013A34
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180013474 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18001374C (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180013B64 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x1800792C8 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x1800793F8 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180007C20 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180017DC4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180035018 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowRepresentation(
        CThumbnailVisual *this,
        struct CSecondaryWindowRepresentation **a2)
{
  struct CSecondaryWindowRepresentation **v2; // rsi
  unsigned int v5; // edi
  __int64 v7; // r8
  CWindowData *v8; // rcx
  enum DEVICE_SCALE_FACTOR v9; // edx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  HMONITOR v15; // rax
  enum DEVICE_SCALE_FACTOR v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct CSecondaryWindowRepresentation **)((char *)this + 360);
  v5 = 0;
  if ( *((_QWORD *)this + 45) )
    goto LABEL_2;
  v7 = *((_QWORD *)this + 44);
  if ( !v7 )
    goto LABEL_2;
  v8 = *(CWindowData **)(v7 + 24);
  v16 = SCALE_100_PERCENT;
  if ( CWindowData::IsImmersiveWindow(v8) )
  {
    v15 = MonitorFromRect((LPCRECT)(*(_QWORD *)(v10 + 16) + 48LL), 2u);
    GetScaleFactorForMonitorImp(v15, &v16);
    v9 = v16;
  }
  v11 = *((_QWORD *)this + 44);
  v12 = 0LL;
  if ( v11 )
    v13 = *(_DWORD *)(v11 + 36);
  else
    LOBYTE(v13) = 0;
  if ( (v13 & 1) != 0 )
  {
    v12 = (unsigned int)(*(_DWORD *)(v11 + 48) - *(_DWORD *)(v11 + 40));
    if ( (int)v12 < 0 )
      v12 = 0LL;
  }
  v14 = CSecondaryWindowRepresentation::Create(
          (*(_DWORD *)(v11 + 77) != 0 ? 4 : 0) | (*(_BYTE *)(v11 + 32) != 0 ? 0x120 : 0) | (*(_DWORD *)(v11 + 36) >> 12) & 0x800 | (*(_DWORD *)(v11 + 36) >> 11) & 0x200 | 2u,
          (char *)this + 344,
          *(_QWORD *)(v11 + 24),
          v12,
          v9,
          v2);
  v5 = v14;
  if ( v14 >= 0 )
  {
LABEL_2:
    if ( a2 )
      *a2 = *v2;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x2D7u);
  }
  return v5;
}
