/*
 * XREFs of ExpRegisterFirmwareTableInformationHandler @ 0x1405460C0
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpRegisterFirmwareTableInformationHandler(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rdi
  __int64 *v7; // rax
  char *PoolWithTag; // rax
  __int64 *v9; // rdi
  __int64 **v10; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  v3 = 0;
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
        v10 = (__int64 **)qword_1402D62D8;
        *v9 = (__int64)&ExpFirmwareTableProviderListHead;
        v9[1] = (__int64)v10;
        if ( *v10 != &ExpFirmwareTableProviderListHead )
          __fastfail(3u);
        *v10 = v9;
        qword_1402D62D8 = (__int64)v9;
      }
      else
      {
        v3 = -1073741670;
      }
      goto LABEL_11;
    }
    goto LABEL_23;
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
      v12 = v6[3];
      v13 = (_QWORD *)v6[4];
      if ( *(_QWORD **)(v12 + 8) != v6 + 3 || (_QWORD *)*v13 != v6 + 3 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      ObfDereferenceObject((PVOID)v6[2]);
      ExFreePoolWithTag(v6, 0x54465241u);
      goto LABEL_11;
    }
LABEL_23:
    v3 = -1073741811;
    goto LABEL_11;
  }
  v3 = 0x40000000;
LABEL_11:
  ExReleaseResourceLite(&ExpFirmwareTableResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
