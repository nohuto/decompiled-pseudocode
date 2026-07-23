/*
 * XREFs of ViMmMapLockedPagesSanityChecks @ 0x14071C834
 * Callers:
 *     VerifierMmMapLockedPages @ 0x14071BFC0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x14071C09C (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MmCheckMdlPages @ 0x140701BC4 (MmCheckMdlPages.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViMmMapLockedPagesSanityChecks(ULONG_PTR a1, char a2)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  __int16 v6; // ax
  unsigned __int16 v7; // cx
  __int16 v8; // ax
  unsigned __int16 v9; // dx

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 1) == 0 )
    return result;
  CurrentIrql = KeGetCurrentIrql();
  if ( a2 )
  {
    if ( CurrentIrql > 1u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x75uLL, CurrentIrql, a1, a2);
    if ( a2 == 1 )
      goto LABEL_12;
  }
  else if ( CurrentIrql > 2u )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x74uLL, CurrentIrql, a1, 0LL);
  }
  v6 = 37;
  if ( (unsigned int)VfVerifyMode < 3 )
    v6 = 33;
  v7 = *(_WORD *)(a1 + 10);
  if ( (v7 & (unsigned __int16)v6) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB2uLL, a1, (__int16)v7, (__int16)v7 & (unsigned __int64)v6);
LABEL_12:
  v8 = 18;
  if ( a2 == 1 )
    v8 = 23;
  v9 = *(_WORD *)(a1 + 10);
  if ( (v9 & (unsigned __int16)v8) == 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB3uLL, a1, (__int16)v9, v8);
  return MmCheckMdlPages(a1);
}
