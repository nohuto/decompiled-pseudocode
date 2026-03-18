/*
 * XREFs of ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800B5638
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1800B53B0 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180070DEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800B5A6C (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x18014AAF0 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 *     Template_qn @ 0x18014BBA4 (Template_qn.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::PresentInternalExport(
        CDWMOffScreenSwapChain *this,
        HRGN a2,
        unsigned int *a3,
        char a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v6; // r14d
  const struct tagRECT *v7; // r13
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // esi
  unsigned int *v11; // r8
  char v12; // si
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // r14
  __int64 i; // rbx
  int v18; // eax
  HRGN v19; // rcx
  int v20; // edx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rsi
  char v24; // al
  __int64 v25; // rcx
  unsigned int v26; // ebx
  void (__fastcall *v27)(_QWORD); // rdi
  unsigned int v28; // r13d
  _QWORD *v29; // rdi
  bool v30; // zf
  __int128 v31; // xmm1
  unsigned int v32; // ecx
  __int64 v33; // rax
  _OWORD *v34; // rax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  void *v39; // rcx
  char v40; // [rsp+70h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_BYTE *)(v4 + 1) = a4;
  *(_QWORD *)(v4 + 8) = 0LL;
  v6 = 0;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_OWORD *)(v4 + 16) = 0LL;
  *(_DWORD *)(v4 + 40) = 0;
  if ( !*((_QWORD *)this + 60) || (*(_BYTE *)v4 = 0, (_BYTE)a3) )
    *(_BYTE *)v4 = 1;
  HrgnToRgnData(a2, (struct _RGNDATA **)(v4 + 8), a3);
  v7 = *(const struct tagRECT **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v7 || !*((_QWORD *)this + 48) )
    goto LABEL_9;
  if ( !v7->right )
  {
    v18 = CDWMOffScreenSwapChain::CopyFromTexture(this, v7 + 1);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x252u);
      goto LABEL_19;
    }
LABEL_9:
    if ( !EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT)
      || (v19 = (HRGN)*((_QWORD *)this + 26),
          *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL,
          HrgnToRgnData(v19, (struct _RGNDATA **)(v4 + 48), v11),
          (v23 = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30)) == 0) )
    {
LABEL_10:
      if ( g_pMediaControl )
      {
        v27 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 58);
        if ( v27 )
          v27(*(unsigned int *)(*((_QWORD *)g_pMediaControl + 2) + 124LL));
      }
      v12 = *(_BYTE *)v4;
      v13 = 0;
      if ( *((_DWORD *)this + 62) )
      {
        v28 = *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
        v29 = (_QWORD *)((char *)this + 224);
        do
        {
          v30 = *(_DWORD *)(*v29 + 48LL * v13) == 1;
          v31 = *(_OWORD *)(*v29 + 48LL * v13 + 16);
          *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_OWORD *)(*v29 + 48LL * v13 + 32);
          if ( v30 )
          {
            v32 = v6 + 1;
            *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                             + 0x60);
            *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                             + 0x58);
            *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v31;
            if ( v6 + 1 >= v6 )
            {
              if ( v32 > v28 )
              {
                v35 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 16, 32, 1, v4 + 104);
                if ( v35 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0xC0u);
                v6 = *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                v28 = *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
              }
              else
              {
                v33 = v6++;
                v34 = (_OWORD *)(*(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 32 * v33);
                *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v32;
                *v34 = v31;
                v34[1] = *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
            }
            if ( v12 )
              DynArray<_DWMIndirectMetaData,0>::RemoveAt((char *)this + 224, v13--);
          }
          ++v13;
        }
        while ( v13 < *((_DWORD *)this + 62) );
        v7 = *(const struct tagRECT **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      }
      if ( v12 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 59) + 24LL))(
                *((_QWORD *)this + 59),
                *((_QWORD *)this + 26),
                *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                v6);
        v10 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2A9u);
LABEL_17:
          if ( v6 )
          {
            *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
            DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v4 + 16), 0x20u);
          }
          goto LABEL_19;
        }
        v15 = *((_QWORD *)this + 60);
        if ( v15 )
        {
          v36 = *((_DWORD *)this + 62);
          *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v36;
          if ( v36 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
            {
              v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 56LL))(
                      v15,
                      *((_QWORD *)this + 28),
                      *(unsigned int *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
              if ( ((v10 + 2147467263) & 0xFFFFFFFB) == 0 )
                v10 = -2003304307;
              if ( v10 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2C1u);
LABEL_16:
                v6 = *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                goto LABEL_17;
              }
            }
          }
        }
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 60) + 56LL))(
                *((_QWORD *)this + 60),
                *((_QWORD *)this + 28),
                *((unsigned int *)this + 62));
        if ( ((v10 + 2147467263) & 0xFFFFFFFB) == 0 )
          v10 = -2003304307;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2CEu);
          goto LABEL_16;
        }
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 62); i = (unsigned int)(i + 1) )
      {
        v37 = *((_QWORD *)this + 28);
        v38 = *(_DWORD *)(v37 + 48 * i);
        *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_OWORD *)(v37 + 48 * i + 16);
        if ( !v38 )
        {
          v39 = *(void **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
          if ( v39 )
            DeleteObject(v39);
        }
      }
      goto LABEL_16;
    }
    v24 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_q(v21, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Start, *(unsigned int *)(v23 + 8));
      v24 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    v25 = *(unsigned int *)(v23 + 8);
    if ( (_DWORD)v25 )
    {
      v26 = 0;
      do
      {
        if ( (v24 & 0x20) != 0 )
        {
          Template_qn(v25, v20, *((_QWORD *)this + 48) == 0LL, v22, v23 + 32 + 16LL * v26);
          v24 = Microsoft_Windows_Dwm_CoreEnableBits;
        }
        ++v26;
      }
      while ( v26 < *(_DWORD *)(v23 + 8) );
    }
    else
    {
      if ( (v24 & 0x20) == 0 )
      {
LABEL_40:
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          v23);
        goto LABEL_10;
      }
      Template_qn(0, v20, *((_QWORD *)this + 48) == 0LL, v22, v23 + 16);
      v24 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    if ( (v24 & 0x20) != 0 )
      TemplateEventDescriptor(v25, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Stop);
    goto LABEL_40;
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = CDWMOffScreenSwapChain::CopyFromTexture(this, &v7[v8 + 2]);
    v10 = v9;
    if ( v9 < 0 )
      break;
    if ( ++v8 >= v7->right )
      goto LABEL_9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x24Du);
LABEL_19:
  if ( v7 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const struct tagRECT *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v7);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)(v4 + 16));
  return (unsigned int)v10;
}
