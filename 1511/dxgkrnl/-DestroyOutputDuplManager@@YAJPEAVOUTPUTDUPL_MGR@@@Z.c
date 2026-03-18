/*
 * XREFs of ?DestroyOutputDuplManager@@YAJPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01570F4
 * Callers:
 *     ??1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ @ 0x1C00BBE18 (--1OUTPUTDUPL_SESSION_MGR@@QEAA@XZ.c)
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C0124C28 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 * Callees:
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0020954 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DestroyOutputDuplManager(struct OUTPUTDUPL_MGR *a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    OUTPUTDUPL_MGR::`scalar deleting destructor'(a1);
    return 0LL;
  }
  else
  {
    v1 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v1 + 24) = 0LL;
    WdLogEvent5_WdError(v1);
    return 3221225485LL;
  }
}
