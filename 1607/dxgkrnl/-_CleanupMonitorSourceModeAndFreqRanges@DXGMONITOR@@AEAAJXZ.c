/*
 * XREFs of ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C00F033C
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01B3260 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01B3E20 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 **v4; // rdi
  __int64 **v6; // rdi
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 **v14; // rdi
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  _QWORD *v25; // rsi
  __int64 v26; // r8
  _QWORD *v27; // rdx

  v4 = (__int64 **)((char *)this + 184);
  if ( *v4 != (__int64 *)v4 )
  {
    v8 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdWarning(v8);
    while ( *v4 != (__int64 *)v4 )
    {
      v9 = *v4;
      v10 = **v4;
      if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v10 + 8) != v9 )
        __fastfail(3u);
      *v4 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v4;
      operator delete(v9 - 12);
    }
  }
  v6 = (__int64 **)((char *)this + 224);
  if ( *v6 != (__int64 *)v6 )
  {
    v11 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = this;
    WdLogEvent5_WdWarning(v11);
    while ( *v6 != (__int64 *)v6 )
    {
      v12 = *v6;
      v13 = **v6;
      if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v13 + 8) != v12 )
        __fastfail(3u);
      *v6 = (__int64 *)v13;
      *(_QWORD *)(v13 + 8) = v6;
      operator delete(v12 - 6);
    }
  }
  if ( *((_DWORD *)this + 38) )
  {
    v14 = (__int64 **)((char *)this + 160);
    if ( *v14 != (__int64 *)v14 )
      goto LABEL_26;
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
    while ( *v14 != (__int64 *)v14 )
    {
LABEL_26:
      v17 = *v14;
      if ( *v14 == (__int64 *)v14 )
      {
        v16 = 0LL;
      }
      else
      {
        v18 = *v17;
        if ( (__int64 **)v17[1] != v14 || *(__int64 **)(v18 + 8) != v17 )
          __fastfail(3u);
        *v14 = (__int64 *)v18;
        *(_QWORD *)(v18 + 8) = v14;
        v16 = v17 - 12;
      }
      operator delete(v16);
    }
    *((_QWORD *)this + 22) = 0LL;
    *((_DWORD *)this + 38) = 0;
    *((_DWORD *)this + 39) = 1024;
  }
  if ( *((DXGMONITOR **)this + 20) != (DXGMONITOR *)((char *)this + 160) )
  {
    v19 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( *((_DWORD *)this + 50) )
  {
    v20 = (_QWORD *)((char *)this + 208);
    if ( (_QWORD *)*v20 == v20 )
    {
      v21 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v21);
    }
    v22 = (_QWORD *)*v20;
    if ( (_QWORD *)*v20 != v20 )
    {
      if ( v22 )
        v22 -= 6;
      if ( v22 )
      {
        do
        {
          v23 = v22 + 6;
          v24 = (_QWORD *)v22[6];
          if ( v24 == v20 || !v24 )
            v25 = 0LL;
          else
            v25 = v24 - 6;
          if ( *(_DWORD *)v22 != 4 )
          {
            v26 = *v23;
            v27 = (_QWORD *)v22[7];
            if ( *(_QWORD **)(*v23 + 8LL) != v23 || (_QWORD *)*v27 != v23 )
              __fastfail(3u);
            *v27 = v26;
            *(_QWORD *)(v26 + 8) = v27;
            operator delete(v22);
            --*((_DWORD *)this + 50);
          }
          v22 = v25;
        }
        while ( v25 );
      }
    }
  }
  return 0LL;
}
