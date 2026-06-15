/*
 * XREFs of ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000E764
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004C24 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z @ 0x140011770 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HHU2@PEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x1400263BC (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::FixupStreamPipe(CPipeInstance *this)
{
  int APOProcessNode; // r14d
  unsigned int *v4; // r12
  _QWORD *v5; // r13
  __int64 v6; // rcx
  ATL::CAtlException *v7; // rbx
  unsigned int (__fastcall *v8)(CAudioMediaType *__hidden); // rdi
  _QWORD *v9; // rbx
  unsigned int (__fastcall *v10)(CAudioMediaType *__hidden); // r15
  unsigned int (__fastcall *v11)(CAudioMediaType *__hidden); // rdi
  unsigned int (__fastcall *v12)(CAudioMediaType *__hidden); // rdi
  unsigned int (__fastcall *v13)(CAudioMediaType *__hidden); // r15
  unsigned int (__fastcall *v14)(CAudioMediaType *__hidden); // r15
  char *v15; // [rsp+30h] [rbp-68h]
  ATL::CAtlException *v16; // [rsp+40h] [rbp-58h] BYREF
  GUID v17; // [rsp+50h] [rbp-48h] BYREF
  _QWORD *v18; // [rsp+A0h] [rbp+8h] BYREF
  CAudioMediaType *v19; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v20; // [rsp+B0h] [rbp+18h] BYREF
  CAudioMediaType *v21; // [rsp+B8h] [rbp+20h] BYREF

  APOProcessNode = 0;
  if ( *((_DWORD *)this + 28) == 2 && *((_QWORD *)this + 4) > 1uLL )
  {
    v15 = (char *)this + 16;
    v18 = (_QWORD *)*((_QWORD *)this + 2);
    v4 = (unsigned int *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(
                            (__int64)this,
                            &v18);
    v5 = v18;
    if ( !v18 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = v18[2];
    if ( v4[10] == 3
      && *(_DWORD *)(v6 + 40) == 2
      && *(_DWORD *)(*(_QWORD *)(v6 + 32) + 4LL)
      && (*(_BYTE *)(v6 + 48) & 1) != 0 )
    {
      v20 = 0LL;
      v19 = 0LL;
      v17 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(&GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e, v4[6], 1LL);
      if ( APOProcessNode >= 0 )
      {
        v9 = v20;
        APOProcessNode = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 29) + 24LL))(
                           *((_QWORD *)this + 29),
                           v20[4] + 8LL,
                           v20[4] + 40LL);
        if ( APOProcessNode < 0
          || (APOProcessNode = (*(__int64 (__fastcall **)(unsigned int *, CAudioMediaType **))(*(_QWORD *)v4 + 16LL))(
                                 v4,
                                 &v19),
              APOProcessNode < 0) )
        {
          if ( v19 )
          {
            v10 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v19 + 16LL);
            if ( v10 == CAudioMediaType::Release )
              CAudioMediaType::Release(v19);
            else
              v10(v19);
          }
          goto LABEL_47;
        }
        v21 = 0LL;
        if ( (*(unsigned int (__fastcall **)(_QWORD *, CAudioMediaType *, CAudioMediaType **, CAudioMediaType *, GUID *, _QWORD **))(*v9 + 40LL))(
               v9,
               v19,
               &v21,
               v19,
               &v17,
               &v20) )
        {
          APOProcessNode = -2005139404;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, CAudioMediaType *))(*v9 + 24LL))(v9, v19);
          (*(void (__fastcall **)(_QWORD *, CAudioMediaType *))(*v9 + 32LL))(v9, v19);
          APOProcessNode = 0;
          try
          {
            v18 = v9;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(v15, v5, &v18);
          }
          catch ( ATL::CAtlException *v16 )
          {
            v7 = v16;
            if ( *(_DWORD *)v16 == -1073741571 )
              _resetstkoflw();
            LODWORD(v18) = *(_DWORD *)v7;
            APOProcessNode = (int)v18;
            if ( (int)v18 < 0 )
            {
              if ( v21 )
              {
                v11 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v21 + 16LL);
                if ( v11 == CAudioMediaType::Release )
                  CAudioMediaType::Release(v21);
                else
                  v11(v21);
              }
              if ( v19 )
              {
                v12 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v19 + 16LL);
                if ( v12 == CAudioMediaType::Release )
                  CAudioMediaType::Release(v19);
                else
                  v12(v19);
              }
              v9 = v20;
              goto LABEL_47;
            }
          }
          v9 = 0LL;
          v20 = 0LL;
        }
        if ( v21 )
        {
          v13 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v21 + 16LL);
          if ( v13 == CAudioMediaType::Release )
            CAudioMediaType::Release(v21);
          else
            v13(v21);
        }
        if ( v19 )
        {
          v14 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v19 + 16LL);
          if ( v14 == CAudioMediaType::Release )
            CAudioMediaType::Release(v19);
          else
            v14(v19);
        }
      }
      else
      {
        if ( v19 )
        {
          v8 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v19 + 16LL);
          if ( v8 == CAudioMediaType::Release )
            CAudioMediaType::Release(v19);
          else
            v8(v19);
        }
        v9 = v20;
      }
      if ( !v9 )
      {
LABEL_48:
        if ( APOProcessNode < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            43LL,
            &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
            (unsigned int)APOProcessNode);
        }
        return (unsigned int)APOProcessNode;
      }
LABEL_47:
      (*(void (__fastcall **)(_QWORD *, __int64))*v9)(v9, 1LL);
      goto LABEL_48;
    }
  }
  return (unsigned int)APOProcessNode;
}
