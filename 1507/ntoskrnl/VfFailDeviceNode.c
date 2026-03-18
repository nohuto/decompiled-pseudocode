/*
 * XREFs of VfFailDeviceNode @ 0x14015A35C
 * Callers:
 *     <none>
 * Callees:
 *     VfIsVerificationEnabled @ 0x14015A38C (VfIsVerificationEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfFailDeviceNode(__int64 a1, int a2, int a3)
{
  int v5; // ebx
  __int64 result; // rax

  v5 = a1;
  result = VfIsVerificationEnabled(1LL, a1);
  if ( (_DWORD)result )
    return VerifierBugCheckIfAppropriate(a2, a3, v5, 0, 0LL);
  return result;
}
