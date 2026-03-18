/*
 * XREFs of RIMICUpdateDeadZone @ 0x1C00D4C10
 * Callers:
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMABArbitratePrimaryStatus @ 0x1C00D3F3C (RIMABArbitratePrimaryStatus.c)
 * Callees:
 *     IsGetUserHandednessSupported_0 @ 0x1C0002EA8 (IsGetUserHandednessSupported_0.c)
 *     GetUserHandedness_0 @ 0x1C0002EB0 (GetUserHandedness_0.c)
 *     RIMICAnalyzeUserPalmCluster @ 0x1C00D4760 (RIMICAnalyzeUserPalmCluster.c)
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
    *(_DWORD *)(a1 + 636) |= 1u;
    gHandedness = result;
  }
  if ( (_DWORD)result )
  {
LABEL_14:
    if ( (_DWORD)result == 2 )
    {
      *(_QWORD *)(a1 + 620) = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a2 + 696) + 2292LL) - 1000);
      *(_DWORD *)(a1 + 628) = *(_DWORD *)(a2 + 164);
    }
    else
    {
      *(_DWORD *)(a1 + 620) = 0;
      *(_DWORD *)(a1 + 624) = 0;
      *(_DWORD *)(a1 + 628) = *(_DWORD *)(*(_QWORD *)(a2 + 696) + 2292LL) + 1000;
    }
    result = *(unsigned int *)(a2 + 168);
    *(_DWORD *)(a1 + 632) = result;
  }
  return result;
}
