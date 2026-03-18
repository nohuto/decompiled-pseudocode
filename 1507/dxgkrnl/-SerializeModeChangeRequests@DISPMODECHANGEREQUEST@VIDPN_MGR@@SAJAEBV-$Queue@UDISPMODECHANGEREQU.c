/*
 * XREFs of ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01745D8
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01716C4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Serialize@DISPMODECHANGEREQUEST@VIDPN_MGR@@QEAA_KPEAU_DMM_DISPMODECHANGEREQUEST_SERIALIZATION@@@Z @ 0x1C002BE60 (-Serialize@DISPMODECHANGEREQUEST@VIDPN_MGR@@QEAA_KPEAU_DMM_DISPMODECHANGEREQUEST_SERIALIZATION@@.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  int v15; // eax
  __int64 v16; // rdx
  struct _DMM_DISPMODECHANGEREQUEST_SERIALIZATION *v17; // r15
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  _QWORD *v24; // rax
  _BYTE *v25; // rcx
  _QWORD *v26; // rdi
  char v27; // r14
  struct _DMM_DISPMODECHANGEREQUEST_SERIALIZATION *v28; // rbx
  VIDPN_MGR::DISPMODECHANGEREQUEST *v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = 1LL;
    v10 = (_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v9 = *(_QWORD *)(a1 + 40);
    v11 = 0LL;
    v12 = 96 * (v9 - 1) + 104;
    if ( (_QWORD *)*v10 != v10 )
    {
      v13 = *v10 - 8LL;
      if ( v13 )
      {
        a3 = a1 + 24;
        do
        {
          v14 = *(_DWORD *)(v13 + 144);
          if ( v14 )
          {
            v15 = 1;
            if ( v14 > 1 )
              v15 = *(_DWORD *)(v13 + 144);
            v11 += 96LL * (unsigned int)(v15 - 1) + 104;
          }
          v16 = *(_QWORD *)(v13 + 8);
          if ( v16 == a3 )
            v13 = 0LL;
          else
            v13 = v16 - 8;
        }
        while ( v13 );
      }
    }
    v17 = (struct _DMM_DISPMODECHANGEREQUEST_SERIALIZATION *)(v11 + v12);
    v18 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v11 + v12, a3, v11);
    v23 = v18;
    if ( v18 >= 0 )
    {
      v25 = *(_BYTE **)(a2 + 32);
      v26 = (_QWORD *)(a1 + 24);
      v27 = 0;
      *v25 = *(_BYTE *)(a1 + 40);
      v28 = (struct _DMM_DISPMODECHANGEREQUEST_SERIALIZATION *)(*(_QWORD *)(a2 + 32) + 8LL);
      if ( (_QWORD *)*v26 != v26 )
      {
        v29 = (VIDPN_MGR::DISPMODECHANGEREQUEST *)(*v26 - 8LL);
        if ( v29 )
        {
          v30 = a1 + 24;
          do
          {
            v31 = VIDPN_MGR::DISPMODECHANGEREQUEST::Serialize(v29, v28);
            v32 = *((_QWORD *)v29 + 1);
            v28 = (struct _DMM_DISPMODECHANGEREQUEST_SERIALIZATION *)((char *)v28 + v31);
            if ( v32 == v30 )
              v29 = 0LL;
            else
              v29 = (VIDPN_MGR::DISPMODECHANGEREQUEST *)(v32 - 8);
            ++v27;
          }
          while ( v29 );
        }
      }
      if ( v27 != **(_BYTE **)(a2 + 32) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v25, v19, v21, v22);
        WdLogEvent5_WdAssertion(v33);
      }
      if ( v27 )
      {
        if ( v17 != (struct _DMM_DISPMODECHANGEREQUEST_SERIALIZATION *)((char *)v28 - *(_QWORD *)(a2 + 32)) )
        {
          v34 = WdLogNewEntry5_WdAssertion(v25, v19, v21, v22);
          WdLogEvent5_WdAssertion(v34);
        }
      }
      return 0LL;
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v24[3] = v12;
      v24[4] = a1;
      v24[5] = v23;
      WdLogEvent5_WdError(v24);
      return (unsigned int)v23;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
