/*
 * XREFs of ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z @ 0x14000AC40 (-TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000BA30 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000BBD4 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000E800 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140010520 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x1400105E0 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x1400106A0 (-IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140010730 (-IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140010D70 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140010DE0 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140010F60 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x1400110E0 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140011200 (-SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140011350 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x140011480 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140011770 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x140011F1C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140012E70 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140012FC0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?Release@?$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ @ 0x140013198 (-Release@-$CComPtrBase@UIAudioMediaType@@@ATL@@QEAAXXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x140013838 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140015D00 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x140017A60 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x140017A80 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018A14 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x140019A9C (_CxxThrowException_0.c)
 *     memcpy_0 @ 0x140019B52 (memcpy_0.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140026384 (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x1400263BC (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 *     WPP_SF__guid_ @ 0x140030FE8 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14003101C (WPP_SF_qs.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight(CPipeInstance *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(CProcessNode *__hidden, struct IAudioMediaType **); // rdi
  int LeftFormat; // eax
  int v5; // r8d
  int Converter; // r14d
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // rdi
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v9; // r14
  __int64 cbSize; // rdi
  struct tWAVEFORMATEX *v11; // rax
  struct tWAVEFORMATEX *v12; // rbx
  __int64 v13; // rcx
  CAPOProcessNode *v14; // r13
  __int64 (__fastcall *v15)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int v16; // eax
  _QWORD *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rdi
  int v22; // eax
  __int64 (__fastcall *v23)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rbx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(_QWORD, _QWORD, struct IAudioMediaType *, void **); // rbx
  volatile signed __int32 *v26; // rdi
  void (*v27)(CProcessNode *__hidden, struct IAudioMediaType *); // rbx
  CAudioMediaType *v28; // rbx
  unsigned int (__fastcall *v29)(CAudioMediaType *__hidden); // rbx
  __int64 v30; // r13
  volatile signed __int32 *v31; // rdi
  void (*v32)(CProcessNode *__hidden, struct IAudioMediaType *); // rbx
  CAudioMediaType *v33; // rbx
  unsigned int (__fastcall *v34)(CAudioMediaType *__hidden); // rbx
  __int64 v35; // r13
  int v36; // eax
  volatile signed __int32 *v37; // rbx
  unsigned int (__fastcall *v38)(CAudioMediaType *__hidden); // rdi
  CAudioMediaType *v39; // rbx
  int (*v40)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rbx
  int IsRightFormatSupported; // eax
  unsigned int (__fastcall *v42)(CAudioMediaType *__hidden); // rdi
  _QWORD *v43; // rbx
  int v44; // eax
  __int64 (__fastcall *v45)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rdi
  int v46; // eax
  CAudioMediaType *v47; // rdi
  unsigned int (__fastcall *v48)(CAudioMediaType *__hidden); // rbx
  struct IAudioMediaType *v49; // r13
  ULONG (__stdcall *v50)(IAudioMediaType *); // rbx
  void (__fastcall *v51)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rbx
  CPipeInstance *v52; // r13
  _QWORD *v53; // rcx
  ULONG (__stdcall *v54)(IAudioMediaType *); // rdi
  ULONG (__stdcall *v55)(IAudioMediaType *); // rdi
  ULONG (__stdcall *v56)(IAudioMediaType *); // rdi
  int (*v58)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rbx
  int IsLeftFormatSupported; // eax
  CAudioMediaType *v60; // rdi
  unsigned int (__fastcall *v61)(CAudioMediaType *__hidden); // rbx
  struct IAudioMediaType *v62; // r13
  unsigned int (__fastcall *v63)(CAudioMediaType *__hidden); // rbx
  void (*v64)(CProcessNode *__hidden, struct IAudioMediaType *); // rbx
  void (__fastcall *v65)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rbx
  CAudioMediaType *v66; // rdi
  unsigned int (__fastcall *v67)(CAudioMediaType *__hidden); // rbx
  struct IAudioMediaType *v68; // r14
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rbx
  void (__fastcall ***v70)(_QWORD, __int64); // rdi
  __int64 v71; // rcx
  __int64 v72; // r15
  __int64 v73; // rax
  ATL::CAtlException *v74; // rcx
  __int64 *v75; // rcx
  unsigned int (__fastcall *v76)(CAudioMediaType *__hidden); // r13
  __int64 v77; // rax
  CProcessNode *v78; // rbx
  __int64 (__fastcall *v79)(CProcessNode *__hidden, struct IAudioMediaType **); // rdi
  int RightFormat; // eax
  unsigned int (__fastcall *v81)(CAudioMediaType *__hidden); // r13
  ATL::CAtlException *v82; // rbx
  ATL::CAtlException *v83; // rbx
  void **v84; // rbx
  unsigned int (__fastcall *v85)(CAudioMediaType *__hidden); // rdi
  volatile signed __int32 *v86; // rbx
  ULONG (__stdcall *Release)(IAudioMediaType *); // rdi
  struct _GUID *v88; // rbx
  void **v89; // rbx
  unsigned int (__fastcall *v90)(CAudioMediaType *__hidden); // rdi
  void **v91; // rbx
  unsigned int (__fastcall *v92)(CAudioMediaType *__hidden); // rdi
  struct IAudioMediaType *v93; // rbx
  ULONG (__stdcall *v94)(IAudioMediaType *); // rdi
  void **v95; // rbx
  unsigned int (__fastcall *v96)(CAudioMediaType *__hidden); // rdi
  struct IAudioMediaType *v97; // rbx
  ULONG (__stdcall *v98)(IAudioMediaType *); // rdi
  struct IAudioMediaType *v99; // rsi
  const struct tWAVEFORMATEX *v100; // rdi
  const struct tWAVEFORMATEX *v101; // rax
  void **v102; // rbx
  unsigned int (__fastcall *v103)(CAudioMediaType *__hidden); // rdi
  unsigned int v104; // edi
  __int64 v105; // rax
  int v106; // eax
  struct IAudioMediaType *v107; // rbx
  ULONG (__stdcall *v108)(IAudioMediaType *); // rdi
  int v109; // eax
  const char *v110; // rax
  int ppv; // [rsp+20h] [rbp-188h]
  void (__fastcall ****v112)(_QWORD, __int64); // [rsp+28h] [rbp-180h]
  struct IAudioSystemEffects2 **v113; // [rsp+30h] [rbp-178h]
  CPipeInstance *v114; // [rsp+40h] [rbp-168h]
  struct IAudioMediaType *v115; // [rsp+48h] [rbp-160h] BYREF
  char v116; // [rsp+50h] [rbp-158h]
  int v117; // [rsp+54h] [rbp-154h] BYREF
  int v118; // [rsp+58h] [rbp-150h]
  void *Block; // [rsp+60h] [rbp-148h] BYREF
  struct _GUID *v120; // [rsp+68h] [rbp-140h]
  char v121; // [rsp+70h] [rbp-138h]
  struct IAudioMediaType *v122; // [rsp+78h] [rbp-130h] BYREF
  CAPOProcessNode *v123; // [rsp+80h] [rbp-128h]
  struct IAudioMediaType *v124; // [rsp+88h] [rbp-120h] BYREF
  CPipeInstance *v125; // [rsp+90h] [rbp-118h]
  _QWORD *v126; // [rsp+98h] [rbp-110h]
  _QWORD *v127; // [rsp+A0h] [rbp-108h]
  __int64 v128; // [rsp+A8h] [rbp-100h] BYREF
  void (__fastcall ***v129)(_QWORD, __int64); // [rsp+B0h] [rbp-F8h] BYREF
  struct IAudioMediaType *v130; // [rsp+B8h] [rbp-F0h] BYREF
  struct IMMDevice *v131; // [rsp+C0h] [rbp-E8h] BYREF
  LPVOID v132; // [rsp+C8h] [rbp-E0h] BYREF
  int pExceptionObject; // [rsp+D0h] [rbp-D8h] BYREF
  _QWORD v134[3]; // [rsp+D8h] [rbp-D0h] BYREF
  ATL::CAtlException *v135[2]; // [rsp+F0h] [rbp-B8h] BYREF
  ATL::CAtlException *v136[4]; // [rsp+100h] [rbp-A8h] BYREF
  GUID v137; // [rsp+120h] [rbp-88h]
  __int64 v138; // [rsp+130h] [rbp-78h]
  __int64 v139; // [rsp+138h] [rbp-70h]
  struct _GUID v140; // [rsp+140h] [rbp-68h] BYREF
  struct _GUID v141; // [rsp+150h] [rbp-58h] BYREF
  struct _GUID v142; // [rsp+160h] [rbp-48h] BYREF

  v139 = -2LL;
  v114 = this;
  v125 = this;
  v129 = 0LL;
  v128 = 0LL;
  v121 = 0;
  v116 = 0;
  v115 = 0LL;
  v124 = 0LL;
  v130 = 0LL;
  v132 = 0LL;
  v131 = 0LL;
  if ( *(_QWORD *)this )
  {
    v2 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    v3 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(**(_QWORD **)(v2 + 16) + 8LL);
    if ( v3 == CProcessNode::GetLeftFormat )
      LeftFormat = CProcessNode::GetLeftFormat(*(CProcessNode **)(v2 + 16), &v124);
    else
      LeftFormat = v3(*(CProcessNode **)(v2 + 16), &v124);
    Converter = LeftFormat;
    if ( LeftFormat < 0 )
      goto LABEL_371;
  }
  else
  {
    v77 = *((_QWORD *)this + 3);
    if ( !v77 )
      ATL::AtlThrowImpl(-2147467259);
    v78 = *(CProcessNode **)(v77 + 16);
    v79 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v78 + 16LL);
    if ( v79 == CProcessNode::GetRightFormat )
      RightFormat = CProcessNode::GetRightFormat(v78, &v124);
    else
      RightFormat = v79(v78, &v124);
    Converter = RightFormat;
    if ( RightFormat < 0 )
      goto LABEL_371;
  }
  GetAudioFormat = v124->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v124);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))GetAudioFormat)(v124);
  v9 = AudioFormat;
  cbSize = AudioFormat->cbSize;
  v11 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v12 = v11;
  if ( !v11 )
  {
    Converter = -2147024882;
LABEL_371:
    LODWORD(v52) = (_DWORD)v114;
LABEL_99:
    v53 = WPP_GLOBAL_Control;
    goto LABEL_100;
  }
  memcpy_0(v11, v9, cbSize + 18);
  ConvertPCMWfxToIEEEFloat(v12);
  Converter = CAudioMediaType::Create(v12, (unsigned int)v12->cbSize + 18, &v130, 0.0);
  CoTaskMemFree(v12);
  if ( Converter < 0 )
    goto LABEL_371;
  v13 = *((_QWORD *)this + 2);
  v126 = (_QWORD *)v13;
  if ( !v13 )
    ATL::AtlThrowImpl(-2147467259);
  v126 = *(_QWORD **)v13;
  v14 = *(CAPOProcessNode **)(v13 + 16);
  v123 = v14;
  v15 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v14 + 16LL);
  v16 = v15 == CProcessNode::GetRightFormat ? CProcessNode::GetRightFormat(v14, &v115) : v15(v14, &v115);
  Converter = v16;
  if ( v16 < 0 )
    goto LABEL_371;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, this);
  }
  while ( 1 )
  {
    v17 = v126;
    v127 = v126;
    if ( !v126 )
    {
      v51 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v14 + 32LL);
      if ( v51 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v14, v115);
      else
        ((void (__fastcall *)(CAPOProcessNode *, struct IAudioMediaType *, int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v51)(
          v14,
          v115,
          CProcessNode::IsLeftFormatSupported);
      goto LABEL_97;
    }
    v122 = 0LL;
    Block = 0LL;
    v126 = (_QWORD *)*v126;
    v18 = v17[2];
    v118 = 0;
    if ( *(_DWORD *)(v18 + 40) != 2 )
    {
      v58 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v18 + 40LL);
      if ( v58 == CProcessNode::IsLeftFormatSupported )
        IsLeftFormatSupported = CProcessNode::IsLeftFormatSupported(
                                  (CProcessNode *)v18,
                                  v115,
                                  (struct IAudioMediaType **)&Block,
                                  0LL);
      else
        IsLeftFormatSupported = ((__int64 (__fastcall *)(__int64, struct IAudioMediaType *, void **, _QWORD))v58)(
                                  v18,
                                  v115,
                                  &Block,
                                  0LL);
      Converter = IsLeftFormatSupported;
      if ( IsLeftFormatSupported < 0 )
      {
        v89 = (void **)Block;
        if ( !Block )
          goto LABEL_217;
        v90 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
        if ( v90 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v89 )
          {
LABEL_215:
            *v89 = &CAudioMediaType::`vftable';
            operator delete[](v89[2]);
            v89[2] = 0LL;
            operator delete(v89);
          }
LABEL_217:
          v86 = (volatile signed __int32 *)v122;
          if ( v122 )
          {
            Release = v122->lpVtbl->Release;
            if ( (char *)Release == (char *)CAudioMediaType::Release )
            {
LABEL_200:
              if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 && v86 )
              {
                *(_QWORD *)v86 = &CAudioMediaType::`vftable';
                operator delete[](*((void **)v86 + 2));
                *((_QWORD *)v86 + 2) = 0LL;
                operator delete((void *)v86);
              }
              goto LABEL_97;
            }
LABEL_203:
            ((void (__fastcall *)(volatile signed __int32 *))Release)(v86);
          }
LABEL_97:
          v52 = v114;
          goto LABEL_98;
        }
LABEL_216:
        v90((CAudioMediaType *)v89);
        goto LABEL_217;
      }
LABEL_28:
      if ( Converter == 1 )
      {
        v40 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v14 + 48LL);
        if ( (char *)v40 == (char *)CAPOProcessNode::IsRightFormatSupported )
        {
          IsRightFormatSupported = CAPOProcessNode::IsRightFormatSupported(
                                     v14,
                                     (struct IAudioMediaType *)Block,
                                     &v122,
                                     0LL);
        }
        else if ( v40 == CProcessNode::IsRightFormatSupported )
        {
          IsRightFormatSupported = CProcessNode::IsRightFormatSupported(
                                     v14,
                                     (struct IAudioMediaType *)Block,
                                     &v122,
                                     0LL);
        }
        else
        {
          IsRightFormatSupported = ((__int64 (__fastcall *)(CAPOProcessNode *, void *, struct IAudioMediaType **, _QWORD))v40)(
                                     v14,
                                     Block,
                                     &v122,
                                     0LL);
        }
        Converter = IsRightFormatSupported;
        if ( IsRightFormatSupported < 0 )
        {
          v89 = (void **)Block;
          if ( !Block )
            goto LABEL_217;
          v90 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
          if ( v90 == CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v89 )
              goto LABEL_215;
            goto LABEL_217;
          }
          goto LABEL_216;
        }
        if ( IsRightFormatSupported )
        {
          if ( IsRightFormatSupported == 1 )
          {
            v66 = (CAudioMediaType *)v115;
            if ( v115 )
            {
              v115 = 0LL;
              v67 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v66 + 16LL);
              if ( v67 == CAudioMediaType::Release )
                CAudioMediaType::Release(v66);
              else
                v67(v66);
            }
            v68 = v122;
            if ( v115 != v122 )
            {
              if ( v122 )
              {
                AddRef = v122->lpVtbl->AddRef;
                if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
                  CAudioMediaType::AddRef((CAudioMediaType *)v122);
                else
                  ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v122);
              }
              if ( v115 )
                ((void (__fastcall *)(struct IAudioMediaType *))v115->lpVtbl->Release)(v115);
              v115 = v68;
            }
            goto LABEL_153;
          }
        }
        else
        {
          v60 = (CAudioMediaType *)v115;
          if ( v115 )
          {
            v115 = 0LL;
            v61 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v60 + 16LL);
            if ( v61 == CAudioMediaType::Release )
              CAudioMediaType::Release(v60);
            else
              v61(v60);
            v60 = (CAudioMediaType *)v115;
          }
          v62 = (struct IAudioMediaType *)Block;
          if ( v60 != Block )
          {
            if ( Block )
            {
              v63 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 8LL);
              if ( v63 == CAudioMediaType::AddRef )
                CAudioMediaType::AddRef((CAudioMediaType *)Block);
              else
                v63((CAudioMediaType *)Block);
              v60 = (CAudioMediaType *)v115;
            }
            if ( v60 )
              (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v60 + 16LL))(v60);
            v60 = (CAudioMediaType *)v62;
            v115 = v62;
          }
          v64 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v18 + 24LL);
          if ( (char *)v64 == (char *)CAPOProcessNode::SetLeftFormat )
          {
            CAPOProcessNode::SetLeftFormat((CAPOProcessNode *)v18, (struct IAudioMediaType *)v60);
          }
          else if ( v64 == CProcessNode::SetLeftFormat )
          {
            CProcessNode::SetLeftFormat((CProcessNode *)v18, (struct IAudioMediaType *)v60);
          }
          else
          {
            ((void (__fastcall *)(__int64, CAudioMediaType *))v64)(v18, v60);
          }
          v14 = v123;
          v65 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v123 + 32LL);
          if ( v65 == CAPOProcessNode::SetRightFormat )
            CAPOProcessNode::SetRightFormat(v123, v115);
          else
            v65(v123, v115);
          v36 = v118;
          if ( !v118 )
            goto LABEL_50;
          ATL::CComPtrBase<IAudioMediaType>::Release(&v115);
          ATL::CComPtr<IAudioMediaType>::operator=(&v115, &v124);
        }
      }
      else
      {
        if ( !Converter )
        {
          v26 = (volatile signed __int32 *)v115;
          v27 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v18 + 24LL);
          if ( (char *)v27 == (char *)CAPOProcessNode::SetLeftFormat )
          {
            v28 = *(CAudioMediaType **)(v18 + 8);
            if ( v28 )
            {
              *(_QWORD *)(v18 + 8) = 0LL;
              v76 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v28 + 16LL);
              if ( v76 == CAudioMediaType::Release )
                CAudioMediaType::Release(v28);
              else
                v76(v28);
            }
            if ( *(volatile signed __int32 **)(v18 + 8) != v26 )
            {
              if ( v26 )
              {
                v29 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v26 + 8LL);
                if ( v29 == CAudioMediaType::AddRef )
                  _InterlockedIncrement(v26 + 2);
                else
                  v29((CAudioMediaType *)v26);
              }
              v30 = *(_QWORD *)(v18 + 8);
              if ( v30 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 16LL))(*(_QWORD *)(v18 + 8));
              *(_QWORD *)(v18 + 8) = v26;
            }
            v14 = v123;
          }
          else if ( v27 == CProcessNode::SetLeftFormat )
          {
            CProcessNode::SetLeftFormat((CProcessNode *)v18, v115);
          }
          else
          {
            ((void (__fastcall *)(__int64, struct IAudioMediaType *))v27)(v18, v115);
          }
          v31 = (volatile signed __int32 *)v115;
          v32 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v14 + 32LL);
          if ( (char *)v32 == (char *)CAPOProcessNode::SetRightFormat )
          {
            v33 = (CAudioMediaType *)*((_QWORD *)v14 + 2);
            if ( v33 )
            {
              *((_QWORD *)v14 + 2) = 0LL;
              v81 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v33 + 16LL);
              if ( v81 == CAudioMediaType::Release )
                CAudioMediaType::Release(v33);
              else
                v81(v33);
              v14 = v123;
            }
            if ( *((volatile signed __int32 **)v14 + 2) != v31 )
            {
              if ( v31 )
              {
                v34 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v31 + 8LL);
                if ( v34 == CAudioMediaType::AddRef )
                  _InterlockedIncrement(v31 + 2);
                else
                  v34((CAudioMediaType *)v31);
              }
              v35 = *((_QWORD *)v14 + 2);
              if ( v35 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
              v14 = v123;
              *((_QWORD *)v123 + 2) = v31;
            }
          }
          else if ( v32 == CProcessNode::SetRightFormat )
          {
            CProcessNode::SetRightFormat(v14, v115);
          }
          else
          {
            ((void (__fastcall *)(CAPOProcessNode *, struct IAudioMediaType *))v32)(v14, v115);
          }
          v36 = v118;
          if ( v118 )
          {
            v47 = (CAudioMediaType *)v115;
            if ( v115 )
            {
              v115 = 0LL;
              v48 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v47 + 16LL);
              if ( v48 == CAudioMediaType::Release )
                CAudioMediaType::Release(v47);
              else
                v48(v47);
              v36 = v118;
            }
            v49 = v124;
            if ( v115 != v124 )
            {
              if ( v124 )
              {
                v50 = v124->lpVtbl->AddRef;
                if ( (char *)v50 == (char *)CAudioMediaType::AddRef )
                  CAudioMediaType::AddRef((CAudioMediaType *)v124);
                else
                  ((void (__fastcall *)(struct IAudioMediaType *))v50)(v124);
              }
              if ( v115 )
                ((void (__fastcall *)(struct IAudioMediaType *))v115->lpVtbl->Release)(v115);
              v115 = v49;
              v36 = v118;
            }
            v14 = v123;
          }
          goto LABEL_50;
        }
        if ( Converter < 0 )
        {
          v95 = (void **)Block;
          if ( Block )
          {
            v96 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v96 == CAudioMediaType::Release )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v95 )
              {
                *v95 = &CAudioMediaType::`vftable';
                operator delete[](v95[2]);
                v95[2] = 0LL;
                operator delete(v95);
              }
            }
            else
            {
              v96((CAudioMediaType *)Block);
            }
          }
          v97 = v122;
          if ( v122 )
          {
            v98 = v122->lpVtbl->Release;
            if ( (char *)v98 == (char *)CAudioMediaType::Release )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v122[1], 0xFFFFFFFF) == 1 && v97 )
              {
                v97->lpVtbl = (struct IAudioMediaTypeVtbl *)&CAudioMediaType::`vftable';
                operator delete[](v97[2].lpVtbl);
                v97[2].lpVtbl = 0LL;
                operator delete(v97);
              }
            }
            else
            {
              ((void (__fastcall *)(struct IAudioMediaType *))v98)(v122);
            }
          }
          v52 = v114;
          goto LABEL_360;
        }
      }
      v36 = v118;
LABEL_50:
      if ( v121 )
        goto LABEL_153;
      if ( (*((_BYTE *)v114 + 132) & 8) == 0 )
        goto LABEL_52;
      v99 = v115;
      v100 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v130->lpVtbl->GetAudioFormat)(v130);
      v101 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v99->lpVtbl->GetAudioFormat)(v99);
      if ( !(unsigned int)CompareWaveFormat(v101, v100) )
      {
        v36 = v118;
LABEL_52:
        v14 = (CAPOProcessNode *)v18;
        v123 = (CAPOProcessNode *)v18;
        goto LABEL_53;
      }
      if ( !Block )
        ATL::CComPtr<IAudioMediaType>::operator=(&Block, &v124);
      v17 = v127;
LABEL_153:
      Converter = CPipeInstance::FindConverter(v114, v115, (struct IAudioMediaType *)Block, &v117, &v142);
      if ( Converter < 0 )
      {
        v89 = (void **)Block;
        if ( !Block )
          goto LABEL_217;
        v90 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
        if ( v90 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v89 )
            goto LABEL_215;
          goto LABEL_217;
        }
        goto LABEL_216;
      }
      v137 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v112 = &v129;
      Converter = CAPOProcessNode::CreateAPOProcessNode(&v142, *((unsigned int *)v14 + 6), (unsigned int)v117);
      if ( Converter < 0 )
      {
        v89 = (void **)Block;
        if ( !Block )
          goto LABEL_217;
        v90 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
        if ( v90 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v89 )
            goto LABEL_215;
          goto LABEL_217;
        }
        goto LABEL_216;
      }
      Converter = 0;
      try
      {
        v70 = v129;
        v134[0] = v129;
        v135[1] = (CPipeInstance *)((char *)v114 + 16);
        v71 = (__int64)v114 + 16;
        if ( v17 )
        {
          v72 = v17[1];
          v134[2] = v72;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(v71);
          v73 = *((_QWORD *)v114 + 6);
          v136[1] = (ATL::CAtlException *)v73;
          v74 = *(ATL::CAtlException **)v73;
          v136[2] = *(ATL::CAtlException **)v73;
          v138 = v73;
          if ( v73 )
            *(_QWORD *)(v73 + 16) = v70;
          *((_QWORD *)v114 + 6) = v74;
          *(_QWORD *)(v73 + 8) = v72;
          *(_QWORD *)v73 = v17;
          ++*((_QWORD *)v114 + 4);
          v75 = (__int64 *)v17[1];
          if ( v75 )
            *v75 = v73;
          else
            *((_QWORD *)v114 + 2) = v73;
          v17[1] = v73;
        }
        else
        {
          v73 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead(v71, v134);
        }
        v134[1] = v73;
        v126 = (_QWORD *)v73;
      }
      catch ( ATL::CAtlException *v135 )
      {
        v82 = v135[0];
        if ( *(_DWORD *)v135[0] == -1073741571 )
          _resetstkoflw();
        LODWORD(v120) = *(_DWORD *)v82;
        Converter = (int)v120;
        if ( (int)v120 < 0 )
        {
          v102 = (void **)Block;
          if ( !Block )
            goto LABEL_354;
          v103 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
          if ( v103 == CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v102 )
              goto LABEL_352;
            goto LABEL_354;
          }
LABEL_353:
          v103((CAudioMediaType *)v102);
          goto LABEL_354;
        }
        v14 = v123;
        v114 = v125;
      }
      v129 = 0LL;
      v121 = 0;
      goto LABEL_164;
    }
    v19 = *(_QWORD *)(v18 + 32);
    v20 = *(_DWORD *)(v19 + 4);
    v118 = v20;
    if ( *(_QWORD *)(v19 + 40) )
    {
      v43 = (_QWORD *)(v19 + 40);
LABEL_78:
      if ( v20 )
      {
        v45 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v18 + 40LL);
        if ( v45 == CAPOProcessNode::IsLeftFormatSupported )
          v46 = CAPOProcessNode::IsLeftFormatSupported(
                  (CAPOProcessNode *)v18,
                  v115,
                  (struct IAudioMediaType **)&Block,
                  v124);
        else
          v46 = v45((CAPOProcessNode *)v18, v115, (struct IAudioMediaType **)&Block, v124);
        Converter = v46;
        if ( v46 < 0 )
        {
          if ( v46 == -2147024882 )
          {
            v89 = (void **)Block;
            if ( !Block )
              goto LABEL_217;
            v90 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v90 == CAudioMediaType::Release )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v89 )
                goto LABEL_215;
              goto LABEL_217;
            }
            goto LABEL_216;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              38LL,
              &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
              v19 + 8);
          }
          if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v114 + 29) + 32LL))(*((_QWORD *)v114 + 29), *v43) < 0 )
          {
            v89 = (void **)Block;
            if ( !Block )
              goto LABEL_217;
            v90 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v90 == CAudioMediaType::Release )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v89 )
                goto LABEL_215;
              goto LABEL_217;
            }
            goto LABEL_216;
          }
          if ( Converter != -2005073917 )
          {
            v116 = 1;
            v141 = *(struct _GUID *)(v19 + 8);
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((_QWORD *)v114 + 2, v127);
          v14 = v123;
LABEL_164:
          v36 = v118;
          goto LABEL_53;
        }
        goto LABEL_27;
      }
LABEL_23:
      v23 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v18 + 40LL);
      if ( v23 == CAPOProcessNode::IsLeftFormatSupported )
      {
        v24 = **(_QWORD **)(*(_QWORD *)(v18 + 32) + 40LL);
        if ( *(_DWORD *)(v18 + 24) )
          v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct IAudioMediaType *, void **))(v24 + 64);
        else
          v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct IAudioMediaType *, void **))(v24 + 56);
        Converter = v25(*(_QWORD *)(*(_QWORD *)(v18 + 32) + 40LL), *(_QWORD *)(v18 + 16), v115, &Block);
        if ( Converter >= 0 )
        {
LABEL_27:
          v14 = v123;
          goto LABEL_28;
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            20LL,
            &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids,
            (unsigned int)Converter);
        }
      }
      else
      {
        Converter = v23((CAPOProcessNode *)v18, v115, (struct IAudioMediaType **)&Block, 0LL);
      }
      if ( Converter < 0 )
      {
        v89 = (void **)Block;
        if ( !Block )
          goto LABEL_217;
        v90 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
        if ( v90 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v89 )
            goto LABEL_215;
          goto LABEL_217;
        }
        goto LABEL_216;
      }
      goto LABEL_27;
    }
    v21 = *((_QWORD *)v114 + 29);
    v120 = (struct _GUID *)(v19 + 8);
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 24LL))(v21, v19 + 8, v19 + 40);
    Converter = v22;
    if ( v22 >= 0 )
      break;
    if ( v22 == -2147024882 )
    {
      v84 = (void **)Block;
      if ( Block )
      {
        v85 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
        if ( v85 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v84 )
          {
            *v84 = &CAudioMediaType::`vftable';
            operator delete[](v84[2]);
            v84[2] = 0LL;
            operator delete(v84);
          }
        }
        else
        {
          v85((CAudioMediaType *)Block);
        }
      }
      v86 = (volatile signed __int32 *)v122;
      if ( !v122 )
        goto LABEL_97;
      Release = v122->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        goto LABEL_200;
      goto LABEL_203;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0 )
    {
      v88 = v120;
    }
    else
    {
      v88 = v120;
      if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v120);
    }
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((_QWORD *)v114 + 2, v17);
    v36 = v118;
    v14 = v123;
    if ( v118 )
    {
      v116 = 1;
      v141 = *v88;
    }
LABEL_53:
    if ( Converter < 0 && v36 )
    {
      v104 = *((_DWORD *)v14 + 6);
      v105 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v124->lpVtbl->GetAudioFormat)(v124);
      v106 = CProcessNode::CreateDummyProcessNode(v104, v105, &v128);
      if ( v106 < 0 )
      {
        pExceptionObject = v106;
        throw (long *)&pExceptionObject;
      }
      (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v128 + 24LL))(v128, v124);
      Converter = 0;
      try
      {
        v126 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                           (char *)v114 + 16,
                           v126,
                           &v128);
      }
      catch ( ATL::CAtlException *v136 )
      {
        v83 = v136[0];
        if ( *(_DWORD *)v136[0] == -1073741571 )
          _resetstkoflw();
        LODWORD(v120) = *(_DWORD *)v83;
        Converter = (int)v120;
        if ( (int)v120 < 0 )
        {
          v102 = (void **)Block;
          if ( !Block )
            goto LABEL_354;
          v103 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
          if ( v103 == CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v102 )
            {
LABEL_352:
              *v102 = &CAudioMediaType::`vftable';
              operator delete[](v102[2]);
              v102[2] = 0LL;
              operator delete(v102);
            }
LABEL_354:
            v107 = v122;
            if ( v122 )
            {
              v108 = v122->lpVtbl->Release;
              if ( (char *)v108 == (char *)CAudioMediaType::Release )
              {
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v122[1], 0xFFFFFFFF) == 1 && v107 )
                {
                  v107->lpVtbl = (struct IAudioMediaTypeVtbl *)&CAudioMediaType::`vftable';
                  operator delete[](v107[2].lpVtbl);
                  v107[2].lpVtbl = 0LL;
                  operator delete(v107);
                  v52 = v125;
LABEL_360:
                  if ( v129 )
                    (**v129)(v129, 1LL);
                  goto LABEL_98;
                }
              }
              else
              {
                ((void (__fastcall *)(struct IAudioMediaType *))v108)(v122);
              }
            }
            v52 = v125;
            goto LABEL_360;
          }
          goto LABEL_353;
        }
        v114 = v125;
      }
      v14 = v123;
      v128 = 0LL;
    }
    v37 = (volatile signed __int32 *)Block;
    if ( Block )
    {
      Block = 0LL;
      v38 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v37 + 16LL);
      if ( v38 == CAudioMediaType::Release )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          *(_QWORD *)v37 = &CAudioMediaType::`vftable';
          operator delete[](*((void **)v37 + 2));
          *((_QWORD *)v37 + 2) = 0LL;
          operator delete((void *)v37);
        }
      }
      else
      {
        v38((CAudioMediaType *)v37);
      }
    }
    v39 = (CAudioMediaType *)v122;
    if ( v122 )
    {
      v122 = 0LL;
      v42 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v39 + 16LL);
      if ( v42 == CAudioMediaType::Release )
        CAudioMediaType::Release(v39);
      else
        v42(v39);
    }
    if ( Block )
      (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
    if ( v122 )
      ((void (__fastcall *)(struct IAudioMediaType *, __int64 (__fastcall *)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *), int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v122->lpVtbl->Release)(
        v122,
        CAPOProcessNode::IsLeftFormatSupported,
        CProcessNode::IsLeftFormatSupported);
  }
  if ( !v118 )
    goto LABEL_23;
  Converter = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                &v132);
  if ( Converter < 0 )
  {
    v89 = (void **)Block;
    if ( !Block )
      goto LABEL_217;
    v90 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v90 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v89 )
        goto LABEL_215;
      goto LABEL_217;
    }
    goto LABEL_216;
  }
  Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v132 + 40LL))(
                v132,
                *((_QWORD *)v114 + 23),
                &v131);
  if ( Converter < 0 )
  {
    v89 = (void **)Block;
    if ( !Block )
      goto LABEL_217;
    v90 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v90 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v89 )
        goto LABEL_215;
      goto LABEL_217;
    }
    goto LABEL_216;
  }
  v140 = *(struct _GUID *)(v19 + 24);
  v43 = (_QWORD *)(v19 + 40);
  v44 = InitializeSystemEffectsInterface(
          v131,
          *(struct IAudioProcessingObject **)(v19 + 40),
          (struct _GUID *)(v19 + 8),
          &v140,
          ppv,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v112,
          v113);
  Converter = v44;
  if ( v44 >= 0 )
  {
    v17 = v127;
    v20 = v118;
    goto LABEL_78;
  }
  if ( v44 == -2147024882 )
  {
    v89 = (void **)Block;
    if ( !Block )
      goto LABEL_217;
    v90 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v90 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v89 )
        goto LABEL_215;
      goto LABEL_217;
    }
    goto LABEL_216;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v19 + 8);
  }
  v52 = v114;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v114 + 29) + 32LL))(*((_QWORD *)v114 + 29), *v43) >= 0 )
  {
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((_QWORD *)v114 + 2, v127);
    v116 = 1;
    v141 = *v120;
    v14 = v123;
    goto LABEL_164;
  }
  v91 = (void **)Block;
  if ( Block )
  {
    v92 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v92 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v91 )
      {
        *v91 = &CAudioMediaType::`vftable';
        operator delete[](v91[2]);
        v91[2] = 0LL;
        operator delete(v91);
      }
    }
    else
    {
      v92((CAudioMediaType *)Block);
    }
  }
  v93 = v122;
  if ( v122 )
  {
    v94 = v122->lpVtbl->Release;
    if ( (char *)v94 == (char *)CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v122[1], 0xFFFFFFFF) == 1 && v93 )
      {
        v93->lpVtbl = (struct IAudioMediaTypeVtbl *)&CAudioMediaType::`vftable';
        operator delete[](v93[2].lpVtbl);
        v93[2].lpVtbl = 0LL;
        operator delete(v93);
      }
    }
    else
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v94)(v122);
    }
  }
LABEL_98:
  if ( !v116 )
    goto LABEL_99;
  v109 = TrackSystemEffectBehavior(*((const unsigned __int16 **)v52 + 23), 1, 0, &v141);
  if ( v109 >= 0 )
    goto LABEL_99;
  v53 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        39LL,
        &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
        (unsigned int)v109);
      goto LABEL_99;
    }
LABEL_100:
    if ( v53 != &WPP_GLOBAL_Control && (*((_DWORD *)v53 + 7) & 0x20000) != 0 && *((_BYTE *)v53 + 25) >= 4u )
    {
      v110 = "SUCCEEDED";
      if ( Converter < 0 )
        v110 = "FAILED";
      WPP_SF_qs(v53[2], 40, v5, (_DWORD)v52, (__int64)v110);
      v53 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0
    && v53 != &WPP_GLOBAL_Control
    && (*((_DWORD *)v53 + 7) & 0x20000) != 0
    && *((_BYTE *)v53 + 25) >= 2u )
  {
    WPP_SF_D(v53[2], 41LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, (unsigned int)Converter);
  }
  if ( v131 )
    ((void (__fastcall *)(struct IMMDevice *))v131->lpVtbl->Release)(v131);
  if ( v132 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v132 + 16LL))(v132);
  if ( v130 )
  {
    v54 = v130->lpVtbl->Release;
    if ( (char *)v54 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v130);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v54)(v130);
  }
  if ( v124 )
  {
    v55 = v124->lpVtbl->Release;
    if ( (char *)v55 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v124);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v55)(v124);
  }
  if ( v115 )
  {
    v56 = v115->lpVtbl->Release;
    if ( (char *)v56 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v115);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v56)(v115);
  }
  return (unsigned int)Converter;
}
