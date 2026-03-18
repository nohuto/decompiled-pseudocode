/*
 * XREFs of PiGetRelatedDevice @ 0x1404F2758
 * Callers:
 *     PiCMGetRelatedDeviceInstance @ 0x1404F1C44 (PiCMGetRelatedDeviceInstance.c)
 *     PiControlGetRelatedDevice @ 0x1404F2614 (PiControlGetRelatedDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiGetRelatedDevice(__int64 a1, char *a2, _DWORD *a3, int a4)
{
  unsigned int v5; // esi
  _QWORD *v9; // rax
  void *v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int v15; // eax
  _QWORD *v16; // rax
  int v17; // eax

  v5 = 0;
  PpDevNodeLockTree(0);
  v9 = PnpDeviceObjectFromDeviceInstance(a1);
  v10 = v9;
  if ( !v9 )
    goto LABEL_13;
  v11 = *(__int64 **)(v9[39] + 40LL);
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
    goto LABEL_20;
  }
  v11 = (__int64 *)v11[1];
  if ( v11 )
  {
    v15 = *((_DWORD *)v11 + 99);
    if ( (v15 & 0x2000) != 0 && *((_DWORD *)v11 + 101) == 24 && (v15 & 0x1000) != 0 )
    {
      do
      {
LABEL_20:
        v11 = (__int64 *)*v11;
        if ( !v11 )
          break;
        v17 = *((_DWORD *)v11 + 99);
        if ( (v17 & 0x2000) == 0 )
          break;
      }
      while ( *((_DWORD *)v11 + 101) == 24 && (v17 & 0x1000) != 0 );
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
      v16 = PnpDeviceObjectFromDeviceInstance((__int64)(v11 + 5));
      if ( v16 )
      {
        ObfDereferenceObject(v16);
        break;
      }
    }
    v11 = (__int64 *)*v11;
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
  PpDevNodeUnlockTree(0);
  if ( v10 )
    ObfDereferenceObject(v10);
  return v5;
}
