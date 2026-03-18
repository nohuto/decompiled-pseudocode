/*
 * XREFs of VerifierKeLowerIrql @ 0x14074846C
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KzLowerIrql @ 0x1400425C0 (KzLowerIrql.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140749CA0 (ViKeLowerIrqlSanityChecks.c)
 */

void __fastcall VerifierKeLowerIrql(KIRQL a1, __int64 a2)
{
  __int64 v3; // rdi
  USHORT v4; // ax

  LOBYTE(a2) = a1;
  v3 = ViKeLowerIrqlSanityChecks(KeGetCurrentIrql(), a2);
  pXdvKeLowerIrql(a1);
  if ( v3 )
  {
    *(_QWORD *)v3 = KeGetCurrentThread();
    *(_DWORD *)(v3 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *(_QWORD *)(v3 + 16) = 0LL;
    }
    else
    {
      v4 = RtlCaptureStackBackTrace(1u, 5u, (PVOID *)(v3 + 16), 0LL);
      if ( v4 < 5u )
        *(_QWORD *)(v3 + 8LL * v4 + 16) = 0LL;
    }
  }
}
