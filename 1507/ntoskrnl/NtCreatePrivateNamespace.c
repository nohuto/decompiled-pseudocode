/*
 * XREFs of NtCreatePrivateNamespace @ 0x14054422C
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14046FBA0 (ObpCaptureBoundaryDescriptor.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObpRegisterPrivateNamespace @ 0x1405444DC (ObpRegisterPrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054467C (ObpVerifyCreatorAccessCheck.c)
 */

NTSTATUS __cdecl NtCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  int v4; // r14d
  PHANDLE v6; // r15
  char PreviousMode; // si
  NTSTATUS result; // eax
  char *v9; // rdi
  NTSTATUS v10; // ebx
  int v11; // r9d
  unsigned __int64 v12; // rbx
  PVOID *p_Object; // rcx
  int v14; // eax
  _QWORD *v15; // r14
  unsigned __int64 v16; // rbx
  size_t v17; // r8
  __int64 v18; // rcx
  int inserted; // edi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rsi
  _QWORD *v27; // rax
  signed __int64 v28; // rcx
  ULONG_PTR v29; // rtt
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+60h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-20h] BYREF

  v4 = (int)ObjectAttributes;
  v6 = NamespaceHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)NamespaceHandle >= MmUserProbeAddress )
      NamespaceHandle = (PHANDLE)MmUserProbeAddress;
    *NamespaceHandle = *NamespaceHandle;
  }
  result = ObpCaptureBoundaryDescriptor((__m128i *)BoundaryDescriptor, (char **)&P);
  if ( result >= 0 )
  {
    v9 = (char *)P;
    v10 = ObpVerifyCreatorAccessCheck((char *)P + 48);
    if ( v10 >= 0 )
    {
      v12 = (unsigned int)(*((_DWORD *)v9 + 6) + 400);
      if ( v12 < *((_QWORD *)v9 + 3) )
      {
        v10 = -1073741811;
      }
      else
      {
        p_Object = &Object;
        LOBYTE(v11) = PreviousMode;
        LOBYTE(p_Object) = PreviousMode;
        v14 = ObCreateObject((int)p_Object, (int)ObpDirectoryObjectType, v4, v11);
        if ( v14 >= 0 )
        {
          v15 = Object;
          memset(Object, 0, (unsigned int)v12);
          v16 = ((unsigned __int64)v15 + 359) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v16 + 8) = v16;
          *(_QWORD *)v16 = v16;
          v17 = *((_QWORD *)v9 + 3);
          *(_QWORD *)(v16 + 24) = v17;
          *(_QWORD *)(v16 + 16) = 0LL;
          *(_BYTE *)(v16 + 40) = v9[40];
          memmove((void *)(v16 + 48), v9 + 48, v17);
          ExFreePoolWithTag(v9, 0x534E624Fu);
          v15[37] = 0LL;
          *((_DWORD *)v15 + 80) = -1;
          *((_DWORD *)v15 + 86) = 1;
          if ( (*((_BYTE *)v15 - 22) & 2) != 0 )
            v18 = (__int64)v15 - ObpInfoMaskToOffset[*((_BYTE *)v15 - 22) & 3] - 48;
          else
            v18 = 0LL;
          if ( v18 )
          {
            inserted = -1073741773;
          }
          else
          {
            inserted = ObpRegisterPrivateNamespace(((unsigned __int64)v15 + 359) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( inserted >= 0 )
            {
              ObfReferenceObject(v15);
              inserted = ObInsertObject(v15, 0LL, DesiredAccess, 0, 0LL, &Handle);
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              v22 = KeAbPreAcquire((ULONG_PTR)&qword_140331B90, 0LL, 0LL, v21);
              v25 = v22;
              if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140331B90, 0LL) )
                ExfAcquirePushLockExclusiveEx(&qword_140331B90, v22, (ULONG_PTR)&qword_140331B90, v24);
              if ( v25 )
                *(_BYTE *)(v25 + 26) |= 1u;
              if ( inserted < 0 )
              {
                v32 = *(_QWORD *)v16;
                v33 = *(_QWORD **)(v16 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 || *v33 != v16 )
                  __fastfail(3u);
              }
              else
              {
                if ( (v15[43] & 2) == 0 )
                {
                  v27 = Object;
                  *(_QWORD *)(v16 + 16) = Object;
                  v27[41] = v16;
LABEL_20:
                  _m_prefetchw(&qword_140331B90);
                  v28 = qword_140331B90 - 16;
                  if ( (qword_140331B90 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                    v28 = 0LL;
                  if ( (qword_140331B90 & 2) != 0
                    || (v29 = qword_140331B90,
                        v29 != _InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&qword_140331B90,
                                 v28,
                                 qword_140331B90)) )
                  {
                    ExfReleasePushLock(&qword_140331B90, v23);
                  }
                  KeAbPostRelease((ULONG_PTR)&qword_140331B90);
                  v30 = KeGetCurrentThread();
                  v31 = v30->KernelApcDisable + 1;
                  v30->KernelApcDisable = v31;
                  if ( !v31
                    && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
                    && !v30->SpecialApcDisable )
                  {
                    KiCheckForKernelApcDelivery();
                  }
                  if ( inserted >= 0 )
                    *v6 = Handle;
                  return inserted;
                }
                v32 = *(_QWORD *)v16;
                v33 = *(_QWORD **)(v16 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 || *v33 != v16 )
                  __fastfail(3u);
              }
              *v33 = v32;
              *(_QWORD *)(v32 + 8) = v33;
              --dword_140331B98;
              ObfDereferenceObject(Object);
              goto LABEL_20;
            }
          }
          ObfDereferenceObject(v15);
          return inserted;
        }
        v10 = v14;
      }
    }
    ExFreePoolWithTag(v9, 0x534E624Fu);
    return v10;
  }
  return result;
}
