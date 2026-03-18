/*
 * XREFs of NtEnumerateBootEntries @ 0x140670A9C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     strcmp @ 0x140145390 (strcmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExpIsDevicePathForRemovableMedia @ 0x140214A84 (ExpIsDevicePathForRemovableMedia.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1405FE090 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x14066E97C (ExpSafeWcslen.c)
 *     ExpTranslateBootEntryNameToId @ 0x14066F8BC (ExpTranslateBootEntryNameToId.c)
 *     ExpVerifyFilePath @ 0x1406705A0 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1406706F4 (ExpVerifyWindowsOsOptions.c)
 */

NTSTATUS __stdcall NtEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r15
  unsigned int *PoolWithTag; // r14
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  _DWORD *v7; // rcx
  unsigned int v8; // ebx
  unsigned __int64 v9; // rsi
  NTSTATUS v10; // r13d
  _DWORD *v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // eax
  NTSTATUS v14; // r12d
  unsigned int *v15; // r15
  __int64 v16; // rax
  unsigned int v17; // r13d
  unsigned int v18; // eax
  __int64 v19; // r8
  size_t v20; // r9
  unsigned int v21; // ecx
  unsigned int v22; // r13d
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  BOOL v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned __int64 v29; // rdi
  _DWORD *v30; // r8
  int v31; // ecx
  _DWORD *v32; // r13
  __int64 v33; // rax
  BOOL v34; // [rsp+34h] [rbp-B4h]
  int v35; // [rsp+38h] [rbp-B0h]
  unsigned int v36; // [rsp+40h] [rbp-A8h]
  unsigned int v37; // [rsp+44h] [rbp-A4h]
  unsigned __int64 v38; // [rsp+48h] [rbp-A0h] BYREF
  int v39; // [rsp+50h] [rbp-98h]
  unsigned int v40; // [rsp+54h] [rbp-94h]
  unsigned int v41; // [rsp+58h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+5Ch] [rbp-8Ch]
  struct _MDL *v43; // [rsp+60h] [rbp-88h] BYREF
  PULONG v44; // [rsp+68h] [rbp-80h]
  _DWORD *v45; // [rsp+70h] [rbp-78h]
  void *v46; // [rsp+78h] [rbp-70h]
  void *Src; // [rsp+80h] [rbp-68h]
  void *v48; // [rsp+88h] [rbp-60h]
  char *v49; // [rsp+90h] [rbp-58h]
  size_t v50; // [rsp+98h] [rbp-50h]
  size_t Size; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v52; // [rsp+B0h] [rbp-38h]
  unsigned int i; // [rsp+108h] [rbp+20h] BYREF

  v2 = BufferLength;
  v44 = BufferLength;
  PoolWithTag = 0LL;
  if ( dword_1402D6390 != 2 )
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
    result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v38, &v43);
    if ( result < 0 )
      return result;
  }
  else
  {
    v38 = 0LL;
    v43 = 0LL;
  }
  v9 = v38;
  v34 = v8 != 0;
  v10 = 0;
  v35 = 0;
  v11 = 0LL;
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v13 = 0;
  for ( i = 0; ; v13 = i )
  {
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v13 = i;
    }
    if ( v13 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x72766E45u);
      if ( !PoolWithTag )
        break;
    }
    v14 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)PoolWithTag, (__int64)&i);
    if ( v14 != -1073741789 )
      goto LABEL_25;
  }
  v14 = -1073741670;
LABEL_25:
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v14 || !i )
    goto LABEL_69;
  v15 = PoolWithTag;
  v52 = (unsigned __int64)PoolWithTag + 2 * i;
  while ( 1 )
  {
    v16 = *((_QWORD *)v15 + 2) - EfiBootVariablesGuid;
    if ( !v16 )
      v16 = *((_QWORD *)v15 + 3) + 0x73D4FC671FFFF256LL;
    if ( !v16 )
    {
      if ( (unsigned int)ExpTranslateBootEntryNameToId((wint_t *)v15 + 16, (int *)&v41) )
      {
        v17 = v15[2];
        if ( v17 >= 8 )
        {
          v49 = (char *)v15 + v15[1];
          v39 = *((unsigned __int16 *)v49 + 2);
          v48 = v49 + 6;
          v18 = ExpSafeWcslen((_WORD *)v49 + 3, v52);
          if ( v18 != -1 )
            v18 = 2 * v18 + 2;
          v21 = v18 + v20 + 6;
          if ( v18 != -1 && (unsigned int)v20 < v17 && v17 >= v21 )
          {
            Size = v18;
            v46 = (void *)(v19 + v18 + 6LL);
            v50 = v20;
            Src = (char *)v46 + v20;
            v22 = v17 - v21;
            v23 = (v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v23 != v9 )
            {
              v24 = v23 - v9;
              v9 = (v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( v8 < v24 )
              {
                v25 = 0;
                v34 = 0;
                v8 = 0;
                v35 = -1073741789;
LABEL_43:
                v36 = (v22 + 31) & 0xFFFFFFFC;
                v37 = (v18 + 3 + v36) & 0xFFFFFFFC;
                v26 = v37 + 12;
                v27 = 4;
                if ( (unsigned int)v20 > 4 )
                  v27 = v20;
                v42 = v27 + v26;
                v28 = v27 + v26 + 4;
                v40 = v28;
                if ( v8 >= v28 )
                {
                  v8 -= v28;
                }
                else
                {
                  v8 = 0;
                  v25 = 0;
                  v34 = 0;
                  v35 = -1073741789;
                }
                if ( v25 )
                {
                  v29 = v9 + 4;
                  memset((void *)v9, 0, v28);
                  *(_DWORD *)(v9 + 4) = 1;
                  *(_DWORD *)(v9 + 8) = v42;
                  *(_QWORD *)(v9 + 12) = v41;
                  v30 = v49;
                  v31 = *(_DWORD *)(v9 + 16);
                  if ( (*v49 & 1) != 0 )
                    v31 = 1;
                  *(_DWORD *)(v9 + 16) = v31;
                  if ( (*v30 & 8) != 0 )
                    *(_DWORD *)(v9 + 16) |= 0x10u;
                  *(_DWORD *)(v9 + 20) = v36;
                  *(_DWORD *)(v9 + 24) = v37;
                  *(_DWORD *)(v9 + 28) = v22;
                  memmove((void *)(v9 + 32), Src, v22);
                  if ( v22 > 0x14
                    && !strcmp((const char *)(v9 + 32), "WINDOWS")
                    && (int)ExpVerifyWindowsOsOptions(v9 + 32, v22) >= 0 )
                  {
                    *(_DWORD *)(v9 + 16) |= 4u;
                  }
                  memmove((void *)(v29 + v36), v48, Size);
                  v32 = (_DWORD *)(v29 + v37);
                  *v32 = 1;
                  v32[1] = v39 + 12;
                  v32[2] = 4;
                  memmove(v32 + 3, v46, v50);
                  if ( (int)ExpVerifyFilePath((unsigned __int64)v32, (unsigned __int64)v32 + (unsigned int)v32[1]) < 0 )
                  {
                    *(_DWORD *)(v9 + 16) |= 0x20u;
                    v32[1] = 4;
                    v32[3] = 327551;
                  }
                  else if ( ExpIsDevicePathForRemovableMedia(v46) )
                  {
                    *(_DWORD *)(v9 + 16) |= 8u;
                  }
                  if ( v45 )
                    *v45 = v9 - (_DWORD)v45;
                  v11 = (_DWORD *)v9;
                  v45 = (_DWORD *)v9;
                  v28 = v40;
                }
                v9 += v28;
                goto LABEL_65;
              }
              v8 -= v24;
            }
            v25 = v34;
            goto LABEL_43;
          }
        }
      }
    }
LABEL_65:
    v33 = *v15;
    if ( !(_DWORD)v33 )
      break;
    v15 = (unsigned int *)((char *)v15 + v33);
  }
  v2 = v44;
  v10 = v35;
  if ( v11 )
    *v11 = 0;
LABEL_69:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v43 )
    ExUnlockUserBuffer(v43);
  if ( v14 >= 0 )
    v14 = v10;
  *v2 = v9 - v38;
  return v14;
}
