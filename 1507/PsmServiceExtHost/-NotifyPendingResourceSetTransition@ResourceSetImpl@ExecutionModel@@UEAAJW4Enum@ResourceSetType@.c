/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSetImpl@ExecutionModel@@UEAAJW4Enum@ResourceSetType@2@@Z @ 0x180047BE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002ED58 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x180047B0C (-GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourc.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::NotifyPendingResourceSetTransition(__int64 a1, signed int a2)
{
  int ResourceSetInfoForResourceSetType; // esi
  __int64 v6; // [rsp+20h] [rbp-198h] BYREF
  _BYTE v7[352]; // [rsp+30h] [rbp-188h] BYREF

  v6 = 0LL;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v7);
  if ( *(_QWORD *)(a1 + 176) )
  {
    ResourceSetInfoForResourceSetType = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 184) + 24LL))(
                                          *(_QWORD *)(a1 + 184),
                                          &v6);
    if ( ResourceSetInfoForResourceSetType >= 0 )
    {
      ResourceSetInfoForResourceSetType = ExecutionModel::ResourcePolicyEngineHelper::GetResourceSetInfoForResourceSetType(
                                            v6,
                                            a2,
                                            (__int64)v7);
      if ( ResourceSetInfoForResourceSetType >= 0 )
        ResourceSetInfoForResourceSetType = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 176) + 144LL))(
                                              *(_QWORD *)(a1 + 176),
                                              v7);
    }
  }
  else
  {
    ResourceSetInfoForResourceSetType = -2147467259;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)ResourceSetInfoForResourceSetType;
}
