/*
 * XREFs of ViFaultsInjectionNotification @ 0x140746EE8
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 */

void __fastcall ViFaultsInjectionNotification(int a1)
{
  __int64 v2; // rbx
  USHORT v3; // ax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140331D2C;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 148LL);
  if ( ViFaultTraces )
  {
    v2 = ViFaultTraces + 72LL * (_InterlockedIncrement(&ViFaultTracesIndex) & (unsigned int)(ViFaultTracesLength - 1));
    *(_QWORD *)v2 = KeGetCurrentThread();
    v3 = RtlCaptureStackBackTrace(a1 + 1, 8u, (PVOID *)(v2 + 8), 0LL);
    if ( v3 < 8u )
      *(_QWORD *)(v2 + 8LL * v3 + 8) = 0LL;
  }
}
