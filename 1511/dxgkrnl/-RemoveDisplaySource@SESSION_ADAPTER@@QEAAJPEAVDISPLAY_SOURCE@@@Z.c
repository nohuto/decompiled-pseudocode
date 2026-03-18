/*
 * XREFs of ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C009F3B8
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00C5018 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall SESSION_ADAPTER::RemoveDisplaySource(SESSION_ADAPTER *this, struct DISPLAY_SOURCE *a2)
{
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((SESSION_ADAPTER **)a2 + 3) == this )
  {
    if ( (*((_DWORD *)a2 + 18))-- == 1 )
    {
      if ( *((_QWORD *)a2 + 11) || *((_QWORD *)a2 + 75) )
      {
        v10 = WdLogNewEntry5_WdAssertion(this);
        *(_QWORD *)(v10 + 24) = 2126LL;
        WdLogEvent5_WdAssertion(v10);
      }
      memset((char *)a2 + 88, 0, 0x200uLL);
      *((_QWORD *)a2 + 75) = 0LL;
      *((_DWORD *)this + 18) &= ~(1 << *((_DWORD *)a2 + 4));
      *((_QWORD *)a2 + 3) = 0LL;
      v5 = (_QWORD *)((char *)a2 + 32);
      v6 = *v5;
      v7 = (_QWORD *)v5[1];
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v7 != v5 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      --*((_DWORD *)this + 19);
    }
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
}
