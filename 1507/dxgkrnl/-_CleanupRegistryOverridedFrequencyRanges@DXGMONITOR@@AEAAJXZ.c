/*
 * XREFs of ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0184384
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01850A4 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0185B84 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebp
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rsi
  __int64 v12; // r8
  _QWORD *v13; // rdx

  v5 = -1073741275;
  if ( *((_DWORD *)this + 50) )
  {
    v6 = (_QWORD *)((char *)this + 208);
    if ( (_QWORD *)*v6 == v6 )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v7);
    }
    if ( (_QWORD *)*v6 != v6 )
    {
      v8 = (_QWORD *)(*v6 - 48LL);
      if ( *v6 != 48LL )
      {
        do
        {
          v9 = v8 + 6;
          v10 = (_QWORD *)v8[6];
          if ( v10 == v6 )
            v11 = 0LL;
          else
            v11 = v10 - 6;
          if ( *(_DWORD *)v8 == 4 )
          {
            v12 = *v9;
            v13 = (_QWORD *)v8[7];
            if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v13 != v9 )
              __fastfail(3u);
            *v13 = v12;
            *(_QWORD *)(v12 + 8) = v13;
            operator delete(v8);
            --*((_DWORD *)this + 50);
            --*((_DWORD *)this + 29);
            v5 = 0;
          }
          v8 = v11;
        }
        while ( v11 );
      }
    }
  }
  return v5;
}
