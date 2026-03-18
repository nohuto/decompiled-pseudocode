/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0010270
 * Callers:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001CF54 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C00601E0 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( *((_QWORD *)this + 1) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 306LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 307LL;
    WdLogEvent5_WdAssertion(v4);
  }
}
