/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSetImpl@ExecutionModel@@UEAAJW4Enum@ResourceSetType@2@@Z @ 0x18004EB10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800365C8 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourcePolicyStore@2@W4Enum@ResourceSetType@2@PEAU_ResourceSetInfo@2@@Z @ 0x18004E93C (-GetResourceSetInfoForResourceSetType@ResourcePolicyEngineHelper@ExecutionModel@@SAJPEAUIResourc.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::NotifyPendingResourceSetTransition(__int64 a1, signed int a2)
{
  __int64 v4; // rax
  int ResourceSetInfoForResourceSetType; // esi
  __int64 v7; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v8[368]; // [rsp+30h] [rbp-198h] BYREF

  v7 = 0LL;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v8);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
    goto LABEL_10;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1) )
    goto LABEL_10;
  v4 = *(_QWORD *)(a1 + 160);
  if ( !v4 )
    goto LABEL_10;
  if ( *(_QWORD *)(v4 + 184) )
  {
    ResourceSetInfoForResourceSetType = 0;
    goto LABEL_11;
  }
  if ( *(_QWORD *)(a1 + 184) )
  {
    ResourceSetInfoForResourceSetType = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 192) + 24LL))(
                                          *(_QWORD *)(a1 + 192),
                                          &v7);
    if ( ResourceSetInfoForResourceSetType >= 0 )
    {
      ResourceSetInfoForResourceSetType = ExecutionModel::ResourcePolicyEngineHelper::GetResourceSetInfoForResourceSetType(
                                            v7,
                                            a2,
                                            (__int64)v8);
      if ( ResourceSetInfoForResourceSetType >= 0 )
        ResourceSetInfoForResourceSetType = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 184) + 144LL))(
                                              *(_QWORD *)(a1 + 184),
                                              v8);
    }
  }
  else
  {
LABEL_10:
    ResourceSetInfoForResourceSetType = -2147467259;
  }
LABEL_11:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)ResourceSetInfoForResourceSetType;
}
