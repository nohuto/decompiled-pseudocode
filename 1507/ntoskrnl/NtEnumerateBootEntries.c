/*
 * XREFs of NtEnumerateBootEntries @ 0x1406F4780
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     strcmp @ 0x1401733C0 (strcmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpIsDevicePathForRemovableMedia @ 0x140264CE0 (ExpIsDevicePathForRemovableMedia.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140678A00 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x1406F2334 (ExpSafeWcslen.c)
 *     ExpTranslateBootEntryNameToId @ 0x1406F3468 (ExpTranslateBootEntryNameToId.c)
 *     ExpVerifyFilePath @ 0x1406F414C (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1406F42A0 (ExpVerifyWindowsOsOptions.c)
 */

NTSTATUS __stdcall NtEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  __int64 v2; // r9
  unsigned int *PoolWithTag; // r14
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  _DWORD *v7; // rcx
  unsigned int v8; // ebx
  _DWORD *v9; // rsi
  _DWORD *v10; // r13
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned int v15; // eax
  NTSTATUS v16; // r12d
  signed __int32 v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  unsigned int *v20; // r15
  unsigned __int64 v21; // rdi
  unsigned int v22; // r13d
  unsigned int v23; // eax
  __int64 v24; // r8
  size_t v25; // r9
  unsigned int v26; // r10d
  unsigned int v27; // ecx
  unsigned int v28; // r13d
  unsigned __int64 v29; // rcx
  unsigned int v30; // edx
  BOOL v31; // edx
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  _DWORD *v35; // rdi
  _DWORD *v36; // r8
  _DWORD *v37; // r13
  __int64 v38; // rax
  BOOL v39; // [rsp+34h] [rbp-B4h]
  _DWORD *v40; // [rsp+40h] [rbp-A8h]
  int v41; // [rsp+48h] [rbp-A0h]
  unsigned int v42; // [rsp+4Ch] [rbp-9Ch]
  unsigned int v43; // [rsp+50h] [rbp-98h]
  unsigned int v44; // [rsp+54h] [rbp-94h]
  int v45; // [rsp+58h] [rbp-90h] BYREF
  _DWORD *v46; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v47; // [rsp+68h] [rbp-80h]
  int v48; // [rsp+6Ch] [rbp-7Ch]
  void *v49; // [rsp+70h] [rbp-78h]
  struct _MDL *v50; // [rsp+78h] [rbp-70h] BYREF
  char *v51; // [rsp+80h] [rbp-68h]
  void *v52; // [rsp+88h] [rbp-60h]
  size_t v53; // [rsp+90h] [rbp-58h]
  size_t Size; // [rsp+98h] [rbp-50h]
  unsigned __int64 v55; // [rsp+A0h] [rbp-48h]
  void *Src; // [rsp+A8h] [rbp-40h]
  PULONG v57; // [rsp+B0h] [rbp-38h]
  unsigned int i; // [rsp+108h] [rbp+20h] BYREF

  v57 = BufferLength;
  PoolWithTag = 0LL;
  if ( dword_1403254D0 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = BufferLength;
    if ( (unsigned __int64)BufferLength >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v8 = Buffer != 0LL ? *BufferLength : 0;
    if ( v8 )
      ProbeForWrite(Buffer, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v8 = Buffer != 0LL ? *BufferLength : 0;
  }
  if ( v8 )
  {
    result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v46, &v50);
    if ( result < 0 )
      return result;
  }
  else
  {
    v46 = 0LL;
    v50 = 0LL;
  }
  v9 = v46;
  v39 = v8 != 0;
  v41 = 0;
  v10 = 0LL;
  v40 = 0LL;
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
  v15 = 0;
  for ( i = 0; ; v15 = i )
  {
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v15 = i;
    }
    if ( v15 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x72766E45u);
      if ( !PoolWithTag )
        break;
    }
    v16 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)PoolWithTag, (__int64)&i);
    if ( v16 != -1073741789 )
      goto LABEL_29;
  }
  v16 = -1073741670;
LABEL_29:
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
  if ( !v16 && i )
  {
    v20 = PoolWithTag;
    v21 = (unsigned __int64)PoolWithTag + 2 * i;
    v55 = v21;
    while ( 1 )
    {
      if ( *((_QWORD *)v20 + 2) != EfiBootVariablesGuid
        || *((_QWORD *)v20 + 3) != 0x8C2B0398E0000DAAuLL
        || !(unsigned int)ExpTranslateBootEntryNameToId((wint_t *)v20 + 16, &v45) )
      {
        goto LABEL_74;
      }
      v22 = v20[2];
      if ( v22 < 8 )
        goto LABEL_73;
      v51 = (char *)v20 + v20[1];
      v48 = *((unsigned __int16 *)v51 + 2);
      v52 = v51 + 6;
      v23 = ExpSafeWcslen((_WORD *)v51 + 3, v21);
      if ( v23 != -1 )
        v23 = 2 * v23 + 2;
      v27 = v23 + v25 + 6;
      if ( v23 == -1 || (unsigned int)v25 >= v22 || v22 < v27 )
      {
LABEL_73:
        v10 = v40;
        goto LABEL_74;
      }
      Size = v23;
      v49 = (void *)(v24 + v23 + 6LL);
      v53 = v25;
      Src = (char *)v49 + v25;
      v28 = v22 - v27;
      v29 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (_DWORD *)v29 == v9 )
        goto LABEL_51;
      v30 = v29 - (_DWORD)v9;
      v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v8 >= v30 )
        break;
      v31 = v26;
      v39 = v26;
      v8 = v26;
      v41 = -1073741789;
LABEL_52:
      v42 = (v28 + 31) & 0xFFFFFFFC;
      v43 = (v23 + 3 + v42) & 0xFFFFFFFC;
      v32 = v43 + 12;
      v33 = 4;
      if ( (unsigned int)v25 > 4 )
        v33 = v25;
      v47 = v33 + v32;
      v34 = v33 + v32 + 4;
      v44 = v34;
      if ( v8 >= v34 )
      {
        v8 -= v34;
      }
      else
      {
        v8 = v26;
        v31 = v26;
        v39 = v26;
        v41 = -1073741789;
      }
      if ( v31 )
      {
        v35 = v9 + 1;
        memset(v9, 0, v34);
        v9[1] = 1;
        v9[2] = v47;
        v9[3] = v45;
        v9[4] = 0;
        v36 = v51;
        v9[4] = (*v51 & 1) != 0;
        if ( (*v36 & 8) != 0 )
          v9[4] |= 0x10u;
        v9[5] = v42;
        v9[6] = v43;
        v9[7] = v28;
        memmove(v9 + 8, Src, v28);
        if ( v28 > 0x14
          && !strcmp((const char *)v9 + 32, "WINDOWS")
          && (int)ExpVerifyWindowsOsOptions((__int64)(v9 + 8), v28) >= 0 )
        {
          v9[4] |= 4u;
        }
        memmove((char *)v35 + v42, v52, Size);
        v37 = (_DWORD *)((char *)v35 + v43);
        *v37 = 1;
        v37[1] = v48 + 12;
        v37[2] = 4;
        memmove(v37 + 3, v49, v53);
        if ( (int)ExpVerifyFilePath((unsigned __int64)v37, (unsigned __int64)v37 + (unsigned int)v37[1]) < 0 )
        {
          v9[4] |= 0x20u;
          v37[1] = 4;
          v37[3] = 327551;
        }
        else if ( ExpIsDevicePathForRemovableMedia(v49) )
        {
          v9[4] |= 8u;
        }
        if ( v40 )
          *v40 = (_DWORD)v9 - (_DWORD)v40;
        v10 = v9;
        v40 = v9;
        v34 = v44;
        v21 = v55;
      }
      else
      {
        v10 = v40;
      }
      v9 = (_DWORD *)((char *)v9 + v34);
LABEL_74:
      v38 = *v20;
      if ( !(_DWORD)v38 )
      {
        if ( v10 )
          *v10 = 0;
        goto LABEL_78;
      }
      v20 = (unsigned int *)((char *)v20 + v38);
    }
    v8 -= v30;
LABEL_51:
    v31 = v39;
    goto LABEL_52;
  }
LABEL_78:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v50 )
    ExUnlockUserBuffer(v50);
  if ( v16 >= 0 )
    v16 = v41;
  *v57 = (_DWORD)v9 - (_DWORD)v46;
  return v16;
}
