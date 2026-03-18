/*
 * XREFs of ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C015AD08
 * Callers:
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z @ 0x1C009EF8C (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SESSION_VIEW::RemoveDisplaySource(SESSION_VIEW *this, struct DISPLAY_SOURCE *a2, bool *a3)
{
  __int64 v4; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  bool v9; // zf

  if ( *((SESSION_VIEW **)a2 + 6) == this )
  {
    *((_QWORD *)a2 + 6) = 0LL;
    v6 = (_QWORD *)((char *)a2 + 56);
    v7 = *((_QWORD *)a2 + 7);
    v8 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v8 != v6 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = (*((_DWORD *)this + 10))-- == 1;
    *a3 = v9;
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = a2;
    *(_QWORD *)(v4 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
