/*
 * XREFs of ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801395A8
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18008C0B0 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@.c)
 *     ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x180139240 (-NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_xnn @ 0x180106B90 (Template_xnn.c)
 *     Template_xxx @ 0x180106C0C (Template_xxx.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180139B94 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     Template_xxqqxx @ 0x18013A134 (Template_xxqqxx.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMetaData(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  unsigned int v4; // edi
  unsigned int v6; // r14d
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // ebx
  _OWORD *v10; // rcx
  int v11; // eax
  _QWORD *v12; // r13
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // ebx
  _OWORD *v16; // rcx
  int v17; // eax
  _QWORD *v18; // r13
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // ebx
  _OWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // edx
  int v26; // ebx
  _OWORD *v27; // rcx
  int v28; // eax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int64 v31; // rax
  unsigned int v32; // edx
  int v33; // ebx
  _OWORD *v34; // rcx
  unsigned int *v35; // r8
  HRGN v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // r15
  char v40; // al
  int v42; // eax
  __int64 v43; // [rsp+28h] [rbp-58h]
  struct _RGNDATA *v44[2]; // [rsp+80h] [rbp+0h] BYREF

  v2 = (__int64 *)((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = 0;
  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
    return v6;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v31 = *(unsigned int *)(a1 + 248);
      v32 = v31 + 1;
      if ( (int)v31 + 1 < (unsigned int)v31 )
      {
        v33 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v6 = -2147024362;
LABEL_71:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x297u);
        return v6;
      }
      if ( v32 > *(_DWORD *)(a1 + 244) )
      {
        v42 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 0x30u, 1, a2);
        v33 = v42;
        if ( v42 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0xC0u);
        v6 = v33;
        if ( v33 < 0 )
          goto LABEL_71;
      }
      else
      {
        v34 = (_OWORD *)(*(_QWORD *)(a1 + 224) + 48 * v31);
        *v34 = *(_OWORD *)a2;
        v34[1] = *(_OWORD *)(a2 + 16);
        v34[2] = *(_OWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 248) = v32;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxqqxx(
          (_DWORD)v34,
          v32,
          *(_QWORD *)(a2 + 8),
          *(_QWORD *)(a2 + 24),
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          a1 - 32,
          *(_DWORD *)(a1 + 248));
      if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_REMOTEAPP_WINDOWCLIP) )
      {
        v36 = *(HRGN *)(a2 + 24);
        *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_DWORD *)(a2 + 16);
        *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = *(_DWORD *)(a2 + 20);
        *v2 = 0LL;
        *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
        HrgnToRgnData(v36, (struct _RGNDATA **)((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL), v35);
        v39 = *v2;
        if ( *v2 )
        {
          if ( *(_DWORD *)(v39 + 8) )
          {
            v40 = Microsoft_Windows_Dwm_CoreEnableBits;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            {
              TemplateEventDescriptor(v37, &EVTDESC_REMOTEAPP_WINDOWCLIP_Start);
              v40 = Microsoft_Windows_Dwm_CoreEnableBits;
            }
            if ( *(_DWORD *)(v39 + 8) )
            {
              do
              {
                if ( (v40 & 2) != 0 )
                {
                  Template_xnn(
                    (__int64)(v2 + 10),
                    &EVTDESC_REMOTEAPP_WINDOWCLIP,
                    *(_QWORD *)(a2 + 8),
                    v38,
                    v39 + 32 + 16LL * v4,
                    v43,
                    (__int64)(v2 + 10));
                  v40 = Microsoft_Windows_Dwm_CoreEnableBits;
                }
                ++v4;
              }
              while ( v4 < *(_DWORD *)(v39 + 8) );
            }
            if ( (v40 & 2) != 0 )
              TemplateEventDescriptor(v37, &EVTDESC_REMOTEAPP_WINDOWCLIP_Stop);
          }
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v39);
        }
      }
      return v6;
    case 1:
      v29 = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)a2;
      v30 = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v29;
      *(_QWORD *)&v29 = *(_QWORD *)(a2 + 48);
      *(_OWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v30;
      *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v29;
      CSwapChainBase::NotifyMoveOptimization(a1, v2 + 2);
      return v6;
    case 2:
      v24 = *(unsigned int *)(a1 + 248);
      v25 = v24 + 1;
      if ( (int)v24 + 1 >= (unsigned int)v24 )
      {
        if ( v25 <= *(_DWORD *)(a1 + 244) )
        {
          v27 = (_OWORD *)(*(_QWORD *)(a1 + 224) + 48 * v24);
          *v27 = *(_OWORD *)a2;
          v27[1] = *(_OWORD *)(a2 + 16);
          v27[2] = *(_OWORD *)(a2 + 32);
          *(_DWORD *)(a1 + 248) = v25;
          return v6;
        }
        v28 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 0x30u, 1, a2);
        v26 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
        v6 = v26;
        if ( v26 >= 0 )
          return v6;
      }
      else
      {
        v26 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v6 = -2147024362;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x2D3u);
      return v6;
    case 3:
      v18 = (_QWORD *)(a1 + 224);
      v19 = *(unsigned int *)(a1 + 248);
      v20 = v19 + 1;
      if ( (int)v19 + 1 < (unsigned int)v19 )
      {
        v21 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v6 = -2147024362;
LABEL_38:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x2C9u);
        return v6;
      }
      if ( v20 > *(_DWORD *)(a1 + 244) )
      {
        v23 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 0x30u, 1, a2);
        v21 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
        v6 = v21;
        if ( v21 < 0 )
          goto LABEL_38;
      }
      else
      {
        v22 = (_OWORD *)(*v18 + 48 * v19);
        *v22 = *(_OWORD *)a2;
        v22[1] = *(_OWORD *)(a2 + 16);
        v22[2] = *(_OWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 248) = v20;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxx(
          (__int64)v22,
          &EVTDESC_DETECT_DESKTOPSCREEN_WRITE,
          *(_QWORD *)(a2 + 8),
          v18,
          *(unsigned int *)(a1 + 248));
      return v6;
    case 4:
      v12 = (_QWORD *)(a1 + 224);
      v13 = *(unsigned int *)(a1 + 248);
      v14 = v13 + 1;
      if ( (int)v13 + 1 < (unsigned int)v13 )
      {
        v15 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v6 = -2147024362;
LABEL_28:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2C3u);
        return v6;
      }
      if ( v14 > *(_DWORD *)(a1 + 244) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 0x30u, 1, a2);
        v15 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
        v6 = v15;
        if ( v15 < 0 )
          goto LABEL_28;
      }
      else
      {
        v16 = (_OWORD *)(*v12 + 48 * v13);
        *v16 = *(_OWORD *)a2;
        v16[1] = *(_OWORD *)(a2 + 16);
        v16[2] = *(_OWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 248) = v14;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxx(
          (__int64)v16,
          &EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY,
          *(_QWORD *)(a2 + 8),
          v12,
          *(unsigned int *)(a1 + 248));
      return v6;
    case 5:
      v7 = *(unsigned int *)(a1 + 248);
      v8 = v7 + 1;
      if ( (int)v7 + 1 < (unsigned int)v7 )
      {
        v9 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v6 = -2147024362;
LABEL_17:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2CFu);
        return v6;
      }
      if ( v8 > *(_DWORD *)(a1 + 244) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 0x30u, 1, a2);
        v9 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
        v6 = v9;
        if ( v9 < 0 )
          goto LABEL_17;
      }
      else
      {
        v10 = (_OWORD *)(*(_QWORD *)(a1 + 224) + 48 * v7);
        *v10 = *(_OWORD *)a2;
        v10[1] = *(_OWORD *)(a2 + 16);
        v10[2] = *(_OWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 248) = v8;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor((__int64)v10, &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES);
      break;
  }
  return v6;
}
