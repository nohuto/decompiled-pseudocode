/*
 * XREFs of ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006C70 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ @ 0x14000222C (-Release@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140002824 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z @ 0x140002FAC (-TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140003A10 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140007030 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x140008A00 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140008CF0 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140008D60 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140008EE0 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140009060 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140009180 (-SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x1400092D0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140009400 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x1400094C0 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140009580 (-IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140009610 (-IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140009C80 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x14000A5F4 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000A780 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14000B69C (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000B778 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000DA9C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x1400189E0 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140019C12 (memcpy_0.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140026268 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@@Z @ 0x1400306E0 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     WPP_SF__guid_ @ 0x140030B28 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x140030B5C (WPP_SF_qs.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPipeInstance::ResolveFormatConflictsRightLeft(struct CProcessNode **this)
{
  CPipeInstance *v1; // r14
  CAudioMediaType *v2; // rdi
  __int64 Next; // rax
  CProcessNode *v4; // rbx
  __int64 (__fastcall *v5)(CProcessNode *__hidden, struct IAudioMediaType **); // rsi
  int RightFormat; // eax
  int v7; // r8d
  int Converter; // r15d
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // rsi
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v11; // r14
  __int64 cbSize; // rsi
  struct tWAVEFORMATEX *v13; // rax
  struct tWAVEFORMATEX *v14; // rbx
  __int64 v15; // rcx
  struct CProcessNode *v16; // r13
  CPipeInstance *v17; // rax
  CProcessNode **Prev; // rax
  CProcessNode *v19; // rsi
  __int64 (__fastcall *v20)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int LeftFormat; // eax
  CProcessNode *v22; // r12
  char v23; // r14
  __int64 v24; // r14
  __int64 v25; // rsi
  int v26; // eax
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 (__fastcall *v29)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rbx
  int v30; // eax
  void (*v31)(CProcessNode *__hidden, struct IAudioMediaType *); // rbx
  void (*v32)(CProcessNode *__hidden, struct IAudioMediaType *); // rbx
  CAudioMediaType *v33; // rbx
  CAudioMediaType *v34; // rbx
  unsigned int (__fastcall *v35)(CAudioMediaType *__hidden); // rsi
  int (*v36)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rbx
  int IsLeftFormatSupported; // eax
  unsigned int (__fastcall *v38)(CAudioMediaType *__hidden); // rsi
  int (*v39)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rbx
  int IsRightFormatSupported; // eax
  void (*v41)(CProcessNode *__hidden, struct IAudioMediaType *); // rbx
  __int64 v42; // rcx
  unsigned int (__fastcall *v43)(CAudioMediaType *__hidden); // rbx
  ULONG (__stdcall *v44)(IAudioMediaType *); // rdi
  ULONG (__stdcall *v45)(IAudioMediaType *); // rdi
  CAudioMediaType *v47; // rbx
  unsigned int (__fastcall *v48)(CAudioMediaType *__hidden); // r14
  void (__fastcall *v49)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // r14
  void (__fastcall *v50)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rbx
  CAudioMediaType *v51; // rbx
  unsigned int (__fastcall *v52)(CAudioMediaType *__hidden); // rsi
  int v53; // eax
  __int64 (__fastcall *v54)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // r15
  int v55; // eax
  ATL::CAtlException *v56; // rbx
  __int64 v57; // rsi
  struct IAudioMediaType *v58; // rbx
  ULONG (__stdcall *Release)(IAudioMediaType *); // rsi
  ULONG (__stdcall *v60)(IAudioMediaType *); // rsi
  struct _GUID *v61; // rbx
  bool v62; // zf
  struct IAudioMediaType *v63; // r14
  const struct tWAVEFORMATEX *v64; // rsi
  const struct tWAVEFORMATEX *v65; // rax
  struct IAudioMediaType *v66; // rbx
  ULONG (__stdcall *v67)(IAudioMediaType *); // rsi
  ULONG (__stdcall *v68)(IAudioMediaType *); // rsi
  ULONG (__stdcall *v69)(IAudioMediaType *); // rdi
  ULONG (__stdcall *v70)(IAudioMediaType *); // rdi
  int v71; // eax
  const char *v72; // rax
  CPipeInstance *v73; // [rsp+40h] [rbp-108h]
  char v74; // [rsp+48h] [rbp-100h]
  char v75; // [rsp+49h] [rbp-FFh]
  struct IAudioMediaType *v76; // [rsp+50h] [rbp-F8h] BYREF
  struct IAudioMediaType *v77; // [rsp+58h] [rbp-F0h] BYREF
  struct IAudioMediaType *v78; // [rsp+60h] [rbp-E8h] BYREF
  struct CProcessNode *v79; // [rsp+68h] [rbp-E0h]
  struct CProcessNode *v80; // [rsp+70h] [rbp-D8h] BYREF
  struct IAudioMediaType *v81; // [rsp+78h] [rbp-D0h] BYREF
  struct CProcessNode *v82; // [rsp+80h] [rbp-C8h] BYREF
  struct IAudioMediaType *v83; // [rsp+88h] [rbp-C0h] BYREF
  void (__fastcall ***v84)(_QWORD, __int64); // [rsp+90h] [rbp-B8h]
  LPVOID ppv; // [rsp+98h] [rbp-B0h] BYREF
  struct IMMDevice *v86; // [rsp+A0h] [rbp-A8h] BYREF
  int v87; // [rsp+A8h] [rbp-A0h] BYREF
  CPipeInstance *v88; // [rsp+B0h] [rbp-98h]
  __int64 v89; // [rsp+B8h] [rbp-90h]
  void (__fastcall ***v90)(_QWORD, __int64); // [rsp+C0h] [rbp-88h] BYREF
  struct _GUID v91; // [rsp+D0h] [rbp-78h] BYREF
  struct _GUID *v92; // [rsp+E0h] [rbp-68h]
  ATL::CAtlException *v93[2]; // [rsp+E8h] [rbp-60h] BYREF
  struct _GUID v94; // [rsp+F8h] [rbp-50h] BYREF
  struct _GUID v95; // [rsp+108h] [rbp-40h] BYREF

  v93[1] = (ATL::CAtlException *)-2LL;
  LODWORD(v1) = (_DWORD)this;
  v73 = (CPipeInstance *)this;
  v88 = (CPipeInstance *)this;
  v84 = 0LL;
  v74 = 0;
  v76 = 0LL;
  ppv = 0LL;
  v86 = 0LL;
  v81 = 0LL;
  v2 = 0LL;
  v83 = 0LL;
  v82 = this[2];
  Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(this, &v82);
  v4 = *(CProcessNode **)Next;
  v5 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(**(_QWORD **)Next + 16LL);
  if ( v5 == CProcessNode::GetRightFormat )
    RightFormat = CProcessNode::GetRightFormat(v4, &v81);
  else
    RightFormat = v5(v4, &v81);
  Converter = RightFormat;
  if ( RightFormat < 0 )
    goto LABEL_66;
  GetAudioFormat = v81->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v81);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))GetAudioFormat)(v81);
  v11 = AudioFormat;
  cbSize = AudioFormat->cbSize;
  v13 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v14 = v13;
  if ( !v13 )
  {
    Converter = -2147024882;
    LODWORD(v1) = (_DWORD)v73;
    goto LABEL_66;
  }
  memcpy_0(v13, v11, cbSize + 18);
  ConvertPCMWfxToIEEEFloat(v14);
  Converter = CAudioMediaType::Create(v14, (unsigned int)v14->cbSize + 18, &v83, 0.0);
  CoTaskMemFree(v14);
  v1 = v73;
  if ( Converter < 0 )
    goto LABEL_236;
  v16 = (struct CProcessNode *)*((_QWORD *)v73 + 3);
  v82 = v16;
  v17 = *(CPipeInstance **)v73;
  if ( *(_QWORD *)v73 )
  {
    if ( !*((_DWORD *)v73 + 30) || *((_DWORD *)v17 + 51) )
    {
      v57 = *((_QWORD *)v17 + 2);
      if ( !v57 )
        ATL::AtlThrowImpl(-2147467259);
    }
    else
    {
      v80 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(v17, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v80, 0LL);
      v19 = v80;
      v79 = v80;
      if ( v80 )
        goto LABEL_11;
      v80 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(
        *(CPipeInstance **)v73,
        &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
        &v80,
        0LL);
      v19 = v80;
      v79 = v80;
      if ( v80 )
        goto LABEL_11;
      v57 = *(_QWORD *)(*(_QWORD *)v73 + 16LL);
      if ( !v57 )
        ATL::AtlThrowImpl(-2147467259);
    }
    v19 = *(CProcessNode **)(v57 + 16);
  }
  else
  {
    Prev = (CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(v15, &v82);
    v16 = v82;
    v19 = *Prev;
  }
  v79 = v19;
LABEL_11:
  v20 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v19 + 8LL);
  if ( v20 == CProcessNode::GetLeftFormat )
    LeftFormat = CProcessNode::GetLeftFormat(v19, &v76);
  else
    LeftFormat = v20(v19, &v76);
  Converter = LeftFormat;
  if ( LeftFormat < 0 )
  {
LABEL_236:
    v2 = (CAudioMediaType *)v83;
    goto LABEL_66;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      28LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      v73);
  }
  v2 = (CAudioMediaType *)v83;
  while ( 1 )
  {
    if ( !v16 )
    {
      v41 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v19 + 24LL);
      if ( v41 == CProcessNode::SetLeftFormat )
        CProcessNode::SetLeftFormat(v19, v76);
      else
        ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *))v41)(v19, v76);
      goto LABEL_65;
    }
    v77 = 0LL;
    v78 = 0LL;
    v80 = v16;
    v22 = (CProcessNode *)*((_QWORD *)v16 + 2);
    v16 = (struct CProcessNode *)*((_QWORD *)v16 + 1);
    v82 = v16;
    v23 = 0;
    v75 = 0;
    if ( *((_DWORD *)v22 + 10) != 2 )
    {
      v39 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v22 + 48LL);
      if ( v39 == CProcessNode::IsRightFormatSupported )
        IsRightFormatSupported = CProcessNode::IsRightFormatSupported(v22, v76, &v77, 0LL);
      else
        IsRightFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))v39)(
                                   v22,
                                   v76,
                                   &v77,
                                   0LL);
      Converter = IsRightFormatSupported;
      if ( IsRightFormatSupported < 0 )
      {
        v58 = v78;
        if ( !v78 )
          goto LABEL_137;
        Release = v78->lpVtbl->Release;
        if ( (char *)Release != (char *)CAudioMediaType::Release )
          goto LABEL_136;
        goto LABEL_194;
      }
      goto LABEL_31;
    }
    v24 = *((_QWORD *)v22 + 4);
    v89 = v24;
    if ( *(_QWORD *)(v24 + 40) )
      goto LABEL_25;
    v25 = *((_QWORD *)v73 + 29);
    v92 = (struct _GUID *)(v24 + 8);
    v26 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 24LL))(v25, v24 + 8, v24 + 40);
    Converter = v26;
    if ( v26 >= 0 )
      break;
    if ( v26 == -2147024882 )
    {
      v58 = v78;
      if ( v78 )
      {
        Release = v78->lpVtbl->Release;
        if ( (char *)Release == (char *)CAudioMediaType::Release )
          goto LABEL_194;
        goto LABEL_136;
      }
      goto LABEL_137;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) == 0 )
    {
      v61 = (struct _GUID *)(v24 + 8);
    }
    else
    {
      v61 = (struct _GUID *)(v24 + 8);
      if ( *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        WPP_SF__guid_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          29LL,
          &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
          v24 + 8);
    }
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v73 + 16, v80);
    v62 = *(_DWORD *)(v24 + 4) == 0;
    v1 = v73;
    if ( !v62 )
    {
      v74 = 1;
      v94 = *v61;
    }
LABEL_40:
    v33 = (CAudioMediaType *)v78;
    if ( v78 )
    {
      v78 = 0LL;
      v38 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v33 + 16LL);
      if ( v38 == CAudioMediaType::Release )
        CAudioMediaType::Release(v33);
      else
        v38(v33);
    }
    v34 = (CAudioMediaType *)v77;
    if ( v77 )
    {
      v77 = 0LL;
      v35 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v34 + 16LL);
      if ( v35 == CAudioMediaType::Release )
        CAudioMediaType::Release(v34);
      else
        v35(v34);
    }
    if ( v78 )
      ((void (__fastcall *)(struct IAudioMediaType *))v78->lpVtbl->Release)(v78);
    v19 = v79;
    if ( v77 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *, int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v77->lpVtbl->Release)(
        v77,
        CProcessNode::IsRightFormatSupported);
      v19 = v79;
    }
  }
  if ( !*(_DWORD *)(v24 + 4) )
  {
    v19 = v79;
LABEL_25:
    v27 = (_QWORD *)(v24 + 40);
LABEL_26:
    v28 = *(_QWORD *)v22;
    if ( !*(_DWORD *)(v24 + 4) )
    {
      v29 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(v28 + 48);
      if ( v29 == CAPOProcessNode::IsRightFormatSupported )
        v30 = CAPOProcessNode::IsRightFormatSupported(v22, v76, &v77, 0LL);
      else
        v30 = v29(v22, v76, &v77, 0LL);
      Converter = v30;
      if ( v30 >= 0 )
        goto LABEL_30;
      v58 = v78;
      if ( !v78 )
        goto LABEL_137;
      Release = v78->lpVtbl->Release;
      if ( (char *)Release != (char *)CAudioMediaType::Release )
        goto LABEL_136;
LABEL_194:
      CAudioMediaType::Release((CAudioMediaType *)v78);
      goto LABEL_137;
    }
    v75 = 1;
    v54 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(v28 + 48);
    if ( v54 == CAPOProcessNode::IsRightFormatSupported )
      v55 = CAPOProcessNode::IsRightFormatSupported(v22, v76, &v77, v81);
    else
      v55 = v54(v22, v76, &v77, v81);
    Converter = v55;
    if ( v55 < 0 )
    {
      if ( v55 == -2147024882 )
      {
        v58 = v78;
        if ( !v78 )
          goto LABEL_137;
        Release = v78->lpVtbl->Release;
        if ( (char *)Release != (char *)CAudioMediaType::Release )
          goto LABEL_136;
      }
      else
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF__guid_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            31LL,
            &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
            v24 + 8);
        }
        if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v73 + 29) + 32LL))(*((_QWORD *)v73 + 29), *v27) >= 0 )
        {
          if ( Converter != -2005073917 )
          {
            v74 = 1;
            v94 = *(struct _GUID *)(v89 + 8);
          }
          v1 = v73;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v73 + 16, v80);
          goto LABEL_40;
        }
        v58 = v78;
        if ( !v78 )
          goto LABEL_137;
        Release = v78->lpVtbl->Release;
        if ( (char *)Release != (char *)CAudioMediaType::Release )
          goto LABEL_136;
      }
      goto LABEL_194;
    }
LABEL_30:
    v23 = v75;
LABEL_31:
    if ( Converter == 1 )
    {
      v36 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v19 + 40LL);
      if ( (char *)v36 == (char *)CAPOProcessNode::IsLeftFormatSupported )
      {
        IsLeftFormatSupported = CAPOProcessNode::IsLeftFormatSupported(v19, v77, &v78, 0LL);
      }
      else if ( v36 == CProcessNode::IsLeftFormatSupported )
      {
        IsLeftFormatSupported = CProcessNode::IsLeftFormatSupported(v19, v77, &v78, 0LL);
      }
      else
      {
        IsLeftFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))v36)(
                                  v19,
                                  v77,
                                  &v78,
                                  0LL);
      }
      Converter = IsLeftFormatSupported;
      if ( IsLeftFormatSupported < 0 )
      {
        v58 = v78;
        if ( v78 )
        {
          Release = v78->lpVtbl->Release;
          if ( (char *)Release == (char *)CAudioMediaType::Release )
            goto LABEL_194;
          goto LABEL_136;
        }
        goto LABEL_137;
      }
      if ( IsLeftFormatSupported )
      {
        if ( IsLeftFormatSupported == 1 )
        {
          v51 = (CAudioMediaType *)v76;
          if ( v76 )
          {
            v76 = 0LL;
            v52 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v51 + 16LL);
            if ( v52 == CAudioMediaType::Release )
              CAudioMediaType::Release(v51);
            else
              v52(v51);
          }
          if ( v76 != v78 )
            ATL::AtlComPtrAssign((struct IUnknown **)&v76, (struct IUnknown *)v78);
          goto LABEL_105;
        }
LABEL_38:
        v1 = v73;
        if ( (*((_BYTE *)v73 + 128) & 8) == 0 )
          goto LABEL_39;
        v63 = v76;
        v64 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v2 + 40LL))(v2);
        v65 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v63->lpVtbl->GetAudioFormat)(v63);
        if ( !(unsigned int)CompareWaveFormat(v65, v64) )
        {
          v1 = v73;
LABEL_39:
          v79 = v22;
          goto LABEL_40;
        }
        if ( !v77 )
          ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)&v77, (CAudioMediaType **)&v81);
LABEL_105:
        v1 = v73;
        Converter = CPipeInstance::FindConverter(v73, v76, v77, &v87, &v95);
        if ( Converter < 0 )
        {
          v66 = v78;
          if ( !v78 )
            goto LABEL_209;
          v67 = v78->lpVtbl->Release;
          if ( (char *)v67 == (char *)CAudioMediaType::Release )
            goto LABEL_207;
        }
        else
        {
          v91 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          Converter = CAPOProcessNode::CreateAPOProcessNode(&v95, *((unsigned int *)v22 + 6), (unsigned int)v87, 0LL);
          if ( Converter >= 0 )
          {
            Converter = 0;
            try
            {
              v90 = v84;
              v16 = (struct CProcessNode *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                                             (char *)v73 + 16,
                                             v80,
                                             &v90);
              v82 = v16;
            }
            catch ( ATL::CAtlException *v93 )
            {
              v56 = v93[0];
              if ( *(_DWORD *)v93[0] == -1073741571 )
                _resetstkoflw();
              Converter = *(_DWORD *)v56;
              if ( *(int *)v56 < 0 )
              {
                if ( v78 )
                {
                  v69 = v78->lpVtbl->Release;
                  if ( (char *)v69 == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)v78);
                  else
                    ((void (__fastcall *)(struct IAudioMediaType *))v69)(v78);
                }
                if ( v77 )
                {
                  v70 = v77->lpVtbl->Release;
                  if ( (char *)v70 == (char *)CAudioMediaType::Release )
                    CAudioMediaType::Release((CAudioMediaType *)v77);
                  else
                    ((void (__fastcall *)(struct IAudioMediaType *))v70)(v77);
                }
                if ( v84 )
                  (**v84)(v84, 1LL);
                v2 = (CAudioMediaType *)v83;
                v1 = v88;
                goto LABEL_65;
              }
              v2 = (CAudioMediaType *)v83;
              v16 = v82;
              v1 = v88;
              v73 = v88;
            }
            v84 = 0LL;
            goto LABEL_40;
          }
          v66 = v78;
          if ( !v78 )
          {
LABEL_209:
            if ( v77 )
            {
              v68 = v77->lpVtbl->Release;
              if ( (char *)v68 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v77);
              else
                ((void (__fastcall *)(struct IAudioMediaType *))v68)(v77);
            }
            goto LABEL_65;
          }
          v67 = v78->lpVtbl->Release;
          if ( (char *)v67 == (char *)CAudioMediaType::Release )
          {
LABEL_207:
            CAudioMediaType::Release((CAudioMediaType *)v78);
            goto LABEL_209;
          }
        }
        ((void (__fastcall *)(struct IAudioMediaType *))v67)(v66);
        goto LABEL_209;
      }
      v47 = (CAudioMediaType *)v76;
      if ( v76 )
      {
        v76 = 0LL;
        v48 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v47 + 16LL);
        if ( v48 == CAudioMediaType::Release )
          CAudioMediaType::Release(v47);
        else
          v48(v47);
        v47 = (CAudioMediaType *)v76;
      }
      if ( v47 != (CAudioMediaType *)v77 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)&v76, (struct IUnknown *)v77);
        v47 = (CAudioMediaType *)v76;
      }
      v49 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v19 + 24LL);
      if ( v49 == CAPOProcessNode::SetLeftFormat )
        CAPOProcessNode::SetLeftFormat(v19, (struct IAudioMediaType *)v47);
      else
        v49(v19, (struct IAudioMediaType *)v47);
      v50 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v22 + 32LL);
      if ( v50 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v22, v76);
      else
        v50(v22, v76);
      if ( !v75 )
        goto LABEL_38;
    }
    else
    {
      if ( Converter )
        goto LABEL_38;
      v31 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v19 + 24LL);
      if ( (char *)v31 == (char *)CAPOProcessNode::SetLeftFormat )
      {
        CAPOProcessNode::SetLeftFormat(v19, v76);
      }
      else if ( v31 == CProcessNode::SetLeftFormat )
      {
        CProcessNode::SetLeftFormat(v19, v76);
      }
      else
      {
        ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *))v31)(v19, v76);
      }
      v32 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v22 + 32LL);
      if ( (char *)v32 == (char *)CAPOProcessNode::SetRightFormat )
      {
        CAPOProcessNode::SetRightFormat(v22, v76);
      }
      else if ( v32 == CProcessNode::SetRightFormat )
      {
        CProcessNode::SetRightFormat(v22, v76);
      }
      else
      {
        ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *))v32)(v22, v76);
      }
      if ( !v23 )
        goto LABEL_38;
    }
    ATL::CComPtrBase<IAudioMediaType>::Release((CAudioMediaType **)&v76);
    ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)&v76, (CAudioMediaType **)&v81);
    goto LABEL_38;
  }
  Converter = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                &ppv);
  if ( Converter < 0 )
  {
    v58 = v78;
    if ( v78 )
    {
      Release = v78->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        goto LABEL_194;
      goto LABEL_136;
    }
    goto LABEL_137;
  }
  Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
                ppv,
                *((_QWORD *)v73 + 23),
                &v86);
  if ( Converter < 0 )
  {
    v58 = v78;
    if ( v78 )
    {
      Release = v78->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        goto LABEL_194;
      goto LABEL_136;
    }
    goto LABEL_137;
  }
  v24 = v89;
  v91 = *(struct _GUID *)(v89 + 24);
  v27 = (_QWORD *)(v89 + 40);
  v53 = InitializeSystemEffectsInterface(
          v86,
          *(struct IAudioProcessingObject **)(v89 + 40),
          (struct _GUID *)(v89 + 8),
          &v91);
  Converter = v53;
  if ( v53 >= 0 )
  {
    v19 = v79;
    goto LABEL_26;
  }
  if ( v53 == -2147024882 )
  {
    v58 = v78;
    if ( v78 )
    {
      Release = v78->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        goto LABEL_194;
      goto LABEL_136;
    }
    goto LABEL_137;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF__guid_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      30LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      v24 + 8);
  }
  if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v73 + 29) + 32LL))(*((_QWORD *)v73 + 29), *v27) >= 0 )
  {
    v1 = v73;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v73 + 16, v80);
    v74 = 1;
    v94 = *v92;
    goto LABEL_40;
  }
  v58 = v78;
  if ( v78 )
  {
    Release = v78->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      goto LABEL_194;
LABEL_136:
    ((void (__fastcall *)(struct IAudioMediaType *))Release)(v58);
  }
LABEL_137:
  if ( v77 )
  {
    v60 = v77->lpVtbl->Release;
    if ( (char *)v60 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v77);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v60)(v77);
  }
  v1 = v73;
LABEL_65:
  if ( !v74 || (v71 = TrackSystemEffectBehavior(*((const unsigned __int16 **)v1 + 23), 0, 0, &v94), v71 >= 0) )
  {
LABEL_66:
    v42 = *(_QWORD *)&WPP_GLOBAL_Control;
    goto LABEL_67;
  }
  v42 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        32LL,
        &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
        (unsigned int)v71);
      goto LABEL_66;
    }
LABEL_67:
    if ( (unsigned int *)v42 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v42 + 28) & 0x20000) != 0
      && *(_BYTE *)(v42 + 25) >= 4u )
    {
      v72 = "SUCCEEDED";
      if ( Converter < 0 )
        v72 = "FAILED";
      WPP_SF_qs(*(_QWORD *)(v42 + 16), 33, v7, (_DWORD)v1, (__int64)v72);
      v42 = *(_QWORD *)&WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0
    && (unsigned int *)v42 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v42 + 28) & 0x20000) != 0
    && *(_BYTE *)(v42 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v42 + 16), 34LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, (unsigned int)Converter);
  }
  if ( v2 )
  {
    v43 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v2 + 16LL);
    if ( v43 == CAudioMediaType::Release )
      CAudioMediaType::Release(v2);
    else
      v43(v2);
  }
  if ( v81 )
  {
    v44 = v81->lpVtbl->Release;
    if ( (char *)v44 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v81);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v44)(v81);
  }
  if ( v86 )
    ((void (__fastcall *)(struct IMMDevice *))v86->lpVtbl->Release)(v86);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v76 )
  {
    v45 = v76->lpVtbl->Release;
    if ( (char *)v45 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v76);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v45)(v76);
  }
  return (unsigned int)Converter;
}
