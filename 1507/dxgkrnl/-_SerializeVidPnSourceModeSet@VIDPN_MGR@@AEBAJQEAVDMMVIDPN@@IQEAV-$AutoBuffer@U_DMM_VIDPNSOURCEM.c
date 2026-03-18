/*
 * XREFs of ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017511C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C0170D68 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C017CBC4 (-Serialize@DMMVIDPNSOURCEMODESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializeVidPnSourceModeSet(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  DMMVIDPNSOURCEMODESET *v30; // [rsp+38h] [rbp+10h] BYREF

  v4 = (unsigned int)a3;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(a2 + 304), v4);
  v15 = v11;
  if ( !v11 )
  {
    v16 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v16 + 24) = v4;
    WdLogEvent5_WdError(v16);
    return 3223192324LL;
  }
  v30 = 0LL;
  v18 = *(_QWORD *)(v11 + 104);
  if ( !v18 )
  {
    v19 = 0LL;
LABEL_12:
    v20 = WdLogNewEntry5_WdAssertion(v12, v15, v13, v14);
    WdLogEvent5_WdAssertion(v20);
    goto LABEL_13;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
  v19 = *(_QWORD *)(v15 + 104);
  if ( !v19 )
    goto LABEL_12;
LABEL_13:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v30, v19);
  v21 = DMMVIDPNSOURCEMODESET::Serialize(v30);
  v23 = v21;
  if ( v21 >= 0 )
  {
    LODWORD(v23) = 0;
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v26[3] = v4;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
      WdLogEvent5_WdAssertion(v29);
    }
    v26[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    v26[5] = v23;
    WdLogEvent5_WdError(v26);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v30, 0LL);
  return (unsigned int)v23;
}
