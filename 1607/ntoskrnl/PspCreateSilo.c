/*
 * XREFs of PspCreateSilo @ 0x14067E740
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     PspAllocStorage @ 0x140579A30 (PspAllocStorage.c)
 *     PspFreeStorage @ 0x1406829B4 (PspFreeStorage.c)
 */

__int64 __fastcall PspCreateSilo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 v2; // rdi
  __int64 result; // rax
  unsigned int v5; // ebp
  __int64 v6; // rcx
  unsigned int v7; // edx
  signed __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v8 = 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  if ( !*(_QWORD *)(a1 + 1288) )
  {
    result = PspAllocStorage(&v8);
    if ( (int)result < 0 )
      return result;
    v2 = v8;
  }
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( *(_QWORD *)(a1 + 1040) == a1 + 1040 )
  {
    if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0 )
    {
      v5 = -1073740536;
    }
    else
    {
      v6 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1288), v2, 0LL) != 0);
      v8 &= v6;
      *(_QWORD *)(a1 + 1064) = PspGetJobSilo(*(_QWORD *)(a1 + 1056));
      _InterlockedOr((volatile signed __int32 *)(a1 + 1304), v7);
      v2 = v8;
      v5 = 0;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  PspUnlockJob(a1, (__int64)CurrentThread);
  if ( v2 )
    PspFreeStorage(v2);
  return v5;
}
