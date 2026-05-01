/*
 * XREFs of ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18003D120
 * Callers:
 *     <none>
 * Callees:
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180002A70 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::MemoryLimitNotification(
        ExecutionModel::ResourceManager *this,
        wchar_t *a2,
        union _RM_SID *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v7; // rdx
  WCHAR *v8; // rcx
  wchar_t *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  int v20; // ebx
  int v21; // ebx
  PVOID P; // [rsp+30h] [rbp-498h] BYREF
  wchar_t Destination[280]; // [rsp+40h] [rbp-488h] BYREF
  WCHAR v25[280]; // [rsp+270h] [rbp-258h] BYREF

  P = 0LL;
  RmpPsmAppInstanceIdInitializeFromCStr(Destination, a2, a3, a4, a5, a6);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v7 = 4LL;
  v8 = v25;
  v9 = Destination;
  do
  {
    v10 = *((_OWORD *)v9 + 1);
    *(_OWORD *)v8 = *(_OWORD *)v9;
    v11 = *((_OWORD *)v9 + 2);
    *((_OWORD *)v8 + 1) = v10;
    v12 = *((_OWORD *)v9 + 3);
    *((_OWORD *)v8 + 2) = v11;
    v13 = *((_OWORD *)v9 + 4);
    *((_OWORD *)v8 + 3) = v12;
    v14 = *((_OWORD *)v9 + 5);
    *((_OWORD *)v8 + 4) = v13;
    v15 = *((_OWORD *)v9 + 6);
    *((_OWORD *)v8 + 5) = v14;
    v16 = *((_OWORD *)v9 + 7);
    v9 += 64;
    *((_OWORD *)v8 + 6) = v15;
    v8 += 64;
    *((_OWORD *)v8 - 1) = v16;
    --v7;
  }
  while ( v7 );
  v17 = *(_OWORD *)v9;
  v18 = *((_OWORD *)v9 + 1);
  v19 = *((_QWORD *)v9 + 4);
  *(_OWORD *)v8 = v17;
  *((_OWORD *)v8 + 1) = v18;
  *((_QWORD *)v8 + 4) = v19;
  v20 = RmpActivityHostFindByTypeAndIdentifier(0, v25, (volatile signed __int32 **)&P);
  if ( v20 >= 0 )
  {
    v21 = ExecutionModel::ResourceManager::MemoryLimitNotification(
            (ExecutionModel::ResourceManager *)((char *)this - 24),
            (struct _RM_ACTIVITY_HOST *)P);
    if ( v21 >= 0 )
      v21 = 0;
  }
  else
  {
    v21 = v20 | 0x10000000;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( P )
    RmpObjectRelease((volatile signed __int32 *)P);
  return (unsigned int)v21;
}
