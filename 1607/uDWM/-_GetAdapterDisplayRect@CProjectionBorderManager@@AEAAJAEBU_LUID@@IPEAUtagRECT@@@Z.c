/*
 * XREFs of ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x18007CFE8
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x18007CAE0 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007C9E4 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CProjectionBorderManager::_GetAdapterDisplayRect(
        CProjectionBorderManager *this,
        const struct _LUID *a2,
        int a3,
        struct tagRECT *a4)
{
  DISPLAYCONFIG_PATH_INFO *v7; // r14
  DISPLAYCONFIG_MODE_INFO *v8; // rdi
  LONG DisplayConfigBufferSizes; // eax
  unsigned int v10; // ebp
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  LONG DisplayConfig; // eax
  signed int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  LONG v19; // r8d
  LONG v20; // r9d
  int v21; // eax
  UINT32 numModeInfoArrayElements[4]; // [rsp+30h] [rbp-38h] BYREF
  CProjectionBorderManager *numPathArrayElements; // [rsp+70h] [rbp+8h] BYREF

  numPathArrayElements = this;
  *(_QWORD *)&a4->left = 0LL;
  *(_QWORD *)&a4->right = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(1u, (UINT32 *)&numPathArrayElements, numModeInfoArrayElements);
  v10 = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v11 = 72LL * (unsigned int)numPathArrayElements;
    if ( !is_mul_ok((unsigned int)numPathArrayElements, 0x48uLL) )
      v11 = -1LL;
    v7 = (DISPLAYCONFIG_PATH_INFO *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                      WPF::g_pProcessHeap,
                                      v11);
    v12 = (unsigned __int64)numModeInfoArrayElements[0] << 6;
    if ( !is_mul_ok(numModeInfoArrayElements[0], 0x40uLL) )
      v12 = -1LL;
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                 WPF::g_pProcessHeap,
                                                 v12);
    v8 = modeInfoArray;
    if ( v7 )
    {
      if ( modeInfoArray )
      {
        DisplayConfig = QueryDisplayConfig(
                          1u,
                          (UINT32 *)&numPathArrayElements,
                          v7,
                          numModeInfoArrayElements,
                          modeInfoArray,
                          0LL);
        v15 = DisplayConfig;
        if ( DisplayConfig > 0 )
          v15 = (unsigned __int16)DisplayConfig | 0x80070000;
        if ( v15 < 0 )
        {
          WindowFrameLoggingTelemetry::ScreenDuplicationFailedToGetDisplayConfig();
          v10 = v15;
        }
        else
        {
          v16 = 0LL;
          if ( (_DWORD)numPathArrayElements )
          {
            while ( v7[v16].sourceInfo.adapterId.LowPart != a2->LowPart
                 || v7[v16].sourceInfo.adapterId.HighPart != a2->HighPart
                 || v7[v16].sourceInfo.id != a3 )
            {
              v16 = (unsigned int)(v16 + 1);
              if ( (unsigned int)v16 >= (unsigned int)numPathArrayElements )
                goto LABEL_25;
            }
            v17 = v16;
            v18 = (unsigned __int64)v7[v17].sourceInfo.modeInfoIdx << 6;
            v19 = *(LONG *)((char *)&v8->sourceMode.position.x + v18);
            a4->left = v19;
            v20 = *(LONG *)((char *)&v8->sourceMode.position.y + v18);
            a4->top = v20;
            if ( ((v7[v17].targetInfo.rotation - 2) & 0xFFFFFFFD) != 0 )
            {
              a4->right = v19 + *(UINT32 *)((char *)&v8->sourceMode.width + v18);
              v21 = *(LONG *)((char *)&v8->desktopImageInfo.PathSourceSize.y + v18);
            }
            else
            {
              a4->right = v19 + *(UINT32 *)((char *)&v8->sourceMode.height + v18);
              v21 = *(LONG *)((char *)&v8->desktopImageInfo.PathSourceSize.x + v18);
            }
            a4->bottom = v20 + v21;
            v10 = 0;
          }
        }
      }
      else
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x17u);
      }
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x16u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, DisplayConfigBufferSizes, 0x12u);
  }
LABEL_25:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, DISPLAYCONFIG_PATH_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v7);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, DISPLAYCONFIG_MODE_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v8);
  return v10;
}
