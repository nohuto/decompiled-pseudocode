/*
 * XREFs of KiMonitorCacheErrata @ 0x1401D8D44
 * Callers:
 *     <none>
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MmReadProcessPageTables @ 0x1401EED54 (MmReadProcessPageTables.c)
 */

__int64 KiMonitorCacheErrata()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v1; // r14
  __int64 v2; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // rbp

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = (_DWORD *)KiCacheErrataMonitor;
  v2 = KiCacheErrataMonitor + 16 * (CurrentPrcb->Number + 16LL);
  _InterlockedExchange64((volatile __int64 *)v2, -1LL);
  *(_DWORD *)(v2 + 8) -= KiSanitizedProfileInterval;
  result = *(unsigned int *)(v2 + 8);
  if ( (int)result <= 0 )
  {
    v4 = &v1[4 * *(unsigned int *)(v2 + 12) + 64];
    if ( (volatile signed __int32 *)v2 != v4 && !_interlockedbittestandreset64(v4, CurrentPrcb->Number) )
    {
      v5 = 0LL;
      v6 = KiProcessorBlock[*(unsigned int *)(v2 + 12)];
      v7 = *(_QWORD *)(v6 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
      {
        v9 = *(_QWORD *)(v6 + 8);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 64), 0LL) )
        {
          v5 = *(_QWORD *)(v9 + 184);
          if ( (_UNKNOWN *)v5 != &KiInitialProcess )
            v5 &= -(__int64)(ObReferenceObjectSafeWithTag(v5) != 0);
          *(_QWORD *)(v9 + 64) = 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
      }
      if ( v7 == *(_QWORD *)(v6 + 8) )
        MmReadProcessPageTables(v6);
      __writecr8(CurrentIrql);
      if ( v5 )
      {
        if ( (_UNKNOWN *)v5 != &KiInitialProcess )
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v5, 0x61727245u);
      }
    }
    *(_DWORD *)(v2 + 8) = *v1;
    result = (*(_DWORD *)(v2 + 12) + 1) / (unsigned int)KeNumberProcessors_0;
    *(_DWORD *)(v2 + 12) = (*(_DWORD *)(v2 + 12) + 1) % (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
