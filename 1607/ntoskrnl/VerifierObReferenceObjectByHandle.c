/*
 * XREFs of VerifierObReferenceObjectByHandle @ 0x14071CCF0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsSystemThread @ 0x1400A2714 (PsIsSystemThread.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObReferenceObjectByHandle(ULONG_PTR a1, __int64 a2, ULONG_PTR a3, char a4)
{
  unsigned int v7; // eax
  unsigned int v8; // ebp
  ULONG_PTR v9; // r8
  ULONG_PTR v10; // rdx

  v7 = pXdvObReferenceObjectByHandle(a1, a2);
  v8 = v7;
  if ( (v7 == -1073741816 || v7 == -1073741788)
    && (!a4 || PsIsSystemThread(KeGetCurrentThread()))
    && (MmVerifierData & 0x800) != 0 )
  {
    if ( !a1 )
    {
      v9 = 0LL;
      v10 = 245LL;
LABEL_13:
      VerifierBugCheckIfAppropriate(0xC4u, v10, v9, a3, 0LL);
      return v8;
    }
    if ( !a4 || (a1 & 0xFFFFFFFF80000000uLL) == 0 || a1 >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      v9 = a1;
      v10 = 60LL;
      goto LABEL_13;
    }
    VerifierBugCheckIfAppropriate(0xC4u, 0xF7uLL, a1, a3, a4);
  }
  return v8;
}
