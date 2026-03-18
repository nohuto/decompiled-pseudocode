/*
 * XREFs of ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C01B3D44
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01B3260 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01B3E20 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorDescriptors(void **this)
{
  __int64 **v1; // rdi
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 i; // rdi
  _QWORD *v8; // rsi
  void *v9; // rcx

  v1 = (__int64 **)(this + 17);
  if ( *v1 != (__int64 *)v1 )
  {
    v3 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v3 + 24) = this;
    WdLogEvent5_WdError(v3);
    while ( *v1 != (__int64 *)v1 )
    {
      v4 = *v1;
      v5 = **v1;
      if ( (__int64 **)(*v1)[1] != v1 || *(__int64 **)(v5 + 8) != v4 )
        __fastfail(3u);
      *v1 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v1;
      operator delete(v4 - 4);
    }
  }
  if ( *((_DWORD *)this + 28) )
  {
    if ( !this[15] )
    {
      v6 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v6);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    {
      v8 = (_QWORD *)*((_QWORD *)this[15] + i);
      while ( v8 )
      {
        v9 = v8;
        v8 = (_QWORD *)*v8;
        operator delete(v9);
      }
    }
    operator delete(this[15]);
    this[15] = 0LL;
    *((_DWORD *)this + 28) = 0;
    this[16] = 0LL;
  }
  return 0LL;
}
