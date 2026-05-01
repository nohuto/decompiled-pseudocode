/*
 * XREFs of ?GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x18004E93C
 * Callers:
 *     ?NotifyPendingResourceSetTransition@ResourceSetImpl@ExecutionModel@@UEAAJW4Enum@ResourceSetType@2@@Z @ 0x18004EB10 (-NotifyPendingResourceSetTransition@ResourceSetImpl@ExecutionModel@@UEAAJW4Enum@ResourceSetType@.c)
 * Callees:
 *     ?ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetType@@PEBU_ResourcePolicyDetails@@PEAU_ResourceSetInfo@2@@Z @ 0x1800128B0 (-ConvertPolicyToResourceSetInfo@ResourcePolicyEngineHelper@ExecutionModel@@SAJW4RmResourceSetTyp.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAW4RmResourceSetType@@@Z @ 0x18004E8A8 (-GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineHelper::GetResourceSetInfoForResourceSetType(
        __int64 a1,
        signed int a2,
        __int64 a3)
{
  __int64 result; // rax
  int v7[4]; // [rsp+20h] [rbp-A8h] BYREF
  _DWORD v8[28]; // [rsp+30h] [rbp-98h] BYREF

  memset_0(v8, 0, sizeof(v8));
  v7[0] = 57;
  if ( !a3 )
    return 2147942487LL;
  if ( a2 < 57 )
  {
    result = ExecutionModel::ResourcePolicyEngineHelper::GetKeyForResourceSetType(a1, a2, v7);
    if ( (int)result < 0 )
      return result;
    a2 = v7[0];
  }
  else
  {
    v7[0] = a2;
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)a1 + 32LL))(a1, (unsigned int)a2, v8);
  if ( (int)result >= 0 )
    return ExecutionModel::ResourcePolicyEngineHelper::ConvertPolicyToResourceSetInfo(v7[0], v8, a3);
  return result;
}
