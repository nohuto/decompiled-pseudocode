/*
 * XREFs of ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0185AA8
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01850A4 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0185B84 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorDescriptors(void **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 **v4; // rdi
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 i; // rdi
  _QWORD *v11; // rsi
  void *v12; // rcx

  v4 = (__int64 **)(this + 17);
  if ( *v4 != (__int64 *)v4 )
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = this;
    WdLogEvent5_WdError(v6);
    while ( *v4 != (__int64 *)v4 )
    {
      v7 = *v4;
      v8 = **v4;
      if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v8 + 8) != v7 )
        __fastfail(3u);
      *v4 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v4;
      operator delete(v7 - 4);
    }
  }
  if ( *((_DWORD *)this + 28) )
  {
    if ( !this[15] )
    {
      v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v9);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    {
      v11 = (_QWORD *)*((_QWORD *)this[15] + i);
      while ( v11 )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        operator delete(v12);
      }
    }
    operator delete(this[15]);
    this[15] = 0LL;
    *((_DWORD *)this + 28) = 0;
    this[16] = 0LL;
  }
  return 0LL;
}
