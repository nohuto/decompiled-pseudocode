/*
 * XREFs of ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x140006D9C
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006C70 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140008CF0 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140009400 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x1400094C0 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x140009610 (-IsLeftFormatSupported@CAPOProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140009C80 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000A780 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14000B724 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::FixupStreamPipe(CPipeInstance *this)
{
  int APOProcessNode; // r14d
  unsigned int *v4; // r12
  CAPOProcessNode *v5; // r13
  __int64 v6; // rcx
  CAPOProcessNode *v7; // rbx
  __int64 (__fastcall *v8)(CProcessNode *__hidden, struct IAudioMediaType **); // rdi
  int RightFormat; // eax
  __int64 (__fastcall *v10)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *); // rdi
  int IsLeftFormatSupported; // eax
  void (__fastcall *v12)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rdi
  void (__fastcall *v13)(CAPOProcessNode *__hidden, struct IAudioMediaType *); // rdi
  ULONG (__stdcall *v14)(IAudioMediaType *); // r15
  ULONG (__stdcall *v15)(IAudioMediaType *); // r15
  ATL::CAtlException *v16; // rbx
  ULONG (__stdcall *Release)(IAudioMediaType *); // rdi
  ULONG (__stdcall *v18)(IAudioMediaType *); // r15
  ULONG (__stdcall *v19)(IAudioMediaType *); // rdi
  ULONG (__stdcall *v20)(IAudioMediaType *); // rdi
  char *v21; // [rsp+30h] [rbp-68h]
  ATL::CAtlException *v22; // [rsp+40h] [rbp-58h] BYREF
  GUID v23; // [rsp+50h] [rbp-48h] BYREF
  CAPOProcessNode *v24; // [rsp+A0h] [rbp+8h] BYREF
  struct IAudioMediaType *v25; // [rsp+A8h] [rbp+10h] BYREF
  CAPOProcessNode *v26; // [rsp+B0h] [rbp+18h] BYREF
  struct IAudioMediaType *v27; // [rsp+B8h] [rbp+20h] BYREF

  APOProcessNode = 0;
  if ( *((_DWORD *)this + 28) == 2 && *((_QWORD *)this + 4) > 1uLL )
  {
    v21 = (char *)this + 16;
    v24 = (CAPOProcessNode *)*((_QWORD *)this + 2);
    v4 = *(unsigned int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(this, &v24);
    v5 = v24;
    if ( !v24 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = *((_QWORD *)v24 + 2);
    if ( v4[10] == 3
      && *(_DWORD *)(v6 + 40) == 2
      && *(_DWORD *)(*(_QWORD *)(v6 + 32) + 4LL)
      && (*(_BYTE *)(v6 + 48) & 1) != 0 )
    {
      v26 = 0LL;
      v25 = 0LL;
      v23 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                         &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e,
                         v4[6],
                         1LL,
                         0LL);
      if ( APOProcessNode < 0 )
      {
        if ( v25 )
        {
          Release = v25->lpVtbl->Release;
          if ( (char *)Release == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v25);
          else
            ((void (__fastcall *)(struct IAudioMediaType *))Release)(v25);
        }
        v7 = v26;
      }
      else
      {
        v7 = v26;
        APOProcessNode = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 29) + 24LL))(
                           *((_QWORD *)this + 29),
                           *((_QWORD *)v26 + 4) + 8LL,
                           *((_QWORD *)v26 + 4) + 40LL);
        if ( APOProcessNode < 0
          || ((v8 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v4 + 16LL),
               v8 != CProcessNode::GetRightFormat)
            ? (RightFormat = v8((CProcessNode *)v4, &v25))
            : (RightFormat = CProcessNode::GetRightFormat((CProcessNode *)v4, &v25)),
              APOProcessNode = RightFormat,
              RightFormat < 0) )
        {
          if ( v25 )
          {
            v18 = v25->lpVtbl->Release;
            if ( (char *)v18 == (char *)CAudioMediaType::Release )
              CAudioMediaType::Release((CAudioMediaType *)v25);
            else
              ((void (__fastcall *)(struct IAudioMediaType *))v18)(v25);
          }
          goto LABEL_60;
        }
        v27 = 0LL;
        v10 = *(__int64 (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *))(*(_QWORD *)v7 + 40LL);
        if ( v10 == CAPOProcessNode::IsLeftFormatSupported )
          IsLeftFormatSupported = CAPOProcessNode::IsLeftFormatSupported(v7, v25, &v27, v25);
        else
          IsLeftFormatSupported = ((__int64 (__fastcall *)(CAPOProcessNode *, struct IAudioMediaType *, struct IAudioMediaType **, struct IAudioMediaType *, GUID *, CAPOProcessNode **))v10)(
                                    v7,
                                    v25,
                                    &v27,
                                    v25,
                                    &v23,
                                    &v26);
        if ( IsLeftFormatSupported )
        {
          APOProcessNode = -2005139404;
        }
        else
        {
          v12 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v7 + 24LL);
          if ( v12 == CAPOProcessNode::SetLeftFormat )
            CAPOProcessNode::SetLeftFormat(v7, v25);
          else
            v12(v7, v25);
          v13 = *(void (__fastcall **)(CAPOProcessNode *__hidden, struct IAudioMediaType *))(*(_QWORD *)v7 + 32LL);
          if ( v13 == CAPOProcessNode::SetRightFormat )
            CAPOProcessNode::SetRightFormat(v7, v25);
          else
            v13(v7, v25);
          APOProcessNode = 0;
          try
          {
            v24 = v7;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(v21, v5, &v24);
          }
          catch ( ATL::CAtlException *v22 )
          {
            v16 = v22;
            if ( *(_DWORD *)v22 == -1073741571 )
              _resetstkoflw();
            LODWORD(v24) = *(_DWORD *)v16;
            APOProcessNode = (int)v24;
            if ( (int)v24 < 0 )
            {
              if ( v27 )
              {
                v19 = v27->lpVtbl->Release;
                if ( (char *)v19 == (char *)CAudioMediaType::Release )
                  CAudioMediaType::Release((CAudioMediaType *)v27);
                else
                  ((void (__fastcall *)(struct IAudioMediaType *))v19)(v27);
              }
              if ( v25 )
              {
                v20 = v25->lpVtbl->Release;
                if ( (char *)v20 == (char *)CAudioMediaType::Release )
                  CAudioMediaType::Release((CAudioMediaType *)v25);
                else
                  ((void (__fastcall *)(struct IAudioMediaType *))v20)(v25);
              }
              v7 = v26;
              goto LABEL_60;
            }
          }
          v7 = 0LL;
          v26 = 0LL;
        }
        if ( v27 )
        {
          v14 = v27->lpVtbl->Release;
          if ( (char *)v14 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v27);
          else
            ((void (__fastcall *)(struct IAudioMediaType *))v14)(v27);
        }
        if ( v25 )
        {
          v15 = v25->lpVtbl->Release;
          if ( (char *)v15 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release((CAudioMediaType *)v25);
          else
            ((void (__fastcall *)(struct IAudioMediaType *))v15)(v25);
        }
      }
      if ( !v7 )
      {
LABEL_30:
        if ( APOProcessNode < 0
          && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            43LL,
            &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
            (unsigned int)APOProcessNode);
        }
        return (unsigned int)APOProcessNode;
      }
LABEL_60:
      (**(void (__fastcall ***)(CAPOProcessNode *, __int64))v7)(v7, 1LL);
      goto LABEL_30;
    }
  }
  return (unsigned int)APOProcessNode;
}
