/*
 * XREFs of ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01A311C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C019EE9C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000AC70 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C01A9CC8 (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializeVidPnSourceModeSet(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rdi
  __int64 v24; // rax
  DMMVIDPNSOURCEMODESET *v25; // [rsp+38h] [rbp+10h] BYREF

  v4 = a3;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(a2 + 304), v4);
  v13 = v11;
  if ( !v11 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = v4;
    WdLogEvent5_WdError(v14);
    return 3223192324LL;
  }
  v25 = 0LL;
  v16 = *(_QWORD *)(v11 + 104);
  if ( !v16 )
  {
    v17 = 0LL;
LABEL_12:
    v18 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v18);
    goto LABEL_13;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
  v17 = *(_QWORD *)(v13 + 104);
  if ( !v17 )
    goto LABEL_12;
LABEL_13:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v25, v17);
  v19 = DMMVIDPNSOURCEMODESET::Serialize(v25);
  v21 = v19;
  if ( v19 >= 0 )
  {
    LODWORD(v21) = 0;
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v23[3] = v4;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v24);
    }
    v23[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    v23[5] = v21;
    WdLogEvent5_WdError(v23);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v25, 0LL);
  return (unsigned int)v21;
}
