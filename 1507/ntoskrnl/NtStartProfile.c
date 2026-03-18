/*
 * XREFs of NtStartProfile @ 0x1406FA0A8
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MmSizeOfMdl @ 0x1400628C0 (MmSizeOfMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     KeStartProfile @ 0x140204D70 (KeStartProfile.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     KeInitializeProfile @ 0x140699134 (KeInitializeProfile.c)
 */

NTSTATUS __stdcall NtStartProfile(HANDLE ProfileHandle)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  _QWORD *v3; // rbx
  _QWORD *v4; // r15
  NTSTATUS v5; // edi
  SIZE_T v6; // rax
  char *PoolWithTag; // rax
  void *v8; // rsi
  struct _MDL *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r8
  PVOID v12; // r14
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  PVOID P; // [rsp+90h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(ProfileHandle, 1u, ExProfileObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&ExpProfileStateMutex, Executive, 0, 0, 0LL);
    v3 = Object;
    v4 = (char *)Object + 48;
    if ( *((_QWORD *)Object + 6) )
    {
      v5 = -1073741640;
LABEL_8:
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      ObfDereferenceObject(v3);
      return v5;
    }
    v3 = Object;
    if ( ExpCurrentProfileUsage == (_DWORD)KeNumberProcessors_0 << 13 )
    {
      v5 = -1073741613;
      goto LABEL_8;
    }
    v6 = MmSizeOfMdl(*((PVOID *)Object + 3), *((unsigned int *)Object + 8));
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6 + 248, 0x666F7250u);
    v8 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
      goto LABEL_8;
    }
    v9 = (struct _MDL *)(PoolWithTag + 248);
    v3[7] = PoolWithTag + 248;
    v3[5] = PoolWithTag;
    v10 = *((unsigned int *)v3 + 8);
    v11 = v3[3];
    *((_QWORD *)PoolWithTag + 31) = 0LL;
    *((_WORD *)PoolWithTag + 128) = 8 * ((((unsigned __int64)(v11 & 0xFFF) + v10 + 4095) >> 12) + 6);
    *((_WORD *)PoolWithTag + 129) = 0;
    *((_QWORD *)PoolWithTag + 35) = v11 & 0xFFFFFFFFFFFFF000uLL;
    *((_DWORD *)PoolWithTag + 73) = v11 & 0xFFF;
    *((_DWORD *)PoolWithTag + 72) = v10;
    MmProbeAndLockPages((PMDL)(PoolWithTag + 248), PreviousMode, IoWriteAccess);
    v12 = MmMapLockedPagesSpecifyCache((PMDL)v3[7], 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v12 )
    {
      KeInitializeProfile(
        (__int64)v8,
        *v3,
        (__int64)v12,
        v3[1],
        v3[2],
        *((_DWORD *)v3 + 9),
        *((_DWORD *)v3 + 16),
        *((_DWORD *)v3 + 17),
        (__int16 *)v3 + 36);
      KeStartProfile((ULONG_PTR)v8);
      *v4 = v12;
      ++ExpCurrentProfileUsage;
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      ObfDereferenceObject(v3);
      return 0;
    }
    else
    {
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      MmUnlockPages(v9);
      ExFreePoolWithTag(v8, 0);
      ObfDereferenceObject(v3);
      return -1073741670;
    }
  }
  return result;
}
