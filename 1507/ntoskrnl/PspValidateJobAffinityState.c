/*
 * XREFs of PspValidateJobAffinityState @ 0x14054D8F8
 * Callers:
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     PspCheckJobAccessState @ 0x1406C4538 (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspValidateJobAffinityState(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rcx

  v4 = 0;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  v5 = *(_QWORD *)(a1 + 432);
  if ( !v5 || (v4 = PspCheckJobAccessState(v5, a2), v4 >= 0) )
    _InterlockedOr((volatile signed __int32 *)(a2 + 772), 0x4000000u);
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  return (unsigned int)v4;
}
