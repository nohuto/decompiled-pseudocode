/*
 * XREFs of ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800B9058
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1800B8E50 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18009BAEC (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800B9400 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x18017B0E8 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 *     Template_qn @ 0x18017C794 (Template_qn.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::PresentInternalExport(
        CDWMOffScreenSwapChain *this,
        HRGN hrgn,
        unsigned int *a3,
        char a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // r15d
  bool v7; // r13
  const struct tagRECT *v8; // r14
  unsigned int v9; // esi
  int v10; // eax
  int v11; // edi
  unsigned int *v12; // r8
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 i; // rsi
  int v18; // eax
  HRGN v19; // rcx
  int v20; // edx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rcx
  unsigned int v26; // esi
  _QWORD *v27; // r12
  __int128 v28; // xmm1
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rax
  _OWORD *v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int128 v35; // xmm1
  void *v36; // rcx
  unsigned int v37; // [rsp+20h] [rbp-50h]
  char v38; // [rsp+70h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v4 + 8) = 0LL;
  v5 = 0;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 36) = 0;
  *(_BYTE *)v4 = a4;
  *(_OWORD *)(v4 + 16) = 0LL;
  *(_DWORD *)(v4 + 40) = 0;
  v7 = !*((_QWORD *)this + 60) || (_BYTE)a3;
  HrgnToRgnData(hrgn, (struct _RGNDATA **)(v4 + 8), a3);
  v8 = *(const struct tagRECT **)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v8 || !*((_QWORD *)this + 48) )
    goto LABEL_9;
  if ( !v8->right )
  {
    v18 = CDWMOffScreenSwapChain::CopyFromTexture(this, v8 + 1);
    v11 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x255u);
      goto LABEL_17;
    }
LABEL_9:
    if ( !EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT)
      || (v19 = (HRGN)*((_QWORD *)this + 26),
          *(_QWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL,
          HrgnToRgnData(v19, (struct _RGNDATA **)(v4 + 8), v12),
          (v23 = *(_QWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 8)) == 0) )
    {
LABEL_10:
      v13 = 0LL;
      if ( *((_DWORD *)this + 62) )
      {
        v27 = (_QWORD *)((char *)this + 224);
        do
        {
          v28 = *(_OWORD *)(*v27 + 48 * v13 + 16);
          v29 = *(_DWORD *)(*v27 + 48 * v13);
          *(_OWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(*v27 + 48 * v13 + 32);
          if ( v29 == 1 )
          {
            v30 = v5 + 1;
            *(_QWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *(_QWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                             + 0x58);
            *(_QWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_QWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                             + 0x50);
            *(_OWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v28;
            if ( v5 + 1 < v5 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
            }
            else if ( v30 > *(_DWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) )
            {
              v33 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 16, 0x20u, 1, v4 + 96);
              if ( v33 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0xC0u);
              v5 = *(_DWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            }
            else
            {
              v31 = v5++;
              v32 = (_OWORD *)(*(_QWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 32 * v31);
              *(_DWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v30;
              *v32 = v28;
              v32[1] = *(_OWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
            }
            if ( v7 )
            {
              DynArray<_DWMIndirectMetaData,0>::RemoveAt((char *)this + 224, (unsigned int)v13);
              LODWORD(v13) = v13 - 1;
            }
          }
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *((_DWORD *)this + 62) );
      }
      if ( v7 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 59) + 24LL))(
                *((_QWORD *)this + 59),
                *((_QWORD *)this + 26),
                *(_QWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                v5);
        v11 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2A7u);
LABEL_15:
          if ( v5 )
          {
            *(_DWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
            DynArrayImpl<0>::ShrinkToSize(v4 + 16, 0x20u);
          }
          goto LABEL_17;
        }
        v15 = *((_QWORD *)this + 60);
        if ( v15 && *((_DWORD *)this + 62) && *(_BYTE *)v4 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 56LL))(v15, *((_QWORD *)this + 28));
          if ( ((v11 + 2147467263) & 0xFFFFFFFB) == 0 )
            v11 = -2003304307;
          if ( v11 < 0 )
          {
            v37 = 703;
LABEL_58:
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v37);
            goto LABEL_15;
          }
        }
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 60) + 56LL))(
                *((_QWORD *)this + 60),
                *((_QWORD *)this + 28),
                *((unsigned int *)this + 62));
        if ( ((v11 + 2147467263) & 0xFFFFFFFB) == 0 )
          v11 = -2003304307;
        if ( v11 < 0 )
        {
          v37 = 716;
          goto LABEL_58;
        }
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 62); i = (unsigned int)(i + 1) )
      {
        v34 = *((_QWORD *)this + 28);
        v35 = *(_OWORD *)(v34 + 48 * i + 16);
        LODWORD(v34) = *(_DWORD *)(v34 + 48 * i);
        *(_OWORD *)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v35;
        if ( !(_DWORD)v34 )
        {
          v36 = *(void **)(((unsigned __int64)&v38 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
          if ( v36 )
            DeleteObject(v36);
        }
      }
      goto LABEL_15;
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
LABEL_38:
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
    goto LABEL_38;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = CDWMOffScreenSwapChain::CopyFromTexture(this, &v8[v9 + 2]);
    v11 = v10;
    if ( v10 < 0 )
      break;
    if ( ++v9 >= v8->right )
      goto LABEL_9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x250u);
LABEL_17:
  if ( v8 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, const struct tagRECT *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v8);
  DynArrayImpl<1>::~DynArrayImpl<1>(v4 + 16);
  return (unsigned int)v11;
}
