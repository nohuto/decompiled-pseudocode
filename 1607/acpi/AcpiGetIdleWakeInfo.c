/*
 * XREFs of AcpiGetIdleWakeInfo @ 0x1C00881A0
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0020630 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C0021804 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     AcpiGetD3ColdCapability @ 0x1C0088240 (AcpiGetD3ColdCapability.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C00080D4 (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall AcpiGetIdleWakeInfo(__int64 a1, int a2, int *a3)
{
  __int64 result; // rax
  int v6; // ebx
  volatile signed __int32 *v7; // rbp
  int v8; // edi
  __int64 v9; // rdx
  _BYTE v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+22h] [rbp-46h]
  unsigned int v12; // [rsp+30h] [rbp-38h]

  if ( (unsigned int)(a2 - 1) > 4 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) == 0 )
    return 3221226021LL;
  result = (__int64)AMLIGetNamedChild(*(__int64 **)(a1 + 712), *(_DWORD *)&aS0wS1wS2wS3wS4[4 * a2 - 4]);
  v6 = 0;
  v7 = (volatile signed __int32 *)result;
  if ( result )
  {
    v8 = AMLIEvalNameSpaceObject((__int64 *)result, v10, 0, 0LL);
    AMLIDereferenceHandleEx(v7, v9);
    if ( v8 >= 0 )
    {
      if ( v11 == 1 )
      {
        if ( v12 < 5 )
          v6 = v12 + 1;
        *a3 = v6;
        if ( v6 == 5 )
        {
          if ( (*(_DWORD *)(a1 + 912) & 0x800LL) == 0 )
            v6 = 4;
          *a3 = v6;
        }
      }
      else
      {
        v8 = -1073741436;
      }
      AMLIFreeDataBuffs((__int64)v10);
    }
    return (unsigned int)v8;
  }
  else
  {
    if ( (*(_QWORD *)(a1 + 912) & 0x100000000LL) == 0 )
      return 3221226021LL;
    *a3 = 4;
  }
  return result;
}
