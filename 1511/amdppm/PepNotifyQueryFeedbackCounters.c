/*
 * XREFs of PepNotifyQueryFeedbackCounters @ 0x1C001C248
 * Callers:
 *     InitPepPerfStates @ 0x1C001BF68 (InitPepPerfStates.c)
 * Callees:
 *     memmove @ 0x1C0005E00 (memmove.c)
 *     memset @ 0x1C0006140 (memset.c)
 */

__int64 __fastcall PepNotifyQueryFeedbackCounters(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v3; // rsi
  SIZE_T v6; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  int v9; // edi

  v3 = a2;
  v6 = 8 * a2 + 4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    *v8 = v3;
    v9 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1048), 9LL, v8);
    if ( v9 >= 0 )
      memmove(a3, v8 + 1, 8 * v3);
  }
  else
  {
    v9 = -1073741670;
  }
  ExFreePoolWithTag(v8, 0x72637250u);
  return (unsigned int)v9;
}
