/*
 * XREFs of PoFxPowerControl @ 0x140237060
 * Callers:
 *     VerifierPoFxPowerControl @ 0x1407423A8 (VerifierPoFxPowerControl.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     PopPluginRequestPowerControl @ 0x14023A290 (PopPluginRequestPowerControl.c)
 */

__int64 __fastcall PoFxPowerControl(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  __int64 v7; // rbx
  NTSTATUS v12; // edi
  __int64 v13; // rcx

  v7 = a1 + 208;
  v12 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 208), 0LL, &File, 1u, 0x20u);
  if ( v12 >= 0 )
  {
    v12 = -1073741637;
    v13 = *(_QWORD *)(a1 + 56);
    if ( a7 )
      *a7 = 0LL;
    if ( *(_BYTE *)(v13 + 124) )
      v12 = PopPluginRequestPowerControl(*(_QWORD *)(v13 + 32), a2, a3, a4, a5, a6, (__int64)a7);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 4), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v7 + 8), 0, 0);
  }
  return (unsigned int)v12;
}
