/*
 * XREFs of RIMICUpdateDeadZone @ 0x1C00D2DF0
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D2118 (RIMABArbitratePrimaryStatus.c)
 * Callees:
 *     IsGetUserHandednessSupported_0 @ 0x1C0002E78 (IsGetUserHandednessSupported_0.c)
 *     GetUserHandedness_0 @ 0x1C0002E80 (GetUserHandedness_0.c)
 *     RIMICAnalyzeUserPalmCluster @ 0x1C00D2940 (RIMICAnalyzeUserPalmCluster.c)
 */

__int64 __fastcall RIMICUpdateDeadZone(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx

  LODWORD(result) = gHandedness;
  if ( gHandedness )
    goto LABEL_14;
  if ( gDetectHandedness )
  {
    RIMICAnalyzeUserPalmCluster(a1, a2);
    result = gHandedness;
  }
  else
  {
    result = IsGetUserHandednessSupported_0();
    if ( (int)result < 0 )
    {
      v5 = 0;
    }
    else
    {
      result = GetUserHandedness_0();
      v5 = result;
    }
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        gHandedness = 0;
        return result;
      }
      result = 2LL;
    }
    else
    {
      result = 1LL;
    }
    *(_DWORD *)(a1 + 604) |= 1u;
    gHandedness = result;
  }
  if ( (_DWORD)result )
  {
LABEL_14:
    if ( (_DWORD)result == 2 )
    {
      *(_QWORD *)(a1 + 588) = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 680) + 2292LL) - 1000);
      *(_DWORD *)(a1 + 596) = *(_DWORD *)(a2 + 164);
    }
    else
    {
      *(_DWORD *)(a1 + 588) = 0;
      *(_DWORD *)(a1 + 592) = 0;
      *(_DWORD *)(a1 + 596) = *(_DWORD *)(*(_QWORD *)(a2 + 680) + 2292LL) + 1000;
    }
    result = *(unsigned int *)(a2 + 168);
    *(_DWORD *)(a1 + 600) = result;
  }
  return result;
}
