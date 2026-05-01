/*
 * XREFs of ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x1800186AC
 * Callers:
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x180018924 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 * Callees:
 *     ?erase@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@0@Z @ 0x180003418 (-erase@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApp.c)
 *     ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180013EA0 (-Release@HostResourceInfo@ExecutionModel@@UEAAKXZ.c)
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180018020 (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U-.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::HostResources::RemoveAndDeleteHostResourceInfo(
        ExecutionModel::HostResources *this,
        struct ExecutionModel::HostResourceInfo **a2)
{
  __int64 v3; // rax
  char *v4; // rbx
  __int64 (__fastcall *v5)(ExecutionModel::HostResourceInfo *); // rsi
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 && *a2 )
  {
    v3 = *((_QWORD *)*a2 + 5);
    v4 = (char *)this + 16;
    v8 = 0LL;
    v7 = 0LL;
    v9 = v3;
    utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_EqualRangeImpl<unsigned __int64>(
      (__int64)this + 16,
      (__int64)a2,
      (unsigned __int16 *)&v9,
      &v8,
      &v7,
      v6);
    utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::erase(
      (__int64)v4,
      &v7,
      v8,
      v7);
    v5 = *(__int64 (__fastcall **)(ExecutionModel::HostResourceInfo *))(*(_QWORD *)*a2 + 16LL);
    if ( v5 == ExecutionModel::HostResourceInfo::Release )
      ExecutionModel::HostResourceInfo::Release(*a2);
    else
      v5(*a2);
    *a2 = 0LL;
  }
}
