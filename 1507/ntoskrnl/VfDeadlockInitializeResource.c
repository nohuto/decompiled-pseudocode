/*
 * XREFs of VfDeadlockInitializeResource @ 0x14074FB94
 * Callers:
 *     VerifierKeInitializeMutant @ 0x140748210 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutex @ 0x1407482A4 (VerifierKeInitializeMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ViLowerIrql @ 0x14025B4A0 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14025B4B0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddResource @ 0x1407501FC (ViDeadlockAddResource.c)
 *     ViDeadlockAllocate @ 0x1407504EC (ViDeadlockAllocate.c)
 *     ViDeadlockCanProceed @ 0x1407507C0 (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x140750C40 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140750D24 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x14075101C (ViDeadlockFree.c)
 */

__int64 __fastcall VfDeadlockInitializeResource(__int64 a1, __int64 a2, void *a3)
{
  int v4; // esi
  void *v5; // rdi
  __int64 v6; // rax
  unsigned __int8 v7; // bl
  unsigned int v8; // esi
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  PVOID v12; // [rsp+30h] [rbp-68h] BYREF
  PVOID Entry; // [rsp+38h] [rbp-60h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  Entry = 0LL;
  v12 = 0LL;
  v4 = a1;
  if ( !(unsigned int)ViDeadlockCanProceed(a1, 1LL) )
    return 0LL;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return 0LL;
  if ( *((_DWORD *)ViDeadlockGlobals + 8282) > ViDeadlockChildrenCountMaximum )
    return 0LL;
  v5 = (void *)ViDeadlockAllocate(1LL);
  if ( !v5 )
    return 0LL;
  v6 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  if ( !(_WORD)v6 )
  {
    BackTrace[0] = a3;
    v6 = 1LL;
  }
  if ( (unsigned int)v6 < 8 )
    BackTrace[v6] = 0LL;
  v7 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v8 = ViDeadlockAddResource(v4, 1, (_DWORD)v5, (unsigned int)BackTrace, (__int64)&Entry, (__int64)&v12);
  ViDeadlockDetectionUnlock(1LL);
  ViLowerIrql(v7);
  if ( !v8 )
    ViDeadlockFree(v5);
  if ( Entry )
    ViDeadlockFree(Entry);
  v9 = v12;
  if ( v12 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      ViDeadlockFree(v9);
      v9 = v10;
    }
    while ( v10 );
  }
  return v8;
}
