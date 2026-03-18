/*
 * XREFs of ?bInEngCall@UMPDOBJ@@QEAA_NXZ @ 0x1C0257EC0
 * Callers:
 *     EngTextOut @ 0x1C0032E10 (EngTextOut.c)
 *     EngBitBlt @ 0x1C00477E0 (EngBitBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

bool __fastcall UMPDOBJ::bInEngCall(UMPDOBJ *this)
{
  bool v2; // zf

  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
    v2 = (_InterlockedCompareExchange((volatile signed __int32 *)this + 108, 0, 0) & 0x7FFFFFFF) == 0;
  else
    v2 = *((_DWORD *)this + 108) == 0;
  return !v2;
}
