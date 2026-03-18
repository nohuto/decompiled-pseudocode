/*
 * XREFs of ExpRegisterFirmwareTableInformationHandler @ 0x1405BCA4C
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpRegisterFirmwareTableInformationHandler(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rdi
  __int64 *v7; // rax
  char *PoolWithTag; // rax
  __int64 *v9; // rdi
  __int64 **v10; // rax
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  __int64 v14; // rdx
  _QWORD *v15; // rcx

  v4 = 0;
  if ( a3 )
    return (unsigned int)-1073741727;
  if ( !a1 || a2 < 0x18 )
    return (unsigned int)-1073741820;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&ExpFirmwareTableResource, 1u);
  v6 = (_QWORD *)(ExpFirmwareTableProviderListHead - 24);
  v7 = (__int64 *)ExpFirmwareTableProviderListHead;
  if ( &ExpFirmwareTableProviderListHead == (__int64 *)ExpFirmwareTableProviderListHead )
  {
LABEL_7:
    if ( *(_BYTE *)(a1 + 4) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x54465241u);
      if ( PoolWithTag )
      {
        v9 = (__int64 *)(PoolWithTag + 24);
        *(_DWORD *)PoolWithTag = *(_DWORD *)a1;
        *((_QWORD *)PoolWithTag + 1) = *(_QWORD *)(a1 + 8);
        *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(a1 + 16);
        *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 24;
        *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 24;
        ObfReferenceObject(*((PVOID *)PoolWithTag + 2));
        v10 = (__int64 **)qword_140325498;
        *v9 = (__int64)&ExpFirmwareTableProviderListHead;
        v9[1] = (__int64)v10;
        if ( *v10 != &ExpFirmwareTableProviderListHead )
          __fastfail(3u);
        *v10 = v9;
        qword_140325498 = (__int64)v9;
      }
      else
      {
        v4 = -1073741670;
      }
      goto LABEL_11;
    }
    goto LABEL_24;
  }
  while ( *(_DWORD *)v6 != *(_DWORD *)a1 )
  {
    v6 = (_QWORD *)(*v7 - 24);
    v7 = (__int64 *)*v7;
    if ( &ExpFirmwareTableProviderListHead == v7 )
      goto LABEL_7;
  }
  if ( !*(_BYTE *)(a1 + 4) )
  {
    if ( v6[2] == *(_QWORD *)(a1 + 16) )
    {
      v14 = v6[3];
      v15 = (_QWORD *)v6[4];
      if ( *(_QWORD **)(v14 + 8) != v6 + 3 || (_QWORD *)*v15 != v6 + 3 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      ObfDereferenceObject((PVOID)v6[2]);
      ExFreePoolWithTag(v6, 0x54465241u);
      goto LABEL_11;
    }
LABEL_24:
    v4 = -1073741811;
    goto LABEL_11;
  }
  v4 = 0x40000000;
LABEL_11:
  ExReleaseResourceLite(&ExpFirmwareTableResource);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v4;
}
