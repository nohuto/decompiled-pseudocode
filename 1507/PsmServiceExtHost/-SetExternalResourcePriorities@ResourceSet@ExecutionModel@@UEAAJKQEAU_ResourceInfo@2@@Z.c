/*
 * XREFs of ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180010470
 * Callers:
 *     ?ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180014B60 (-ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800052E0 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x180012D74 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@_N@.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::SetExternalResourcePriorities(
        ExecutionModel::ResourceSet *this,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  __int64 v3; // rdi
  struct ExecutionModel::_ResourceInfo *v4; // rbx
  int v6; // ecx
  struct ExecutionModel::_ResourceInfo *i; // rax
  struct ExecutionModel::ResourceManager *v8; // rcx
  struct _RM_ACTIVITY_HOST *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  struct _RM_ACTIVITY_HOST *v13; // rdx
  int v14; // ebx

  v3 = a2;
  v4 = a3;
  if ( a2 && a3 )
  {
    v6 = 0;
    for ( i = a3; *(_DWORD *)i <= 0x2Fu; i = (struct ExecutionModel::_ResourceInfo *)((char *)i + 24) )
    {
      if ( ++v6 >= a2 )
      {
        RtlEnterCriticalSection(&RmpGlobalLock);
        v9 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 4);
        if ( v9 )
          ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(v8, v3, v4, v9);
        if ( (_DWORD)v3 )
        {
          v10 = v3;
          do
          {
            v11 = *(int *)v4;
            v12 = *((_DWORD *)v4 + 4);
            v4 = (struct ExecutionModel::_ResourceInfo *)((char *)v4 + 24);
            *((_DWORD *)this + v11 + 44) = v12;
            --v10;
          }
          while ( v10 );
        }
        v13 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 4);
        if ( !v13
          || (v14 = ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
                      *((ExecutionModel::ResourceManager **)this - 168),
                      v13,
                      0),
              v14 >= 0) )
        {
          SubmitThreadpoolWork(*(PTP_WORK *)(*((_QWORD *)this - 168) + 256LL));
          v14 = 0;
        }
        RtlLeaveCriticalSection(&RmpGlobalLock);
        return (unsigned int)v14;
      }
    }
  }
  return (unsigned int)-2147024809;
}
