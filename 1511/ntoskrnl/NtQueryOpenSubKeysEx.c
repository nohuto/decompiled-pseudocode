/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x1405DBD48
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // bl
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  _DWORD *v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // rcx
  _DWORD *PoolWithTag; // rax
  char v17; // r8
  unsigned int *v18; // rdi
  unsigned int v19; // edx
  PVOID Object; // [rsp+40h] [rbp-D8h] BYREF
  _DWORD v21[14]; // [rsp+48h] [rbp-D0h] BYREF
  _DWORD v22[36]; // [rsp+80h] [rbp-98h] BYREF

  v6 = BufferLength;
  Object = 0LL;
  v21[0] = 0;
  memset(&v21[2], 0, 0x28uLL);
  memset(v22, 0, 136);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    if ( (unsigned int)v6 >= 8 )
    {
      if ( (v6 & 1) == 0 )
      {
        v21[0] = v6;
        if ( PreviousMode == 1 )
        {
          v13 = RequiredSize;
          if ( (unsigned __int64)RequiredSize >= MmUserProbeAddress )
            v13 = (_DWORD *)MmUserProbeAddress;
          *v13 = *v13;
          ProbeForWrite(Buffer, v6, 4u);
        }
        v12 = ObReferenceObjectByNameEx(
                (__int64)TargetKey,
                v11,
                0x20019u,
                (struct _OBJECT_TYPE *)CmKeyObjectType,
                PreviousMode,
                v22,
                &Object);
        if ( v12 < 0 )
          goto LABEL_27;
        CmpLockRegistryExclusive();
        v14 = (__int64 *)Object;
        v15 = *((_QWORD *)Object + 1);
        if ( (*(_DWORD *)(v15 + 4) & 0x20000) != 0 )
        {
          v12 = (*((_BYTE *)Object + 48) & 1) != 0 ? -1073740763 : -1073741444;
          CmpUnlockRegistry();
          ObfDereferenceObject(v14);
          goto LABEL_27;
        }
        if ( *(_DWORD *)(v15 + 40) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 64LL) + 36LL) )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20204D43u);
          *(_QWORD *)&v21[2] = PoolWithTag;
          if ( PoolWithTag )
          {
            *PoolWithTag = 0;
            v21[4] = 8;
            v21[6] = 8;
            *(_QWORD *)&v21[10] = (char *)PoolWithTag + v6;
            *(_QWORD *)&v21[8] = v14;
            v21[5] = 0;
            CmpSearchForOpenSubKeys(v14[1], 2, v17, v21);
            v12 = v21[5];
            CmpUnlockRegistry();
            ObfDereferenceObject(v14);
            v18 = *(unsigned int **)&v21[2];
            if ( v12 >= 0 )
            {
              v19 = 0;
              if ( **(_DWORD **)&v21[2] )
              {
                do
                  *(_QWORD *)&v18[6 * ++v19] += (_BYTE *)Buffer - (_BYTE *)v18;
                while ( v19 < *v18 );
              }
            }
            *RequiredSize = v21[4];
            if ( v12 < 0 )
              *(_DWORD *)Buffer = *v18;
            else
              memmove(Buffer, v18, v6);
            ExFreePoolWithTag(v18, 0);
          }
          else
          {
            CmpUnlockRegistry();
            ObfDereferenceObject(v14);
            v12 = -1073741670;
          }
          goto LABEL_27;
        }
        CmpUnlockRegistry();
        ObfDereferenceObject(v14);
      }
      v12 = -1073741811;
      goto LABEL_27;
    }
    v12 = -1073741789;
  }
  else
  {
    v12 = -1073741727;
  }
LABEL_27:
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}
