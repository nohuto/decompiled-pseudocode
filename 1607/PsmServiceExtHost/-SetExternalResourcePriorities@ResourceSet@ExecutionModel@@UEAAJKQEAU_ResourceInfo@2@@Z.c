/*
 * XREFs of ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x1800124A0
 * Callers:
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x1800181FC (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004C9C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000FC80 (-CheckPendingExternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BB48 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::SetExternalResourcePriorities(
        struct _RM_ACTIVITY_HOST **this,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  struct ExecutionModel::_ResourceInfo *v5; // rdi
  int v7; // ecx
  struct ExecutionModel::_ResourceInfo *i; // rax
  struct ExecutionModel::ResourceManager *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  struct _RM_ACTIVITY_HOST *v13; // rdx

  v3 = 0;
  v4 = a2;
  v5 = a3;
  if ( a2 && a3 )
  {
    v7 = 0;
    for ( i = a3; *(_DWORD *)i <= 0x2Fu; i = (struct ExecutionModel::_ResourceInfo *)((char *)i + 24) )
    {
      if ( ++v7 >= a2 )
      {
        RtlEnterCriticalSection(&RmpGlobalLock);
        if ( this[4] )
          ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(v9, 2u, v4, v5, this[4]);
        if ( (_DWORD)v4 )
        {
          v10 = v4;
          do
          {
            v11 = *(int *)v5;
            v12 = *((_DWORD *)v5 + 4);
            v5 = (struct ExecutionModel::_ResourceInfo *)((char *)v5 + 24);
            *((_DWORD *)this + v11 + 52) = v12;
            --v10;
          }
          while ( v10 );
        }
        v13 = this[4];
        if ( v13 )
          ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(*(this - 168), v13);
        ExecutionModel::ResourceManager::CheckPendingExternalResourceRequestsAsync(*(this - 168));
        RtlLeaveCriticalSection(&RmpGlobalLock);
        return v3;
      }
    }
  }
  return (unsigned int)-2147024809;
}
