/*
 * XREFs of ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x18007C44C
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x18007C020 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007BDB4 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?CcdQueryDisplayConfig@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1800A0270 (-CcdQueryDisplayConfig@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetAdapterDisplayRect(
        CProjectionBorderManager *this,
        const struct _LUID *a2,
        int a3,
        struct tagRECT *a4)
{
  struct DISPLAYCONFIG_PATH_INFO *v7; // r15
  struct DISPLAYCONFIG_MODE_INFO *v8; // rsi
  LONG DisplayConfigBufferSizes; // eax
  unsigned int v10; // ebp
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  struct DISPLAYCONFIG_MODE_INFO *v13; // rax
  unsigned int v14; // ecx
  int DisplayConfig; // eax
  signed int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  LONG v20; // r8d
  LONG v21; // r9d
  int v22; // eax
  unsigned int v24; // [rsp+20h] [rbp-48h]
  enum DISPLAYCONFIG_TOPOLOGY_ID *v25; // [rsp+28h] [rbp-40h]
  unsigned int v26[4]; // [rsp+30h] [rbp-38h] BYREF
  CProjectionBorderManager *v27; // [rsp+70h] [rbp+8h] BYREF

  v27 = this;
  *(_QWORD *)&a4->left = 0LL;
  *(_QWORD *)&a4->right = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(1u, (UINT32 *)&v27, v26);
  v10 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, DisplayConfigBufferSizes, 0x12u);
    goto LABEL_26;
  }
  v11 = 72LL * (unsigned int)v27;
  if ( !is_mul_ok((unsigned int)v27, 0x48uLL) )
    v11 = -1LL;
  v7 = (struct DISPLAYCONFIG_PATH_INFO *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                           WPF::g_pProcessHeap,
                                           v11);
  v12 = (unsigned __int64)v26[0] << 6;
  if ( !is_mul_ok(v26[0], 0x40uLL) )
    v12 = -1LL;
  v13 = (struct DISPLAYCONFIG_MODE_INFO *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                            WPF::g_pProcessHeap,
                                            v12);
  v8 = v13;
  if ( !v7 )
  {
    v24 = 22;
LABEL_11:
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, v24);
    goto LABEL_26;
  }
  if ( !v13 )
  {
    v24 = 23;
    goto LABEL_11;
  }
  DisplayConfig = CcdQueryDisplayConfig(v14, (unsigned int *)&v27, v7, v26, v13, v25);
  v16 = DisplayConfig;
  if ( DisplayConfig > 0 )
    v16 = (unsigned __int16)DisplayConfig | 0x80070000;
  if ( v16 < 0 )
  {
    WindowFrameLoggingTelemetry::ScreenDuplicationFailedToGetDisplayConfig();
    v10 = v16;
  }
  else
  {
    v17 = 0LL;
    if ( (_DWORD)v27 )
    {
      while ( v7[v17].sourceInfo.adapterId.LowPart != a2->LowPart
           || v7[v17].sourceInfo.adapterId.HighPart != a2->HighPart
           || v7[v17].sourceInfo.id != a3 )
      {
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= (unsigned int)v27 )
          goto LABEL_26;
      }
      v18 = v17;
      v19 = (unsigned __int64)v7[v18].sourceInfo.modeInfoIdx << 6;
      v20 = *(LONG *)((char *)&v8->sourceMode.position.x + v19);
      a4->left = v20;
      v21 = *(LONG *)((char *)&v8->sourceMode.position.y + v19);
      a4->top = v21;
      if ( ((v7[v18].targetInfo.rotation - 2) & 0xFFFFFFFD) != 0 )
      {
        a4->right = v20 + *(UINT32 *)((char *)&v8->sourceMode.width + v19);
        v22 = *(LONG *)((char *)&v8->desktopImageInfo.PathSourceSize.y + v19);
      }
      else
      {
        a4->right = v20 + *(UINT32 *)((char *)&v8->sourceMode.height + v19);
        v22 = *(LONG *)((char *)&v8->desktopImageInfo.PathSourceSize.x + v19);
      }
      a4->bottom = v21 + v22;
      v10 = 0;
    }
  }
LABEL_26:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct DISPLAYCONFIG_PATH_INFO *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
    WPF::g_pProcessHeap,
    v7);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct DISPLAYCONFIG_MODE_INFO *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
    WPF::g_pProcessHeap,
    v8);
  return v10;
}
