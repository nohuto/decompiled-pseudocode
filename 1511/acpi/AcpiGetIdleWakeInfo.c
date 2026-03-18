/*
 * XREFs of AcpiGetIdleWakeInfo @ 0x1C0068760
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C00189E4 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C001960C (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     AcpiGetD3ColdCapability @ 0x1C006ABF0 (AcpiGetD3ColdCapability.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C00079D0 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 */

__int64 __fastcall AcpiGetIdleWakeInfo(__int64 a1, int a2, int *a3)
{
  __int64 result; // rax
  volatile signed __int32 *v6; // rbp
  int v7; // ebx
  int v8; // ecx
  _BYTE v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+22h] [rbp-36h]
  unsigned int v11; // [rsp+30h] [rbp-28h]

  if ( (unsigned int)(a2 - 1) > 4 )
    return 3221225712LL;
  if ( (*(_DWORD *)a1 & 0x10000) == 0 )
    return 3221226021LL;
  result = AMLIGetNamedChild(*(_QWORD *)(a1 + 704), *(_DWORD *)&aS0wS1wS2wS3wS4[4 * a2 - 4]);
  v6 = (volatile signed __int32 *)result;
  if ( result )
  {
    v7 = AMLIEvalNameSpaceObject((__int64 *)result, v9, 0, 0LL);
    AMLIDereferenceHandleEx(v6);
    if ( v7 >= 0 )
    {
      if ( v10 == 1 )
      {
        if ( v11 < 5 )
          v8 = v11 + 1;
        else
          v8 = 0;
        *a3 = v8;
        if ( v8 == 5 )
        {
          if ( (*(_DWORD *)(a1 + 904) & 0x800) == 0 )
            v8 = 4;
          *a3 = v8;
        }
      }
      else
      {
        v7 = -1073741436;
      }
      AMLIFreeDataBuffs((__int64)v9);
    }
    return (unsigned int)v7;
  }
  else
  {
    if ( (*(_QWORD *)(a1 + 904) & 0x100000000LL) == 0 )
      return 3221226021LL;
    *a3 = 4;
  }
  return result;
}
