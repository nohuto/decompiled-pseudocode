/*
 * XREFs of VerifierMmCreateMdl @ 0x14071BCA8
 * Callers:
 *     <none>
 * Callees:
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmCreateMdl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Mdl; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  if ( !a1 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  Mdl = pXdvMmCreateMdl(a1, a2, a3);
  v8 = Mdl;
  if ( KeGetCurrentIrql() <= 2u )
  {
    v9 = 48LL;
    if ( Mdl )
      v9 = *(__int16 *)(Mdl + 8);
    if ( VfPoolTraces )
      ViPoolLogStackTrace(Mdl, v9);
  }
  return v8;
}
