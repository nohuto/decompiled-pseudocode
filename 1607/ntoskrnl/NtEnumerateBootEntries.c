/*
 * XREFs of NtEnumerateBootEntries @ 0x1406B38C4
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     strcmp @ 0x14014ED30 (strcmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExpIsDevicePathForRemovableMedia @ 0x14022E520 (ExpIsDevicePathForRemovableMedia.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140628170 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x1406B17CC (ExpSafeWcslen.c)
 *     ExpTranslateBootEntryNameToId @ 0x1406B26FC (ExpTranslateBootEntryNameToId.c)
 *     ExpVerifyFilePath @ 0x1406B33C8 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1406B351C (ExpVerifyWindowsOsOptions.c)
 */

NTSTATUS __stdcall NtEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r15
  unsigned int *PoolWithTag; // r14
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _DWORD *v9; // rsi
  NTSTATUS v10; // r13d
  _DWORD *v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // eax
  NTSTATUS v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // r15
  __int64 v19; // rax
  unsigned int v20; // r13d
  unsigned int v21; // eax
  __int64 v22; // r8
  size_t v23; // r9
  unsigned int v24; // ecx
  unsigned int v25; // r13d
  unsigned __int64 v26; // rcx
  unsigned int v27; // edx
  BOOL v28; // edx
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  _DWORD *v32; // rdi
  _DWORD *v33; // rcx
  int v34; // eax
  _DWORD *v35; // r13
  __int64 v36; // rax
  BOOL v37; // [rsp+34h] [rbp-B4h]
  int v38; // [rsp+38h] [rbp-B0h]
  unsigned int v39; // [rsp+40h] [rbp-A8h]
  unsigned int v40; // [rsp+44h] [rbp-A4h]
  unsigned int v41; // [rsp+48h] [rbp-A0h]
  int v42; // [rsp+4Ch] [rbp-9Ch] BYREF
  int v43; // [rsp+50h] [rbp-98h]
  unsigned int v44; // [rsp+54h] [rbp-94h]
  _DWORD *v45; // [rsp+58h] [rbp-90h] BYREF
  void *v46; // [rsp+60h] [rbp-88h]
  _DWORD *v47; // [rsp+68h] [rbp-80h]
  PULONG v48; // [rsp+70h] [rbp-78h]
  struct _MDL *v49; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v50; // [rsp+80h] [rbp-68h]
  char *v51; // [rsp+88h] [rbp-60h]
  void *Src; // [rsp+90h] [rbp-58h]
  size_t Size; // [rsp+98h] [rbp-50h]
  void *v54; // [rsp+A0h] [rbp-48h]
  size_t v55; // [rsp+A8h] [rbp-40h]
  unsigned int i; // [rsp+108h] [rbp+20h] BYREF

  v2 = BufferLength;
  v48 = BufferLength;
  PoolWithTag = 0LL;
  if ( dword_1402FD030 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = (__int64)BufferLength;
    if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v7 = *(_DWORD *)v7;
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
    result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v45, &v49);
    if ( result < 0 )
      return result;
  }
  else
  {
    v45 = 0LL;
    v49 = 0LL;
  }
  v9 = v45;
  v37 = v8 != 0;
  v10 = 0;
  v38 = 0;
  v11 = 0LL;
  v47 = 0LL;
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
  if ( v14 || !i )
    goto LABEL_69;
  v18 = PoolWithTag;
  v50 = (unsigned __int64)PoolWithTag + 2 * i;
  while ( 1 )
  {
    v19 = *((_QWORD *)v18 + 2) - EfiBootVariablesGuid;
    if ( !v19 )
      v19 = *((_QWORD *)v18 + 3) + 0x73D4FC671FFFF256LL;
    if ( !v19 )
    {
      if ( (unsigned int)ExpTranslateBootEntryNameToId((wint_t *)v18 + 16, &v42) )
      {
        v20 = v18[2];
        if ( v20 >= 8 )
        {
          v51 = (char *)v18 + v18[1];
          v43 = *((unsigned __int16 *)v51 + 2);
          v54 = v51 + 6;
          v21 = ExpSafeWcslen((_WORD *)v51 + 3, v50);
          if ( v21 != -1 )
            v21 = 2 * v21 + 2;
          v24 = v21 + v23 + 6;
          if ( v21 != -1 && (unsigned int)v23 < v20 && v20 >= v24 )
          {
            Size = v21;
            v46 = (void *)(v22 + v21 + 6LL);
            v55 = v23;
            Src = (char *)v46 + v23;
            v25 = v20 - v24;
            v26 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( (_DWORD *)v26 != v9 )
            {
              v27 = v26 - (_DWORD)v9;
              v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
              if ( v8 < v27 )
              {
                v28 = 0;
                v37 = 0;
                v8 = 0;
                v38 = -1073741789;
LABEL_43:
                v39 = (v25 + 31) & 0xFFFFFFFC;
                v40 = (v21 + 3 + v39) & 0xFFFFFFFC;
                v29 = v40 + 12;
                v30 = 4;
                if ( (unsigned int)v23 > 4 )
                  v30 = v23;
                v41 = v30 + v29;
                v31 = v30 + v29 + 4;
                v44 = v31;
                if ( v8 >= v31 )
                {
                  v8 -= v31;
                }
                else
                {
                  v8 = 0;
                  v28 = 0;
                  v37 = 0;
                  v38 = -1073741789;
                }
                if ( v28 )
                {
                  v32 = v9 + 1;
                  memset(v9, 0, v31);
                  v9[1] = 1;
                  v9[2] = v41;
                  v9[3] = v42;
                  v9[4] = 0;
                  v33 = v51;
                  v34 = v9[4];
                  if ( (*v51 & 1) != 0 )
                    v34 = 1;
                  v9[4] = v34;
                  if ( (*v33 & 8) != 0 )
                    v9[4] |= 0x10u;
                  v9[5] = v39;
                  v9[6] = v40;
                  v9[7] = v25;
                  memmove(v9 + 8, Src, v25);
                  if ( v25 > 0x14
                    && !strcmp((const char *)v9 + 32, "WINDOWS")
                    && (int)ExpVerifyWindowsOsOptions((__int64)(v9 + 8), v25) >= 0 )
                  {
                    v9[4] |= 4u;
                  }
                  memmove((char *)v32 + v39, v54, Size);
                  v35 = (_DWORD *)((char *)v32 + v40);
                  *v35 = 1;
                  v35[1] = v43 + 12;
                  v35[2] = 4;
                  memmove(v35 + 3, v46, v55);
                  if ( (int)ExpVerifyFilePath((unsigned __int64)v35, (unsigned __int64)v35 + (unsigned int)v35[1]) < 0 )
                  {
                    v9[4] |= 0x20u;
                    v35[1] = 4;
                    v35[3] = 327551;
                  }
                  else if ( ExpIsDevicePathForRemovableMedia(v46) )
                  {
                    v9[4] |= 8u;
                  }
                  if ( v47 )
                    *v47 = (_DWORD)v9 - (_DWORD)v47;
                  v11 = v9;
                  v47 = v9;
                  v31 = v44;
                }
                v9 = (_DWORD *)((char *)v9 + v31);
                goto LABEL_65;
              }
              v8 -= v27;
            }
            v28 = v37;
            goto LABEL_43;
          }
        }
      }
    }
LABEL_65:
    v36 = *v18;
    if ( !(_DWORD)v36 )
      break;
    v18 = (unsigned int *)((char *)v18 + v36);
  }
  v2 = v48;
  v10 = v38;
  if ( v11 )
    *v11 = 0;
LABEL_69:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v49 )
    ExUnlockUserBuffer(v49);
  if ( v14 >= 0 )
    v14 = v10;
  *v2 = (_DWORD)v9 - (_DWORD)v45;
  return v14;
}
