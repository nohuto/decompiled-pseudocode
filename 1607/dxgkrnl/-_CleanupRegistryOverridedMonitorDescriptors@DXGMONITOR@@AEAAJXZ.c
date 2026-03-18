/*
 * XREFs of ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C00F0F90
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00F1574 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C01B3260 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01B3E20 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(DXGMONITOR *this)
{
  unsigned int v2; // ebp
  __int64 i; // rsi
  _DWORD *v4; // rdi
  _QWORD *v5; // r14
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rcx

  v2 = -1073741275;
  if ( *((_DWORD *)this + 28) )
  {
    if ( (*((_BYTE *)this + 24) & 1) == 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v10);
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    {
      v4 = *(_DWORD **)(*((_QWORD *)this + 15) + 8 * i);
      if ( v4 )
      {
        v5 = 0LL;
        do
        {
          if ( v4[2] == 3 )
          {
            v11 = *(_QWORD *)v4;
            v2 = 0;
            if ( v5 )
              *v5 = v11;
            else
              *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i) = v11;
            v12 = v4;
            v4 = *(_DWORD **)v4;
            operator delete(v12);
            --*((_DWORD *)this + 29);
          }
          else
          {
            v5 = v4;
            v4 = *(_DWORD **)v4;
          }
        }
        while ( v4 );
      }
    }
    v6 = *((_DWORD *)this + 28);
    v7 = 0LL;
    if ( v6 )
    {
      while ( *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v7) )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          goto LABEL_14;
      }
      *((_DWORD *)this + 28) = v7;
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
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  return v2;
}
