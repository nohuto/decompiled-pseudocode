/*
 * XREFs of ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C008F530
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C005F3B0 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SESSION_ADAPTER::AddDisplaySource(SESSION_ADAPTER *this, struct DISPLAY_SOURCE *a2)
{
  SESSION_ADAPTER *v2; // rax
  int v5; // ecx
  char *v6; // r8
  char *v7; // rax
  char **v8; // rcx
  __int64 v9; // rax

  v2 = (SESSION_ADAPTER *)*((_QWORD *)a2 + 3);
  if ( !v2 )
  {
    *((_QWORD *)a2 + 3) = this;
    v5 = *((_DWORD *)a2 + 4);
    ++*((_DWORD *)this + 19);
    *((_DWORD *)this + 18) |= 1 << v5;
    v6 = (char *)this + 80;
    v7 = (char *)a2 + 32;
    v8 = (char **)*((_QWORD *)v6 + 1);
    *((_QWORD *)a2 + 4) = v6;
    *((_QWORD *)a2 + 5) = v8;
    if ( *v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)v6 + 1) = v7;
    goto LABEL_3;
  }
  if ( v2 == this )
  {
LABEL_3:
    ++*((_DWORD *)a2 + 18);
    return 0LL;
  }
  v9 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v9 + 24) = 2023LL;
  WdLogEvent5_WdError(v9);
  return 3221225506LL;
}
