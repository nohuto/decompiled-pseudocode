/*
 * XREFs of ?GetKeyForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAW4RmResourceSetType@@@Z @ 0x180047A78
 * Callers:
 *     ?GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x180047B0C (-GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourc.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngineHelper::GetKeyForResourceSetType(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3)
{
  const wchar_t *v3; // rdi

  if ( !a3 )
    return 2147942487LL;
  *a3 = 57;
  if ( a2 > 0x38 )
    return 2147942487LL;
  if ( a2 == 1 )
  {
    v3 = L"HighPriorityBackgroundAgent";
    return (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, _DWORD *))(*(_QWORD *)a1 + 24LL))(
             a1,
             v3,
             0LL,
             a3);
  }
  v3 = (const wchar_t *)(&ExecutionModel::ResourceSetTypeName)[a2];
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, _DWORD *))(*(_QWORD *)a1 + 24LL))(
             a1,
             v3,
             0LL,
             a3);
  return 2147549183LL;
}
