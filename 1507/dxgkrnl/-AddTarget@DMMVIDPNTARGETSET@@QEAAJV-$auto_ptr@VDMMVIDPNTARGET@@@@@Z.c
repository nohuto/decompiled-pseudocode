/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C00895F0
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0088DFC (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0017A20 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(_QWORD *a1, unsigned int **a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  unsigned int *v6; // r8
  _QWORD *v7; // rax
  int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  __int64 v19; // rax
  int v20; // esi
  int v21; // esi
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v5 = a1;
  if ( !*a2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  v6 = *a2;
  v7 = v5 + 3;
  v8 = 0;
  v9 = (*a2)[6];
  if ( (_QWORD *)*v7 == v7 )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = *v7 - 8LL;
    if ( !v10 )
      goto LABEL_9;
    while ( *(_DWORD *)(v10 + 24) != (_DWORD)v9 )
    {
      a1 = *(_QWORD **)(v10 + 8);
      if ( a1 == v5 + 3 )
        v10 = 0LL;
      else
        v10 = (__int64)(a1 - 1);
      if ( !v10 )
        goto LABEL_9;
    }
  }
  if ( v10 )
  {
    LOBYTE(v8) = v10 != (_QWORD)v6;
    v20 = v8 + 1;
LABEL_29:
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      if ( v21 == 1 )
      {
        v22[3] = (*a2)[6];
        v22[4] = *a2;
        v22[5] = v5;
        WdLogEvent5_WdError(v22);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
        return 3223192370LL;
      }
      else
      {
        WdLogEvent5_WdError(v22);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
        return 3221225473LL;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v23 + 24) = *a2;
      *(_QWORD *)(v23 + 32) = v5;
      WdLogEvent5_WdError(v23);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
      return 3223192344LL;
    }
  }
LABEL_9:
  v11 = v5 + 3;
  if ( (_QWORD *)*v11 != v11 )
  {
    v12 = *v11 - 8LL;
    if ( v12 )
    {
      while ( (unsigned int *)v12 != v6 )
      {
        a1 = *(_QWORD **)(v12 + 8);
        if ( a1 == v5 + 3 )
          v12 = 0LL;
        else
          v12 = (__int64)(a1 - 1);
        if ( !v12 )
          goto LABEL_15;
      }
      v20 = 1;
      goto LABEL_29;
    }
  }
LABEL_15:
  v13 = v5 + 3;
  if ( (_QWORD *)*v13 == v13 )
    goto LABEL_20;
  v14 = *v13 - 8LL;
  if ( *v13 == 8LL )
    goto LABEL_20;
  while ( (unsigned int *)v14 != v6 )
  {
    v15 = *(_QWORD **)(v14 + 8);
    if ( v15 != v13 )
    {
      v14 = (__int64)(v15 - 1);
      if ( v14 )
        continue;
    }
    goto LABEL_20;
  }
  if ( !v14 )
  {
LABEL_20:
    v16 = (_QWORD *)v5[4];
    v17 = v6 + 2;
    *v17 = v13;
    v17[1] = v16;
    if ( (_QWORD *)*v16 != v13 )
      __fastfail(3u);
    *v16 = v17;
    v5[4] = v17;
    ++v5[5];
  }
  else
  {
    v24 = WdLogNewEntry5_WdAssertion(v13, a2, v6, v9);
    WdLogEvent5_WdAssertion(v24);
  }
  *a2 = 0LL;
  return 0LL;
}
