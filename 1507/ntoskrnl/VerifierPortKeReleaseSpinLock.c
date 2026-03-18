/*
 * XREFs of VerifierPortKeReleaseSpinLock @ 0x140748C30
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KeReleaseSpinLock @ 0x140102090 (KeReleaseSpinLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140749CA0 (ViKeLowerIrqlSanityChecks.c)
 */

void __fastcall VerifierPortKeReleaseSpinLock(ULONG_PTR a1, __int64 a2)
{
  KIRQL v2; // si
  KSPIN_LOCK *v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rbx
  USHORT v6; // ax

  v2 = a2;
  v3 = (KSPIN_LOCK *)a1;
  if ( a1 < (unsigned __int64)MmHighestUserAddress || a1 + 8 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, a1, 8uLL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, (ULONG_PTR)v3, 0LL);
  LOBYTE(a2) = v2;
  LOBYTE(a1) = CurrentIrql;
  v5 = ViKeLowerIrqlSanityChecks(a1, a2);
  pXdvKeReleaseSpinLock(v3, v2);
  if ( v5 )
  {
    *(_QWORD *)v5 = KeGetCurrentThread();
    *(_DWORD *)(v5 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *(_QWORD *)(v5 + 16) = 0LL;
    }
    else
    {
      v6 = RtlCaptureStackBackTrace(1u, 5u, (PVOID *)(v5 + 16), 0LL);
      if ( v6 < 5u )
        *(_QWORD *)(v5 + 8LL * v6 + 16) = 0LL;
    }
  }
}
