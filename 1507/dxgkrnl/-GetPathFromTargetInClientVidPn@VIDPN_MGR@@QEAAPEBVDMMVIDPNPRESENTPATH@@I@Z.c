/*
 * XREFs of ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0172EC0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C0089ECC (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

const struct DMMVIDPNPRESENTPATH *__fastcall VIDPN_MGR::GetPathFromTargetInClientVidPn(
        VIDPN_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  struct DMMVIDPNPRESENTPATH *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  DMMVIDPNTOPOLOGY *v22; // rdi
  __int64 v23; // rax
  int PathSourceFromTarget; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v33; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, CurrentThread, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)this + 10);
  v9 = 0LL;
  v33 = 0LL;
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 32));
    v10 = *((_QWORD *)this + 10);
  }
  else
  {
    v10 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v33, v10);
  if ( !v33 )
  {
    v17 = WdLogNewEntry5_WdDmmEvent(v12);
    if ( !*((_QWORD *)this + 1) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v16, v15, v18, v19);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = v17;
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    goto LABEL_14;
  }
  v22 = (DMMVIDPNTOPOLOGY *)(v33 + 96);
  if ( v33 == -96 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v23);
  }
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v22, (unsigned int)v6, v13, v14);
  if ( PathSourceFromTarget == -1 )
  {
    v21 = WdLogNewEntry5_WdDmmEvent(v25);
    *(_QWORD *)(v21 + 24) = v6;
LABEL_14:
    WdLogEvent5_WdDmmEvent(v21);
    goto LABEL_18;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v22, PathSourceFromTarget, v6);
  if ( !Path )
  {
    v31 = WdLogNewEntry5_WdAssertion(v27, v26, v29, v30);
    WdLogEvent5_WdAssertion(v31);
  }
  v9 = Path;
LABEL_18:
  auto_rc<DMMVIDPN const>::reset(&v33, 0LL);
  return v9;
}
