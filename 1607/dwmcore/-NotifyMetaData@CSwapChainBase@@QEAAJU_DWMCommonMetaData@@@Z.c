/*
 * XREFs of ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18017A7A4
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1800B8E50 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@.c)
 *     ?NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z @ 0x18017A520 (-NotifyMetaData@CHwDisplayRenderTarget@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xxx @ 0x18011BEC0 (Template_xxx.c)
 *     Template_xnn @ 0x180140F50 (Template_xnn.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18017AC80 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     Template_xxqqxx @ 0x18017B1F4 (Template_xxqqxx.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMetaData(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  unsigned int v3; // ebx
  unsigned int v6; // esi
  _QWORD *v7; // r13
  __int64 v8; // rax
  unsigned int v9; // edx
  _OWORD *v10; // rcx
  int v11; // eax
  _QWORD *v12; // r13
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // r12d
  _OWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // edi
  _OWORD *v21; // rcx
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  unsigned int v26; // edx
  _OWORD *v27; // rcx
  int v28; // eax
  unsigned int *v29; // r8
  HRGN v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // r14
  char v34; // al
  unsigned int v36; // [rsp+20h] [rbp-60h]
  __int64 v37; // [rsp+28h] [rbp-58h]
  struct _RGNDATA *v38[2]; // [rsp+80h] [rbp+0h] BYREF

  v2 = (__int64 *)((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = 0;
  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
    return v6;
  if ( !*(_DWORD *)a2 )
  {
    v25 = *(unsigned int *)(a1 + 248);
    v26 = v25 + 1;
    if ( (int)v25 + 1 >= (unsigned int)v25 )
    {
      if ( v26 <= *(_DWORD *)(a1 + 244) )
      {
        v27 = (_OWORD *)(*(_QWORD *)(a1 + 224) + 48 * v25);
        *v27 = *(_OWORD *)a2;
        v27[1] = *(_OWORD *)(a2 + 16);
        v27[2] = *(_OWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 248) = v26;
LABEL_44:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xxqqxx(
            (_DWORD)v27,
            v26,
            *(_QWORD *)(a2 + 8),
            *(_QWORD *)(a2 + 24),
            *(_DWORD *)(a2 + 16),
            *(_DWORD *)(a2 + 20),
            a1 - 32,
            *(_DWORD *)(a1 + 248));
        if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_REMOTEAPP_WINDOWCLIP) )
        {
          v30 = *(HRGN *)(a2 + 24);
          *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_DWORD *)(a2 + 16);
          *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C) = *(_DWORD *)(a2 + 20);
          *v2 = 0LL;
          *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
          HrgnToRgnData(v30, (struct _RGNDATA **)((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL), v29);
          v33 = *v2;
          if ( *v2 )
          {
            if ( *(_DWORD *)(v33 + 8) )
            {
              v34 = Microsoft_Windows_Dwm_CoreEnableBits;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              {
                TemplateEventDescriptor(v31, &EVTDESC_REMOTEAPP_WINDOWCLIP_Start);
                v34 = Microsoft_Windows_Dwm_CoreEnableBits;
              }
              if ( *(_DWORD *)(v33 + 8) )
              {
                do
                {
                  if ( (v34 & 2) != 0 )
                  {
                    Template_xnn(
                      (__int64)(v2 + 10),
                      &EVTDESC_REMOTEAPP_WINDOWCLIP,
                      *(_QWORD *)(a2 + 8),
                      v32,
                      v33 + 32 + 16LL * v3,
                      v37,
                      (__int64)(v2 + 10));
                    v34 = Microsoft_Windows_Dwm_CoreEnableBits;
                  }
                  ++v3;
                }
                while ( v3 < *(_DWORD *)(v33 + 8) );
              }
              if ( (v34 & 2) != 0 )
                TemplateEventDescriptor(v31, &EVTDESC_REMOTEAPP_WINDOWCLIP_Stop);
            }
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v33);
          }
        }
        return v6;
      }
      v28 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 0x30u, 1, a2);
      v15 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
    }
    else
    {
      v15 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    v6 = v15;
    if ( v15 < 0 )
    {
      v36 = 663;
      goto LABEL_59;
    }
    goto LABEL_44;
  }
  if ( *(_DWORD *)a2 == 1 )
  {
    v23 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)a2;
    v24 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v23;
    *(_QWORD *)&v23 = *(_QWORD *)(a2 + 48);
    *(_OWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v24;
    *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v23;
    CSwapChainBase::NotifyMoveOptimization(a1, v2 + 2);
    return v6;
  }
  if ( *(_DWORD *)a2 != 2 )
  {
    if ( *(_DWORD *)a2 != 3 )
    {
      if ( *(_DWORD *)a2 != 4 )
        return v6;
      v7 = (_QWORD *)(a1 + 224);
      v8 = *(unsigned int *)(a1 + 248);
      v9 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
      {
        if ( v9 <= *(_DWORD *)(a1 + 244) )
        {
          v10 = (_OWORD *)(*v7 + 48 * v8);
          *v10 = *(_OWORD *)a2;
          v10[1] = *(_OWORD *)(a2 + 16);
          v10[2] = *(_OWORD *)(a2 + 32);
          *(_DWORD *)(a1 + 248) = v9;
LABEL_14:
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xxx(
              (__int64)v10,
              &EVTDESC_DETECT_TOPLEVELWINDOW_DESTROY,
              *(_QWORD *)(a2 + 8),
              v7,
              *(unsigned int *)(a1 + 248));
          return v6;
        }
        v11 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 0x30u, 1, a2);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( (v6 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2C3u);
        return v6;
      }
      goto LABEL_14;
    }
    v12 = (_QWORD *)(a1 + 224);
    v13 = *(unsigned int *)(a1 + 248);
    v14 = v13 + 1;
    if ( (int)v13 + 1 >= (unsigned int)v13 )
    {
      if ( v14 <= *(_DWORD *)(a1 + 244) )
      {
        v16 = (_OWORD *)(*v12 + 48 * v13);
        *v16 = *(_OWORD *)a2;
        v16[1] = *(_OWORD *)(a2 + 16);
        v16[2] = *(_OWORD *)(a2 + 32);
        *(_DWORD *)(a1 + 248) = v14;
        goto LABEL_25;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 0x30u, 1, a2);
      v15 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
    }
    else
    {
      v15 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    v6 = v15;
    if ( v15 >= 0 )
    {
LABEL_25:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxx(
          (__int64)v16,
          &EVTDESC_DETECT_DESKTOPSCREEN_WRITE,
          *(_QWORD *)(a2 + 8),
          v12,
          *(unsigned int *)(a1 + 248));
      return v6;
    }
    v36 = 713;
LABEL_59:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v36);
    return v6;
  }
  v18 = *(unsigned int *)(a1 + 248);
  v19 = v18 + 1;
  if ( (int)v18 + 1 >= (unsigned int)v18 )
  {
    if ( v19 <= *(_DWORD *)(a1 + 244) )
    {
      v21 = (_OWORD *)(*(_QWORD *)(a1 + 224) + 48 * v18);
      *v21 = *(_OWORD *)a2;
      v21[1] = *(_OWORD *)(a2 + 16);
      v21[2] = *(_OWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 248) = v19;
      return v6;
    }
    v22 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 224, 0x30u, 1, a2);
    v20 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
  }
  else
  {
    v20 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  v6 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x2D2u);
  return v6;
}
