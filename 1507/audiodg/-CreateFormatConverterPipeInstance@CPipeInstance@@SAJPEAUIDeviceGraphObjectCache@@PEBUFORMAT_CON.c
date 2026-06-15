/*
 * XREFs of ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002EEB8
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140034414 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x140008790 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x140008A00 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140009C80 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B4E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000B7A0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000B820 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000B9A0 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140012FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14001893C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019B5C (_CxxThrowException_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
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
  __int64 (__fastcall *v11)(CAudioMediaType *); // rbx
  int v12; // eax
  unsigned __int16 *v13; // rax
  __int64 v14; // rsi
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rcx
  int v18; // edi
  int v19; // ebx
  char *v20; // rax
  __int64 v21; // rcx
  __int64 v23; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-D8h] BYREF
  int v25; // [rsp+58h] [rbp-D0h] BYREF
  int v26; // [rsp+5Ch] [rbp-CCh] BYREF
  int v27; // [rsp+60h] [rbp-C8h] BYREF
  int v28; // [rsp+64h] [rbp-C4h] BYREF
  int v29; // [rsp+68h] [rbp-C0h] BYREF
  int pExceptionObject; // [rsp+6Ch] [rbp-BCh] BYREF
  CPipeInstance *v31; // [rsp+70h] [rbp-B8h] BYREF
  struct IAudioMediaType *v32; // [rsp+78h] [rbp-B0h] BYREF
  unsigned __int16 *v33; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+90h] [rbp-98h] BYREF
  __int128 v36; // [rsp+98h] [rbp-90h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-80h]
  __int128 v38; // [rsp+B0h] [rbp-78h]
  int v39; // [rsp+C0h] [rbp-68h]
  __int64 v40; // [rsp+C8h] [rbp-60h]
  GUID v41; // [rsp+D0h] [rbp-58h] BYREF
  ATL::CAtlException *v42; // [rsp+E0h] [rbp-48h] BYREF
  long *v43; // [rsp+E8h] [rbp-40h] BYREF
  BOOL v45; // [rsp+138h] [rbp+10h]
  unsigned __int16 *v47; // [rsp+148h] [rbp+20h] BYREF

  v40 = -2LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 10;
  v5 = *(_DWORD *)a2 != 0;
  v45 = v5;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x14u,
      (__int64)&WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v23 = 0LL;
    v6 = CProcessNode::CreateDummyProcessNode(v5, a2[1], &v23);
    if ( v6 < 0 )
    {
      pExceptionObject = v6;
      throw (long *)&pExceptionObject;
    }
    v35 = v23;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v36, &v35);
    v23 = 0LL;
    if ( *(_DWORD *)a2 )
    {
      v24 = 0LL;
      v12 = CProcessNode::CreateDummyProcessNode(v5, a2[2], &v24);
      if ( v12 < 0 )
      {
        v27 = v12;
        throw (long *)&v27;
      }
      v34 = v24;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v36, &v34);
      v24 = 0LL;
    }
    else
    {
      v32 = 0LL;
      v7 = CAudioMediaType::Create(a2[2], (unsigned int)a2[2]->cbSize + 18, &v32, 0.0);
      if ( v7 < 0 )
      {
        v29 = v7;
        throw (long *)&v29;
      }
      v47 = 0LL;
      v41 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v8 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
             v5,
             1,
             0,
             (__int128 *)&v41,
             &v47);
      if ( v8 < 0 )
      {
        v28 = v8;
        throw (long *)&v28;
      }
      v9 = v47;
      v10 = (CAudioMediaType *)v32;
      (*(void (__fastcall **)(unsigned __int16 *, struct IAudioMediaType *))(*(_QWORD *)v47 + 24LL))(v47, v32);
      (*(void (__fastcall **)(unsigned __int16 *, CAudioMediaType *))(*(_QWORD *)v9 + 32LL))(v9, v10);
      v33 = v9;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v36, &v33);
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
    v13 = (unsigned __int16 *)operator new(0x120uLL);
    v47 = v13;
    if ( v13 )
      v14 = CPipeInstance::CPipeInstance((__int64)v13, 4);
    else
      v14 = 0LL;
    v31 = (CPipeInstance *)v14;
    if ( !v14 )
    {
      v25 = -2147024882;
      throw (long *)&v25;
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
        *(_DWORD *)(v14 + 124) = 0;
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
        *(_DWORD *)(v14 + 136) = (int)((float)((float)(int)a2[2]->nAvgBytesPerSec / (float)a2[2]->nBlockAlign)
                                     * (double)(int)a2[3]
                                     / 10000000.0
                                     + 0.5);
        *(_DWORD *)(v14 + 128) = 14;
        *(_DWORD *)(v14 + 204) = 0;
        *(GUID *)(v14 + 208) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v31 = 0LL;
        *a3 = (struct CPipeInstance *)v14;
        ATL::CAutoPtr<CPipeInstance>::Free(&v31);
        v23 = 0LL;
        goto LABEL_53;
      }
    }
LABEL_40:
    v26 = v19;
    throw (long *)&v26;
  }
  catch ( long *v43 )
  {
    v18 = *(_DWORD *)v43;
  }
  catch ( ATL::CAtlException *v42 )
  {
    v18 = *(_DWORD *)v42;
  }
LABEL_53:
  v21 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x15u,
      (__int64)&WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      v18);
    v21 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v18 < 0
    && (unsigned int *)v21 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v21 + 28) & 0x20000) != 0
    && *(_BYTE *)(v21 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v21 + 16), 0x16u, (__int64)&WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, v18);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v36);
  return (unsigned int)v18;
}
