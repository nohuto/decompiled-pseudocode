/*
 * XREFs of DrvDbOpenContext @ 0x1405242D0
 * Callers:
 *     PiDrvDbInit @ 0x1405250C8 (PiDrvDbInit.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     DrvDbLoadDatabaseNode @ 0x14044473C (DrvDbLoadDatabaseNode.c)
 *     DrvDbRegisterObjects @ 0x14052440C (DrvDbRegisterObjects.c)
 *     DrvDbCreateDatabaseNode @ 0x140524640 (DrvDbCreateDatabaseNode.c)
 *     DrvDbDestroyDatabaseNode @ 0x14069C9E4 (DrvDbDestroyDatabaseNode.c)
 */

__int64 DrvDbOpenContext()
{
  __int64 v0; // r14
  __int64 v1; // rsi
  int v2; // edi
  PVOID PoolWithTag; // rax
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rax
  __int64 v6; // r8
  int DatabaseNode; // edi
  int v8; // eax
  void *v10; // rsi
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v0 = *(_QWORD *)&PiPnpRtlCtx;
  v1 = 0LL;
  PiDrvDbCtx = 0LL;
  v11 = 0LL;
  v2 = ***(_DWORD ***)&PiPnpRtlCtx;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x42444450u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    *(_QWORD *)v4 = v0;
    *(_DWORD *)(v4 + 8) = v2;
    *(_DWORD *)(v4 + 12) = -805306368;
    *(_QWORD *)(v4 + 24) = v4 + 16;
    *(_QWORD *)(v4 + 16) = v4 + 16;
    v5 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x42444450u);
    *(_QWORD *)(v4 + 48) = v5;
    if ( v5 )
    {
      DatabaseNode = ExInitializeResourceLite(v5);
      if ( DatabaseNode < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v4 + 48), 0);
        *(_QWORD *)(v4 + 48) = 0LL;
      }
    }
    else
    {
      DatabaseNode = -1073741670;
    }
    if ( DatabaseNode >= 0 )
    {
      v8 = DrvDbCreateDatabaseNode(v4, L"SYSTEM", 1LL, L"DriverDatabase", 3, 0LL, 0LL, &v11);
      v1 = v11;
      DatabaseNode = v8;
      if ( v8 >= 0 )
      {
        DatabaseNode = DrvDbLoadDatabaseNode((_QWORD **)v4, v11);
        if ( DatabaseNode >= 0 )
        {
          DatabaseNode = DrvDbRegisterObjects(v0, v4);
          if ( DatabaseNode >= 0 )
          {
            PiDrvDbCtx = v4;
            v4 = 0LL;
          }
        }
      }
    }
    if ( v4 )
    {
      if ( v1 )
        DrvDbDestroyDatabaseNode(v4, v1, v6);
      v10 = *(void **)(v4 + 48);
      if ( v10 )
      {
        ExDeleteResourceLite(*(PERESOURCE *)(v4 + 48));
        ExFreePoolWithTag(v10, 0);
      }
      ExFreePoolWithTag((PVOID)v4, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DatabaseNode;
}
