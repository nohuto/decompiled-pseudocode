/*
 * XREFs of ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006C70 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ @ 0x14000222C (-Release@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140002824 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z @ 0x140002FAC (-TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140003A10 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
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
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000B580 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14000B724 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000B9A0 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000DA9C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x1400189C0 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x1400189E0 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018AD0 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x140019B5C (_CxxThrowException_0.c)
 *     memcpy_0 @ 0x140019C12 (memcpy_0.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140026224 (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140026268 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 *     WPP_SF__guid_ @ 0x140030B28 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x140030B5C (WPP_SF_qs.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight(CPipeInstance *this)
{
  CPipeInstance *v1; // r12
  __int64 v2; // rax
  CProcessNode *v3; // rbx
  __int64 (__fastcall *v4)(CProcessNode *__hidden, struct IAudioMediaType **); // rdi
  int RightFormat; // eax
  int v6; // r8d
  int Converter; // r15d
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // rdi
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v10; // r14
  __int64 cbSize; // rdi
  struct tWAVEFORMATEX *v12; // rax
  struct tWAVEFORMATEX *v13; // rbx
  __int64 v14; // rcx
  unsigned int *v15; // rdi
  __int64 (__fastcall *v16)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int v17; // eax
  __int64 v18; // r14
  CProcessNode *v19; // r12
  int v20; // esi
  char *v21; // rbx
  __int64 v22; // rdi
  int v23; // eax
  __int64 (__fastcall *v24)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rbx
  int v25; // eax
  void (*v26)(CProcessNode *__hidden, struct IAudioMediaType *); // rbx
  void (__fastcall *v27)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rbx
  volatile signed __int32 *v28; // rbx
  unsigned int (__fastcall *v29)(CAudioMediaType *__hidden); // rdi
  CAudioMediaType *v30; // rbx
  int (*v31)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rbx
  int IsRightFormatSupported; // eax
  unsigned int (__fastcall *v33)(CAudioMediaType *__hidden); // rdi
  int (*v34)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rbx
  int IsLeftFormatSupported; // eax
  CAudioMediaType *v36; // rdi
  unsigned int (__fastcall *v37)(CAudioMediaType *__hidden); // rbx
  struct IAudioMediaType *v38; // rbx
  unsigned int (__fastcall *v39)(CAudioMediaType *__hidden); // rdi
  void (*v40)(CProcessNode *__hidden, struct IAudioMediaType *); // rbx
  CAudioMediaType *v41; // rdi
  unsigned int (__fastcall *v42)(CAudioMediaType *__hidden); // rbx
  struct IAudioMediaType *v43; // r14
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rbx
  void (__fastcall ***v45)(_QWORD, __int64); // rdi
  __int64 *v46; // rbx
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 *v50; // rax
  void (*v51)(CProcessNode *__hidden, struct IAudioMediaType *); // rbx
  __int64 v52; // rcx
  ULONG (__stdcall *v53)(IAudioMediaType *); // rdi
  ULONG (__stdcall *v54)(IAudioMediaType *); // rdi
  ULONG (__stdcall *v55)(IAudioMediaType *); // rdi
  _QWORD *v57; // rdi
  int v58; // eax
  __int64 (__fastcall *v59)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // r15
  int v60; // eax
  __int64 v61; // rcx
  __int64 (__fastcall *v62)(CProcessNode *__hidden, struct IAudioMediaType **); // rdi
  int LeftFormat; // eax
  ATL::CAtlException *v64; // rbx
  ATL::CAtlException *v65; // rbx
  CAudioMediaType *v66; // rbx
  unsigned int (__fastcall *v67)(CAudioMediaType *__hidden); // rdi
  ULONG (__stdcall *v68)(IAudioMediaType *); // rdi
  struct _GUID *v69; // rbx
  CAudioMediaType *v70; // rbx
  unsigned int (__fastcall *v71)(CAudioMediaType *__hidden); // rdi
  ULONG (__stdcall *v72)(IAudioMediaType *); // rdi
  unsigned int (__fastcall *v73)(CAudioMediaType *__hidden); // rdi
  ULONG (__stdcall *v74)(IAudioMediaType *); // rdi
  struct IAudioMediaType *v75; // rsi
  const struct tWAVEFORMATEX *v76; // rdi
  const struct tWAVEFORMATEX *v77; // rax
  CAudioMediaType *v78; // rbx
  unsigned int (__fastcall *v79)(CAudioMediaType *__hidden); // rdi
  unsigned int v80; // esi
  __int64 v81; // rax
  int v82; // eax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rdi
  int v84; // eax
  const char *v85; // rax
  CPipeInstance *v86; // [rsp+40h] [rbp-168h]
  char v87; // [rsp+48h] [rbp-160h]
  struct IAudioMediaType *v88; // [rsp+50h] [rbp-158h] BYREF
  void *Block; // [rsp+58h] [rbp-150h] BYREF
  char v90; // [rsp+60h] [rbp-148h]
  struct IAudioMediaType *v91; // [rsp+68h] [rbp-140h] BYREF
  CProcessNode *v92; // [rsp+70h] [rbp-138h]
  int v93; // [rsp+78h] [rbp-130h]
  struct IAudioMediaType *v94; // [rsp+80h] [rbp-128h] BYREF
  struct _GUID *v95; // [rsp+88h] [rbp-120h]
  __int64 v96; // [rsp+90h] [rbp-118h] BYREF
  CPipeInstance *v97; // [rsp+98h] [rbp-110h]
  __int64 v98; // [rsp+A0h] [rbp-108h]
  struct IAudioMediaType *v99; // [rsp+A8h] [rbp-100h] BYREF
  void (__fastcall ***v100)(_QWORD, __int64); // [rsp+B0h] [rbp-F8h]
  char *v101; // [rsp+B8h] [rbp-F0h]
  __int64 v102; // [rsp+C0h] [rbp-E8h] BYREF
  struct IMMDevice *v103; // [rsp+C8h] [rbp-E0h] BYREF
  int pExceptionObject; // [rsp+D0h] [rbp-D8h] BYREF
  int v105; // [rsp+D4h] [rbp-D4h] BYREF
  LPVOID ppv; // [rsp+D8h] [rbp-D0h] BYREF
  void (__fastcall ***v107)(_QWORD, __int64); // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v108; // [rsp+E8h] [rbp-C0h]
  char *v109; // [rsp+F0h] [rbp-B8h]
  ATL::CAtlException *v110[2]; // [rsp+F8h] [rbp-B0h] BYREF
  ATL::CAtlException *v111[3]; // [rsp+108h] [rbp-A0h] BYREF
  GUID v112; // [rsp+120h] [rbp-88h]
  __int64 v113; // [rsp+130h] [rbp-78h]
  __int64 v114; // [rsp+138h] [rbp-70h]
  struct _GUID v115; // [rsp+140h] [rbp-68h] BYREF
  struct _GUID v116; // [rsp+150h] [rbp-58h] BYREF
  struct _GUID v117; // [rsp+160h] [rbp-48h] BYREF

  v110[1] = (ATL::CAtlException *)-2LL;
  v1 = this;
  v86 = this;
  v97 = this;
  v100 = 0LL;
  v102 = 0LL;
  v90 = 0;
  v87 = 0;
  v88 = 0LL;
  v94 = 0LL;
  v99 = 0LL;
  ppv = 0LL;
  v103 = 0LL;
  if ( *(_QWORD *)this )
  {
    v61 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( !v61 )
      ATL::AtlThrowImpl(-2147467259);
    v62 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(**(_QWORD **)(v61 + 16) + 8LL);
    if ( v62 == CProcessNode::GetLeftFormat )
      LeftFormat = CProcessNode::GetLeftFormat(*(CProcessNode **)(v61 + 16), &v94);
    else
      LeftFormat = v62(*(CProcessNode **)(v61 + 16), &v94);
    Converter = LeftFormat;
    if ( LeftFormat < 0 )
      goto LABEL_108;
  }
  else
  {
    v2 = *((_QWORD *)this + 3);
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    v3 = *(CProcessNode **)(v2 + 16);
    v4 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v3 + 16LL);
    if ( v4 == CProcessNode::GetRightFormat )
      RightFormat = CProcessNode::GetRightFormat(v3, &v94);
    else
      RightFormat = v4(v3, &v94);
    Converter = RightFormat;
    if ( RightFormat < 0 )
      goto LABEL_108;
  }
  GetAudioFormat = v94->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v94);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))GetAudioFormat)(v94);
  v10 = AudioFormat;
  cbSize = AudioFormat->cbSize;
  v12 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v13 = v12;
  if ( !v12 )
  {
    Converter = -2147024882;
    goto LABEL_108;
  }
  memcpy_0(v12, v10, cbSize + 18);
  ConvertPCMWfxToIEEEFloat(v13);
  Converter = CAudioMediaType::Create(v13, (unsigned int)v13->cbSize + 18, &v99, 0.0);
  CoTaskMemFree(v13);
  if ( Converter < 0 )
    goto LABEL_108;
  v96 = *((_QWORD *)v1 + 2);
  v15 = *(unsigned int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v14, &v96);
  v92 = (CProcessNode *)v15;
  v16 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v15 + 16LL);
  v17 = v16 == CProcessNode::GetRightFormat
      ? CProcessNode::GetRightFormat((CProcessNode *)v15, &v88)
      : v16((CProcessNode *)v15, &v88);
  Converter = v17;
  if ( v17 < 0 )
    goto LABEL_108;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      35LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      v1);
  }
  v18 = v96;
  while ( 1 )
  {
    if ( !v18 )
    {
      v51 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v15 + 32LL);
      if ( v51 == CProcessNode::SetRightFormat )
      {
        CProcessNode::SetRightFormat((CProcessNode *)v15, v88);
      }
      else if ( (char *)v51 == (char *)CAPOProcessNode::SetRightFormat )
      {
        CAPOProcessNode::SetRightFormat((CAPOProcessNode *)v15, v88);
      }
      else
      {
        ((void (__fastcall *)(unsigned int *, struct IAudioMediaType *))v51)(v15, v88);
      }
      goto LABEL_107;
    }
    v91 = 0LL;
    Block = 0LL;
    v98 = v18;
    v19 = *(CProcessNode **)(v18 + 16);
    v18 = *(_QWORD *)v18;
    v96 = v18;
    v20 = 0;
    v93 = 0;
    if ( *((_DWORD *)v19 + 10) != 2 )
    {
      v34 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v19 + 40LL);
      if ( v34 == CProcessNode::IsLeftFormatSupported )
        IsLeftFormatSupported = CProcessNode::IsLeftFormatSupported(v19, v88, (struct IAudioMediaType **)&Block, 0LL);
      else
        IsLeftFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, struct IAudioMediaType *, void **, _QWORD))v34)(
                                  v19,
                                  v88,
                                  &Block,
                                  0LL);
      Converter = IsLeftFormatSupported;
      if ( IsLeftFormatSupported >= 0 )
        goto LABEL_27;
      v66 = (CAudioMediaType *)Block;
      if ( Block )
      {
        v67 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
        if ( v67 == CAudioMediaType::Release )
        {
LABEL_223:
          CAudioMediaType::Release((CAudioMediaType *)Block);
          goto LABEL_162;
        }
LABEL_161:
        v67(v66);
      }
      goto LABEL_162;
    }
    v21 = (char *)*((_QWORD *)v19 + 4);
    v101 = v21;
    v20 = *((_DWORD *)v21 + 1);
    v93 = v20;
    if ( *((_QWORD *)v21 + 5) )
    {
      v57 = v21 + 40;
      goto LABEL_130;
    }
    v22 = *((_QWORD *)v86 + 29);
    v95 = (struct _GUID *)(v21 + 8);
    v23 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v22 + 24LL))(v22, v21 + 8, v21 + 40);
    Converter = v23;
    if ( v23 >= 0 )
      break;
    if ( v23 == -2147024882 )
    {
      v66 = (CAudioMediaType *)Block;
      if ( Block )
      {
        v67 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
        if ( v67 == CAudioMediaType::Release )
          goto LABEL_223;
        goto LABEL_161;
      }
      goto LABEL_162;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) == 0 )
    {
      v69 = v95;
    }
    else
    {
      v69 = v95;
      if ( *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        WPP_SF__guid_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          36LL,
          &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
          v95);
    }
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v86 + 16, v98);
    v19 = v92;
    if ( v20 )
    {
      v87 = 1;
      v116 = *v69;
    }
LABEL_38:
    if ( Converter < 0 && v20 )
    {
      v80 = *((_DWORD *)v19 + 6);
      v81 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v94->lpVtbl->GetAudioFormat)(v94);
      v82 = CProcessNode::CreateDummyProcessNode(v80, v81, &v102);
      if ( v82 < 0 )
      {
        pExceptionObject = v82;
        throw (long *)&pExceptionObject;
      }
      (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v102 + 24LL))(v102, v94);
      Converter = 0;
      try
      {
        v18 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                (char *)v86 + 16,
                v18,
                &v102);
        v96 = v18;
      }
      catch ( ATL::CAtlException *v111 )
      {
        v65 = v111[0];
        if ( *(_DWORD *)v111[0] == -1073741571 )
          _resetstkoflw();
        LODWORD(v95) = *(_DWORD *)v65;
        Converter = (int)v95;
        if ( (int)v95 < 0 )
        {
          v78 = (CAudioMediaType *)Block;
          if ( !Block )
            goto LABEL_266;
          v79 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
          if ( v79 != CAudioMediaType::Release )
          {
LABEL_265:
            v79(v78);
LABEL_266:
            if ( v91 )
            {
              Release = v91->lpVtbl->Release;
              if ( (char *)Release == (char *)CAudioMediaType::Release )
              {
                CAudioMediaType::Release((CAudioMediaType *)v91);
                v1 = v97;
LABEL_270:
                if ( v100 )
                  (**v100)(v100, 1LL);
                goto LABEL_107;
              }
              ((void (__fastcall *)(struct IAudioMediaType *))Release)(v91);
            }
            v1 = v97;
            goto LABEL_270;
          }
LABEL_254:
          CAudioMediaType::Release((CAudioMediaType *)Block);
          goto LABEL_266;
        }
        v18 = v96;
        v86 = v97;
      }
      v102 = 0LL;
    }
    v28 = (volatile signed __int32 *)Block;
    if ( Block )
    {
      Block = 0LL;
      v29 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v28 + 16LL);
      if ( v29 == CAudioMediaType::Release )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          *(_QWORD *)v28 = &CAudioMediaType::`vftable';
          operator delete[](*((void **)v28 + 2));
          *((_QWORD *)v28 + 2) = 0LL;
          operator delete((void *)v28);
        }
        v18 = v96;
      }
      else
      {
        v29((CAudioMediaType *)v28);
      }
    }
    v30 = (CAudioMediaType *)v91;
    if ( v91 )
    {
      v91 = 0LL;
      v33 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v30 + 16LL);
      if ( v33 == CAudioMediaType::Release )
        CAudioMediaType::Release(v30);
      else
        v33(v30);
    }
    if ( Block )
      (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
    v15 = (unsigned int *)v92;
    v1 = v86;
    if ( v91 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *, int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v91->lpVtbl->Release)(
        v91,
        CProcessNode::IsLeftFormatSupported);
      v15 = (unsigned int *)v92;
    }
  }
  if ( !v20 )
    goto LABEL_23;
  Converter = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                &ppv);
  if ( Converter < 0 )
  {
    v66 = (CAudioMediaType *)Block;
    if ( Block )
    {
      v67 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
      if ( v67 == CAudioMediaType::Release )
        goto LABEL_223;
      goto LABEL_161;
    }
    goto LABEL_162;
  }
  Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
                ppv,
                *((_QWORD *)v86 + 23),
                &v103);
  if ( Converter < 0 )
  {
    v66 = (CAudioMediaType *)Block;
    if ( Block )
    {
      v67 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
      if ( v67 == CAudioMediaType::Release )
        goto LABEL_223;
      goto LABEL_161;
    }
    goto LABEL_162;
  }
  v21 = v101;
  v115 = *(struct _GUID *)(v101 + 24);
  v57 = v101 + 40;
  v58 = InitializeSystemEffectsInterface(
          v103,
          *((struct IAudioProcessingObject **)v101 + 5),
          (struct _GUID *)(v101 + 8),
          &v115);
  Converter = v58;
  if ( v58 >= 0 )
  {
    v20 = v93;
LABEL_130:
    if ( v20 )
    {
      v59 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v19 + 40LL);
      if ( v59 == CAPOProcessNode::IsLeftFormatSupported )
        v60 = CAPOProcessNode::IsLeftFormatSupported(v19, v88, (struct IAudioMediaType **)&Block, v94);
      else
        v60 = v59(v19, v88, (struct IAudioMediaType **)&Block, v94);
      Converter = v60;
      if ( v60 < 0 )
      {
        if ( v60 == -2147024882 )
        {
          v66 = (CAudioMediaType *)Block;
          if ( Block )
          {
            v67 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v67 == CAudioMediaType::Release )
              goto LABEL_223;
            goto LABEL_161;
          }
          goto LABEL_162;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
        {
          WPP_SF__guid_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            38LL,
            &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
            v21 + 8);
        }
        v1 = v86;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v86 + 29) + 32LL))(*((_QWORD *)v86 + 29), *v57) < 0 )
        {
          v70 = (CAudioMediaType *)Block;
          if ( !Block )
            goto LABEL_191;
          v71 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
          if ( v71 == CAudioMediaType::Release )
            goto LABEL_248;
          goto LABEL_190;
        }
        if ( Converter != -2005073917 )
        {
          v87 = 1;
          v116 = *(struct _GUID *)(v101 + 8);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v86 + 16, v98);
        v20 = v93;
LABEL_104:
        v19 = v92;
        goto LABEL_38;
      }
LABEL_26:
      v15 = (unsigned int *)v92;
LABEL_27:
      if ( Converter == 1 )
      {
        v31 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v15 + 48LL);
        if ( (char *)v31 == (char *)CAPOProcessNode::IsRightFormatSupported )
        {
          IsRightFormatSupported = CAPOProcessNode::IsRightFormatSupported(
                                     (CAPOProcessNode *)v15,
                                     (struct IAudioMediaType *)Block,
                                     &v91,
                                     0LL);
        }
        else if ( v31 == CProcessNode::IsRightFormatSupported )
        {
          IsRightFormatSupported = CProcessNode::IsRightFormatSupported(
                                     (CProcessNode *)v15,
                                     (struct IAudioMediaType *)Block,
                                     &v91,
                                     0LL);
        }
        else
        {
          IsRightFormatSupported = ((__int64 (__fastcall *)(unsigned int *, void *, struct IAudioMediaType **, _QWORD))v31)(
                                     v15,
                                     Block,
                                     &v91,
                                     0LL);
        }
        Converter = IsRightFormatSupported;
        if ( IsRightFormatSupported < 0 )
        {
          v66 = (CAudioMediaType *)Block;
          if ( Block )
          {
            v67 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v67 == CAudioMediaType::Release )
              goto LABEL_223;
            goto LABEL_161;
          }
          goto LABEL_162;
        }
        if ( IsRightFormatSupported )
        {
          if ( IsRightFormatSupported != 1 )
            goto LABEL_35;
          v41 = (CAudioMediaType *)v88;
          if ( v88 )
          {
            v88 = 0LL;
            v42 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v41 + 16LL);
            if ( v42 == CAudioMediaType::Release )
              CAudioMediaType::Release(v41);
            else
              v42(v41);
          }
          v43 = v91;
          if ( v88 != v91 )
          {
            if ( v91 )
            {
              AddRef = v91->lpVtbl->AddRef;
              if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
                CAudioMediaType::AddRef((CAudioMediaType *)v91);
              else
                ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v91);
            }
            if ( v88 )
              ((void (__fastcall *)(struct IAudioMediaType *))v88->lpVtbl->Release)(v88);
            v88 = v43;
          }
          goto LABEL_92;
        }
        v36 = (CAudioMediaType *)v88;
        if ( v88 )
        {
          v88 = 0LL;
          v37 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v36 + 16LL);
          if ( v37 == CAudioMediaType::Release )
            CAudioMediaType::Release(v36);
          else
            v37(v36);
          v36 = (CAudioMediaType *)v88;
        }
        v38 = (struct IAudioMediaType *)Block;
        v101 = (char *)Block;
        if ( v36 != Block )
        {
          if ( Block )
          {
            v39 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 8LL);
            if ( v39 == CAudioMediaType::AddRef )
              CAudioMediaType::AddRef((CAudioMediaType *)Block);
            else
              v39((CAudioMediaType *)Block);
            v36 = (CAudioMediaType *)v88;
          }
          if ( v36 )
          {
            (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v36 + 16LL))(v36);
            v38 = (struct IAudioMediaType *)v101;
          }
          v36 = (CAudioMediaType *)v38;
          v88 = v38;
        }
        v40 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v19 + 24LL);
        if ( (char *)v40 == (char *)CAPOProcessNode::SetLeftFormat )
        {
          CAPOProcessNode::SetLeftFormat(v19, (struct IAudioMediaType *)v36);
        }
        else if ( v40 == CProcessNode::SetLeftFormat )
        {
          CProcessNode::SetLeftFormat(v19, (struct IAudioMediaType *)v36);
        }
        else
        {
          ((void (__fastcall *)(CProcessNode *, CAudioMediaType *))v40)(v19, v36);
        }
        v15 = (unsigned int *)v92;
        v27 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v92 + 32LL);
        if ( v27 == CAPOProcessNode::SetRightFormat )
        {
          CAPOProcessNode::SetRightFormat(v92, v88);
          goto LABEL_33;
        }
      }
      else
      {
        if ( Converter )
        {
          if ( Converter < 0 )
          {
            if ( Block )
            {
              v73 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
              if ( v73 == CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)Block);
              else
                v73((CAudioMediaType *)Block);
            }
            if ( v91 )
            {
              v74 = v91->lpVtbl->Release;
              if ( (char *)v74 == (char *)CAudioMediaType::Release )
                CAudioMediaType::Release((CAudioMediaType *)v91);
              else
                ((void (__fastcall *)(struct IAudioMediaType *))v74)(v91);
            }
            v1 = v86;
            goto LABEL_270;
          }
          goto LABEL_35;
        }
        v26 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v19 + 24LL);
        if ( (char *)v26 == (char *)CAPOProcessNode::SetLeftFormat )
        {
          CAPOProcessNode::SetLeftFormat(v19, v88);
        }
        else if ( v26 == CProcessNode::SetLeftFormat )
        {
          CProcessNode::SetLeftFormat(v19, v88);
        }
        else
        {
          ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *))v26)(v19, v88);
        }
        v27 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v15 + 32LL);
        if ( v27 == CAPOProcessNode::SetRightFormat )
        {
          CAPOProcessNode::SetRightFormat((CAPOProcessNode *)v15, v88);
LABEL_33:
          if ( v20 )
          {
            ATL::CComPtrBase<IAudioMediaType>::Release((CAudioMediaType **)&v88);
            ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)&v88, (CAudioMediaType **)&v94);
          }
LABEL_35:
          if ( v90 )
            goto LABEL_93;
          if ( (*((_BYTE *)v86 + 128) & 8) == 0 )
          {
LABEL_37:
            v92 = v19;
            goto LABEL_38;
          }
          v75 = v88;
          v76 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v99->lpVtbl->GetAudioFormat)(v99);
          v77 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v75->lpVtbl->GetAudioFormat)(v75);
          if ( !(unsigned int)CompareWaveFormat(v77, v76) )
          {
            v20 = v93;
            goto LABEL_37;
          }
          if ( !Block )
            ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)&Block, (CAudioMediaType **)&v94);
          v20 = v93;
LABEL_92:
          v15 = (unsigned int *)v92;
LABEL_93:
          v1 = v86;
          Converter = CPipeInstance::FindConverter(v86, v88, (struct IAudioMediaType *)Block, &v105, &v117);
          if ( Converter < 0 )
          {
            v70 = (CAudioMediaType *)Block;
            if ( !Block )
              goto LABEL_191;
            v71 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v71 == CAudioMediaType::Release )
              goto LABEL_248;
          }
          else
          {
            v112 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
            Converter = CAPOProcessNode::CreateAPOProcessNode(&v117, v15[6], (unsigned int)v105, 0LL);
            if ( Converter >= 0 )
            {
              Converter = 0;
              try
              {
                v45 = v100;
                v107 = v100;
                v46 = (__int64 *)((char *)v86 + 16);
                v109 = (char *)v86 + 16;
                if ( v98 )
                {
                  v47 = *(_QWORD *)(v98 + 8);
                  v114 = v47;
                  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(v46);
                  v18 = *((_QWORD *)v86 + 6);
                  v111[1] = (ATL::CAtlException *)v18;
                  v48 = *(_QWORD *)v18;
                  v111[2] = *(ATL::CAtlException **)v18;
                  v113 = v18;
                  if ( v18 )
                    *(_QWORD *)(v18 + 16) = v45;
                  *((_QWORD *)v86 + 6) = v48;
                  *(_QWORD *)(v18 + 8) = v47;
                  v49 = v98;
                  *(_QWORD *)v18 = v98;
                  ++*((_QWORD *)v86 + 4);
                  v50 = *(__int64 **)(v49 + 8);
                  if ( v50 )
                    *v50 = v18;
                  else
                    *v46 = v18;
                  *(_QWORD *)(v49 + 8) = v18;
                  v108 = v18;
                }
                else
                {
                  v18 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead(v46, &v107);
                  v108 = v18;
                }
                v96 = v18;
              }
              catch ( ATL::CAtlException *v110 )
              {
                v64 = v110[0];
                if ( *(_DWORD *)v110[0] == -1073741571 )
                  _resetstkoflw();
                LODWORD(v95) = *(_DWORD *)v64;
                Converter = (int)v95;
                if ( (int)v95 < 0 )
                {
                  v78 = (CAudioMediaType *)Block;
                  if ( !Block )
                    goto LABEL_266;
                  v79 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
                  if ( v79 != CAudioMediaType::Release )
                    goto LABEL_265;
                  goto LABEL_254;
                }
                v18 = v96;
                v86 = v97;
                v20 = v93;
              }
              v100 = 0LL;
              v90 = 0;
              goto LABEL_104;
            }
            v70 = (CAudioMediaType *)Block;
            if ( !Block )
              goto LABEL_191;
            v71 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v71 == CAudioMediaType::Release )
              goto LABEL_248;
          }
LABEL_190:
          v71(v70);
          goto LABEL_191;
        }
        if ( (char *)v27 == (char *)CProcessNode::SetRightFormat )
        {
          CProcessNode::SetRightFormat((CProcessNode *)v15, v88);
          goto LABEL_33;
        }
      }
      v27((CAPOProcessNode *)v15, v88);
      goto LABEL_33;
    }
LABEL_23:
    v24 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v19 + 40LL);
    if ( v24 == CAPOProcessNode::IsLeftFormatSupported )
      v25 = CAPOProcessNode::IsLeftFormatSupported(v19, v88, (struct IAudioMediaType **)&Block, 0LL);
    else
      v25 = v24(v19, v88, (struct IAudioMediaType **)&Block, 0LL);
    Converter = v25;
    if ( v25 >= 0 )
      goto LABEL_26;
    v66 = (CAudioMediaType *)Block;
    if ( Block )
    {
      v67 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
      if ( v67 == CAudioMediaType::Release )
        goto LABEL_223;
      goto LABEL_161;
    }
LABEL_162:
    if ( v91 )
    {
      v68 = v91->lpVtbl->Release;
      if ( (char *)v68 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v91);
      else
        ((void (__fastcall *)(struct IAudioMediaType *))v68)(v91);
    }
    v1 = v86;
    goto LABEL_107;
  }
  if ( v58 == -2147024882 )
  {
    v66 = (CAudioMediaType *)Block;
    if ( Block )
    {
      v67 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
      if ( v67 == CAudioMediaType::Release )
        goto LABEL_223;
      goto LABEL_161;
    }
    goto LABEL_162;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF__guid_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      37LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      v21 + 8);
  }
  v1 = v86;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v86 + 29) + 32LL))(*((_QWORD *)v86 + 29), *v57) >= 0 )
  {
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v86 + 16, v98);
    v87 = 1;
    v116 = *v95;
    v20 = v93;
    goto LABEL_104;
  }
  v70 = (CAudioMediaType *)Block;
  if ( Block )
  {
    v71 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v71 != CAudioMediaType::Release )
      goto LABEL_190;
LABEL_248:
    CAudioMediaType::Release((CAudioMediaType *)Block);
  }
LABEL_191:
  if ( v91 )
  {
    v72 = v91->lpVtbl->Release;
    if ( (char *)v72 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v91);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v72)(v91);
  }
LABEL_107:
  if ( !v87 || (v84 = TrackSystemEffectBehavior(*((const unsigned __int16 **)v1 + 23), 1, 0, &v116), v84 >= 0) )
  {
LABEL_108:
    v52 = *(_QWORD *)&WPP_GLOBAL_Control;
    goto LABEL_109;
  }
  v52 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        39LL,
        &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
        (unsigned int)v84);
      goto LABEL_108;
    }
LABEL_109:
    if ( (unsigned int *)v52 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v52 + 28) & 0x20000) != 0
      && *(_BYTE *)(v52 + 25) >= 4u )
    {
      v85 = "SUCCEEDED";
      if ( Converter < 0 )
        v85 = "FAILED";
      WPP_SF_qs(*(_QWORD *)(v52 + 16), 40, v6, (_DWORD)v1, (__int64)v85);
      v52 = *(_QWORD *)&WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0
    && (unsigned int *)v52 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v52 + 28) & 0x20000) != 0
    && *(_BYTE *)(v52 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v52 + 16), 41LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, (unsigned int)Converter);
  }
  if ( v103 )
    ((void (__fastcall *)(struct IMMDevice *))v103->lpVtbl->Release)(v103);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v99 )
  {
    v53 = v99->lpVtbl->Release;
    if ( (char *)v53 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v99);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v53)(v99);
  }
  if ( v94 )
  {
    v54 = v94->lpVtbl->Release;
    if ( (char *)v54 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v94);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v54)(v94);
  }
  if ( v88 )
  {
    v55 = v88->lpVtbl->Release;
    if ( (char *)v55 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v88);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v55)(v88);
  }
  return (unsigned int)Converter;
}
