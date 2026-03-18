/*
 * XREFs of ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C003673C
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0065000 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C0065790 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryRemovalRelations(const void *a1, PVOID *a2)
{
  unsigned int v4; // ebx
  __int64 DeviceExtension; // rdi
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // r13
  __int64 v10; // rcx
  _QWORD **v11; // rsi
  int v12; // eax
  _QWORD *v13; // rcx
  SIZE_T v14; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  unsigned int *v17; // r14
  _QWORD *i; // r14
  void *v19; // rbp
  _QWORD *v20; // [rsp+28h] [rbp-30h]

  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)a1);
  if ( !*(_QWORD *)(DeviceExtension + 704) )
    return 3221225485LL;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v8 = *(_QWORD *)(DeviceExtension + 896);
  v9 = v7;
  if ( v8 )
    v10 = *(_QWORD *)(v8 + 72);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v11 = (_QWORD **)(v10 + 48);
    v12 = 0;
    v13 = *(_QWORD **)(v10 + 48);
    while ( v13 != v11 )
    {
      v13 = (_QWORD *)*v13;
      ++v12;
    }
    if ( *a2 )
      v12 += *(_DWORD *)*a2;
    v14 = 8LL * (unsigned int)(v12 - 1) + 16;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x44706341u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      v17 = (unsigned int *)*a2;
      if ( *a2 )
      {
        memmove(PoolWithTag + 2, v17 + 2, 8LL * *v17);
        *v16 = *v17;
      }
      else
      {
        memset(PoolWithTag, 0, v14);
      }
      DbgPrintEx(0x18u, 0, "RemovalRelation: filling list for %p\n", a1);
      for ( i = *v11; i != v11; i = (_QWORD *)*i )
      {
        v20 = (_QWORD *)*(i - 1);
        v19 = (void *)v20[91];
        DbgPrintEx(0x18u, 0, "RemovalRelation: [%d] added PDO %p from devext %p\n", *v16, v19, v20);
        if ( v19 && ObReferenceObjectByPointer(v19, 0, 0LL, 0) >= 0 )
          *(_QWORD *)&v16[2 * (*v16)++ + 2] = v19;
      }
      if ( *a2 )
        ExFreePoolWithTag(*a2, 0);
      *a2 = v16;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073741637;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v9);
  return v4;
}
