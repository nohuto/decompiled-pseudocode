/*
 * XREFs of ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1C008F064
 * Callers:
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z @ 0x1C008F33C (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SESSION_VIEW::AddDisplaySource(SESSION_VIEW *this, struct DISPLAY_SOURCE *a2, char a3)
{
  SESSION_VIEW *v3; // rax
  __int64 *v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 **v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 **v15; // rax

  v3 = (SESSION_VIEW *)*((_QWORD *)a2 + 6);
  if ( !v3 )
  {
    *((_QWORD *)a2 + 6) = this;
    v5 = (__int64 *)((char *)a2 + 56);
    ++*((_DWORD *)this + 10);
    v6 = (__int64 *)((char *)this + 48);
    if ( a3 )
    {
      v7 = *v6;
      *v5 = *v6;
      *((_QWORD *)a2 + 8) = v6;
      if ( *(__int64 **)(v7 + 8) != v6 )
        __fastfail(3u);
      *(_QWORD *)(v7 + 8) = v5;
      *v6 = (__int64)v5;
    }
    else
    {
      v15 = (__int64 **)v6[1];
      *v5 = (__int64)v6;
      *((_QWORD *)a2 + 8) = v15;
      if ( *v15 != v6 )
        __fastfail(3u);
      *v15 = v5;
      v6[1] = (__int64)v5;
    }
    return 0LL;
  }
  if ( v3 == this )
  {
    if ( a3 )
    {
      v10 = (__int64 *)((char *)a2 + 56);
      v11 = *((_QWORD *)a2 + 7);
      v12 = (__int64 **)*((_QWORD *)a2 + 8);
      if ( *(__int64 **)(v11 + 8) != v10 || *v12 != v10 )
        __fastfail(3u);
      *v12 = (__int64 *)v11;
      v13 = (__int64 *)((char *)this + 48);
      *(_QWORD *)(v11 + 8) = v12;
      v14 = *v13;
      *v10 = *v13;
      v10[1] = (__int64)v13;
      if ( *(__int64 **)(v14 + 8) != v13 )
        __fastfail(3u);
      *(_QWORD *)(v14 + 8) = v10;
      *v13 = (__int64)v10;
    }
    return 0LL;
  }
  v9 = WdLogNewEntry5_WdError(this);
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v9);
  return 3221225485LL;
}
