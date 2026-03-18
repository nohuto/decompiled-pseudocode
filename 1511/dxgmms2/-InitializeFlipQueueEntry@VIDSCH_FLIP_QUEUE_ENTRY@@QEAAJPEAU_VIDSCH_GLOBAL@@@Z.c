/*
 * XREFs of ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0010D20
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00109F4 (VidSchiSetFlipDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
        VIDSCH_FLIP_QUEUE_ENTRY *this,
        struct _VIDSCH_GLOBAL *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rdx
  int v6; // eax
  int v7; // ecx
  __int64 v9; // rax

  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  (unsigned int)(((*((_DWORD *)a2 + 31) * *((_DWORD *)a2 + 13)) << 6) + 16),
                  0x68536956u);
  *((_QWORD *)this + 144) = PoolWithTag;
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v6 = *((_DWORD *)a2 + 13);
    v7 = *((_DWORD *)a2 + 31);
    v5[1] = v7;
    v5[2] = v6;
    v5[3] = ((v6 * v7) << 6) + 16;
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v9);
    return 3221225495LL;
  }
}
