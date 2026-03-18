/*
 * XREFs of ESM_RestartingTransferRingQueuesIfNeeded @ 0x1C00397B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_RestartingTransferRingQueuesIfNeeded(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned int i; // esi

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 32) & 4) != 0 )
  {
    v2 = *(_QWORD *)(v1 + 136);
    for ( i = 1; i <= *(_DWORD *)(v2 + 8); ++i )
      (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 1232))(
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
        *(_QWORD *)(*(_QWORD *)(88LL * (i - 1) + *(_QWORD *)(v1 + 136) + 40) + 72LL));
  }
  return 29LL;
}
