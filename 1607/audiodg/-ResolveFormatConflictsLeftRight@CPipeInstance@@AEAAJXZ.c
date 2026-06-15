/*
 * XREFs of ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009F60 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140003150 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x14000A0D0 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000BBB0 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000BC00 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000BD60 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000BEC0 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000BFC0 (-SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000C0D0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000C1B0 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000C240 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000C2D0 (-IsRightFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000C330 (-IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x14000C850 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000CB50 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x14000D450 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000D540 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000D6F0 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x14000ED50 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EF10 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x140011B60 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140015050 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x140016D04 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x140017050 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x140017070 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x140019552 (_CxxThrowException_0.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AddHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140025158 (-AddHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140025190 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x14002B2DC (WPP_SF_q.c)
 *     WPP_SF__guid_ @ 0x14002E76C (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14002E7A0 (WPP_SF_qs.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight(CPipeInstance *this)
{
  CPipeInstance *v1; // r13
  __int64 v2; // rcx
  CProcessNode *v3; // rcx
  __int64 (__fastcall *v4)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  int v6; // r8d
  int Converter; // esi
  __int64 (*GetAudioFormat)(void); // rax
  const struct tWAVEFORMATEX *AudioFormat; // rax
  const struct tWAVEFORMATEX *v10; // rsi
  __int64 cbSize; // rdi
  struct tWAVEFORMATEX *v12; // rax
  struct tWAVEFORMATEX *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rdi
  CProcessNode *v16; // r12
  __int64 (__fastcall *v17)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v18; // eax
  CAPOProcessNode *v19; // r14
  int v20; // r13d
  __int64 v21; // rbx
  __int64 v22; // r8
  struct IAudioProcessingObject **v23; // r12
  int v24; // eax
  __int64 (__fastcall *v25)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  __int64 v26; // rdx
  __int64 *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  struct IAudioMediaType *v30; // rdx
  volatile signed __int32 *v31; // rbx
  void (*v32)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  CAudioMediaType *v33; // rcx
  unsigned int (__fastcall *v34)(CAudioMediaType *__hidden); // rax
  __int64 v35; // rcx
  void (*v36)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  CAudioMediaType *v37; // r12
  CProcessNode *v38; // rax
  volatile signed __int32 *v39; // rbx
  unsigned int (__fastcall *v40)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v41; // rcx
  int (*v42)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsRightFormatSupported; // eax
  void (*v44)(void); // rax
  int v45; // eax
  __int64 (__fastcall *v46)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int IsLeftFormatSupported; // eax
  unsigned int (__fastcall *v48)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v49; // rbx
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  void (__fastcall *v51)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  _QWORD *v52; // rcx
  ULONG (__stdcall *v53)(IAudioMediaType *); // rax
  void (*v54)(void); // rax
  void (*v55)(void); // rax
  __int64 result; // rax
  int (*v57)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rax
  int v58; // eax
  CAudioMediaType *v59; // rdx
  unsigned int (__fastcall *v60)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v61; // rbx
  unsigned int (__fastcall *v62)(CAudioMediaType *__hidden); // rax
  void (*v63)(CProcessNode *__hidden, struct IAudioMediaType *); // rax
  void (__fastcall *v64)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rax
  unsigned int (__fastcall *v65)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v66; // rbx
  ULONG (__stdcall *v67)(IAudioMediaType *); // rax
  void (__fastcall ***v68)(_QWORD, __int64); // r14
  _QWORD *v69; // rbx
  __int64 v70; // r12
  _QWORD *v71; // rax
  _QWORD *v72; // rcx
  _QWORD *v73; // rax
  void (*v74)(void); // rax
  __int64 v75; // rax
  CProcessNode *v76; // rcx
  __int64 (__fastcall *v77)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int RightFormat; // eax
  int *v79; // rbx
  int *v80; // rbx
  void **v81; // rbx
  unsigned int (__fastcall *v82)(CAudioMediaType *__hidden); // rax
  volatile signed __int32 *v83; // rbx
  ULONG (__stdcall *Release)(IAudioMediaType *); // rax
  void **v85; // rbx
  unsigned int (__fastcall *v86)(CAudioMediaType *__hidden); // rax
  void **v87; // rbx
  unsigned int (__fastcall *v88)(CAudioMediaType *__hidden); // rax
  struct IAudioMediaType *v89; // rbx
  ULONG (__stdcall *v90)(IAudioMediaType *); // rax
  const struct tWAVEFORMATEX *v91; // rbx
  const struct tWAVEFORMATEX *v92; // rax
  void **v93; // rbx
  unsigned int (__fastcall *v94)(CAudioMediaType *__hidden); // rax
  unsigned int v95; // ebx
  __int64 v96; // rax
  int v97; // eax
  struct IAudioMediaType *v98; // rbx
  ULONG (__stdcall *v99)(IAudioMediaType *); // rax
  int v100; // eax
  const char *v101; // rax
  LPVOID *ppv; // [rsp+20h] [rbp-178h]
  void (__fastcall ****v103)(_QWORD, __int64); // [rsp+28h] [rbp-170h]
  struct IAudioSystemEffects2 **v104; // [rsp+30h] [rbp-168h]
  CPipeInstance *v105; // [rsp+40h] [rbp-158h]
  struct IAudioMediaType *v106; // [rsp+48h] [rbp-150h] BYREF
  char v107; // [rsp+50h] [rbp-148h]
  int v108; // [rsp+54h] [rbp-144h]
  int v109; // [rsp+58h] [rbp-140h] BYREF
  void *Block; // [rsp+60h] [rbp-138h] BYREF
  char v111; // [rsp+68h] [rbp-130h]
  struct IAudioMediaType *v112; // [rsp+70h] [rbp-128h] BYREF
  struct IAudioMediaType *v113; // [rsp+78h] [rbp-120h] BYREF
  CProcessNode *v114; // [rsp+80h] [rbp-118h]
  _QWORD *v115; // [rsp+88h] [rbp-110h]
  CPipeInstance *v116; // [rsp+90h] [rbp-108h]
  unsigned int v117; // [rsp+98h] [rbp-100h]
  _QWORD *v118; // [rsp+A0h] [rbp-F8h]
  struct IAudioMediaType *v119; // [rsp+A8h] [rbp-F0h] BYREF
  void (__fastcall ***v120)(_QWORD, __int64); // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v121; // [rsp+B8h] [rbp-E0h] BYREF
  int pExceptionObject; // [rsp+C0h] [rbp-D8h] BYREF
  struct IMMDevice *v123; // [rsp+C8h] [rbp-D0h] BYREF
  LPVOID v124; // [rsp+D0h] [rbp-C8h] BYREF
  void (__fastcall ***v125)(_QWORD, __int64); // [rsp+D8h] [rbp-C0h] BYREF
  _QWORD *v126; // [rsp+E0h] [rbp-B8h]
  __int64 v127; // [rsp+E8h] [rbp-B0h]
  char *v128; // [rsp+F0h] [rbp-A8h]
  __int64 v129; // [rsp+F8h] [rbp-A0h]
  _QWORD *v130; // [rsp+100h] [rbp-98h]
  _QWORD *v131; // [rsp+108h] [rbp-90h]
  _QWORD *v132; // [rsp+110h] [rbp-88h]
  ATL::CAtlException *v133; // [rsp+118h] [rbp-80h] BYREF
  ATL::CAtlException *v134; // [rsp+120h] [rbp-78h] BYREF
  struct _GUID v135; // [rsp+130h] [rbp-68h] BYREF
  GUID v136; // [rsp+140h] [rbp-58h] BYREF
  struct _GUID v137; // [rsp+150h] [rbp-48h] BYREF

  v127 = -2LL;
  v1 = this;
  v105 = this;
  v116 = this;
  v120 = 0LL;
  v121 = 0LL;
  v111 = 0;
  v107 = 0;
  v106 = 0LL;
  v113 = 0LL;
  v119 = 0LL;
  v124 = 0LL;
  v123 = 0LL;
  if ( *(_QWORD *)this )
  {
    v2 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( !v2 )
      ATL::AtlThrowImpl(-2147467259);
    v3 = *(CProcessNode **)(v2 + 16);
    v4 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v3 + 8LL);
    if ( v4 == CProcessNode::GetLeftFormat )
      LeftFormat = CProcessNode::GetLeftFormat(v3, &v113);
    else
      LeftFormat = v4(v3, &v113);
    Converter = LeftFormat;
    if ( LeftFormat < 0 )
      goto LABEL_92;
  }
  else
  {
    v75 = *((_QWORD *)this + 3);
    if ( !v75 )
      ATL::AtlThrowImpl(-2147467259);
    v76 = *(CProcessNode **)(v75 + 16);
    v77 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v76 + 16LL);
    if ( v77 == CProcessNode::GetRightFormat )
      RightFormat = CProcessNode::GetRightFormat(v76, &v113);
    else
      RightFormat = v77(v76, &v113);
    Converter = RightFormat;
    if ( RightFormat < 0 )
      goto LABEL_92;
  }
  GetAudioFormat = (__int64 (*)(void))v113->lpVtbl->GetAudioFormat;
  if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
    AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v113);
  else
    AudioFormat = (const struct tWAVEFORMATEX *)GetAudioFormat();
  v10 = AudioFormat;
  cbSize = AudioFormat->cbSize;
  v12 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v13 = v12;
  if ( !v12 )
  {
    Converter = -2147024882;
LABEL_92:
    v52 = WPP_GLOBAL_Control;
    goto LABEL_93;
  }
  memcpy_0(v12, v10, cbSize + 18);
  ConvertPCMWfxToIEEEFloat(v13);
  Converter = CAudioMediaType::Create(v13, (unsigned int)v13->cbSize + 18, &v119, 0.0);
  CoTaskMemFree(v13);
  if ( Converter < 0 )
    goto LABEL_92;
  v14 = *((_QWORD *)v1 + 2);
  v115 = (_QWORD *)v14;
  if ( !v14 )
    ATL::AtlThrowImpl(-2147467259);
  v15 = *(_QWORD **)v14;
  v115 = *(_QWORD **)v14;
  v16 = *(CProcessNode **)(v14 + 16);
  v114 = v16;
  v17 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v16 + 16LL);
  v18 = v17 == CProcessNode::GetRightFormat ? CProcessNode::GetRightFormat(v16, &v106) : v17(v16, &v106);
  Converter = v18;
  if ( v18 < 0 )
    goto LABEL_92;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, v1);
  }
  while ( 1 )
  {
    if ( !v15 )
    {
      v51 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v16 + 32LL);
      if ( v51 == CAPOProcessNode::SetRightFormat )
        CAPOProcessNode::SetRightFormat(v16, v106);
      else
        ((void (__fastcall *)(CProcessNode *, struct IAudioMediaType *, int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v51)(
          v16,
          v106,
          CProcessNode::IsLeftFormatSupported);
      goto LABEL_91;
    }
    v112 = 0LL;
    Block = 0LL;
    v118 = v15;
    v19 = (CAPOProcessNode *)v15[2];
    v15 = (_QWORD *)*v15;
    v115 = v15;
    v20 = 0;
    v108 = 0;
    if ( *((_DWORD *)v19 + 10) == 2 )
    {
      v21 = *((_QWORD *)v19 + 4);
      v22 = *(unsigned int *)(v21 + 4);
      LOBYTE(v20) = (_DWORD)v22 != 0;
      v108 = v20;
      v23 = (struct IAudioProcessingObject **)(v21 + 40);
      if ( !*(_QWORD *)(v21 + 40) )
      {
        ppv = (LPVOID *)(v21 + 40);
        v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)v105 + 29) + 24LL))(
                *((_QWORD *)v105 + 29),
                v21 + 8,
                v22,
                *((_QWORD *)v105 + 23));
        Converter = v24;
        if ( v24 < 0 )
        {
          if ( v24 == -2147024882 )
          {
            v81 = (void **)Block;
            if ( Block )
            {
              v82 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
              if ( v82 == CAudioMediaType::Release )
              {
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v81 )
                {
                  *v81 = &CAudioMediaType::`vftable';
                  operator delete[](v81[2]);
                  v81[2] = 0LL;
                  operator delete(v81);
                }
              }
              else
              {
                v82((CAudioMediaType *)Block);
              }
            }
            v83 = (volatile signed __int32 *)v112;
            if ( !v112 )
              goto LABEL_346;
            Release = v112->lpVtbl->Release;
            if ( (char *)Release == (char *)CAudioMediaType::Release )
              goto LABEL_191;
            goto LABEL_194;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              30LL,
              &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
              v21 + 8,
              (_DWORD)ppv);
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v105 + 16, v118);
          if ( v20 )
          {
            v107 = 1;
            v117 = *(_DWORD *)(v21 + 4);
          }
          goto LABEL_159;
        }
        if ( !v20 )
          goto LABEL_23;
        Converter = CoCreateInstance(
                      &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                      0LL,
                      0x17u,
                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                      &v124);
        if ( Converter < 0 )
        {
          v85 = (void **)Block;
          if ( !Block )
            goto LABEL_207;
          v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
          if ( v86 != CAudioMediaType::Release )
            goto LABEL_206;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) != 1 || !v85 )
            goto LABEL_207;
          goto LABEL_205;
        }
        Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v124 + 40LL))(
                      v124,
                      *((_QWORD *)v105 + 23),
                      &v123);
        if ( Converter < 0 )
        {
          v85 = (void **)Block;
          if ( !Block )
            goto LABEL_207;
          v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
          if ( v86 != CAudioMediaType::Release )
            goto LABEL_206;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) != 1 || !v85 )
            goto LABEL_207;
          goto LABEL_205;
        }
        v135 = *(struct _GUID *)(v21 + 24);
        v45 = InitializeSystemEffectsInterface(
                v123,
                *v23,
                (struct _GUID *)(v21 + 8),
                &v135,
                (int)ppv,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v103,
                v104);
        Converter = v45;
        if ( v45 < 0 )
        {
          if ( v45 == -2147024882 )
          {
            v85 = (void **)Block;
            if ( !Block )
              goto LABEL_207;
            v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v86 == CAudioMediaType::Release )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v85 )
                goto LABEL_205;
              goto LABEL_207;
            }
            goto LABEL_206;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              31LL,
              &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
              v21 + 8,
              (_DWORD)ppv);
          }
          if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)v105 + 29) + 32LL))(
                 *((_QWORD *)v105 + 29),
                 *v23) < 0 )
          {
            v85 = (void **)Block;
            if ( !Block )
              goto LABEL_207;
            v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v86 == CAudioMediaType::Release )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v85 )
                goto LABEL_205;
LABEL_207:
              v83 = (volatile signed __int32 *)v112;
              if ( v112 )
              {
                Release = v112->lpVtbl->Release;
                if ( (char *)Release == (char *)CAudioMediaType::Release )
                {
LABEL_191:
                  if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 && v83 )
                  {
                    *(_QWORD *)v83 = &CAudioMediaType::`vftable';
                    operator delete[](*((void **)v83 + 2));
                    *((_QWORD *)v83 + 2) = 0LL;
                    operator delete((void *)v83);
                  }
                  goto LABEL_346;
                }
LABEL_194:
                ((void (__fastcall *)(volatile signed __int32 *))Release)(v83);
              }
LABEL_346:
              v1 = v105;
              goto LABEL_91;
            }
LABEL_206:
            v86((CAudioMediaType *)v85);
            goto LABEL_207;
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v105 + 16, v118);
          v107 = 1;
          v117 = *(_DWORD *)(v21 + 4);
          goto LABEL_159;
        }
      }
      if ( v20 )
      {
        v46 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v19 + 40LL);
        if ( v46 == CAPOProcessNode::IsLeftFormatSupported )
          IsLeftFormatSupported = CAPOProcessNode::IsLeftFormatSupported(
                                    v19,
                                    v106,
                                    (struct IAudioMediaType **)&Block,
                                    v113);
        else
          IsLeftFormatSupported = v46(v19, v106, (struct IAudioMediaType **)&Block, v113);
        Converter = IsLeftFormatSupported;
        if ( IsLeftFormatSupported < 0 )
        {
          if ( IsLeftFormatSupported == -2147024882 )
          {
            v85 = (void **)Block;
            if ( !Block )
              goto LABEL_207;
            v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v86 == CAudioMediaType::Release )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v85 )
                goto LABEL_205;
              goto LABEL_207;
            }
            goto LABEL_206;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              32LL,
              &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
              v21 + 8,
              (_DWORD)ppv);
          }
          if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)v105 + 29) + 32LL))(
                 *((_QWORD *)v105 + 29),
                 *v23) < 0 )
          {
            v85 = (void **)Block;
            if ( !Block )
              goto LABEL_207;
            v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
            if ( v86 == CAudioMediaType::Release )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v85 )
                goto LABEL_205;
              goto LABEL_207;
            }
            goto LABEL_206;
          }
          if ( Converter != -2005073917 )
          {
            v107 = 1;
            v117 = *(_DWORD *)(v21 + 4);
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v105 + 16, v118);
          goto LABEL_159;
        }
        goto LABEL_27;
      }
LABEL_23:
      v25 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v19 + 40LL);
      if ( v25 == CAPOProcessNode::IsLeftFormatSupported )
      {
        v26 = *((_QWORD *)v19 + 2);
        v27 = *(__int64 **)(*((_QWORD *)v19 + 4) + 40LL);
        v28 = *v27;
        if ( *((_DWORD *)v19 + 6) )
          v29 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IAudioMediaType *, void **))(v28 + 64))(
                  v27,
                  v26,
                  v106,
                  &Block);
        else
          v29 = (*(__int64 (__fastcall **)(__int64 *, __int64, struct IAudioMediaType *, void **))(v28 + 56))(
                  v27,
                  v26,
                  v106,
                  &Block);
        Converter = v29;
        if ( v29 >= 0 )
        {
LABEL_27:
          v16 = v114;
          goto LABEL_28;
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            20LL,
            &WPP_00124d7d191530a40c6a65552c411b8b_Traceguids,
            (unsigned int)v29);
        }
        AudDGTraceLoggingErrorHelper("CAPOProcessNode::IsLeftFormatSupported", 0x25Du, Converter);
      }
      else
      {
        Converter = v25(v19, v106, (struct IAudioMediaType **)&Block, 0LL);
      }
      if ( Converter < 0 )
      {
        v85 = (void **)Block;
        if ( !Block )
          goto LABEL_207;
        v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
        if ( v86 == CAudioMediaType::Release )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v85 )
            goto LABEL_205;
          goto LABEL_207;
        }
        goto LABEL_206;
      }
      goto LABEL_27;
    }
    v57 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v19 + 40LL);
    if ( v57 == CProcessNode::IsLeftFormatSupported )
      v58 = CProcessNode::IsLeftFormatSupported(v19, v106, (struct IAudioMediaType **)&Block, 0LL);
    else
      v58 = ((__int64 (__fastcall *)(CAPOProcessNode *, struct IAudioMediaType *, void **, _QWORD))v57)(
              v19,
              v106,
              &Block,
              0LL);
    Converter = v58;
    if ( v58 < 0 )
    {
      v85 = (void **)Block;
      if ( !Block )
        goto LABEL_207;
      v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
      if ( v86 != CAudioMediaType::Release )
        goto LABEL_206;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) != 1 || !v85 )
        goto LABEL_207;
LABEL_205:
      *v85 = &CAudioMediaType::`vftable';
      operator delete[](v85[2]);
      v85[2] = 0LL;
      operator delete(v85);
      goto LABEL_207;
    }
LABEL_28:
    if ( Converter == 1 )
      break;
    if ( Converter )
    {
      if ( Converter < 0 )
      {
        v87 = (void **)Block;
        if ( Block )
        {
          v88 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
          if ( v88 == CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v87 )
            {
              *v87 = &CAudioMediaType::`vftable';
              operator delete[](v87[2]);
              v87[2] = 0LL;
              operator delete(v87);
            }
          }
          else
          {
            v88((CAudioMediaType *)Block);
          }
        }
        v89 = v112;
        if ( v112 )
        {
          v90 = v112->lpVtbl->Release;
          if ( (char *)v90 == (char *)CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v112[1], 0xFFFFFFFF) == 1 && v89 )
            {
              v89->lpVtbl = (struct IAudioMediaTypeVtbl *)&CAudioMediaType::`vftable';
              operator delete[](v89[2].lpVtbl);
              v89[2].lpVtbl = 0LL;
              operator delete(v89);
            }
          }
          else
          {
            ((void (__fastcall *)(struct IAudioMediaType *))v90)(v112);
          }
        }
        v1 = v105;
        goto LABEL_341;
      }
      goto LABEL_43;
    }
    v30 = v106;
    v31 = (volatile signed __int32 *)v106;
    v32 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v19 + 24LL);
    if ( (char *)v32 != (char *)CAPOProcessNode::SetLeftFormat )
    {
      if ( v32 == CProcessNode::SetLeftFormat )
        CProcessNode::SetLeftFormat(v19, v106);
      else
        ((void (__fastcall *)(CAPOProcessNode *))v32)(v19);
LABEL_39:
      v30 = v106;
      goto LABEL_40;
    }
    v33 = (CAudioMediaType *)*((_QWORD *)v19 + 1);
    if ( v33 )
    {
      *((_QWORD *)v19 + 1) = 0LL;
      v74 = *(void (**)(void))(*(_QWORD *)v33 + 16LL);
      if ( (char *)v74 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v33);
      else
        v74();
      v30 = v106;
    }
    if ( *((volatile signed __int32 **)v19 + 1) != v31 )
    {
      if ( v31 )
      {
        v34 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v31 + 8LL);
        if ( v34 == CAudioMediaType::AddRef )
        {
          _InterlockedIncrement(v31 + 2);
          v15 = v115;
        }
        else
        {
          v34((CAudioMediaType *)v31);
        }
      }
      v35 = *((_QWORD *)v19 + 1);
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      *((_QWORD *)v19 + 1) = v31;
      goto LABEL_39;
    }
LABEL_40:
    v36 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v16 + 32LL);
    if ( (char *)v36 == (char *)CAPOProcessNode::SetRightFormat )
    {
      CAPOProcessNode::SetRightFormat(v16, v30);
    }
    else if ( v36 == CProcessNode::SetRightFormat )
    {
      CProcessNode::SetRightFormat(v16, v30);
    }
    else
    {
      ((void (__fastcall *)(CProcessNode *))v36)(v16);
    }
    if ( !v20 )
      goto LABEL_43;
    v37 = (CAudioMediaType *)v106;
    if ( v106 )
    {
      v106 = 0LL;
      v48 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v37 + 16LL);
      if ( v48 == CAudioMediaType::Release )
        CAudioMediaType::Release(v37);
      else
        v48(v37);
      v37 = (CAudioMediaType *)v106;
    }
    v49 = v113;
    if ( v37 != (CAudioMediaType *)v113 )
    {
      if ( v113 )
      {
        AddRef = v113->lpVtbl->AddRef;
        if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
          CAudioMediaType::AddRef((CAudioMediaType *)v113);
        else
          ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v113);
        v37 = (CAudioMediaType *)v106;
      }
      if ( v37 )
        (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v37 + 16LL))(v37);
      v37 = (CAudioMediaType *)v49;
      v106 = v49;
    }
LABEL_44:
    if ( v111 )
      goto LABEL_148;
    if ( (*((_BYTE *)v105 + 132) & 8) != 0 )
    {
      v91 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v119->lpVtbl->GetAudioFormat)(v119);
      v92 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v37 + 40LL))(v37);
      if ( (unsigned int)CompareWaveFormat(v92, v91) )
      {
        if ( !Block )
          ATL::CComPtr<IAudioMediaType>::operator=(&Block, &v113);
        v37 = (CAudioMediaType *)v106;
        goto LABEL_148;
      }
    }
    v38 = v19;
    v114 = v19;
LABEL_47:
    if ( Converter < 0 && v20 )
    {
      v95 = *((_DWORD *)v38 + 6);
      v96 = ((__int64 (__fastcall *)(struct IAudioMediaType *))v113->lpVtbl->GetAudioFormat)(v113);
      v97 = CProcessNode::CreateDummyProcessNode(v95, v96, &v121);
      if ( v97 < 0 )
      {
        pExceptionObject = v97;
        throw (long *)&pExceptionObject;
      }
      (*(void (__fastcall **)(__int64, struct IAudioMediaType *))(*(_QWORD *)v121 + 24LL))(v121, v113);
      Converter = 0;
      try
      {
        v15 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                          (char *)v105 + 16,
                          v15,
                          &v121);
        v115 = v15;
      }
      catch ( ATL::CAtlException *v134 )
      {
        v80 = (int *)v134;
        if ( *(_DWORD *)v134 == -1073741571 )
          _resetstkoflw();
        Converter = *v80;
        if ( *v80 < 0 )
        {
          v93 = (void **)Block;
          if ( !Block )
            goto LABEL_335;
          v94 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
          if ( v94 == CAudioMediaType::Release )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) != 1 || !v93 )
              goto LABEL_335;
LABEL_333:
            *v93 = &CAudioMediaType::`vftable';
            operator delete[](v93[2]);
            v93[2] = 0LL;
            operator delete(v93);
            goto LABEL_335;
          }
LABEL_334:
          v94((CAudioMediaType *)v93);
          goto LABEL_335;
        }
        v15 = v115;
        v105 = v116;
      }
      v121 = 0LL;
    }
    v39 = (volatile signed __int32 *)Block;
    if ( Block )
    {
      Block = 0LL;
      v40 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v39 + 16LL);
      if ( v40 == CAudioMediaType::Release )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          *(_QWORD *)v39 = &CAudioMediaType::`vftable';
          operator delete[](*((void **)v39 + 2));
          *((_QWORD *)v39 + 2) = 0LL;
          operator delete((void *)v39);
        }
        v15 = v115;
      }
      else
      {
        v40((CAudioMediaType *)v39);
      }
    }
    v41 = (CAudioMediaType *)v112;
    if ( v112 )
    {
      v112 = 0LL;
      v44 = *(void (**)(void))(*(_QWORD *)v41 + 16LL);
      if ( (char *)v44 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release(v41);
      else
        v44();
    }
    if ( Block )
      (*(void (__fastcall **)(void *))(*(_QWORD *)Block + 16LL))(Block);
    v16 = v114;
    v1 = v105;
    if ( v112 )
      ((void (__fastcall *)(struct IAudioMediaType *, __int64 (__fastcall *)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *), int (*)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *)))v112->lpVtbl->Release)(
        v112,
        CAPOProcessNode::IsLeftFormatSupported,
        CProcessNode::IsLeftFormatSupported);
  }
  v42 = *(int (**)(CProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v16 + 48LL);
  if ( (char *)v42 == (char *)CAPOProcessNode::IsRightFormatSupported )
  {
    IsRightFormatSupported = CAPOProcessNode::IsRightFormatSupported(v16, (struct IAudioMediaType *)Block, &v112, 0LL);
  }
  else if ( v42 == CProcessNode::IsRightFormatSupported )
  {
    IsRightFormatSupported = CProcessNode::IsRightFormatSupported(v16, (struct IAudioMediaType *)Block, &v112, 0LL);
  }
  else
  {
    IsRightFormatSupported = ((__int64 (__fastcall *)(CProcessNode *, void *, struct IAudioMediaType **, _QWORD))v42)(
                               v16,
                               Block,
                               &v112,
                               0LL);
  }
  Converter = IsRightFormatSupported;
  if ( IsRightFormatSupported < 0 )
  {
    v85 = (void **)Block;
    if ( !Block )
      goto LABEL_207;
    v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v86 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v85 )
        goto LABEL_205;
      goto LABEL_207;
    }
    goto LABEL_206;
  }
  if ( !IsRightFormatSupported )
  {
    v59 = (CAudioMediaType *)v106;
    if ( v106 )
    {
      v106 = 0LL;
      v60 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v59 + 16LL);
      if ( v60 == CAudioMediaType::Release )
        CAudioMediaType::Release(v59);
      else
        v60(v59);
      v59 = (CAudioMediaType *)v106;
    }
    v61 = (struct IAudioMediaType *)Block;
    if ( v59 != Block )
    {
      if ( Block )
      {
        v62 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 8LL);
        if ( v62 == CAudioMediaType::AddRef )
          CAudioMediaType::AddRef((CAudioMediaType *)Block);
        else
          v62((CAudioMediaType *)Block);
        v59 = (CAudioMediaType *)v106;
      }
      if ( v59 )
        (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v59 + 16LL))(v59);
      v59 = (CAudioMediaType *)v61;
      v106 = v61;
    }
    v63 = *(void (**)(CProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v19 + 24LL);
    if ( (char *)v63 == (char *)CAPOProcessNode::SetLeftFormat )
    {
      CAPOProcessNode::SetLeftFormat(v19, (struct IAudioMediaType *)v59);
    }
    else if ( v63 == CProcessNode::SetLeftFormat )
    {
      CProcessNode::SetLeftFormat(v19, (struct IAudioMediaType *)v59);
    }
    else
    {
      ((void (__fastcall *)(CAPOProcessNode *, CAudioMediaType *))v63)(v19, v59);
    }
    v64 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v16 + 32LL);
    if ( v64 == CAPOProcessNode::SetRightFormat )
      CAPOProcessNode::SetRightFormat(v16, v106);
    else
      v64(v16, v106);
    if ( v20 )
    {
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v106);
      ATL::CComPtr<IAudioMediaType>::operator=(&v106, &v113);
    }
    goto LABEL_43;
  }
  if ( IsRightFormatSupported != 1 )
  {
LABEL_43:
    v37 = (CAudioMediaType *)v106;
    goto LABEL_44;
  }
  v37 = (CAudioMediaType *)v106;
  if ( v106 )
  {
    v106 = 0LL;
    v65 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v37 + 16LL);
    if ( v65 == CAudioMediaType::Release )
      CAudioMediaType::Release(v37);
    else
      v65(v37);
    v37 = (CAudioMediaType *)v106;
  }
  v66 = v112;
  if ( v37 != (CAudioMediaType *)v112 )
  {
    if ( v112 )
    {
      v67 = v112->lpVtbl->AddRef;
      if ( (char *)v67 == (char *)CAudioMediaType::AddRef )
        CAudioMediaType::AddRef((CAudioMediaType *)v112);
      else
        ((void (__fastcall *)(struct IAudioMediaType *))v67)(v112);
      v37 = (CAudioMediaType *)v106;
    }
    if ( v37 )
      (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v37 + 16LL))(v37);
    v37 = (CAudioMediaType *)v66;
    v106 = v66;
  }
LABEL_148:
  Converter = CPipeInstance::FindConverter(
                v105,
                (struct IAudioMediaType *)v37,
                (struct IAudioMediaType *)Block,
                &v109,
                &v137);
  if ( Converter < 0 )
  {
    v85 = (void **)Block;
    if ( !Block )
      goto LABEL_207;
    v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v86 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v85 )
        goto LABEL_205;
      goto LABEL_207;
    }
    goto LABEL_206;
  }
  v136 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  v103 = &v120;
  ppv = (LPVOID *)&v136;
  Converter = CAPOProcessNode::CreateAPOProcessNode(&v137, *((unsigned int *)v114 + 6), (unsigned int)v109);
  if ( Converter < 0 )
  {
    v85 = (void **)Block;
    if ( !Block )
      goto LABEL_207;
    v86 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v86 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v85 )
        goto LABEL_205;
      goto LABEL_207;
    }
    goto LABEL_206;
  }
  Converter = 0;
  try
  {
    v68 = v120;
    v125 = v120;
    v69 = (_QWORD *)((char *)v105 + 16);
    v128 = (char *)v105 + 16;
    if ( v118 )
    {
      v70 = v118[1];
      v129 = v70;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(v69);
      v15 = (_QWORD *)*((_QWORD *)v105 + 6);
      v130 = v15;
      v71 = (_QWORD *)*v15;
      v131 = (_QWORD *)*v15;
      v132 = v15;
      if ( v15 )
        v15[2] = v68;
      *((_QWORD *)v105 + 6) = v71;
      v15[1] = v70;
      v72 = v118;
      *v15 = v118;
      ++*((_QWORD *)v105 + 4);
      v73 = (_QWORD *)v72[1];
      if ( v73 )
        *v73 = v15;
      else
        *v69 = v15;
      v72[1] = v15;
      v126 = v15;
    }
    else
    {
      v15 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHead(v69, &v125);
      v126 = v15;
    }
    v115 = v15;
  }
  catch ( ATL::CAtlException *v133 )
  {
    v79 = (int *)v133;
    if ( *(_DWORD *)v133 == -1073741571 )
      _resetstkoflw();
    Converter = *v79;
    if ( *v79 >= 0 )
    {
      v20 = v108;
      v15 = v115;
      v105 = v116;
      goto LABEL_158;
    }
    v93 = (void **)Block;
    if ( !Block )
      goto LABEL_335;
    v94 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)Block + 16LL);
    if ( v94 != CAudioMediaType::Release )
      goto LABEL_334;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) == 1 && v93 )
      goto LABEL_333;
LABEL_335:
    v98 = v112;
    if ( v112 )
    {
      v99 = v112->lpVtbl->Release;
      if ( (char *)v99 == (char *)CAudioMediaType::Release )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v112[1], 0xFFFFFFFF) == 1 && v98 )
        {
          v98->lpVtbl = (struct IAudioMediaTypeVtbl *)&CAudioMediaType::`vftable';
          operator delete[](v98[2].lpVtbl);
          v98[2].lpVtbl = 0LL;
          operator delete(v98);
          v1 = v116;
          goto LABEL_341;
        }
      }
      else
      {
        ((void (__fastcall *)(struct IAudioMediaType *))v99)(v112);
      }
    }
    v1 = v116;
LABEL_341:
    if ( v120 )
      (**v120)(v120, 1LL);
LABEL_91:
    if ( !v107 )
      goto LABEL_92;
    v100 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 23), v117, 0, 0, (__int64)ppv);
    if ( v100 >= 0 )
      goto LABEL_92;
    v52 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          33LL,
          &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
          (unsigned int)v100);
        goto LABEL_92;
      }
LABEL_93:
      if ( v52 != &WPP_GLOBAL_Control && (*((_DWORD *)v52 + 7) & 0x20000) != 0 && *((_BYTE *)v52 + 25) >= 4u )
      {
        v101 = "SUCCEEDED";
        if ( Converter < 0 )
          v101 = "FAILED";
        WPP_SF_qs(v52[2], 34, v6, (_DWORD)v1, (__int64)v101);
        v52 = WPP_GLOBAL_Control;
      }
    }
    if ( Converter < 0 )
    {
      if ( v52 != &WPP_GLOBAL_Control && (*((_DWORD *)v52 + 7) & 0x20000) != 0 && *((_BYTE *)v52 + 25) >= 2u )
        WPP_SF_D(v52[2], 35LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, (unsigned int)Converter);
      AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsLeftRight", 0x6CDu, Converter);
    }
    if ( v123 )
      ((void (__fastcall *)(struct IMMDevice *))v123->lpVtbl->Release)(v123);
    if ( v124 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v124 + 16LL))(v124);
    if ( v119 )
    {
      v53 = v119->lpVtbl->Release;
      if ( (char *)v53 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v119);
      else
        ((void (__fastcall *)(struct IAudioMediaType *))v53)(v119);
    }
    if ( v113 )
    {
      v54 = (void (*)(void))v113->lpVtbl->Release;
      if ( (char *)v54 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v113);
      else
        v54();
    }
    if ( v106 )
    {
      v55 = (void (*)(void))v106->lpVtbl->Release;
      if ( (char *)v55 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v106);
      else
        v55();
    }
    result = (unsigned int)Converter;
  }
LABEL_158:
  v120 = 0LL;
  v111 = 0;
LABEL_159:
  v38 = v114;
  goto LABEL_47;
}
