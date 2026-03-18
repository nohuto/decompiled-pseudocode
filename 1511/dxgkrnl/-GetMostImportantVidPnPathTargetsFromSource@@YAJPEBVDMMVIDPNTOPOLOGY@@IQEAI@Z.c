/*
 * XREFs of ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00C4D34
 * Callers:
 *     DmmGetMostImportantActiveVidPnPathTargetsFromSource @ 0x1C00C4C40 (DmmGetMostImportantActiveVidPnPathTargetsFromSource.c)
 *     DmmGetMostImportantVidPnPathTargetsFromSource @ 0x1C017A6D8 (DmmGetMostImportantVidPnPathTargetsFromSource.c)
 *     ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C0180CD8 (-IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall GetMostImportantVidPnPathTargetsFromSource(
        const struct DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int *const a3)
{
  __int64 v3; // r15
  unsigned int v6; // edi
  int v7; // r13d
  __int64 i; // rbp
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v17; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  if ( a3 )
  {
    v6 = -1;
    v7 = 0;
    for ( i = 0LL; ; ++i )
    {
      v25 = -1;
      v9 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v3, i, &v25);
      v14 = v9;
      if ( v9 == 1075708748 )
      {
LABEL_17:
        *a3 = v6;
        return 0LL;
      }
      if ( v9 < 0 )
        break;
      if ( v25 == -1 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v11);
        WdLogEvent5_WdAssertion(v21);
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, v25);
      if ( !Path )
      {
        v22 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v22);
      }
      v19 = *((_DWORD *)Path + 26);
      if ( !v19 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v23);
      }
      if ( v6 == -1 || v7 > v19 )
      {
        v6 = v25;
        v7 = v19;
      }
      if ( v19 == 1 )
        goto LABEL_17;
    }
    if ( v9 == -1071774976 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v24);
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v15[3] = v3;
    v15[4] = this;
    v15[5] = v14;
    return (unsigned int)v14;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v20 + 24) = 0LL;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
}
