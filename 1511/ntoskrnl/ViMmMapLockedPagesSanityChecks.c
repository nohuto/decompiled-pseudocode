/*
 * XREFs of ViMmMapLockedPagesSanityChecks @ 0x1406D06A4
 * Callers:
 *     VerifierMmMapLockedPages @ 0x1406CFEE4 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1406CFFAC (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViMmMapLockedPagesSanityChecks(ULONG_PTR a1, char a2)
{
  unsigned __int8 CurrentIrql; // cl
  __int16 v5; // ax
  unsigned __int16 v6; // cx
  __int16 v7; // ax
  unsigned __int16 v8; // dx

  CurrentIrql = KeGetCurrentIrql();
  if ( !a2 )
  {
    if ( CurrentIrql > 2u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x74uLL, CurrentIrql, a1, 0LL);
LABEL_7:
    v5 = 37;
    if ( (unsigned int)VfVerifyMode < 3 )
      v5 = 33;
    v6 = *(_WORD *)(a1 + 10);
    if ( (v6 & (unsigned __int16)v5) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xB2uLL, a1, (__int16)v6, (__int16)v6 & (unsigned __int64)v5);
    goto LABEL_11;
  }
  if ( CurrentIrql > 1u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x75uLL, CurrentIrql, a1, a2);
  if ( a2 != 1 )
    goto LABEL_7;
LABEL_11:
  v7 = 18;
  if ( a2 == 1 )
    v7 = 23;
  v8 = *(_WORD *)(a1 + 10);
  if ( (v8 & (unsigned __int16)v7) == 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xB3uLL, a1, (__int16)v8, v7);
  return MmCheckMdlPages(a1);
}
