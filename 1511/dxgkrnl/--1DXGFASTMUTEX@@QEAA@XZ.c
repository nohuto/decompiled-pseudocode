/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006E14
 * Callers:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0006E44 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C005C6FC (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 *     ??1DXGPROCESS@@QEAA@XZ @ 0x1C0068064 (--1DXGPROCESS@@QEAA@XZ.c)
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C009F160 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C00BCBFC (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C0124C28 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 *     ??1ADAPTER_RENDER@@QEAA@XZ @ 0x1C0124CFC (--1ADAPTER_RENDER@@QEAA@XZ.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0144EFC (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C015AAEC (--1DXGSESSIONMGR@@QEAA@XZ.c)
 *     ??1BLTQUEUE@@QEAA@XZ @ 0x1C015D860 (--1BLTQUEUE@@QEAA@XZ.c)
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C0165694 (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  if ( *(_QWORD *)this )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 302LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_DWORD *)this + 2) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 303LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 3) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 304LL;
    WdLogEvent5_WdAssertion(v4);
  }
}
