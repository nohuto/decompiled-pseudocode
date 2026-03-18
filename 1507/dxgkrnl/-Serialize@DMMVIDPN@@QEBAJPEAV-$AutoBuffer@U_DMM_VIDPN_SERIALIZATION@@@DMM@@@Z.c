/*
 * XREFs of ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C017C590
 * Callers:
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C002BD68 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01716C4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C017C8F8 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x1C0007B30 (-GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000DEF8 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C008A260 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B726C (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r13
  __int64 v5; // r15
  __int64 v7; // rax
  __int64 v9; // rax
  DMMVIDPNSOURCESET *v10; // r12
  unsigned __int8 v11; // di
  __int64 v12; // r14
  _QWORD *v13; // rbx
  struct DMMVIDPNSOURCE *NextSource; // rbx
  unsigned int v15; // edx
  int NumPathsFromSource; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // al
  unsigned __int64 v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  unsigned __int8 v30; // cl
  __int64 v31; // rdi
  struct DMMVIDPNSOURCE *v32; // rbx
  DMMVIDPNTOPOLOGY *v33; // r14
  unsigned int v34; // r12d
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  DMMVIDPNSOURCEMODE *v46; // rcx
  unsigned __int64 v47; // rsi
  DMMVIDPNTOPOLOGY *v48; // r15
  _DWORD *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned __int64 v65; // [rsp+20h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v66; // [rsp+28h] [rbp-28h]
  __int64 v67; // [rsp+30h] [rbp-20h] BYREF
  __int64 v68; // [rsp+38h] [rbp-18h] BYREF
  __int64 v69; // [rsp+40h] [rbp-10h]
  DMMVIDPNSOURCESET *v70; // [rsp+48h] [rbp-8h]
  unsigned int v72; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v73; // [rsp+A8h] [rbp+58h] BYREF

  v4 = 0;
  v5 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v9);
    }
    v10 = *(DMMVIDPNSOURCESET **)(a1 + 304);
    v66 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v11 = 0;
    v70 = v10;
    v12 = 12LL;
    v13 = (_QWORD *)((char *)v10 + 24);
    if ( (_QWORD *)*v13 == v13 )
      goto LABEL_15;
    NextSource = (struct DMMVIDPNSOURCE *)(*v13 - 8LL);
    if ( !NextSource )
      goto LABEL_15;
    do
    {
      v15 = *((_DWORD *)NextSource + 6);
      v65 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(a1 + 96), v15, &v65);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
          WdLogEvent5_WdAssertion(v21);
        }
        ++v11;
        v22 = 1LL;
        if ( v65 > 1 )
          v22 = v65;
        v12 += 432 * (v22 - 1) + 480;
      }
      NextSource = DMMVIDPNSOURCESET::GetNextSource(v10, NextSource);
    }
    while ( NextSource );
    v5 = a2;
    v23 = v11;
    if ( v11 <= 1u )
LABEL_15:
      v23 = 1;
    v24 = v12 + 4LL * (v23 - 1);
    v25 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v5, v24, a3, a4);
    v27 = v25;
    if ( v25 >= 0 )
    {
      v29 = (_QWORD *)((char *)v10 + 24);
      v30 = 1;
      **(_DWORD **)(v5 + 32) = v24;
      *(_BYTE *)(*(_QWORD *)(v5 + 32) + 4LL) = v11;
      if ( v11 > 1u )
        v30 = v11;
      v31 = 4LL * (v30 - 1) + 12;
      if ( (_QWORD *)*v29 != v29 )
      {
        v32 = (struct DMMVIDPNSOURCE *)(*v29 - 8LL);
        if ( v32 )
        {
          v33 = v66;
          do
          {
            v34 = *((_DWORD *)v32 + 6);
            v73 = 0LL;
            v35 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v33, v34, &v73);
            if ( v35 != -1071774919 )
            {
              if ( v35 < 0 )
              {
                v40 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
                WdLogEvent5_WdAssertion(v40);
              }
              *(_DWORD *)(*(_QWORD *)(v5 + 32) + 4LL * v4 + 8) = v31;
              v41 = 1LL;
              if ( v73 > 1 )
                v41 = v73;
              v42 = 432 * (v41 - 1);
              v43 = *(_QWORD *)(v5 + 32);
              v69 = v42 + 480 + v31;
              v44 = v43 + *(unsigned int *)(v43 + 4LL * v4 + 8);
              v45 = *((_QWORD *)v32 + 13);
              if ( v45 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v45 + 96));
                v45 = *((_QWORD *)v32 + 13);
              }
              v46 = *(DMMVIDPNSOURCEMODE **)(v45 + 144);
              v67 = v45;
              if ( v46 )
                DMMVIDPNSOURCEMODE::Serialize(v46, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)v44);
              auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v67, 0LL);
              v47 = 0LL;
              *(_BYTE *)(v44 + 40) = v73;
              if ( v73 )
              {
                v48 = v66;
                v49 = (_DWORD *)(v44 + 472);
                do
                {
                  v72 = -1;
                  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v48, v34, v47, &v72) < 0 )
                  {
                    v54 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
                    WdLogEvent5_WdAssertion(v54);
                  }
                  Path = DMMVIDPNTOPOLOGY::FindPath(v48, v34, v72);
                  if ( !Path )
                  {
                    v60 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
                    WdLogEvent5_WdAssertion(v60);
                  }
                  DMMVIDPNPRESENTPATH::Serialize(Path, (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v49 - 106));
                  v61 = *((_QWORD *)Path + 12);
                  v62 = *(_QWORD *)(v61 + 104);
                  if ( v62 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v62 + 96));
                    v63 = *(_QWORD *)(v61 + 104);
                  }
                  else
                  {
                    v63 = 0LL;
                  }
                  v68 = v63;
                  v64 = *(_QWORD *)(v63 + 144);
                  if ( v64 )
                  {
                    *(v49 - 16) = *(_DWORD *)(v64 + 24);
                    *(_OWORD *)(v49 - 14) = *(_OWORD *)(v64 + 72);
                    *(_OWORD *)(v49 - 10) = *(_OWORD *)(v64 + 88);
                    *(_OWORD *)(v49 - 6) = *(_OWORD *)(v64 + 104);
                    *((_QWORD *)v49 - 1) = *(_QWORD *)(v64 + 120);
                    *v49 = *(_DWORD *)(v64 + 128);
                  }
                  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v68, 0LL);
                  ++v47;
                  v49 += 108;
                }
                while ( v47 < v73 );
                v5 = a2;
                v33 = v66;
              }
              v31 = v69;
              ++v4;
            }
            v32 = DMMVIDPNSOURCESET::GetNextSource(v70, v32);
          }
          while ( v32 );
        }
      }
      return 0LL;
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v28[3] = v24;
      v28[4] = a1;
      v28[5] = v27;
      WdLogEvent5_WdError(v28);
      return (unsigned int)v27;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
