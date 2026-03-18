/*
 * XREFs of VfFailSystemBIOS @ 0x14025A1AC
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfFailSystemBIOS(int a1, int a2)
{
  __int64 result; // rax

  if ( ViDdiInitialized )
  {
    if ( (MmVerifierData & 0x40000000) != 0 )
      return VerifierBugCheckIfAppropriate(a1, a2, 0, 0, 0LL);
  }
  return result;
}
