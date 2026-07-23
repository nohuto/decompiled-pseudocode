/*
 * XREFs of PiGetRelatedDevice @ 0x1403F27F4
 * Callers:
 *     PiControlGetRelatedDevice @ 0x1403F26B4 (PiControlGetRelatedDevice.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C9A8 (PiCMGetRelatedDeviceInstance.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiGetRelatedDevice(__int64 a1, char *a2, _DWORD *a3, int a4)
{
  unsigned int v5; // esi
  __int64 v9; // rax
  void *v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  void *v20; // rax

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
    goto LABEL_28;
  }
  v11 = (__int64 *)v11[1];
  if ( v11 )
  {
    v18 = *((_DWORD *)v11 + 99);
    if ( (v18 & 0x2000) != 0 && *((_DWORD *)v11 + 101) == 24 && (v18 & 0x1000) != 0 )
    {
      do
      {
LABEL_28:
        v11 = (__int64 *)*v11;
        if ( !v11 )
          break;
        v19 = *((_DWORD *)v11 + 99);
        if ( (v19 & 0x2000) == 0 )
          break;
      }
      while ( *((_DWORD *)v11 + 101) == 24 && (v19 & 0x1000) != 0 );
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
      v20 = (void *)PnpDeviceObjectFromDeviceInstance(v11 + 5);
      if ( v20 )
      {
        ObfDereferenceObject(v20);
        break;
      }
    }
    v11 = (__int64 *)*v11;
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
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
