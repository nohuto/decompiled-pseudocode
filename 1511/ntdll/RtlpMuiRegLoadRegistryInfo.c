/*
 * XREFs of RtlpMuiRegLoadRegistryInfo @ 0x18003D550
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18003E2C8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlpLoadLanguageConfigList @ 0x180004EE8 (RtlpLoadLanguageConfigList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180039D8C (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18003D640 (RtlpMuiRegFreeRegistryInfo.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800EC274 (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800ED408 (_RtlpMuiRegLoadInstalled.c)
 */

__int64 __fastcall RtlpMuiRegLoadRegistryInfo(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( (a2 & 0x800) != 0 )
  {
    result = RtlpMuiRegLoadLicInformation();
    if ( (int)result < 0 )
    {
      DbgPrint("*** RtlpMuiRegLoadLicInformation failed with status %x", result);
      result = 0LL;
    }
  }
  if ( (a2 & 1) != 0 )
    result = RtlpMuiRegLoadInstalled(a1);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 4LL);
      result = RtlpLoadLanguageConfigList(4, &v9, a1);
      if ( (int)result < 0 )
        return result;
      v8 = v9;
      if ( v9 )
      {
        *(_DWORD *)a1 |= 4u;
        *(_QWORD *)(a1 + 40) = v8;
        v9 = 0LL;
      }
    }
    if ( (a2 & 8) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 8LL);
      result = RtlpLoadLanguageConfigList(8, &v9, a1);
      if ( (int)result < 0 )
        return result;
      v5 = v9;
      if ( v9 )
      {
        *(_DWORD *)a1 |= 8u;
        *(_QWORD *)(a1 + 48) = v5;
      }
    }
    if ( (a2 & 0x20) != 0 )
    {
      RtlpMuiRegFreeRegistryInfo(a1, 32LL);
      result = RtlpSetProcUserMachineLangList(a1, 1LL, v6);
    }
    if ( (int)result >= 0 )
    {
      if ( (a2 & 0x10) != 0 )
      {
        RtlpMuiRegFreeRegistryInfo(a1, 16LL);
        result = RtlpSetProcUserMachineLangList(a1, 0LL, v7);
      }
      if ( (int)result >= 0 && (a2 & 0x200) != 0 )
        return 0LL;
    }
  }
  return result;
}
