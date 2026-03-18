/*
 * XREFs of SepUpdateLogonSessionTrack @ 0x14053D66C
 * Callers:
 *     SepRmAddLogonSessionInfoWrkr @ 0x14053D650 (SepRmAddLogonSessionInfoWrkr.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepUpdateLogonSessionTrack(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // edx
  unsigned int v4; // ebp
  __int64 v5; // rbx
  struct _ERESOURCE *v6; // rsi
  __int64 *v7; // rbx
  void *v8; // rcx
  char *PoolWithTag; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  struct _KTHREAD *v12; // rdx
  __int16 v13; // ax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax

  CurrentThread = KeGetCurrentThread();
  v2 = *(_DWORD *)a1 & 0xF;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = v2;
  v6 = &SepRmDbLock + (v2 & 3);
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = *(__int64 **)(SepLogonSessions + 8 * v5);
  if ( v7 )
  {
    while ( *(_DWORD *)a1 != *((_DWORD *)v7 + 2) || *(_DWORD *)(a1 + 4) != *((_DWORD *)v7 + 3) )
    {
      v7 = (__int64 *)*v7;
      if ( !v7 )
        goto LABEL_16;
    }
    v8 = (void *)v7[8];
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      v7[8] = 0LL;
      v7[10] = 0LL;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            PagedPool,
                            *(unsigned __int16 *)(a1 + 24) + 2 + ((*(unsigned __int16 *)(a1 + 8) + 9) & 0xFFFFFFF8),
                            0x734C6553u);
    if ( PoolWithTag )
    {
      v7[8] = (__int64)PoolWithTag;
      v7[10] = (__int64)&PoolWithTag[((unsigned int)*(unsigned __int16 *)(a1 + 8) + 2 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
      memmove(PoolWithTag, (const void *)(a1 + 40), *(unsigned __int16 *)(a1 + 8));
      v10 = *(unsigned __int16 *)(a1 + 8);
      *((_WORD *)v7 + 28) = v10;
      *((_WORD *)v7 + 29) = v10 + 2;
      *(_WORD *)(v7[8] + 2 * (v10 >> 1)) = 0;
      memmove(
        (void *)v7[10],
        (const void *)(((*(unsigned __int16 *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + a1 + 40),
        *(unsigned __int16 *)(a1 + 24));
      v11 = *(unsigned __int16 *)(a1 + 24);
      *((_WORD *)v7 + 36) = v11;
      *((_WORD *)v7 + 37) = v11 + 2;
      *(_WORD *)(v7[10] + 2 * (v11 >> 1)) = 0;
    }
    else
    {
      v4 = -1073741670;
    }
    ExReleaseResourceLite(v6);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v4;
  }
  else
  {
LABEL_16:
    ExReleaseResourceLite(v6);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225567LL;
  }
}
