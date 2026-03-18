/*
 * XREFs of GetDownContactCount @ 0x1C01CCB00
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C02297F4 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetDownContactCount()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( LODWORD(aDeviceTemplate[154]) )
  {
    RIMGetDownContactCount(aDeviceTemplate[155], &v1);
    return v1;
  }
  else
  {
    result = (unsigned int)dword_1C0323FA4;
    if ( gIsPTPButtonDown )
      return (unsigned int)(dword_1C0323FA4 - 1);
  }
  return result;
}
