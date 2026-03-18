/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x1406505EC
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     CmpSearchForOpenSubKeys @ 0x1404ED9B4 (CmpSearchForOpenSubKeys.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rtt
  BOOLEAN v10; // di
  struct _KTHREAD *v11; // rdx
  __int16 v12; // cx
  char PreviousMode; // di
  unsigned __int64 v15; // rtt
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  unsigned __int64 v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  unsigned __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  _DWORD *v24; // rcx
  NTSTATUS v25; // edi
  __int64 *v26; // rsi
  __int64 v27; // rcx
  _DWORD *PoolWithTag; // rax
  char v29; // r8
  unsigned int *v30; // rsi
  unsigned int v31; // edx
  unsigned __int64 v32; // rtt
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  PVOID Object; // [rsp+48h] [rbp-E0h] BYREF
  _DWORD v36[12]; // [rsp+50h] [rbp-D8h] BYREF
  _DWORD v37[36]; // [rsp+80h] [rbp-A8h] BYREF

  v6 = BufferLength;
  Object = 0LL;
  v36[0] = 0;
  memset(&v36[2], 0, 0x28uLL);
  memset(v37, 0, 136);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v9 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v10 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v10 )
    {
      v11 = KeGetCurrentThread();
      v12 = v11->KernelApcDisable + 1;
      v11->KernelApcDisable = v12;
      if ( !v12
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
        && !v11->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( !v10 )
      return -1073741431;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    if ( (unsigned int)v6 >= 8 )
    {
      if ( (v6 & 1) != 0 )
      {
        _m_prefetchw(&CmpShutdownRundown);
        v21 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v21 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&CmpShutdownRundown,
                      (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                      CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
          ExfReleaseRundownProtection(&CmpShutdownRundown);
        v22 = KeGetCurrentThread();
        v23 = v22->KernelApcDisable + 1;
        v22->KernelApcDisable = v23;
        if ( !v23
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
          && !v22->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return -1073741811;
      }
      else
      {
        v36[0] = v6;
        if ( PreviousMode == 1 )
        {
          v24 = RequiredSize;
          if ( (unsigned __int64)RequiredSize >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          *v24 = *v24;
          ProbeForWrite(Buffer, v6, 4u);
        }
        v25 = ObReferenceObjectByNameEx(
                (__int64)TargetKey,
                0LL,
                0x20019u,
                (struct _OBJECT_TYPE *)CmKeyObjectType,
                PreviousMode,
                v37,
                (__int64 *)&Object);
        if ( v25 >= 0 )
        {
          CmpLockRegistryExclusive();
          v26 = (__int64 *)Object;
          v27 = *((_QWORD *)Object + 1);
          if ( (*(_DWORD *)(v27 + 4) & 0x20000) != 0 )
          {
            v25 = (*((_BYTE *)Object + 48) & 1) != 0 ? -1073740763 : -1073741444;
            CmpUnlockRegistry();
            ObfDereferenceObject(v26);
          }
          else if ( *(_DWORD *)(v27 + 40) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 32) + 64LL) + 36LL) )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20204D43u);
            *(_QWORD *)&v36[2] = PoolWithTag;
            if ( PoolWithTag )
            {
              *PoolWithTag = 0;
              *(_QWORD *)&v36[4] = 8LL;
              v36[6] = 8;
              *(_QWORD *)&v36[10] = (char *)PoolWithTag + v6;
              *(_QWORD *)&v36[8] = v26;
              CmpSearchForOpenSubKeys(v26[1], 2, v29, v36);
              v25 = v36[5];
              CmpUnlockRegistry();
              ObfDereferenceObject(v26);
              v30 = *(unsigned int **)&v36[2];
              if ( v25 >= 0 )
              {
                v31 = 0;
                if ( **(_DWORD **)&v36[2] )
                {
                  do
                    *(_QWORD *)&v30[6 * ++v31] += (_BYTE *)Buffer - (_BYTE *)v30;
                  while ( v31 < *v30 );
                }
              }
              *RequiredSize = v36[4];
              if ( v25 < 0 )
                *(_DWORD *)Buffer = *v30;
              else
                memmove(Buffer, v30, v6);
              ExFreePoolWithTag(v30, 0);
            }
            else
            {
              CmpUnlockRegistry();
              ObfDereferenceObject(v26);
              v25 = -1073741670;
            }
          }
          else
          {
            CmpUnlockRegistry();
            ObfDereferenceObject(v26);
            v25 = -1073741811;
          }
        }
        _m_prefetchw(&CmpShutdownRundown);
        v32 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v32 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&CmpShutdownRundown,
                      (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                      CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
          ExfReleaseRundownProtection(&CmpShutdownRundown);
        v33 = KeGetCurrentThread();
        v34 = v33->KernelApcDisable + 1;
        v33->KernelApcDisable = v34;
        if ( !v34
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
          && !v33->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return v25;
      }
    }
    else
    {
      _m_prefetchw(&CmpShutdownRundown);
      v18 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v18 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable + 1;
      v19->KernelApcDisable = v20;
      if ( !v20
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
        && !v19->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return -1073741789;
    }
  }
  else
  {
    _m_prefetchw(&CmpShutdownRundown);
    v15 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v15 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741727;
  }
}
