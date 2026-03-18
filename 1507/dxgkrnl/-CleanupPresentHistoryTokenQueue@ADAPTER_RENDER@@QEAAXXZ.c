/*
 * XREFs of ?CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00BD830
 * Callers:
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00BD690 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C000CAB8 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 */

void __fastcall ADAPTER_RENDER::CleanupPresentHistoryTokenQueue(struct _KTHREAD **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v8; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, this + 74);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v11 = 2;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2, v4, v5);
  if ( CurrentProcessSessionId < *((_DWORD *)this + 154) )
  {
    v7 = CurrentProcessSessionId;
    v8 = (DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[78] + CurrentProcessSessionId);
    if ( v8 )
    {
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v8);
      *((_QWORD *)this[78] + v7) = 0LL;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
