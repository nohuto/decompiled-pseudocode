/*
 * XREFs of ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C01776EC
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00A7F50 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0091004 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

const struct DMMVIDPNPRESENTPATH *__fastcall VIDPN_MGR::GetPathFromTargetInClientVidPn(
        struct _KTHREAD ***this,
        unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  struct _KTHREAD **v5; // rax
  struct DMMVIDPNPRESENTPATH *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  DMMVIDPNTOPOLOGY *v15; // rdi
  __int64 v16; // rax
  int PathSourceFromTarget; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v21; // rax
  __int64 v23; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( *this[5] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this[10];
  v6 = 0LL;
  v23 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 8);
    v7 = (__int64)this[10];
  }
  else
  {
    v7 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v23, v7);
  if ( !v23 )
  {
    v12 = WdLogNewEntry5_WdDmmEvent(v8);
    if ( !this[1] )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v13);
    }
    v14 = v12;
    *(_QWORD *)(v12 + 24) = this[1][2];
    goto LABEL_14;
  }
  v15 = (DMMVIDPNTOPOLOGY *)(v23 + 96);
  if ( v23 == -96 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v16);
  }
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v15, (unsigned int)v3, v9, v10);
  if ( PathSourceFromTarget == -1 )
  {
    v14 = WdLogNewEntry5_WdDmmEvent(v18);
    *(_QWORD *)(v14 + 24) = v3;
LABEL_14:
    WdLogEvent5_WdDmmEvent(v14);
    goto LABEL_18;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v15, PathSourceFromTarget, v3);
  if ( !Path )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v21);
  }
  v6 = Path;
LABEL_18:
  auto_rc<DMMVIDPN const>::reset(&v23, 0LL);
  return v6;
}
