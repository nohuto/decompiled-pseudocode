/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x1405F9BC0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char PreviousMode; // bl
  __int64 v14; // rdx
  NTSTATUS v15; // ebx
  __int64 v16; // rcx
  PVOID v17; // rdi
  _DWORD *PoolWithTag; // rax
  char v19; // r8
  unsigned int *v20; // rdi
  unsigned int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  PVOID Object; // [rsp+40h] [rbp-168h] BYREF
  _DWORD v26[14]; // [rsp+48h] [rbp-160h] BYREF
  _BYTE v27[240]; // [rsp+80h] [rbp-128h] BYREF

  v6 = BufferLength;
  Object = 0LL;
  v26[0] = 0;
  memset(&v26[2], 0, 0x28uLL);
  memset(v27, 0, 0xE8uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      if ( (unsigned int)v6 >= 8 )
      {
        if ( (v6 & 1) != 0 )
        {
          v15 = -1073741811;
        }
        else
        {
          v26[0] = v6;
          if ( PreviousMode == 1 )
          {
            v16 = (__int64)RequiredSize;
            if ( (unsigned __int64)RequiredSize >= 0x7FFFFFFF0000LL )
              v16 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v16 = *(_DWORD *)v16;
            ProbeForWrite(Buffer, v6, 4u);
          }
          v15 = ObReferenceObjectByNameEx(
                  (__int64)TargetKey,
                  v14,
                  0x20019u,
                  (__int64)CmKeyObjectType,
                  PreviousMode,
                  (__int64)v27,
                  &Object);
          if ( v15 >= 0 )
          {
            CmpLockRegistryExclusive();
            v17 = Object;
            if ( CmpIsKeyDeletedForKeyBody((__int64)Object, 0LL) )
            {
              v15 = (*((_BYTE *)v17 + 48) & 1) != 0 ? -1073740763 : -1073741444;
              CmpUnlockRegistry();
              ObfDereferenceObject(v17);
            }
            else if ( *(_DWORD *)(*((_QWORD *)v17 + 1) + 32LL) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 1) + 24LL)
                                                                                        + 64LL)
                                                                            + 36LL) )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20204D43u);
              *(_QWORD *)&v26[2] = PoolWithTag;
              if ( PoolWithTag )
              {
                *PoolWithTag = 0;
                v26[4] = 8;
                v26[6] = 8;
                *(_QWORD *)&v26[10] = (char *)PoolWithTag + v6;
                *(_QWORD *)&v26[8] = v17;
                v26[5] = 0;
                CmpSearchForOpenSubKeys(*((_QWORD *)v17 + 1), 2, v19, v26);
                v15 = v26[5];
                CmpUnlockRegistry();
                ObfDereferenceObject(v17);
                v20 = *(unsigned int **)&v26[2];
                if ( v15 >= 0 )
                {
                  v21 = 0;
                  if ( **(_DWORD **)&v26[2] )
                  {
                    do
                      *(_QWORD *)&v20[6 * ++v21] += (_BYTE *)Buffer - (_BYTE *)v20;
                    while ( v21 < *v20 );
                  }
                }
                *RequiredSize = v26[4];
                if ( v15 < 0 )
                  *(_DWORD *)Buffer = *v20;
                else
                  memmove(Buffer, v20, v6);
                ExFreePoolWithTag(v20, 0);
              }
              else
              {
                CmpUnlockRegistry();
                ObfDereferenceObject(v17);
                v15 = -1073741670;
              }
            }
            else
            {
              CmpUnlockRegistry();
              ObfDereferenceObject(v17);
              v15 = -1073741811;
            }
          }
          CmpCleanupParseContext((__int64)v27, 0);
        }
      }
      else
      {
        v15 = -1073741789;
      }
    }
    else
    {
      v15 = -1073741727;
    }
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
    return v15;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    return -1073741431;
  }
}
