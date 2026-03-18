/*
 * XREFs of ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C017AF78
 * Callers:
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0180970 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C017B064 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C017B448 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C017B4D0 (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::~DXGDXGIKEYEDMUTEX(DXGDXGIKEYEDMUTEX *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  DXGDXGIKEYEDMUTEX::Abandon(this);
  DXGDXGIKEYEDMUTEX::CloseFromDevice(this);
  DXGDXGIKEYEDMUTEX::CloseConsumerResources(this);
  if ( *((_DWORD *)this + 18) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 201LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 202LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 12) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v5 + 24) = 203LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
