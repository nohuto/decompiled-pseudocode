/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z @ 0x1C00D82D4
 * Callers:
 *     DxgkFinishPnPTransition @ 0x1C00D808C (DxgkFinishPnPTransition.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransitionOnSession(DXGSESSIONMGR *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGSESSIONMGR *)((char *)this + 80));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  if ( (unsigned int)v2 < *((_DWORD *)this + 18) && *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2) )
  {
    _mm_lfence();
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2) + 18504LL) )
    {
      _mm_lfence();
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2) + 18504LL));
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v5 + 24) = v2;
    WdLogEvent5_WdError(v5);
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
