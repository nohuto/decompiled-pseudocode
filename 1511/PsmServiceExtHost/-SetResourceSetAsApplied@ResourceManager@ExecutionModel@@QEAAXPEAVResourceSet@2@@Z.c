/*
 * XREFs of ?SetResourceSetAsApplied@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x180036330
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180036460 (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?SetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z @ 0x18003676C (-SetAsApplied@ModernActivationResourceInfo@ExecutionModel@@QEAAXPEAVResourceSet@2@@Z.c)
 *     RmpActivityHostOnAppliedResourceSetChange @ 0x180041048 (RmpActivityHostOnAppliedResourceSetChange.c)
 *     RmpActivityHostSetProcessResourceSet @ 0x18004136C (RmpActivityHostSetProcessResourceSet.c)
 */

void __fastcall ExecutionModel::ResourceManager::SetResourceSetAsApplied(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2)
{
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rbx
  char *v6; // rax
  __int64 v7; // rdx
  char **v8; // rcx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // [rsp+20h] [rbp-258h] BYREF
  WCHAR v11[280]; // [rsp+30h] [rbp-248h] BYREF

  v2 = (volatile signed __int32 *)*((_QWORD *)a2 + 175);
  v3 = 0LL;
  v10 = 0LL;
  if ( v2 )
  {
    v3 = v2;
    v10 = v2;
    v6 = (char *)a2 + 1384;
    v7 = *((_QWORD *)a2 + 173);
    v8 = (char **)*((_QWORD *)v6 + 1);
    if ( *(char **)(v7 + 8) != v6 || *v8 != v6 )
      __fastfail(3u);
    *v8 = (char *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    *((_DWORD *)a2 + 344) = 2;
  }
  if ( ExecutionModel::ResourceSet::IsLegacy(a2) )
  {
    if ( !v3 )
    {
      memset_0(v11, 0, 0x228uLL);
      *(_DWORD *)v11 = *((_DWORD *)a2 + 2);
      RmpActivityHostFindByTypeAndIdentifier(1, v11, &v10);
      v3 = v10;
    }
    RmpActivityHostSetProcessResourceSet(v3, a2);
    *((_QWORD *)a2 + 175) = v3;
    QueryUnbiasedInterruptTime((PULONGLONG)v3 + 116);
  }
  else
  {
    v3 = (volatile signed __int32 *)*((_QWORD *)a2 + 175);
    ExecutionModel::ModernActivationResourceInfo::SetAsApplied(
      *((ExecutionModel::ModernActivationResourceInfo **)v3 + 75),
      a2);
  }
  RmpActivityHostOnAppliedResourceSetChange(v9, v3, a2, 0LL);
  ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(this);
}
