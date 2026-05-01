/*
 * XREFs of ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x180037EC8
 * Callers:
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000FFB0 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x1800401F0 (-CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x180040DB8 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 * Callees:
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x180023A90 (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036734 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ResourceSetMemoryLimitChangedNotification(
        ExecutionModel::ResourceManager *this,
        struct _RM_ACTIVITY_HOST **a2)
{
  int v2; // ebp
  __int64 v5; // rdi
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    if ( ExecutionModel::ResourceSet::IsLegacy((ExecutionModel::ResourceSet *)a2) )
    {
      v5 = *((_QWORD *)this + 14);
      v7 = 0LL;
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 56LL))(
             v5,
             *((unsigned int *)a2 + 2),
             &v7);
      if ( v2 >= 0 )
        (*(void (__fastcall **)(char *, _QWORD, __int64))(*((_QWORD *)this + 2) + 24LL))(
          (char *)this + 16,
          *((unsigned int *)a2 + 2),
          v7);
    }
    else
    {
      RtlEnterCriticalSection(&RmpGlobalLock);
      ExecutionModel::ResourceManager::MemoryLimitNotification(this, a2[175]);
      RtlLeaveCriticalSection(&RmpGlobalLock);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v2;
}
