/*
 * XREFs of ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C008F4AC
 * Callers:
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C005F3B0 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SESSION_ADAPTER::RemoveDisplaySource(
        SESSION_ADAPTER *this,
        struct DISPLAY_SOURCE *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *((SESSION_ADAPTER **)a2 + 3) == this )
  {
    if ( (*((_DWORD *)a2 + 18))-- == 1 )
    {
      if ( *((_QWORD *)a2 + 11) || *((_QWORD *)a2 + 75) )
      {
        v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
        *(_QWORD *)(v12 + 24) = 2094LL;
        WdLogEvent5_WdAssertion(v12);
      }
      *((_DWORD *)this + 18) &= ~(1 << *((_DWORD *)a2 + 4));
      *((_QWORD *)a2 + 3) = 0LL;
      v8 = (_QWORD *)((char *)a2 + 32);
      v9 = *v8;
      v10 = (_QWORD *)v8[1];
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v10 != v8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      --*((_DWORD *)this + 19);
    }
    return 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
}
