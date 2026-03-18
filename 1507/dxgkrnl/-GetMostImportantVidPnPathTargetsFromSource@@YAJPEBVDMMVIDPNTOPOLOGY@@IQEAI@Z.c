/*
 * XREFs of ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00D002C
 * Callers:
 *     DmmGetMostImportantActiveVidPnPathTargetsFromSource @ 0x1C00CFF38 (DmmGetMostImportantActiveVidPnPathTargetsFromSource.c)
 *     DmmGetMostImportantVidPnPathTargetsFromSource @ 0x1C0176140 (DmmGetMostImportantVidPnPathTargetsFromSource.c)
 *     ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C017CF98 (-IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+60h] [rbp+18h] BYREF

  v3 = a2;
  if ( a3 )
  {
    v6 = -1;
    v7 = 0;
    for ( i = 0LL; ; ++i )
    {
      v28 = -1;
      v9 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (unsigned int)v3, i, &v28);
      v14 = v9;
      if ( v9 == 1075708748 )
      {
LABEL_17:
        *a3 = v6;
        return 0LL;
      }
      if ( v9 < 0 )
        break;
      if ( v28 == -1 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        WdLogEvent5_WdAssertion(v24);
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(this, v3, v28);
      if ( !Path )
      {
        v25 = WdLogNewEntry5_WdAssertion(v18, v17, v20, v21);
        WdLogEvent5_WdAssertion(v25);
      }
      v22 = *((_DWORD *)Path + 26);
      if ( !v22 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v18, v17, v20, v21);
        WdLogEvent5_WdAssertion(v26);
      }
      if ( v6 == -1 || v7 > v22 )
      {
        v6 = v28;
        v7 = v22;
      }
      if ( v22 == 1 )
        goto LABEL_17;
    }
    if ( v9 == -1071774976 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      WdLogEvent5_WdAssertion(v27);
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v15[3] = v3;
    v15[4] = this;
    v15[5] = v14;
    return (unsigned int)v14;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v23 + 24) = 0LL;
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
}
