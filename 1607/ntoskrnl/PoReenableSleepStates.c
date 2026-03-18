/*
 * XREFs of PoReenableSleepStates @ 0x14066BF28
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 */

void __fastcall PoReenableSleepStates(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax

  ExAcquireFastMutex(&PopDisableSleepMutex);
  v2 = *a1;
  v3 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  KeReleaseGuardedMutex(&PopDisableSleepMutex);
  ExFreePoolWithTag(a1, 0x64536F50u);
}
