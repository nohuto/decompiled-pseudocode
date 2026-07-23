/*
 * XREFs of VerifierMmMapIoSpace @ 0x14071BEBC
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     MmCheckMapIoSpace @ 0x140701CD4 (MmCheckMapIoSpace.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmMapIoSpace(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // dl
  unsigned int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h]

  v11 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x73uLL, CurrentIrql, (unsigned int)a1, a2);
    a1 = v11;
  }
  if ( (MmVerifierData & 1) != 0 )
    MmCheckMapIoSpace(a1, a2);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    return 0LL;
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    v7 = 4;
    if ( a3 != 1 )
    {
      v7 = 516;
      if ( a3 == 2 )
        v7 = 1028;
    }
    v8 = MmMapIoSpaceEx(v11, a2, v7);
  }
  else
  {
    v8 = pXdvMmMapIoSpace(v11, a2, a3);
  }
  v9 = v8;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v8, a2);
  if ( v9 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 184LL, 0xC0u, a2);
  }
  return v9;
}
