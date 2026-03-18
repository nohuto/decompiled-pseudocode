/*
 * XREFs of RtlpTraceDatabaseReleaseLock @ 0x14024ACC4
 * Callers:
 *     RtlTraceDatabaseAdd @ 0x14024A618 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x14024A818 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x14024A8D4 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x14024A93C (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x14024A944 (RtlTraceDatabaseValidate.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall RtlpTraceDatabaseReleaseLock(__int64 a1)
{
  int v1; // eax
  unsigned __int8 v2; // bl
  volatile signed __int64 *v3; // rcx
  ULONG_PTR v4; // rbx
  unsigned __int8 v5; // si
  signed __int32 v6; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD *)(a1 + 4);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (v1 & 4) != 0 )
  {
    v2 = *(_BYTE *)(a1 + 40);
    v3 = (volatile signed __int64 *)(a1 + 56);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v3, retaddr);
    else
      _InterlockedAnd64(v3, 0LL);
    __writecr8(v2);
  }
  else
  {
    v4 = a1 + 56;
    v5 = *(_BYTE *)(a1 + 104);
    *(_QWORD *)(a1 + 64) = 0LL;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), 1, 0);
    if ( v6 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(a1 + 56), v6);
    __writecr8(v5);
    KeAbPostRelease(v4);
  }
  return 1;
}
