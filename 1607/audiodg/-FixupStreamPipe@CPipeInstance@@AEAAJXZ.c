/*
 * XREFs of ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000A044
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009F60 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140001C70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000CB50 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140025190 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::FixupStreamPipe(CPipeInstance *this)
{
  int APOProcessNode; // esi
  unsigned int *v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // rcx
  ATL::CAtlException *v7; // rbx
  void (*v8)(void); // rax
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  void (__fastcall **v10)(_QWORD, __int64); // rax
  _QWORD *v11; // rbx
  void (*v12)(void); // rax
  void (*v13)(void); // rax
  void (*v14)(void); // rax
  void (*v15)(void); // rax
  void (*v16)(void); // rax
  ATL::CAtlException *v17; // [rsp+38h] [rbp-50h] BYREF
  GUID v18; // [rsp+40h] [rbp-48h]
  _QWORD *v19; // [rsp+90h] [rbp+8h] BYREF
  CAudioMediaType *v20; // [rsp+98h] [rbp+10h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+18h]
  CAudioMediaType *v22; // [rsp+A8h] [rbp+20h] BYREF

  APOProcessNode = 0;
  if ( *((_DWORD *)this + 28) == 2 && *((_QWORD *)this + 4) > 1uLL )
  {
    v19 = (_QWORD *)*((_QWORD *)this + 2);
    v4 = (unsigned int *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                            (__int64)this,
                            &v19);
    v5 = v19;
    if ( !v19 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = v19[2];
    if ( v4[10] == 3
      && *(_DWORD *)(v6 + 40) == 2
      && *(_DWORD *)(*(_QWORD *)(v6 + 32) + 4LL)
      && (*(_BYTE *)(v6 + 48) & 1) != 0 )
    {
      v21 = 0LL;
      v20 = 0LL;
      v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(&GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e, v4[6], 1LL);
      if ( APOProcessNode < 0 )
      {
        if ( v20 )
        {
          v8 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
          if ( (char *)v8 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v20);
          else
            v8();
        }
        v9 = (void (__fastcall ***)(_QWORD, __int64))v21;
        if ( !v21 )
          goto LABEL_50;
        goto LABEL_17;
      }
      v11 = (_QWORD *)v21;
      APOProcessNode = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 29)
                                                                                           + 24LL))(
                         *((_QWORD *)this + 29),
                         *(_QWORD *)(v21 + 32) + 8LL,
                         *(unsigned int *)(*(_QWORD *)(v21 + 32) + 4LL),
                         *((_QWORD *)this + 23),
                         *(_QWORD *)(v21 + 32) + 40LL);
      if ( APOProcessNode < 0
        || (APOProcessNode = (*(__int64 (__fastcall **)(unsigned int *, CAudioMediaType **))(*(_QWORD *)v4 + 16LL))(
                               v4,
                               &v20),
            APOProcessNode < 0) )
      {
        if ( v20 )
        {
          v12 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
          if ( (char *)v12 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v20);
          else
            v12();
        }
      }
      else
      {
        v22 = 0LL;
        if ( (*(unsigned int (__fastcall **)(_QWORD *, CAudioMediaType *, CAudioMediaType **, CAudioMediaType *))(*v11 + 40LL))(
               v11,
               v20,
               &v22,
               v20) )
        {
          APOProcessNode = -2005139404;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, CAudioMediaType *))(*v11 + 24LL))(v11, v20);
          (*(void (__fastcall **)(_QWORD *, CAudioMediaType *))(*v11 + 32LL))(v11, v20);
          APOProcessNode = 0;
          try
          {
            v19 = v11;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore((char *)this + 16, v5, &v19);
          }
          catch ( ATL::CAtlException *v17 )
          {
            v7 = v17;
            if ( *(_DWORD *)v17 == -1073741571 )
              _resetstkoflw();
            LODWORD(v19) = *(_DWORD *)v7;
            APOProcessNode = (int)v19;
            if ( (int)v19 < 0 )
            {
              if ( v22 )
              {
                v13 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
                if ( (char *)v13 == (char *)CAudioMediaType::Release )
                  CAudioMediaType::Release(v22);
                else
                  v13();
              }
              if ( v20 )
              {
                v14 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
                if ( (char *)v14 == (char *)CAudioMediaType::Release )
                  CAudioMediaType::Release(v20);
                else
                  v14();
              }
              v9 = (void (__fastcall ***)(_QWORD, __int64))v21;
LABEL_17:
              v10 = *v9;
LABEL_49:
              (*v10)(v9, 1LL);
LABEL_50:
              if ( APOProcessNode < 0 )
              {
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
                {
                  WPP_SF_D(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    37LL,
                    &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
                    (unsigned int)APOProcessNode);
                }
                AudDGTraceLoggingErrorHelper("CPipeInstance::FixupStreamPipe", 0x7DDu, APOProcessNode);
              }
              return (unsigned int)APOProcessNode;
            }
          }
          v11 = 0LL;
          v21 = 0LL;
        }
        if ( v22 )
        {
          v15 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
          if ( (char *)v15 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v22);
          else
            v15();
        }
        if ( v20 )
        {
          v16 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
          if ( (char *)v16 == (char *)CAudioMediaType::Release )
            CAudioMediaType::Release(v20);
          else
            v16();
        }
        if ( !v11 )
          goto LABEL_50;
      }
      v10 = (void (__fastcall **)(_QWORD, __int64))*v11;
      v9 = (void (__fastcall ***)(_QWORD, __int64))v11;
      goto LABEL_49;
    }
  }
  return (unsigned int)APOProcessNode;
}
