/*
 * XREFs of RIMSetupContactForSuppression @ 0x1C00D2F2C
 * Callers:
 *     RIMABAssessContactForArbitrationSuspension @ 0x1C00D2328 (RIMABAssessContactForArbitrationSuspension.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMSetupContactForSuppression(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_DWORD *)(a1 + 2392) & 0xFFFFFEDF | 0x20;
  v3 = *(_DWORD *)(a1 + 2340) == 0;
  *(_DWORD *)(a1 + 2392) = result;
  if ( !v3 )
  {
    result = result & 0xFFFFFBBF | 0x40;
    *(_DWORD *)(a1 + 2392) = result;
    *(_BYTE *)(a2 + 649) = 1;
  }
  return result;
}
