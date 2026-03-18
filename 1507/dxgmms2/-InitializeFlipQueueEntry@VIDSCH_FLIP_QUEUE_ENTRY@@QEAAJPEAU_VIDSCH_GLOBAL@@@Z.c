/*
 * XREFs of ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0012098
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00036B8 (VidSchiSetFlipDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
        VIDSCH_FLIP_QUEUE_ENTRY *this,
        struct _VIDSCH_GLOBAL *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rdx
  __int64 v6; // rax
  int v8; // eax
  int v9; // ecx

  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  (unsigned int)(56 * *((_DWORD *)a2 + 31) * *((_DWORD *)a2 + 13) + 16),
                  0x68536956u);
  *((_QWORD *)this + 142) = PoolWithTag;
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = *((_DWORD *)a2 + 13);
    v9 = *((_DWORD *)a2 + 31);
    v5[2] = v8;
    v5[1] = v9;
    v5[3] = 56 * v8 * v9 + 16;
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v6);
    return 3221225495LL;
  }
}
