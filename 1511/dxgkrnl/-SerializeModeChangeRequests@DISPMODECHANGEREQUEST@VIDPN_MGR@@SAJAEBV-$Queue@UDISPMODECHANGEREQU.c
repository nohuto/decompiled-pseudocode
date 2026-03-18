/*
 * XREFs of ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1C0178C20
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C01755E8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C0175F44 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002B9A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  char v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v7 = *(_QWORD *)(a1 + 40);
    v8 = 96 * (v7 - 1) + 104;
    v9 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v8);
    v11 = v9;
    if ( v9 >= 0 )
    {
      v13 = 0;
      **(_BYTE **)(a2 + 32) = *(_BYTE *)(a1 + 40);
      v14 = a1 + 24;
      v15 = *(_QWORD *)(a2 + 32) + 8LL;
      if ( *(_QWORD *)v14 != v14 )
      {
        v14 = *(_QWORD *)v14 - 8LL;
        if ( v14 )
        {
          v16 = a1 + 24;
          do
          {
            *(_DWORD *)v15 = *(_DWORD *)(v14 + 48);
            *(_OWORD *)(v15 + 4) = *(_OWORD *)(v14 + 52);
            *(_OWORD *)(v15 + 20) = *(_OWORD *)(v14 + 68);
            *(_QWORD *)(v15 + 36) = *(_QWORD *)(v14 + 84);
            *(_DWORD *)(v15 + 44) = *(_DWORD *)(v14 + 92);
            *(_DWORD *)(v15 + 48) = *(_DWORD *)(v14 + 96);
            *(_DWORD *)(v15 + 52) = *(_DWORD *)(v14 + 100);
            *(_DWORD *)(v15 + 56) = *(_DWORD *)(v14 + 104);
            *(_QWORD *)(v15 + 64) = *(_QWORD *)(v14 + 112);
            *(_DWORD *)(v15 + 92) = *(_DWORD *)(v14 + 140);
            *(_OWORD *)(v15 + 72) = *(_OWORD *)(v14 + 120);
            *(_DWORD *)(v15 + 88) = *(_DWORD *)(v14 + 136);
            v15 += 96LL;
            v17 = *(_QWORD *)(v14 + 8);
            if ( v17 == v16 )
              v14 = 0LL;
            else
              v14 = v17 - 8;
            ++v13;
          }
          while ( v14 );
        }
      }
      if ( v13 != **(_BYTE **)(a2 + 32) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v18);
      }
      if ( v13 )
      {
        if ( v8 != v15 - *(_QWORD *)(a2 + 32) )
        {
          v19 = WdLogNewEntry5_WdAssertion(v14);
          WdLogEvent5_WdAssertion(v19);
        }
      }
      return 0LL;
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v12[3] = v8;
      v12[4] = a1;
      v12[5] = v11;
      WdLogEvent5_WdError(v12);
      return (unsigned int)v11;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
