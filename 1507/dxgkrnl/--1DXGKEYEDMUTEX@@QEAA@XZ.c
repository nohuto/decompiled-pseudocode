/*
 * XREFs of ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C005B8D4
 * Callers:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C000104C (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0004B5C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005B79C (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEX::~DXGKEYEDMUTEX(DXGKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( *((_QWORD *)this + 3) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 2588LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGKEYEDMUTEX::DestroyGlobal(this, a2, a3, a4);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGKEYEDMUTEX *)((char *)this + 96));
  *((_QWORD *)this + 2) = 0LL;
}
