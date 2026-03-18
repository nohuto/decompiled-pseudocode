/*
 * XREFs of VerifierPortKeReleaseSpinLockNoXdv @ 0x140749904
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140749CA0 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierPortKeReleaseSpinLockNoXdv(ULONG_PTR a1, __int64 a2)
{
  unsigned __int8 v2; // si
  volatile signed __int64 *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  v3 = (volatile signed __int64 *)a1;
  if ( a1 < (unsigned __int64)MmHighestUserAddress || a1 + 8 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, a1, 8uLL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, (ULONG_PTR)v3, 0LL);
  LOBYTE(a2) = v2;
  LOBYTE(a1) = CurrentIrql;
  v5 = ViKeLowerIrqlSanityChecks(a1, a2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v3, retaddr);
  else
    _InterlockedAnd64(v3, 0LL);
  result = v2;
  __writecr8(v2);
  if ( v5 )
  {
    *(_QWORD *)v5 = KeGetCurrentThread();
    *(_DWORD *)(v5 + 12) = MEMORY[0xFFFFF78000000320];
    result = (unsigned int)VfOptionFlags;
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *(_QWORD *)(v5 + 16) = 0LL;
    }
    else
    {
      result = RtlCaptureStackBackTrace(1u, 5u, (PVOID *)(v5 + 16), 0LL);
      if ( (unsigned __int16)result < 5u )
        *(_QWORD *)(v5 + 8LL * (unsigned __int16)result + 16) = 0LL;
    }
  }
  return result;
}
