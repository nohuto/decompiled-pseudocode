/*
 * XREFs of ?OnTryDemote@MPCProcessor@@MEAA_NXZ @ 0x1800483E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::OnTryDemote(MPCProcessor *this)
{
  return *((_QWORD *)this + 22) == 0LL;
}
