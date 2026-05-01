/*
 * XREFs of ?SetExternalResourcePriorities@ResourceSet@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x18000E600
 * Callers:
 *     ?ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z @ 0x180013A20 (-ReduceExternalResourcePriorities@ResourceSetImpl@ExecutionModel@@UEAAJKQEAU_ResourceInfo@2@@Z.c)
 * Callees:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@Z @ 0x1800113A8 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@_N@.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180020270 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::SetExternalResourcePriorities(
        ExecutionModel::ResourceSet *this,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  struct ExecutionModel::_ResourceInfo *v5; // rdi
  int v7; // ecx
  struct ExecutionModel::_ResourceInfo *i; // rax
  struct ExecutionModel::ResourceManager *v9; // rcx
  struct _RM_ACTIVITY_HOST *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  struct _RM_ACTIVITY_HOST *v14; // rdx

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
        v10 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 4);
        if ( v10 )
          ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(v9, v4, v5, v10);
        if ( (_DWORD)v4 )
        {
          v11 = v4;
          do
          {
            v12 = *(int *)v5;
            v13 = *((_DWORD *)v5 + 4);
            v5 = (struct ExecutionModel::_ResourceInfo *)((char *)v5 + 24);
            *((_DWORD *)this + v12 + 46) = v13;
            --v11;
          }
          while ( v11 );
        }
        v14 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 4);
        if ( v14 )
          ExecutionModel::ResourceManager::ApplyExternalResourcePriorities(
            *((ExecutionModel::ResourceManager **)this - 168),
            v14,
            0);
        SubmitThreadpoolWork(*(PTP_WORK *)(*((_QWORD *)this - 168) + 272LL));
        RtlLeaveCriticalSection(&RmpGlobalLock);
        return v3;
      }
    }
  }
  return (unsigned int)-2147024809;
}
