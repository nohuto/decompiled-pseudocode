/*
 * XREFs of ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x18000ABC0
 * Callers:
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x180009850 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003F30 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     ?AcquireLockExclusive@ModernResourceManagerProxy@@IEAAXXZ @ 0x180005A24 (-AcquireLockExclusive@ModernResourceManagerProxy@@IEAAXXZ.c)
 *     ?GetAppMemoryUsageLevel@ModernResourceManagerProxy@@IEAA?AW4AppMemoryUsageLevel@System@Windows@@W4_RM_COMMIT_LEVEL@@@Z @ 0x18000AB68 (-GetAppMemoryUsageLevel@ModernResourceManagerProxy@@IEAA-AW4AppMemoryUsageLevel@System@Windows@@.c)
 */

__int64 __fastcall ModernResourceManagerProxy::GetMemoryUsageLevel(
        ModernResourceManagerProxy *this,
        enum Windows::System::AppMemoryUsageLevel *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // ebx
  int v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF
  int v11; // [rsp+6Ch] [rbp+24h]

  ModernResourceManagerProxy::AcquireLockExclusive(this);
  v4 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v4 >= 0 )
  {
    v8 = 8;
    v6 = NtQueryWnfStateData((char *)this + 40, 0LL, 0LL, &v9, &v10, &v8);
    if ( v6 >= 0 )
    {
      *(_DWORD *)a2 = ModernResourceManagerProxy::GetAppMemoryUsageLevel(v5, v11);
      v4 = 0;
    }
    else
    {
      v4 = v6 | 0x10000000;
    }
  }
  *((_DWORD *)this + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 72);
  return (unsigned int)v4;
}
