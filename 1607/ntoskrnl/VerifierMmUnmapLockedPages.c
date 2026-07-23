/*
 * XREFs of VerifierMmUnmapLockedPages @ 0x14071C5E4
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmUnmapLockedPages(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // dl
  ULONG_PTR v6; // r8
  ULONG_PTR v7; // rdx
  __int16 v8; // dx
  unsigned __int64 v9; // r9
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( a1 <= 0x7FFFFFFEFFFFLL )
  {
    if ( CurrentIrql > 1u && (MmVerifierData & 1) != 0 )
    {
      v6 = CurrentIrql;
      v7 = 122LL;
      goto LABEL_8;
    }
  }
  else if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
  {
    v6 = CurrentIrql;
    v7 = 121LL;
LABEL_8:
    VerifierBugCheckIfAppropriate(0xC4u, v7, v6, a1, a2);
  }
  if ( (unsigned int)VfVerifyMode >= 3 && a1 > 0x7FFFFFFEFFFFLL )
  {
    v8 = *(_WORD *)(a2 + 10);
    if ( (v8 & 1) == 0 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xB6uLL, a2, v8, 1LL);
  }
  v9 = -(__int64)*(unsigned int *)(a2 + 40);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 168LL, 0xB0u, v9);
  return pXdvMmUnmapLockedPages(a1, a2, a3, v9);
}
