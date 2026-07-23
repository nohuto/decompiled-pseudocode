/*
 * XREFs of NtCreatePrivateNamespace @ 0x1404765A4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140476830 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRegisterPrivateNamespace @ 0x140476998 (ObpRegisterPrivateNamespace.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140477664 (ObpCaptureBoundaryDescriptor.c)
 */

NTSTATUS __cdecl NtCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  PHANDLE v5; // r12
  char PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *v8; // rdi
  NTSTATUS v9; // ebx
  unsigned __int64 v10; // rbx
  int v11; // eax
  _QWORD *v12; // r13
  unsigned __int64 v13; // rbx
  size_t v14; // r8
  __int64 v15; // rcx
  NTSTATUS v16; // edi
  int inserted; // esi
  char *CurrentServerSiloGlobals; // r15
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v20; // rdi
  _BYTE *v21; // rax
  _BYTE *v22; // r14
  _QWORD *v23; // rax
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  unsigned __int64 v26; // rtt
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  _QWORD *v31; // rax
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  PVOID P; // [rsp+60h] [rbp-38h]
  HANDLE Handle; // [rsp+68h] [rbp-30h] BYREF

  v5 = NamespaceHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)NamespaceHandle >= 0x7FFFFFFF0000LL )
      NamespaceHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *NamespaceHandle = *NamespaceHandle;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    v8 = P;
    v9 = ObpVerifyCreatorAccessCheck((char *)P + 48);
    if ( v9 >= 0 )
    {
      v10 = (unsigned int)(*((_DWORD *)P + 6) + 400);
      if ( v10 < *((_QWORD *)P + 3) )
      {
        v9 = -1073741811;
      }
      else
      {
        v11 = ObCreateObject(
                PreviousMode,
                ObpDirectoryObjectType,
                (__int64)ObjectAttributes,
                PreviousMode,
                0,
                *((_DWORD *)P + 6) + 400,
                0,
                0,
                &Object);
        if ( v11 >= 0 )
        {
          v12 = Object;
          memset(Object, 0, (unsigned int)v10);
          v13 = ((unsigned __int64)v12 + 359) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v13 + 8) = v13;
          *(_QWORD *)v13 = v13;
          v14 = v8[3];
          *(_QWORD *)(v13 + 24) = v14;
          *(_QWORD *)(v13 + 16) = 0LL;
          *(_BYTE *)(v13 + 40) = *((_BYTE *)v8 + 40);
          memmove((void *)(v13 + 48), v8 + 6, v14);
          ExFreePoolWithTag(v8, 0x534E624Fu);
          v12[37] = 0LL;
          *((_DWORD *)v12 + 80) = -1;
          *((_DWORD *)v12 + 86) = 1;
          if ( (*((_BYTE *)v12 - 22) & 2) != 0 )
            v15 = (__int64)v12 - ObpInfoMaskToOffset[*((_BYTE *)v12 - 22) & 3] - 48;
          else
            v15 = 0LL;
          if ( v15 )
          {
            v16 = -1073741773;
          }
          else
          {
            v16 = ObpRegisterPrivateNamespace(((unsigned __int64)v12 + 359) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( v16 >= 0 )
            {
              ObfReferenceObject(v12);
              inserted = ObInsertObject(v12, 0LL, DesiredAccess, 0, 0LL, &Handle);
              CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v20 = (unsigned __int64 *)(CurrentServerSiloGlobals + 720);
              v21 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL, 0);
              v22 = v21;
              if ( _interlockedbittestandset64((volatile signed __int32 *)CurrentServerSiloGlobals + 180, 0LL) )
                ExfAcquirePushLockExclusiveEx(v20, v21, (ULONG_PTR)v20);
              if ( v22 )
                v22[26] |= 1u;
              if ( inserted < 0 )
              {
                v30 = *(_QWORD *)v13;
                v31 = *(_QWORD **)(v13 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || *v31 != v13 )
                  __fastfail(3u);
              }
              else
              {
                if ( (v12[43] & 2) == 0 )
                {
                  v23 = Object;
                  *(_QWORD *)(v13 + 16) = Object;
                  v23[41] = v13;
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
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
                  if ( inserted >= 0 )
                    *v5 = Handle;
                  return inserted;
                }
                v30 = *(_QWORD *)v13;
                v31 = *(_QWORD **)(v13 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || *v31 != v13 )
                  __fastfail(3u);
              }
              *v31 = v30;
              *(_QWORD *)(v30 + 8) = v31;
              --*((_DWORD *)CurrentServerSiloGlobals + 182);
              ObfDereferenceObject(Object);
              goto LABEL_20;
            }
          }
          ObfDereferenceObject(v12);
          return v16;
        }
        v9 = v11;
      }
    }
    ExFreePoolWithTag(v8, 0x534E624Fu);
    return v9;
  }
  return result;
}
