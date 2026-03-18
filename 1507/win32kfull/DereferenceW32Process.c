/*
 * XREFs of DereferenceW32Process @ 0x1C00E0820
 * Callers:
 *     W32pProcessCallout @ 0x1C00E05A0 (W32pProcessCallout.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C011C458 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DereferenceW32Process(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)a1;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 288));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
    UserDeleteW32Process();
  return ObfDereferenceObject(v1);
}
