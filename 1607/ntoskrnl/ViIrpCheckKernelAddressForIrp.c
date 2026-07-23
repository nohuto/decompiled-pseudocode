/*
 * XREFs of ViIrpCheckKernelAddressForIrp @ 0x14070C27C
 * Callers:
 *     VfBeforeCallDriver @ 0x14070BAD8 (VfBeforeCallDriver.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x14071002C (VfTargetDriversIsEnabled.c)
 */

struct _KTHREAD *__fastcall ViIrpCheckKernelAddressForIrp(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *result; // rax
  int v5; // ebx
  struct _KPROCESS *Process; // r9

  result = (struct _KTHREAD *)(a2 - 1);
  v5 = a2;
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFEFFFDLL )
  {
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
    {
      if ( !a3 )
        return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(196, 226, a1, v5, 0LL);
      result = (struct _KTHREAD *)VfTargetDriversIsEnabled(*(_QWORD *)(a3 + 176));
      if ( (_DWORD)result )
        return (struct _KTHREAD *)VerifierBugCheckIfAppropriate(196, 226, a1, v5, 0LL);
    }
  }
  return result;
}
