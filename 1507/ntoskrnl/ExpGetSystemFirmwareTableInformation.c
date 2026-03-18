/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x14052DF08
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     ExpGetSystemPlatformBinary @ 0x1405BF130 (ExpGetSystemPlatformBinary.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(unsigned int *Src, char a2, unsigned int a3, _DWORD *a4)
{
  int v6; // esi
  unsigned int *v7; // rbx
  unsigned int *v8; // r14
  unsigned int v9; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 (__fastcall *v11)(unsigned int *); // r15
  __int64 v12; // rax
  __int64 *v13; // rcx
  struct _KTHREAD *v14; // rdx
  __int16 v15; // cx
  unsigned int v16; // eax
  unsigned int *PoolWithQuotaTag; // rax

  v6 = 0;
  v7 = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v6 = -1073741820;
    goto LABEL_14;
  }
  v8 = Src;
  v9 = a3 - 16;
  if ( a2 )
  {
    PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x54465241u);
    v7 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      v6 = -1073741670;
      goto LABEL_14;
    }
    memmove(PoolWithQuotaTag, Src, a3);
    v8 = v7;
  }
  v8[3] = v9;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&ExpFirmwareTableResource, 1u);
  v11 = 0LL;
  v12 = ExpFirmwareTableProviderListHead - 24;
  v13 = (__int64 *)ExpFirmwareTableProviderListHead;
  if ( &ExpFirmwareTableProviderListHead != (__int64 *)ExpFirmwareTableProviderListHead )
  {
    while ( *(_DWORD *)v12 != *v8 )
    {
      v12 = *v13 - 24;
      v13 = (__int64 *)*v13;
      if ( &ExpFirmwareTableProviderListHead == v13 )
        goto LABEL_6;
    }
    v11 = *(__int64 (__fastcall **)(unsigned int *))(v12 + 8);
  }
LABEL_6:
  if ( v11 )
    v6 = v11(v8);
  ExReleaseResourceLite(&ExpFirmwareTableResource);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v11 )
  {
    if ( a2 )
    {
      if ( v6 >= 0 )
        memmove(Src + 4, v7 + 4, v7[3]);
      if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
        Src[3] = v7[3];
      v16 = v7[3];
    }
    else
    {
      v16 = v8[3];
    }
    *a4 = v16 + 16;
  }
  else
  {
    v6 = -1073741822;
  }
LABEL_14:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x54465241u);
  return (unsigned int)v6;
}
