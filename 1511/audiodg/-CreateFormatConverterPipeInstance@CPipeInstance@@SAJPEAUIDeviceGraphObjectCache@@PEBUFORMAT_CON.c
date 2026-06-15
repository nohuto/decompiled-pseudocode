/*
 * XREFs of ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002F734
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x1400345A8 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x140002500 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000B990 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000BC58 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000BC90 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x14000FEC0 (--0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x140011480 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140011770 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140012E70 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x140019A9C (_CxxThrowException_0.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14002661C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPipeInstance::CreateFormatConverterPipeInstance(
        struct IUnknown *a1,
        const struct tWAVEFORMATEX **a2,
        struct CPipeInstance **a3)
{
  struct IUnknown *v5; // rsi
  BOOL v6; // r13d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  CAudioMediaType *v11; // rdi
  __int64 (__fastcall *v12)(CAudioMediaType *); // rbx
  int v13; // eax
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  char *v18; // r8
  unsigned __int64 v19; // r9
  int v20; // eax
  int v21; // ebx
  _UNKNOWN **v22; // rcx
  int v24; // [rsp+20h] [rbp-F8h]
  __int64 v25; // [rsp+38h] [rbp-E0h] BYREF
  int v26; // [rsp+40h] [rbp-D8h] BYREF
  int v27; // [rsp+44h] [rbp-D4h] BYREF
  int pExceptionObject; // [rsp+48h] [rbp-D0h] BYREF
  int v29; // [rsp+4Ch] [rbp-CCh] BYREF
  int v30; // [rsp+50h] [rbp-C8h] BYREF
  int v31; // [rsp+54h] [rbp-C4h] BYREF
  struct IAudioMediaType *v32; // [rsp+58h] [rbp-C0h] BYREF
  LPVOID *v33; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+80h] [rbp-98h] BYREF
  __int64 v38; // [rsp+90h] [rbp-88h]
  __int128 v39; // [rsp+98h] [rbp-80h]
  int v40; // [rsp+A8h] [rbp-70h]
  __int64 v41; // [rsp+B0h] [rbp-68h]
  GUID v42; // [rsp+C0h] [rbp-58h] BYREF
  ATL::CAtlException *v43; // [rsp+D0h] [rbp-48h] BYREF
  long *v44; // [rsp+D8h] [rbp-40h] BYREF
  void *v46; // [rsp+128h] [rbp+10h] BYREF
  struct CPipeInstance **v47; // [rsp+130h] [rbp+18h]
  __int64 v48; // [rsp+138h] [rbp+20h] BYREF

  v47 = a3;
  v41 = -2LL;
  v5 = a1;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 10;
  v6 = *(_DWORD *)a2 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, (__int64)&WPP_b52afc5823799b3c24512fb75c28f887_Traceguids);
  }
  *a3 = 0LL;
  try
  {
    v25 = 0LL;
    v7 = CProcessNode::CreateDummyProcessNode(v6, a2[1], &v25);
    if ( v7 < 0 )
    {
      pExceptionObject = v7;
      throw (long *)&pExceptionObject;
    }
    v36 = v25;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v37, &v36);
    v25 = 0LL;
    if ( *(_DWORD *)a2 )
    {
      v48 = 0LL;
      v13 = CProcessNode::CreateDummyProcessNode(v6, a2[2], &v48);
      if ( v13 < 0 )
      {
        v30 = v13;
        throw (long *)&v30;
      }
      v35 = v48;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v37, &v35);
      v48 = 0LL;
    }
    else
    {
      v32 = 0LL;
      v8 = CAudioMediaType::Create(a2[2], (unsigned int)a2[2]->cbSize + 18, &v32, 0.0);
      if ( v8 < 0 )
      {
        v31 = v8;
        throw (long *)&v31;
      }
      v46 = 0LL;
      v42 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v9 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
             v6,
             1,
             0,
             (__int128 *)&v42,
             &v46);
      if ( v9 < 0 )
      {
        v26 = v9;
        throw (long *)&v26;
      }
      v10 = (__int64)v46;
      v11 = (CAudioMediaType *)v32;
      (*(void (__fastcall **)(void *, struct IAudioMediaType *))(*(_QWORD *)v46 + 24LL))(v46, v32);
      (*(void (__fastcall **)(__int64, CAudioMediaType *))(*(_QWORD *)v10 + 32LL))(v10, v11);
      v34 = v10;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v37, &v34);
      v46 = 0LL;
      if ( v11 )
      {
        v12 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v11 + 16LL);
        if ( v12 == CAudioMediaType::Release )
          CAudioMediaType::Release(v11);
        else
          v12(v11);
      }
      v5 = a1;
    }
    v14 = operator new(0x120uLL);
    v46 = v14;
    if ( v14 )
      v17 = CPipeInstance::CPipeInstance((__int64)v14, 4);
    else
      v17 = 0LL;
    v33 = (LPVOID *)v17;
    if ( !v17 )
    {
      v27 = -2147024882;
      throw (long *)&v27;
    }
    v18 = (char *)a2[4];
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)&v18[2 * v19] );
    v20 = _AllocStringWorker<CTCoAllocPolicy>(v16, v15, v18, v19, v24, (char **)(v17 + 184));
    v21 = v20;
    if ( v20 < 0 )
    {
      v29 = v20;
      throw (long *)&v29;
    }
    *(_DWORD *)(v17 + 120) = *(_DWORD *)a2 == 2;
    *(_DWORD *)(v17 + 12) = v6;
    *(_DWORD *)(v17 + 128) = 0;
    if ( *(_QWORD *)(v17 + 144) )
      ATL::AtlComPtrAssign((struct IUnknown **)(v17 + 144), 0LL);
    if ( *(struct IUnknown **)(v17 + 232) != v5 )
      ATL::AtlComPtrAssign((struct IUnknown **)(v17 + 232), v5);
    *(_QWORD *)v17 = 0LL;
    *(_DWORD *)(v17 + 8) = 1;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
      (__int64 **)(v17 + 16),
      (__int64)&v37);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v37);
    *(_DWORD *)(v17 + 140) = (int)((float)((float)(int)a2[2]->nAvgBytesPerSec / (float)a2[2]->nBlockAlign)
                                 * (double)(int)a2[3]
                                 / 10000000.0
                                 + 0.5);
    *(_DWORD *)(v17 + 132) = 14;
    *(_DWORD *)(v17 + 204) = 0;
    *(GUID *)(v17 + 208) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v33 = 0LL;
    *v47 = (struct CPipeInstance *)v17;
    ATL::CAutoPtr<CPipeInstance>::Free(&v33);
    v25 = 0LL;
  }
  catch ( long *v44 )
  {
    v21 = *(_DWORD *)v44;
  }
  catch ( ATL::CAtlException *v43 )
  {
    v21 = *(_DWORD *)v43;
  }
  v22 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v21);
    v22 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v21 < 0 && v22 != &WPP_GLOBAL_Control && (*((_DWORD *)v22 + 7) & 0x20000) != 0 && *((_BYTE *)v22 + 25) >= 2u )
    WPP_SF_D((__int64)v22[2], 0x16u, (__int64)&WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v21);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v37);
  return (unsigned int)v21;
}
