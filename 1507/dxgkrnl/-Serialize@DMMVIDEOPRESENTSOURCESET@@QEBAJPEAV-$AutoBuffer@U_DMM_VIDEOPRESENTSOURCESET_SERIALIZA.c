/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017D344
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C01716C4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C002C69C (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C017D27C (-Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::Serialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _BYTE *v18; // rcx
  _QWORD *v19; // rbx
  unsigned __int8 v20; // bp
  DMMVIDEOPRESENTSOURCE *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rax

  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    v9 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v9 = *(_QWORD *)(a1 + 40);
    v10 = 8 * v9 + 4;
    v11 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a2, v10, a3, a4);
    v16 = v11;
    if ( v11 >= 0 )
    {
      v18 = *(_BYTE **)(a2 + 32);
      v19 = (_QWORD *)(a1 + 24);
      v20 = 0;
      *v18 = *(_BYTE *)(a1 + 40);
      if ( (_QWORD *)*v19 != v19 )
      {
        v21 = (DMMVIDEOPRESENTSOURCE *)(*v19 - 8LL);
        if ( v21 )
        {
          v22 = a1 + 24;
          do
          {
            DMMVIDEOPRESENTSOURCE::Serialize(
              v21,
              (struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const)(*(_QWORD *)(a2 + 32) + 4LL + 8LL * v20),
              v14,
              v15);
            v23 = *((_QWORD *)v21 + 1);
            if ( v23 == v22 )
              v21 = 0LL;
            else
              v21 = (DMMVIDEOPRESENTSOURCE *)(v23 - 8);
            ++v20;
          }
          while ( v21 );
        }
      }
      if ( v20 != **(_BYTE **)(a2 + 32) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v18, v12, v14, v15);
        WdLogEvent5_WdAssertion(v24);
      }
      return 0LL;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v17[3] = v10;
      v17[4] = a1;
      v17[5] = v16;
      WdLogEvent5_WdError(v17);
      return (unsigned int)v16;
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
