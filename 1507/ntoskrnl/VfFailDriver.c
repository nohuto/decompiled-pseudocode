/*
 * XREFs of VfFailDriver @ 0x14025A184
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfFailDriver(int a1, int a2)
{
  __int64 result; // rax

  if ( ViDdiInitialized )
    return VerifierBugCheckIfAppropriate(a1, a2, 0, 0, 0LL);
  return result;
}
