/*
 * XREFs of ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000FAD4
 * Callers:
 *     ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DAE0 (-ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DC20 (-AcquireMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z.c)
 *     ?CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180045324 (-CompleteAcquireAdditionalResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ @ 0x18000DDEC (-IsLegacy@ResourceSet@ExecutionModel@@AEBA_NXZ.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::ResourceSetMemoryLimitChangedNotification(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2)
{
  int v4; // r14d
  __int64 v5; // rdx
  __int64 v7; // rdi
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( ExecutionModel::ResourceSet::IsLegacy(a2) )
  {
    v7 = *((_QWORD *)this + 14);
    v8 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 56LL))(
           v7,
           *((unsigned int *)a2 + 2),
           &v8);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(char *, _QWORD, __int64))(*((_QWORD *)this + 2) + 24LL))(
        (char *)this + 16,
        *((unsigned int *)a2 + 2),
        v8);
  }
  else
  {
    ExecutionModel::ResourceManager::MemoryLimitNotification(this, *(struct _RM_ACTIVITY_HOST **)(v5 + 1400));
  }
  return (unsigned int)v4;
}
