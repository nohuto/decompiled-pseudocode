/*
 * XREFs of ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002DE80
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14003191C (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x14000B500 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x14000C850 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000CB50 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D4A0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000D774 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000D7B0 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EF10 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1400126C0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019552 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140025460 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPipeInstance::CreateFormatConverterPipeInstance(
        struct IUnknown *a1,
        const struct tWAVEFORMATEX **a2,
        struct CPipeInstance **a3)
{
  BOOL v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned __int16 *v9; // rbx
  CAudioMediaType *v10; // rdi
  __int64 (__fastcall *v11)(CAudioMediaType *); // rax
  int v12; // eax
  unsigned __int16 *v13; // rax
  __int64 v14; // r14
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rcx
  int v18; // edi
  int v19; // ebx
  char *v20; // rax
  _UNKNOWN **v21; // rcx
  __int64 v23; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-D8h] BYREF
  int pExceptionObject; // [rsp+58h] [rbp-D0h] BYREF
  int v26; // [rsp+5Ch] [rbp-CCh] BYREF
  int v27; // [rsp+60h] [rbp-C8h] BYREF
  int v28; // [rsp+64h] [rbp-C4h] BYREF
  int v29; // [rsp+68h] [rbp-C0h] BYREF
  int v30; // [rsp+6Ch] [rbp-BCh] BYREF
  struct IAudioMediaType *v31; // [rsp+70h] [rbp-B8h] BYREF
  LPVOID *v32; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int16 *v34; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+90h] [rbp-98h] BYREF
  __int128 v36; // [rsp+98h] [rbp-90h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-80h]
  __int128 v38; // [rsp+B0h] [rbp-78h]
  int v39; // [rsp+C0h] [rbp-68h]
  __int64 v40; // [rsp+C8h] [rbp-60h]
  long *v41; // [rsp+D0h] [rbp-58h] BYREF
  ATL::CAtlException *v42; // [rsp+D8h] [rbp-50h] BYREF
  GUID v43; // [rsp+E0h] [rbp-48h] BYREF
  BOOL v45; // [rsp+138h] [rbp+10h]
  unsigned __int16 *v47; // [rsp+148h] [rbp+20h] BYREF

  v40 = -2LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 10;
  v5 = *(_DWORD *)a2 != 0;
  v45 = v5;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v24 = 0LL;
    v6 = CProcessNode::CreateDummyProcessNode(v5, a2[1], &v24);
    if ( v6 < 0 )
    {
      pExceptionObject = v6;
      throw (long *)&pExceptionObject;
    }
    v33 = v24;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v36, &v33);
    v24 = 0LL;
    if ( *(_DWORD *)a2 )
    {
      v23 = 0LL;
      v12 = CProcessNode::CreateDummyProcessNode(v5, a2[2], &v23);
      if ( v12 < 0 )
      {
        v28 = v12;
        throw (long *)&v28;
      }
      v35 = v23;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v36, &v35);
      v23 = 0LL;
    }
    else
    {
      v31 = 0LL;
      v7 = CAudioMediaType::Create(a2[2], (unsigned int)a2[2]->cbSize + 18, &v31, 0.0);
      if ( v7 < 0 )
      {
        v26 = v7;
        throw (long *)&v26;
      }
      v47 = 0LL;
      v43 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v8 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
             v5,
             1,
             0,
             (__int128 *)&v43,
             &v47);
      if ( v8 < 0 )
      {
        v27 = v8;
        throw (long *)&v27;
      }
      v9 = v47;
      v10 = (CAudioMediaType *)v31;
      (*(void (__fastcall **)(unsigned __int16 *, struct IAudioMediaType *))(*(_QWORD *)v47 + 24LL))(v47, v31);
      (*(void (__fastcall **)(unsigned __int16 *, CAudioMediaType *))(*(_QWORD *)v9 + 32LL))(v9, v10);
      v34 = v9;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v36, (__int64 *)&v34);
      v47 = 0LL;
      if ( v10 )
      {
        v11 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v10 + 16LL);
        if ( v11 == CAudioMediaType::Release )
          CAudioMediaType::Release(v10);
        else
          v11(v10);
      }
    }
    v13 = (unsigned __int16 *)operator new(0x130uLL);
    v47 = v13;
    if ( v13 )
      v14 = CPipeInstance::CPipeInstance((__int64)v13, 4);
    else
      v14 = 0LL;
    v32 = (LPVOID *)v14;
    if ( !v14 )
    {
      v29 = -2147024882;
      throw (long *)&v29;
    }
    v15 = (unsigned __int16 *)a2[4];
    v47 = v15;
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    *(_QWORD *)(v14 + 184) = 0LL;
    v17 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
      v19 = -2147024362;
    }
    else
    {
      *(_QWORD *)(v14 + 184) = 0LL;
      if ( is_mul_ok(v17, 2uLL) )
      {
        v20 = (char *)CoTaskMemAlloc(2 * v17);
        *(_QWORD *)(v14 + 184) = v20;
        if ( !v20 )
        {
          v19 = -2147024882;
          goto LABEL_40;
        }
        v18 = 0;
        v19 = 0;
        StringCchCopyNExW(v20, v16 + 1, v47, v16);
      }
      else
      {
        v18 = -2147024362;
        v19 = -2147024362;
      }
      if ( v18 >= 0 )
      {
        *(_DWORD *)(v14 + 120) = *(_DWORD *)a2 == 2;
        *(_DWORD *)(v14 + 12) = v45;
        *(_DWORD *)(v14 + 128) = 0;
        if ( *(_QWORD *)(v14 + 144) )
          ATL::AtlComPtrAssign((struct IUnknown **)(v14 + 144), 0LL);
        if ( *(struct IUnknown **)(v14 + 232) != a1 )
          ATL::AtlComPtrAssign((struct IUnknown **)(v14 + 232), a1);
        *(_QWORD *)v14 = 0LL;
        *(_DWORD *)(v14 + 8) = 1;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
          (__int64 **)(v14 + 16),
          (__int64)&v36);
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v36);
        *(_DWORD *)(v14 + 140) = (int)((float)((float)(int)a2[2]->nAvgBytesPerSec / (float)a2[2]->nBlockAlign)
                                     * (double)(int)a2[3]
                                     / 10000000.0
                                     + 0.5);
        *(_DWORD *)(v14 + 132) = 14;
        *(_DWORD *)(v14 + 204) = 0;
        *(GUID *)(v14 + 208) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v32 = 0LL;
        *a3 = (struct CPipeInstance *)v14;
        ATL::CAutoPtr<CPipeInstance>::Free(&v32);
        v24 = 0LL;
        goto LABEL_54;
      }
    }
LABEL_40:
    v30 = v19;
    throw (long *)&v30;
  }
  catch ( long *v41 )
  {
    v18 = *(_DWORD *)v41;
  }
  catch ( ATL::CAtlException *v42 )
  {
    v18 = *(_DWORD *)v42;
  }
LABEL_54:
  v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, (__int64)&WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, v18);
    v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v18 < 0 )
  {
    if ( v21 != &WPP_GLOBAL_Control && (*((_DWORD *)v21 + 7) & 0x20000) != 0 && *((_BYTE *)v21 + 25) >= 2u )
      WPP_SF_D((__int64)v21[2], 0x13u, (__int64)&WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, v18);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateFormatConverterPipeInstance", 564, v18);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v36);
  return (unsigned int)v18;
}
