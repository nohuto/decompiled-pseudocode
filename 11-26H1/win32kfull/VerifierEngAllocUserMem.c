/*
 * XREFs of VerifierEngAllocUserMem @ 0x140349670
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1403493C0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierEngAllocUserMem(SIZE_T cjMemSize, __int64 ulTag)
{
  ULONG v2; // ebx

  v2 = ulTag;
  if ( (unsigned int)VerifierRandomFailure(cjMemSize, ulTag) )
    return 0LL;
  else
    return EngAllocUserMem(cjMemSize, v2);
}
