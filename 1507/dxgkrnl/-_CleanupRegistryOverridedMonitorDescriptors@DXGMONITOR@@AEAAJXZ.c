/*
 * XREFs of ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C00C9124
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00C9458 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01850A4 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0185B84 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebp
  __int64 i; // rsi
  _DWORD *v7; // rdi
  _QWORD *v8; // r14
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rcx

  v5 = -1073741275;
  if ( *((_DWORD *)this + 28) )
  {
    if ( (*((_BYTE *)this + 24) & 1) == 0 )
    {
      v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v13);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    {
      v7 = *(_DWORD **)(*((_QWORD *)this + 15) + 8 * i);
      if ( v7 )
      {
        v8 = 0LL;
        do
        {
          if ( v7[2] == 3 )
          {
            v14 = *(_QWORD *)v7;
            v5 = 0;
            if ( v8 )
              *v8 = v14;
            else
              *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i) = v14;
            v15 = v7;
            v7 = *(_DWORD **)v7;
            operator delete(v15);
            --*((_DWORD *)this + 29);
          }
          else
          {
            v8 = v7;
            v7 = *(_DWORD **)v7;
          }
        }
        while ( v7 );
      }
    }
    v9 = *((_DWORD *)this + 28);
    v10 = 0LL;
    if ( v9 )
    {
      while ( *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v10) )
      {
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= v9 )
          goto LABEL_14;
      }
      *((_DWORD *)this + 28) = v10;
    }
LABEL_14:
    if ( !*((_DWORD *)this + 28) )
    {
      operator delete(*((void **)this + 15));
      *((_QWORD *)this + 15) = 0LL;
    }
  }
  else if ( *((_QWORD *)this + 15) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  return v5;
}
