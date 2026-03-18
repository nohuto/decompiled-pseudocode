/*
 * XREFs of PspSetEffectiveRateControlJob @ 0x1406C4B1C
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     PspSetRateControlJobPreCallback @ 0x1406C5578 (PspSetRateControlJobPreCallback.c)
 * Callees:
 *     PspGetRateControlJobFlag @ 0x140559DBC (PspGetRateControlJobFlag.c)
 */

__int64 __fastcall PspSetEffectiveRateControlJob(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r10

  result = PspGetRateControlJobFlag(a3, 0);
  if ( v6 )
  {
    _InterlockedOr((volatile signed __int32 *)(v5 + 1296), result);
  }
  else
  {
    result = (unsigned int)~(_DWORD)result;
    _InterlockedAnd((volatile signed __int32 *)(v5 + 1296), result);
  }
  if ( v4 )
    *(_QWORD *)(v5 + 832) = v6;
  else
    *(_QWORD *)(v5 + 840) = v6;
  return result;
}
