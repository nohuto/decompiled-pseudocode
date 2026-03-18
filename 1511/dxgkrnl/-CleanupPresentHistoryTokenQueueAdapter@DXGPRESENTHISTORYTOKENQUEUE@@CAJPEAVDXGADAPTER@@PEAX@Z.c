/*
 * XREFs of ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C6B10
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ @ 0x1C006AA88 (-CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter(struct _KTHREAD ***a1, void *a2)
{
  struct _KTHREAD **v3; // rcx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  COREACCESS::COREACCESS((COREACCESS *)v5, (struct DXGADAPTER *const)a1);
  COREACCESS::AcquireShared((COREACCESS *)v5);
  v3 = a1[249];
  if ( v3 )
    ADAPTER_RENDER::CleanupPresentHistoryTokenQueue(v3);
  COREACCESS::~COREACCESS((COREACCESS *)v5);
  return 0LL;
}
