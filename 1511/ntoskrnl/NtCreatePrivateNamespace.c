/*
 * XREFs of NtCreatePrivateNamespace @ 0x1404A9DC8
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     ObpRegisterPrivateNamespace @ 0x1404AA07C (ObpRegisterPrivateNamespace.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404AA488 (ObpCaptureBoundaryDescriptor.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1404AA73C (ObpVerifyCreatorAccessCheck.c)
 */

NTSTATUS __cdecl NtCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  PHANDLE v6; // r12
  char PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *v9; // rdi
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rbx
  int v12; // eax
  _QWORD *v13; // r15
  unsigned __int64 v14; // rbx
  size_t v15; // r8
  __int64 v16; // rcx
  NTSTATUS v17; // edi
  int inserted; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rsi
  _QWORD *v23; // rax
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  unsigned __int64 v26; // rtt
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  __int64 v31; // [rsp+60h] [rbp-38h] BYREF
  PVOID P; // [rsp+68h] [rbp-30h]
  HANDLE Handle; // [rsp+70h] [rbp-28h] BYREF

  v6 = NamespaceHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)NamespaceHandle >= MmUserProbeAddress )
      NamespaceHandle = (PHANDLE)MmUserProbeAddress;
    *NamespaceHandle = *NamespaceHandle;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    v9 = P;
    v10 = ObpVerifyCreatorAccessCheck((char *)P + 48);
    if ( v10 >= 0 )
    {
      v11 = (unsigned int)(*((_DWORD *)P + 6) + 400);
      if ( v11 < *((_QWORD *)P + 3) )
      {
        v10 = -1073741811;
      }
      else
      {
        v12 = ObCreateObject(
                PreviousMode,
                ObpDirectoryObjectType,
                (__int64)ObjectAttributes,
                PreviousMode,
                0,
                *((_DWORD *)P + 6) + 400,
                0,
                0,
                &Object);
        if ( v12 >= 0 )
        {
          v13 = Object;
          memset(Object, 0, (unsigned int)v11);
          v14 = ((unsigned __int64)v13 + 359) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v14 + 8) = v14;
          *(_QWORD *)v14 = v14;
          v15 = v9[3];
          *(_QWORD *)(v14 + 24) = v15;
          *(_QWORD *)(v14 + 16) = 0LL;
          *(_BYTE *)(v14 + 40) = *((_BYTE *)v9 + 40);
          memmove((void *)(v14 + 48), v9 + 6, v15);
          ExFreePoolWithTag(v9, 0x534E624Fu);
          v13[37] = 0LL;
          *((_DWORD *)v13 + 80) = -1;
          *((_DWORD *)v13 + 86) = 1;
          if ( (*((_BYTE *)v13 - 22) & 2) != 0 )
            v16 = (__int64)v13 - ObpInfoMaskToOffset[*((_BYTE *)v13 - 22) & 3] - 48;
          else
            v16 = 0LL;
          if ( v16 )
          {
            v17 = -1073741773;
          }
          else
          {
            v17 = ObpRegisterPrivateNamespace(((unsigned __int64)v13 + 359) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v17 >= 0 )
            {
              ObfReferenceObject(v13);
              inserted = ObInsertObject(v13, 0LL, DesiredAccess, 0, 0LL, &Handle);
              PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v31);
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v20 = (unsigned __int64 *)(v31 + 720);
              v21 = KeAbPreAcquire(v31 + 720, 0LL, 0LL);
              v22 = v21;
              if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
                ExfAcquirePushLockExclusiveEx(v20, v21, (ULONG_PTR)v20);
              if ( v22 )
                *(_BYTE *)(v22 + 26) |= 1u;
              if ( inserted < 0 )
              {
                v27 = v31;
                v28 = *(_QWORD *)v14;
                v29 = *(_QWORD **)(v14 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v29 != v14 )
                  __fastfail(3u);
              }
              else
              {
                if ( (v13[43] & 2) == 0 )
                {
                  v23 = Object;
                  *(_QWORD *)(v14 + 16) = Object;
                  v23[41] = v14;
LABEL_20:
                  _m_prefetchw(v20);
                  v24 = *v20;
                  if ( (*v20 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
                    v25 = v24 - 16;
                  else
                    v25 = 0LL;
                  if ( (v24 & 2) != 0
                    || (v26 = *v20, v26 != _InterlockedCompareExchange64((volatile signed __int64 *)v20, v25, v24)) )
                  {
                    ExfReleasePushLock(v20);
                  }
                  KeAbPostRelease((ULONG_PTR)v20);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  PsDereferenceMonitorContextServerSilo(v31);
                  if ( inserted >= 0 )
                    *v6 = Handle;
                  return inserted;
                }
                v27 = v31;
                v28 = *(_QWORD *)v14;
                v29 = *(_QWORD **)(v14 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v29 != v14 )
                  __fastfail(3u);
              }
              *v29 = v28;
              *(_QWORD *)(v28 + 8) = v29;
              --*(_DWORD *)(v27 + 728);
              ObfDereferenceObject(Object);
              goto LABEL_20;
            }
          }
          ObfDereferenceObject(v13);
          return v17;
        }
        v10 = v12;
      }
    }
    ExFreePoolWithTag(v9, 0x534E624Fu);
    return v10;
  }
  return result;
}
