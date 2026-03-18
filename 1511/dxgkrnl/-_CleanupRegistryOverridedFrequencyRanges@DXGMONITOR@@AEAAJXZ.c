/*
 * XREFs of ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0188A34
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01898B8 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C018A394 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(DXGMONITOR *this)
{
  unsigned int v2; // ebp
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rsi
  __int64 v9; // r8
  _QWORD *v10; // rdx

  v2 = -1073741275;
  if ( *((_DWORD *)this + 50) )
  {
    v3 = (_QWORD *)((char *)this + 208);
    if ( (_QWORD *)*v3 == v3 )
    {
      v4 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v4);
    }
    if ( (_QWORD *)*v3 != v3 )
    {
      v5 = (_QWORD *)(*v3 - 48LL);
      if ( *v3 != 48LL )
      {
        do
        {
          v6 = v5 + 6;
          v7 = (_QWORD *)v5[6];
          if ( v7 == v3 )
            v8 = 0LL;
          else
            v8 = v7 - 6;
          if ( *(_DWORD *)v5 == 4 )
          {
            v9 = *v6;
            v10 = (_QWORD *)v5[7];
            if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v10 != v6 )
              __fastfail(3u);
            *v10 = v9;
            *(_QWORD *)(v9 + 8) = v10;
            operator delete(v5);
            --*((_DWORD *)this + 50);
            --*((_DWORD *)this + 29);
            v2 = 0;
          }
          v5 = v8;
        }
        while ( v8 );
      }
    }
  }
  return v2;
}
