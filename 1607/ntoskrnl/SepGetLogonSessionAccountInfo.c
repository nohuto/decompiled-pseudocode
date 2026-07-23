/*
 * XREFs of SepGetLogonSessionAccountInfo @ 0x14056B904
 * Callers:
 *     AdtpBuildLogonIdStrings @ 0x14056B85C (AdtpBuildLogonIdStrings.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepGetLogonSessionAccountInfo(_DWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  unsigned int v10; // r10d
  __int64 v11; // rbx
  struct _ERESOURCE *v12; // r13
  __int64 *v13; // rbx
  PVOID v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID v20; // rax
  PVOID PoolWithTag; // rax
  void *v22; // rcx
  void *v23; // rcx

  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  v10 = (unsigned int)(1529154084 * *a1) >> 28;
  --CurrentThread->KernelApcDisable;
  v11 = v10;
  v12 = &SepRmDbLock + (v10 & 3);
  ExAcquireResourceSharedLite(v12, 1u);
  v13 = *(__int64 **)(SepLogonSessions + 8 * v11);
  if ( v13 )
  {
    while ( *a1 != *((_DWORD *)v13 + 2) || a1[1] != *((_DWORD *)v13 + 3) )
    {
      v13 = (__int64 *)*v13;
      if ( !v13 )
        goto LABEL_13;
    }
    v14 = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)(v13 + 7);
    *(_OWORD *)a3 = *(_OWORD *)(v13 + 9);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    if ( !v13[8]
      || (v20 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v13 + 29), 0x6B416553u),
          (*(_QWORD *)(a2 + 8) = v20) != 0LL) )
    {
      if ( v13[10] )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v13 + 37), 0x6B416553u);
        *(_QWORD *)(a3 + 8) = PoolWithTag;
        if ( !PoolWithTag )
          v9 = -1073741670;
      }
    }
    else
    {
      v9 = -1073741670;
    }
    v15 = v13[6];
    if ( v9 < 0 )
      goto LABEL_23;
    if ( a4 )
    {
      if ( v15 )
      {
        v14 = ExAllocatePoolWithTag(
                PagedPool,
                4 * *(unsigned __int8 *)(**(_QWORD **)(v15 + 152) + 1LL) + 8,
                0x69536553u);
        if ( !v14 )
          v9 = -1073741670;
      }
    }
    if ( v9 < 0 )
    {
LABEL_23:
      v22 = *(void **)(a2 + 8);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      v23 = *(void **)(a3 + 8);
      if ( v23 )
        ExFreePoolWithTag(v23, 0);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
    }
    else
    {
      memmove(*(void **)(a2 + 8), (const void *)v13[8], *((unsigned __int16 *)v13 + 29));
      memmove(*(void **)(a3 + 8), (const void *)v13[10], *((unsigned __int16 *)v13 + 37));
      if ( v14 )
      {
        memmove(v14, **(const void ***)(v15 + 152), 4 * *(unsigned __int8 *)(**(_QWORD **)(v15 + 152) + 1LL) + 8);
        *a4 = v14;
      }
    }
  }
  else
  {
LABEL_13:
    v9 = -1073741729;
  }
  ExReleaseResourceLite(v12);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  return (unsigned int)v9;
}
