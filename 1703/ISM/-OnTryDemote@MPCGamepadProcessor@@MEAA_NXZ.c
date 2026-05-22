/*
 * XREFs of ?OnTryDemote@MPCGamepadProcessor@@MEAA_NXZ @ 0x18002E790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCGamepadProcessor::OnTryDemote(MPCGamepadProcessor *this)
{
  return *((_QWORD *)this + 18) == 0LL;
}
