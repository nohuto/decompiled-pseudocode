/*
 * XREFs of ?GetQPCFrequency@CAnimation@@UEAA_KXZ @ 0x1800399B0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180039CC0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CAnimation::GetQPCFrequency(CAnimation *this)
{
  return *(_QWORD *)(*((_QWORD *)this - 19) + 312LL);
}
