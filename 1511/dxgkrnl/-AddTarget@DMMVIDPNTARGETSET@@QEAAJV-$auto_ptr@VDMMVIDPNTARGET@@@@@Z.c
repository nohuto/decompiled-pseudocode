/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C0092460
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0091918 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C0019540 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(_QWORD *a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  _QWORD *v3; // rbx
  _DWORD *v4; // r8
  _QWORD *v5; // rax
  int v6; // esi
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  __int64 v16; // rax
  int v17; // esi
  int v18; // esi
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v3 = a1;
  if ( !*a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
  }
  v4 = *a2;
  v5 = v3 + 3;
  v6 = 0;
  if ( (_QWORD *)*v5 == v5 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = *v5 - 8LL;
    if ( !v7 )
      goto LABEL_9;
    while ( *(_DWORD *)(v7 + 24) != *((_DWORD *)*a2 + 6) )
    {
      a1 = *(_QWORD **)(v7 + 8);
      if ( a1 == v3 + 3 )
        v7 = 0LL;
      else
        v7 = (__int64)(a1 - 1);
      if ( !v7 )
        goto LABEL_9;
    }
  }
  if ( v7 )
  {
    LOBYTE(v6) = v7 != (_QWORD)v4;
    v17 = v6 + 1;
LABEL_29:
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      if ( v18 == 1 )
      {
        v19[3] = *((unsigned int *)*a2 + 6);
        v19[4] = *a2;
        v19[5] = v3;
        WdLogEvent5_WdError(v19);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
        return 3223192370LL;
      }
      else
      {
        WdLogEvent5_WdError(v19);
        auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
        return 3221225473LL;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v20 + 24) = *a2;
      *(_QWORD *)(v20 + 32) = v3;
      WdLogEvent5_WdError(v20);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
      return 3223192344LL;
    }
  }
LABEL_9:
  v8 = v3 + 3;
  if ( (_QWORD *)*v8 != v8 )
  {
    v9 = *v8 - 8LL;
    if ( v9 )
    {
      while ( (_DWORD *)v9 != v4 )
      {
        a1 = *(_QWORD **)(v9 + 8);
        if ( a1 == v3 + 3 )
          v9 = 0LL;
        else
          v9 = (__int64)(a1 - 1);
        if ( !v9 )
          goto LABEL_15;
      }
      v17 = 1;
      goto LABEL_29;
    }
  }
LABEL_15:
  v10 = v3 + 3;
  if ( (_QWORD *)*v10 == v10 )
    goto LABEL_20;
  v11 = *v10 - 8LL;
  if ( *v10 == 8LL )
    goto LABEL_20;
  while ( (_DWORD *)v11 != v4 )
  {
    v12 = *(_QWORD **)(v11 + 8);
    if ( v12 != v10 )
    {
      v11 = (__int64)(v12 - 1);
      if ( v11 )
        continue;
    }
    goto LABEL_20;
  }
  if ( !v11 )
  {
LABEL_20:
    v13 = (_QWORD *)v3[4];
    v14 = v4 + 2;
    *v14 = v10;
    v14[1] = v13;
    if ( (_QWORD *)*v13 != v10 )
      __fastfail(3u);
    *v13 = v14;
    v3[4] = v14;
    ++v3[5];
  }
  else
  {
    v21 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v21);
  }
  *a2 = 0LL;
  return 0LL;
}
