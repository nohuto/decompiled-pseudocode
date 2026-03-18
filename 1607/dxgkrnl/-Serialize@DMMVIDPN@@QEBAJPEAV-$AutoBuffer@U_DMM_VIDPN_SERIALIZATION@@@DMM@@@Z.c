/*
 * XREFs of ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01A9694
 * Callers:
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C0033C60 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C019F7F8 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01A99FC (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z @ 0x1C0001F58 (-GetNextSource@DMMVIDPNSOURCESET@@QEBAPEAVDMMVIDPNSOURCE@@QEBV2@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00042C0 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0033A98 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0080A8C (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0081030 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r13
  __int64 v3; // r15
  __int64 v5; // rax
  __int64 v7; // rax
  DMMVIDPNSOURCESET *v8; // r12
  unsigned __int8 v9; // di
  __int64 v10; // r14
  _QWORD *v11; // rbx
  struct DMMVIDPNSOURCE *NextSource; // rbx
  unsigned int v13; // edx
  int NumPathsFromSource; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // al
  unsigned __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  unsigned __int8 v25; // cl
  __int64 v26; // rdi
  struct DMMVIDPNSOURCE *v27; // rbx
  DMMVIDPNTOPOLOGY *v28; // r14
  unsigned int v29; // r12d
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  DMMVIDPNSOURCEMODE *v38; // rcx
  unsigned __int64 v39; // rsi
  DMMVIDPNTOPOLOGY *v40; // r15
  _DWORD *v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned __int64 v51; // [rsp+20h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v52; // [rsp+28h] [rbp-28h]
  __int64 v53; // [rsp+30h] [rbp-20h] BYREF
  __int64 v54; // [rsp+38h] [rbp-18h] BYREF
  __int64 v55; // [rsp+40h] [rbp-10h]
  DMMVIDPNSOURCESET *v56; // [rsp+48h] [rbp-8h]
  unsigned int v58; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v59; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  v3 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v7 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = *(DMMVIDPNSOURCESET **)(a1 + 304);
    v52 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v9 = 0;
    v56 = v8;
    v10 = 12LL;
    v11 = (_QWORD *)((char *)v8 + 24);
    if ( (_QWORD *)*v11 == v11 )
      goto LABEL_15;
    NextSource = (struct DMMVIDPNSOURCE *)(*v11 - 8LL);
    if ( !NextSource )
      goto LABEL_15;
    do
    {
      v13 = *((_DWORD *)NextSource + 6);
      v51 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(a1 + 96), v13, &v51);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v16);
        }
        ++v9;
        v17 = 1LL;
        if ( v51 > 1 )
          v17 = v51;
        v10 += 432 * (v17 - 1) + 480;
      }
      NextSource = DMMVIDPNSOURCESET::GetNextSource(v8, NextSource);
    }
    while ( NextSource );
    v3 = a2;
    v18 = v9;
    if ( v9 <= 1u )
LABEL_15:
      v18 = 1;
    v19 = v10 + 4LL * (v18 - 1);
    v20 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v3, v19);
    v22 = v20;
    if ( v20 >= 0 )
    {
      v24 = (_QWORD *)((char *)v8 + 24);
      v25 = 1;
      **(_DWORD **)(v3 + 32) = v19;
      *(_BYTE *)(*(_QWORD *)(v3 + 32) + 4LL) = v9;
      if ( v9 > 1u )
        v25 = v9;
      v26 = 4LL * (v25 - 1) + 12;
      if ( (_QWORD *)*v24 != v24 )
      {
        v27 = (struct DMMVIDPNSOURCE *)(*v24 - 8LL);
        if ( v27 )
        {
          v28 = v52;
          do
          {
            v29 = *((_DWORD *)v27 + 6);
            v59 = 0LL;
            v30 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v28, v29, &v59);
            if ( v30 != -1071774919 )
            {
              if ( v30 < 0 )
              {
                v32 = WdLogNewEntry5_WdAssertion(v31);
                WdLogEvent5_WdAssertion(v32);
              }
              *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4LL * v2 + 8) = v26;
              v33 = 1LL;
              if ( v59 > 1 )
                v33 = v59;
              v34 = 432 * (v33 - 1);
              v35 = *(_QWORD *)(v3 + 32);
              v55 = v34 + 480 + v26;
              v36 = v35 + *(unsigned int *)(v35 + 4LL * v2 + 8);
              v37 = *((_QWORD *)v27 + 13);
              if ( v37 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v37 + 96));
                v37 = *((_QWORD *)v27 + 13);
              }
              v38 = *(DMMVIDPNSOURCEMODE **)(v37 + 144);
              v53 = v37;
              if ( v38 )
                DMMVIDPNSOURCEMODE::Serialize(v38, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)v36);
              auto_rc<DMMVIDPNTARGETMODESET>::reset(&v53, 0LL);
              v39 = 0LL;
              *(_BYTE *)(v36 + 40) = v59;
              if ( v59 )
              {
                v40 = v52;
                v41 = (_DWORD *)(v36 + 472);
                do
                {
                  v58 = -1;
                  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v40, v29, v39, &v58) < 0 )
                  {
                    v43 = WdLogNewEntry5_WdAssertion(v42);
                    WdLogEvent5_WdAssertion(v43);
                  }
                  Path = DMMVIDPNTOPOLOGY::FindPath(v40, v29, v58);
                  if ( !Path )
                  {
                    v46 = WdLogNewEntry5_WdAssertion(v44);
                    WdLogEvent5_WdAssertion(v46);
                  }
                  DMMVIDPNPRESENTPATH::Serialize(Path, (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v41 - 106));
                  v47 = *((_QWORD *)Path + 12);
                  v48 = *(_QWORD *)(v47 + 104);
                  if ( v48 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v48 + 96));
                    v49 = *(_QWORD *)(v47 + 104);
                  }
                  else
                  {
                    v49 = 0LL;
                  }
                  v54 = v49;
                  v50 = *(_QWORD *)(v49 + 144);
                  if ( v50 )
                  {
                    *(v41 - 16) = *(_DWORD *)(v50 + 24);
                    *(_OWORD *)(v41 - 14) = *(_OWORD *)(v50 + 72);
                    *(_OWORD *)(v41 - 10) = *(_OWORD *)(v50 + 88);
                    *(_OWORD *)(v41 - 6) = *(_OWORD *)(v50 + 104);
                    *((_QWORD *)v41 - 1) = *(_QWORD *)(v50 + 120);
                    *v41 = *(_DWORD *)(v50 + 128);
                  }
                  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v54, 0LL);
                  ++v39;
                  v41 += 108;
                }
                while ( v39 < v59 );
                v3 = a2;
                v28 = v52;
              }
              v26 = v55;
              ++v2;
            }
            v27 = DMMVIDPNSOURCESET::GetNextSource(v56, v27);
          }
          while ( v27 );
        }
      }
      return 0LL;
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v23[3] = v19;
      v23[4] = a1;
      v23[5] = v22;
      WdLogEvent5_WdError(v23);
      return (unsigned int)v22;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
