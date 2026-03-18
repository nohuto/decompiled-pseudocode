/*
 * XREFs of ViIrpCheckKernelAddressForIrp @ 0x1407419E8
 * Callers:
 *     VfBeforeCallDriver @ 0x1407410A4 (VfBeforeCallDriver.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140745810 (VfTargetDriversIsEnabled.c)
 */

void __fastcall ViIrpCheckKernelAddressForIrp(int a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // ebx
  struct _KPROCESS *Process; // rdx

  if ( a2 )
  {
    v3 = a2;
    if ( a2 < (unsigned __int64)MmHighestUserAddress )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != PsInitialSystemProcess
        && Process != PsIdleProcess
        && (!a3 || (unsigned int)VfTargetDriversIsEnabled(*(_QWORD *)(a3 + 176))) )
      {
        VerifierBugCheckIfAppropriate(196, 226, a1, v3, 0LL);
      }
    }
  }
}
