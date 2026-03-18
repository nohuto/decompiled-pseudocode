/*
 * XREFs of ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C005C6FC
 * Callers:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C0001068 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0006E14 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005C5C4 (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEX::~DXGKEYEDMUTEX(DXGKEYEDMUTEX *this)
{
  __int64 v2; // rax

  if ( *((_QWORD *)this + 3) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 2550LL;
    WdLogEvent5_WdAssertion(v2);
  }
  DXGKEYEDMUTEX::DestroyGlobal(this);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGKEYEDMUTEX *)((char *)this + 96));
  *((_QWORD *)this + 2) = 0LL;
}
