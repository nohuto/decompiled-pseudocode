/*
 * XREFs of PiGetRelatedDevice @ 0x1404E1314
 * Callers:
 *     PiControlGetRelatedDevice @ 0x1404E11FC (PiControlGetRelatedDevice.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405506E4 (PiCMGetRelatedDeviceInstance.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiGetRelatedDevice(__int64 a1, char *a2, _DWORD *a3, int a4)
{
  unsigned int v5; // esi
  __int64 v9; // rax
  void *v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // rbp
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  int v17; // eax
  int v18; // eax
  void *v19; // rax

  v5 = 0;
  PpDevNodeLockTree(0LL);
  v9 = PnpDeviceObjectFromDeviceInstance(a1);
  v10 = (void *)v9;
  if ( !v9 )
    goto LABEL_13;
  v11 = *(__int64 **)(*(_QWORD *)(v9 + 312) + 40LL);
  if ( !v11 || (unsigned int)(*((_DWORD *)v11 + 75) - 787) <= 1 )
    goto LABEL_13;
  if ( a4 == 1 )
  {
    v11 = (__int64 *)v11[2];
    goto LABEL_6;
  }
  if ( a4 != 2 )
  {
    if ( a4 != 3 )
    {
      v5 = -1073741811;
      goto LABEL_10;
    }
    goto LABEL_29;
  }
  v11 = (__int64 *)v11[1];
  if ( v11 )
  {
    v17 = *((_DWORD *)v11 + 99);
    if ( (v17 & 0x2000) != 0 && *((_DWORD *)v11 + 101) == 24 && (v17 & 0x1000) != 0 )
    {
      do
      {
LABEL_29:
        v11 = (__int64 *)*v11;
        if ( !v11 )
          break;
        v18 = *((_DWORD *)v11 + 99);
        if ( (v18 & 0x2000) == 0 )
          break;
      }
      while ( *((_DWORD *)v11 + 101) == 24 && (v18 & 0x1000) != 0 );
LABEL_6:
      if ( a4 == 1 )
        goto LABEL_7;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  while ( v11 )
  {
    if ( v11[6] )
    {
      v19 = (void *)PnpDeviceObjectFromDeviceInstance(v11 + 5);
      if ( v19 )
      {
        ObfDereferenceObject(v19);
        break;
      }
    }
    v11 = (__int64 *)*v11;
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
LABEL_7:
  if ( !v11 )
  {
LABEL_13:
    v5 = -1073741810;
    goto LABEL_10;
  }
  v12 = *((unsigned __int16 *)v11 + 20);
  if ( *a3 <= (unsigned int)v12 )
  {
    v5 = -1073741789;
    *a3 = v12 + 2;
  }
  else
  {
    memmove(a2, (const void *)v11[6], *((unsigned __int16 *)v11 + 20));
    *(_WORD *)&a2[v12] = 0;
    *a3 = v12;
  }
LABEL_10:
  PpDevNodeUnlockTree(0LL);
  if ( v10 )
    ObfDereferenceObject(v10);
  return v5;
}
