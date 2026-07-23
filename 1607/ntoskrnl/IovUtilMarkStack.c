/*
 * XREFs of IovUtilMarkStack @ 0x1400B1E6C
 * Callers:
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 * Callees:
 *     VfDevObjAdjustFdoForVerifierFilters @ 0x14070D6D4 (VfDevObjAdjustFdoForVerifierFilters.c)
 *     IovpUtilMarkDeviceObject @ 0x14070E394 (IovpUtilMarkDeviceObject.c)
 */

__int64 __fastcall IovUtilMarkStack(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r10d
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = IovUtilVerifierEnabled;
  result = a3;
  v6 = a2;
  v7 = a1;
  if ( a2 && IovUtilVerifierEnabled )
    result = IovpUtilMarkDeviceObject(a2, 1LL);
  if ( result )
  {
    v9 = result;
    if ( v4 )
    {
      VfDevObjAdjustFdoForVerifierFilters(&v9, a2, v6);
      result = v9;
    }
    if ( result )
    {
      if ( v4 )
        return IovpUtilMarkDeviceObject(result, 2LL);
    }
  }
  else if ( a4 && v4 )
  {
    IovpUtilMarkDeviceObject(v7, 2LL);
    return IovpUtilMarkDeviceObject(v8, 3LL);
  }
  return result;
}
