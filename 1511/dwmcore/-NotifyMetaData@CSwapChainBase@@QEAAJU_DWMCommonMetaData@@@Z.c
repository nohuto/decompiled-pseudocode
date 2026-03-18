/*
 * XREFs of ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18014A148
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1800B53B0 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@.c)
 *     ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x180149EB0 (-NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180070DEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_xnn @ 0x180124694 (Template_xnn.c)
 *     Template_xxx @ 0x180124710 (Template_xxx.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18014A65C (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     Template_xxqqxx @ 0x18014ABFC (Template_xxqqxx.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMetaData(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  unsigned int v4; // edi
  unsigned int v6; // r14d
  _QWORD *v7; // r13
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // ebx
  _OWORD *v11; // rcx
  int v12; // eax
  _QWORD *v13; // r13
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // ebx
  _OWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // ebx
  _OWORD *v22; // rcx
  int v23; // eax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  unsigned int v27; // edx
  int v28; // ebx
  _OWORD *v29; // rcx
  unsigned int *v30; // r8
  HRGN v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // r15
  char v35; // al
  int v37; // eax
  __int64 v38; // [rsp+28h] [rbp-58h]
  struct _RGNDATA *v39[2]; // [rsp+80h] [rbp+0h] BYREF

  v2 = (__int64 *)((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = 0;
  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
    return v6;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v26 = *(unsigned int *)(a1 + 248);
      v27 = v26 + 1;
      if ( (int)v26 + 1 < (unsigned int)v26 )
      {
        v28 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v6 = -2147024362;
LABEL_60:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x297u);
        return v6;
      }
      if ( v27 > *(_DWORD *)(a1 + 244) )
      {
        v37 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 48, 1, a2);
        v28 = v37;
        if ( v37 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xC0u);
        v6 = v28;
        if ( v28 < 0 )
          goto LABEL_60;
      }
      else
      {
        v29 = (_OWORD *)(*(_QWORD *)(a1 + 224) + 48 * v26);
        *v29 = *(_OWORD *)a2;
        v29[1] = *(_OWORD *)(a2 + 16);
        v29[2] = *(_OWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 248) = v27;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxqqxx(
          (_DWORD)v29,
          v27,
          *(_QWORD *)(a2 + 8),
          *(_QWORD *)(a2 + 24),
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          a1 - 32,
          *(_DWORD *)(a1 + 248));
      if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_REMOTEAPP_WINDOWCLIP) )
      {
        v31 = *(HRGN *)(a2 + 24);
        *(_DWORD *)(((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_DWORD *)(a2 + 16);
        *(_DWORD *)(((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = *(_DWORD *)(a2 + 20);
        *v2 = 0LL;
        *(_QWORD *)(((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
        HrgnToRgnData(v31, (struct _RGNDATA **)((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFC0uLL), v30);
        v34 = *v2;
        if ( *v2 )
        {
          if ( *(_DWORD *)(v34 + 8) )
          {
            v35 = Microsoft_Windows_Dwm_CoreEnableBits;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            {
              TemplateEventDescriptor(v32, &EVTDESC_REMOTEAPP_WINDOWCLIP_Start);
              v35 = Microsoft_Windows_Dwm_CoreEnableBits;
            }
            if ( *(_DWORD *)(v34 + 8) )
            {
              do
              {
                if ( (v35 & 2) != 0 )
                {
                  Template_xnn(
                    (__int64)(v2 + 10),
                    &EVTDESC_REMOTEAPP_WINDOWCLIP,
                    *(_QWORD *)(a2 + 8),
                    v33,
                    v34 + 32 + 16LL * v4,
                    v38,
                    (__int64)(v2 + 10));
                  v35 = Microsoft_Windows_Dwm_CoreEnableBits;
                }
                ++v4;
              }
              while ( v4 < *(_DWORD *)(v34 + 8) );
            }
            if ( (v35 & 2) != 0 )
              TemplateEventDescriptor(v32, &EVTDESC_REMOTEAPP_WINDOWCLIP_Stop);
          }
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v34);
        }
      }
      return v6;
    case 1:
      v24 = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)a2;
      v25 = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v24;
      *(_QWORD *)&v24 = *(_QWORD *)(a2 + 48);
      *(_OWORD *)(((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v25;
      *(_QWORD *)(((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v24;
      CSwapChainBase::NotifyMoveOptimization(a1, v2 + 2);
      return v6;
    case 2:
      v19 = *(unsigned int *)(a1 + 248);
      v20 = v19 + 1;
      if ( (int)v19 + 1 >= (unsigned int)v19 )
      {
        if ( v20 <= *(_DWORD *)(a1 + 244) )
        {
          v22 = (_OWORD *)(*(_QWORD *)(a1 + 224) + 48 * v19);
          *v22 = *(_OWORD *)a2;
          v22[1] = *(_OWORD *)(a2 + 16);
          v22[2] = *(_OWORD *)(a2 + 32);
          *(_DWORD *)(a1 + 248) = v20;
          return v6;
        }
        v23 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 48, 1, a2);
        v21 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
        v6 = v21;
        if ( v21 >= 0 )
          return v6;
      }
      else
      {
        v21 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v6 = -2147024362;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x2D2u);
      return v6;
    case 3:
      v13 = (_QWORD *)(a1 + 224);
      v14 = *(unsigned int *)(a1 + 248);
      v15 = v14 + 1;
      if ( (int)v14 + 1 < (unsigned int)v14 )
      {
        v16 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v6 = -2147024362;
LABEL_27:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2C9u);
        return v6;
      }
      if ( v15 > *(_DWORD *)(a1 + 244) )
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 48, 1, a2);
        v16 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
        v6 = v16;
        if ( v16 < 0 )
          goto LABEL_27;
      }
      else
      {
        v17 = (_OWORD *)(*v13 + 48 * v14);
        *v17 = *(_OWORD *)a2;
        v17[1] = *(_OWORD *)(a2 + 16);
        v17[2] = *(_OWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 248) = v15;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxx(
          (__int64)v17,
          &EVTDESC_DETECT_DESKTOPSCREEN_WRITE,
          *(_QWORD *)(a2 + 8),
          v13,
          *(unsigned int *)(a1 + 248));
      return v6;
    case 4:
      v7 = (_QWORD *)(a1 + 224);
      v8 = *(unsigned int *)(a1 + 248);
      v9 = v8 + 1;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v6 = -2147024362;
LABEL_17:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2C3u);
        return v6;
      }
      if ( v9 > *(_DWORD *)(a1 + 244) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 48, 1, a2);
        v10 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
        v6 = v10;
        if ( v10 < 0 )
          goto LABEL_17;
      }
      else
      {
        v11 = (_OWORD *)(*v7 + 48 * v8);
        *v11 = *(_OWORD *)a2;
        v11[1] = *(_OWORD *)(a2 + 16);
        v11[2] = *(_OWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 248) = v9;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxx(
          (__int64)v11,
          &EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY,
          *(_QWORD *)(a2 + 8),
          v7,
          *(unsigned int *)(a1 + 248));
      break;
  }
  return v6;
}
