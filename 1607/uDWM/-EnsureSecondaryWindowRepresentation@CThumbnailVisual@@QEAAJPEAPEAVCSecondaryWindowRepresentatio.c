/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001684C
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009394 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180016574 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180016980 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x1800816E8 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180081814 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001A10C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800357F4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800423BC (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowRepresentation(
        CThumbnailVisual *this,
        struct CSecondaryWindowRepresentation **a2)
{
  struct CSecondaryWindowRepresentation **v2; // rsi
  unsigned int v5; // edi
  __int64 v7; // rcx
  CWindowData *v8; // rcx
  enum DEVICE_SCALE_FACTOR v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // eax
  HMONITOR v14; // rax
  enum DEVICE_SCALE_FACTOR v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct CSecondaryWindowRepresentation **)((char *)this + 360);
  v5 = 0;
  if ( *((_QWORD *)this + 45) )
    goto LABEL_2;
  v7 = *((_QWORD *)this + 44);
  if ( !v7 )
    goto LABEL_2;
  v8 = *(CWindowData **)(v7 + 24);
  v9 = SCALE_100_PERCENT;
  v15 = SCALE_100_PERCENT;
  if ( CWindowData::IsImmersiveWindow(v8) )
  {
    v14 = MonitorFromRect((LPCRECT)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL) + 48LL), 2u);
    GetScaleFactorForMonitorImp(v14, &v15);
    v9 = v15;
  }
  v10 = *((_QWORD *)this + 44);
  v11 = 0LL;
  if ( v10 )
    v12 = *(_DWORD *)(v10 + 36);
  else
    LOBYTE(v12) = 0;
  if ( (v12 & 1) != 0 )
  {
    v11 = (unsigned int)(*(_DWORD *)(v10 + 48) - *(_DWORD *)(v10 + 40));
    if ( (int)v11 < 0 )
      v11 = 0LL;
  }
  v13 = CSecondaryWindowRepresentation::Create(
          (*(_DWORD *)(v10 + 77) != 0 ? 4 : 0) | (*(_BYTE *)(v10 + 32) != 0 ? 0x120 : 0) | (*(_DWORD *)(v10 + 36) >> 12) & 0x800 | (*(_DWORD *)(v10 + 36) >> 11) & 0x200 | 2u,
          (char *)this + 344,
          *(_QWORD *)(v10 + 24),
          v11,
          v9,
          v2);
  v5 = v13;
  if ( v13 >= 0 )
  {
LABEL_2:
    if ( a2 )
      *a2 = *v2;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2B1u);
  }
  return v5;
}
