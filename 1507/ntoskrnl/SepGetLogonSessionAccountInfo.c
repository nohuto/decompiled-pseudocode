/*
 * XREFs of SepGetLogonSessionAccountInfo @ 0x1405A1C10
 * Callers:
 *     AdtpBuildLogonIdStrings @ 0x1405A1B68 (AdtpBuildLogonIdStrings.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepGetLogonSessionAccountInfo(_DWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // r10d
  int v10; // edi
  __int64 v11; // rbx
  struct _ERESOURCE *v12; // r12
  __int64 *v13; // rbx
  PVOID v14; // rsi
  PVOID v15; // rax
  PVOID PoolWithTag; // rax
  __int64 v17; // r14
  struct _KTHREAD *v18; // rdx
  __int16 v19; // ax
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  void *v23; // rcx
  void *v24; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = *a1 & 0xF;
  v10 = 0;
  --CurrentThread->KernelApcDisable;
  v11 = v5;
  v12 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceSharedLite(v12, 1u);
  v13 = *(__int64 **)(SepLogonSessions + 8 * v11);
  if ( v13 )
  {
    while ( *a1 != *((_DWORD *)v13 + 2) || a1[1] != *((_DWORD *)v13 + 3) )
    {
      v13 = (__int64 *)*v13;
      if ( !v13 )
        goto LABEL_18;
    }
    v14 = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)(v13 + 7);
    *(_OWORD *)a3 = *(_OWORD *)(v13 + 9);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    if ( v13[8]
      && (v15 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v13 + 29), 0x6B416553u),
          (*(_QWORD *)(a2 + 8) = v15) == 0LL) )
    {
      v10 = -1073741670;
    }
    else if ( v13[10] )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v13 + 37), 0x6B416553u);
      *(_QWORD *)(a3 + 8) = PoolWithTag;
      if ( !PoolWithTag )
        v10 = -1073741670;
    }
    v17 = v13[6];
    if ( v10 < 0 )
      goto LABEL_28;
    if ( a4 )
    {
      if ( v17 )
      {
        v14 = ExAllocatePoolWithTag(
                PagedPool,
                4 * *(unsigned __int8 *)(**(_QWORD **)(v17 + 152) + 1LL) + 8,
                0x69536553u);
        if ( !v14 )
          v10 = -1073741670;
      }
    }
    if ( v10 < 0 )
    {
LABEL_28:
      v23 = *(void **)(a2 + 8);
      if ( v23 )
        ExFreePoolWithTag(v23, 0);
      v24 = *(void **)(a3 + 8);
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
    }
    else
    {
      memmove(*(void **)(a2 + 8), (const void *)v13[8], *((unsigned __int16 *)v13 + 29));
      memmove(*(void **)(a3 + 8), (const void *)v13[10], *((unsigned __int16 *)v13 + 37));
      if ( v14 )
      {
        memmove(v14, **(const void ***)(v17 + 152), 4 * *(unsigned __int8 *)(**(_QWORD **)(v17 + 152) + 1LL) + 8);
        *a4 = v14;
      }
    }
    ExReleaseResourceLite(v12);
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return (unsigned int)v10;
  }
  else
  {
LABEL_18:
    ExReleaseResourceLite(v12);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225567LL;
  }
}
