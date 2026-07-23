/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x1404AA364
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C9E8 (ExpGetSystemPlatformBinary.c)
 *     ExGetSystemFirmwareTable @ 0x14057EE4C (ExGetSystemFirmwareTable.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1406AB088 (ExEnumerateSystemFirmwareTables.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(unsigned int *Src, char a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edi
  unsigned int *v8; // rbx
  unsigned int *v9; // rsi
  unsigned int v10; // r14d
  unsigned int *PoolWithQuotaTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 (__fastcall *v14)(unsigned int *); // r14
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax

  v7 = 0;
  v8 = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v7 = -1073741820;
    goto LABEL_19;
  }
  v9 = Src;
  v10 = a3 - 16;
  if ( a2 )
  {
    PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x54465241u);
    v8 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      v7 = -1073741670;
      goto LABEL_19;
    }
    memmove(PoolWithQuotaTag, Src, a3);
    v9 = v8;
  }
  v9[3] = v10;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&ExpFirmwareTableResource, 1u);
  v14 = 0LL;
  v15 = ExpFirmwareTableProviderListHead - 24;
  v16 = (__int64 *)ExpFirmwareTableProviderListHead;
  if ( &ExpFirmwareTableProviderListHead != (__int64 *)ExpFirmwareTableProviderListHead )
  {
    while ( *(_DWORD *)v15 != *v9 )
    {
      v15 = *v16 - 24;
      v16 = (__int64 *)*v16;
      if ( &ExpFirmwareTableProviderListHead == v16 )
        goto LABEL_8;
    }
    v14 = *(__int64 (__fastcall **)(unsigned int *))(v15 + 8);
  }
LABEL_8:
  if ( v14 )
    v7 = v14(v9);
  ExReleaseResourceLite(&ExpFirmwareTableResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
  if ( v14 )
  {
    if ( a2 )
    {
      if ( v7 >= 0 )
        memmove(Src + 4, v8 + 4, v8[3]);
      if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
        Src[3] = v8[3];
      v20 = v8[3];
    }
    else
    {
      v20 = v9[3];
    }
    *a4 = v20 + 16;
  }
  else
  {
    v7 = -1073741822;
  }
LABEL_19:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
