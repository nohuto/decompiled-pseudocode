/*
 * XREFs of NtEnumerateDriverEntries @ 0x1406F4DB4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140678A00 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x1406F2334 (ExpSafeWcslen.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1406F3538 (ExpTranslateDriverEntryNameToId.c)
 */

NTSTATUS __stdcall NtEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  __int64 v2; // r9
  PULONG v3; // r14
  unsigned int *v5; // r13
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  _DWORD *v8; // rcx
  unsigned int v9; // edi
  _DWORD *v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  NTSTATUS v15; // r15d
  unsigned int *PoolWithTag; // rax
  signed __int32 v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  unsigned int *v20; // r14
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  char *v23; // r8
  unsigned int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // r9d
  unsigned int v27; // r10d
  unsigned __int64 v28; // rcx
  unsigned int v29; // edx
  BOOL v30; // ecx
  unsigned int v31; // r12d
  _DWORD *v32; // rcx
  __int64 v33; // rax
  BOOL v34; // [rsp+34h] [rbp-A4h]
  int v35; // [rsp+38h] [rbp-A0h]
  unsigned int v36; // [rsp+40h] [rbp-98h]
  unsigned int v37; // [rsp+44h] [rbp-94h]
  unsigned int v38; // [rsp+48h] [rbp-90h]
  _DWORD *v39; // [rsp+50h] [rbp-88h]
  int v40; // [rsp+58h] [rbp-80h] BYREF
  _DWORD *v41; // [rsp+60h] [rbp-78h] BYREF
  struct _MDL *v42; // [rsp+68h] [rbp-70h] BYREF
  PULONG v43; // [rsp+70h] [rbp-68h]
  void *v44; // [rsp+78h] [rbp-60h]
  unsigned __int64 v45; // [rsp+80h] [rbp-58h]
  void *Src; // [rsp+88h] [rbp-50h]
  size_t Size; // [rsp+98h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+F8h] [rbp+20h] BYREF

  v3 = BufferLength;
  v43 = BufferLength;
  v5 = 0LL;
  if ( dword_1403254D0 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = BufferLength;
    if ( (unsigned __int64)BufferLength >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = *v8;
    v9 = Buffer != 0LL ? *BufferLength : 0;
    if ( v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v9 = Buffer != 0LL ? *BufferLength : 0;
  }
  if ( v9 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v9, PreviousMode, IoWriteAccess, &v41, &v42);
    if ( result < 0 )
      return result;
  }
  else
  {
    v41 = 0LL;
    v42 = 0LL;
  }
  v10 = v41;
  v35 = 0;
  v34 = v9 != 0;
  v39 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeGetCurrentThread();
  v13 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v2);
  v14 = v13;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  qword_140325228 = (__int64)v12;
  LODWORD(NumberOfBytes) = 0;
  v15 = IoEnumerateEnvironmentVariablesEx(2u, 0LL, (__int64)&NumberOfBytes);
  if ( v15 == -1073741789 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72766E45u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
      v15 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)PoolWithTag, (__int64)&NumberOfBytes);
    else
      v15 = -1073741670;
  }
  else
  {
    LODWORD(NumberOfBytes) = 0;
  }
  qword_140325228 = 0LL;
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v17);
  KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( !v15 && (_DWORD)NumberOfBytes )
  {
    v20 = v5;
    v21 = (unsigned __int64)v5 + 2 * (unsigned int)NumberOfBytes;
    v45 = v21;
    while ( 1 )
    {
      v22 = *((_QWORD *)v20 + 2) - EfiDriverVariablesGuid;
      if ( !v22 )
        v22 = *((_QWORD *)v20 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v22 && (unsigned int)ExpTranslateDriverEntryNameToId((wint_t *)v20 + 16, &v40) && v20[2] >= 8 )
      {
        v23 = (char *)v20 + v20[1];
        v37 = *((unsigned __int16 *)v23 + 2);
        Src = v23 + 6;
        v24 = ExpSafeWcslen((_WORD *)v23 + 3, v21);
        if ( v24 != -1 )
          v24 = 2 * v24 + 2;
        if ( v24 != -1 && v27 < v26 && v26 >= v24 + v27 + 6 )
          break;
      }
LABEL_58:
      v33 = *v20;
      if ( !(_DWORD)v33 )
      {
        v3 = v43;
        if ( v39 )
          *v39 = 0;
        goto LABEL_62;
      }
      v20 = (unsigned int *)((char *)v20 + v33);
    }
    Size = v24;
    v44 = (void *)(v25 + v24 + 6LL);
    v28 = ((unsigned __int64)v10 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_DWORD *)v28 != v10 )
    {
      v29 = v28 - (_DWORD)v10;
      v10 = (_DWORD *)(((unsigned __int64)v10 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v9 < v29 )
      {
        v30 = 0;
        v34 = 0;
        v9 = 0;
        v35 = -1073741789;
LABEL_50:
        v36 = (v24 + 23) & 0xFFFFFFFC;
        v38 = v36 + v27 + 12;
        v31 = v38 + 4;
        if ( v9 >= v38 + 4 )
        {
          v9 -= v31;
        }
        else
        {
          v9 = 0;
          v30 = 0;
          v34 = 0;
          v35 = -1073741789;
        }
        if ( v30 )
        {
          memset(v10, 0, v31);
          v10[1] = 1;
          v10[2] = v38;
          v10[3] = v40;
          v10[4] = 20;
          v10[5] = v36;
          memmove(v10 + 6, Src, Size);
          v32 = (_DWORD *)((char *)v10 + v36 + 4);
          *v32 = 1;
          v32[1] = v37 + 12;
          v32[2] = 4;
          memmove(v32 + 3, v44, v37);
          if ( v39 )
            *v39 = (_DWORD)v10 - (_DWORD)v39;
          v39 = v10;
          v21 = v45;
        }
        v10 = (_DWORD *)((char *)v10 + v31);
        goto LABEL_58;
      }
      v9 -= v29;
    }
    v30 = v34;
    goto LABEL_50;
  }
LABEL_62:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v42 )
    ExUnlockUserBuffer(v42);
  if ( v15 >= 0 )
    v15 = v35;
  *v3 = (_DWORD)v10 - (_DWORD)v41;
  return v15;
}
