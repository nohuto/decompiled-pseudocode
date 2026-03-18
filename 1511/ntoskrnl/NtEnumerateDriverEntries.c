/*
 * XREFs of NtEnumerateDriverEntries @ 0x140671040
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x1405FE090 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x14066E97C (ExpSafeWcslen.c)
 *     ExpTranslateDriverEntryNameToId @ 0x14066F98C (ExpTranslateDriverEntryNameToId.c)
 */

NTSTATUS __stdcall NtEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r14
  unsigned int *v4; // r12
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  _DWORD *v7; // rcx
  unsigned int v8; // edi
  _DWORD *v9; // rsi
  NTSTATUS v10; // r13d
  _DWORD *v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v13; // r15d
  unsigned int *PoolWithTag; // rax
  unsigned int *v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  char *v18; // r8
  unsigned int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  BOOL v25; // ecx
  unsigned int v26; // r13d
  _DWORD *v27; // rcx
  __int64 v28; // rax
  BOOL v29; // [rsp+34h] [rbp-94h]
  int v30; // [rsp+38h] [rbp-90h]
  unsigned int v31; // [rsp+40h] [rbp-88h]
  unsigned int v32; // [rsp+44h] [rbp-84h]
  unsigned int v33; // [rsp+48h] [rbp-80h]
  int v34; // [rsp+4Ch] [rbp-7Ch] BYREF
  _DWORD *v35; // [rsp+50h] [rbp-78h] BYREF
  struct _MDL *v36; // [rsp+58h] [rbp-70h] BYREF
  PULONG v37; // [rsp+60h] [rbp-68h]
  _DWORD *v38; // [rsp+68h] [rbp-60h]
  void *Src; // [rsp+70h] [rbp-58h]
  unsigned __int64 v40; // [rsp+78h] [rbp-50h]
  size_t Size; // [rsp+80h] [rbp-48h]
  void *v42; // [rsp+90h] [rbp-38h]
  SIZE_T NumberOfBytes; // [rsp+E8h] [rbp+20h] BYREF

  v2 = BufferLength;
  v37 = BufferLength;
  v4 = 0LL;
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
    result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v35, &v36);
    if ( result < 0 )
      return result;
  }
  else
  {
    v35 = 0LL;
    v36 = 0LL;
  }
  v9 = v35;
  v10 = 0;
  v30 = 0;
  v29 = v8 != 0;
  v11 = 0LL;
  v38 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  LODWORD(NumberOfBytes) = 0;
  v13 = IoEnumerateEnvironmentVariablesEx(2u, 0LL, (__int64)&NumberOfBytes);
  if ( v13 == -1073741789 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72766E45u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
      v13 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)PoolWithTag, (__int64)&NumberOfBytes);
    else
      v13 = -1073741670;
  }
  else
  {
    LODWORD(NumberOfBytes) = 0;
  }
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v13 || !(_DWORD)NumberOfBytes )
    goto LABEL_52;
  v15 = v4;
  v16 = (unsigned __int64)v4 + 2 * (unsigned int)NumberOfBytes;
  v40 = v16;
  while ( 1 )
  {
    v17 = *((_QWORD *)v15 + 2) - EfiDriverVariablesGuid;
    if ( !v17 )
      v17 = *((_QWORD *)v15 + 3) + 0x73D4FC671FFFF256LL;
    if ( !v17 && (unsigned int)ExpTranslateDriverEntryNameToId((wint_t *)v15 + 16, &v34) && v15[2] >= 8 )
    {
      v18 = (char *)v15 + v15[1];
      v32 = *((unsigned __int16 *)v18 + 2);
      Src = v18 + 6;
      v19 = ExpSafeWcslen((_WORD *)v18 + 3, v16);
      if ( v19 != -1 )
        v19 = 2 * v19 + 2;
      if ( v19 != -1 && v22 < v21 && v21 >= v19 + v22 + 6 )
      {
        Size = v19;
        v42 = (void *)(v20 + v19 + 6LL);
        v23 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (_DWORD *)v23 != v9 )
        {
          v24 = v23 - (_DWORD)v9;
          v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v8 < v24 )
          {
            v25 = 0;
            v29 = 0;
            v8 = 0;
            v30 = -1073741789;
LABEL_40:
            v31 = (v19 + 23) & 0xFFFFFFFC;
            v33 = v31 + v22 + 12;
            v26 = v33 + 4;
            if ( v8 >= v33 + 4 )
            {
              v8 -= v26;
            }
            else
            {
              v8 = 0;
              v25 = 0;
              v29 = 0;
              v30 = -1073741789;
            }
            if ( v25 )
            {
              memset(v9, 0, v26);
              v9[1] = 1;
              v9[2] = v33;
              v9[3] = v34;
              v9[4] = 20;
              v9[5] = v31;
              memmove(v9 + 6, Src, Size);
              v27 = (_DWORD *)((char *)v9 + v31 + 4);
              *v27 = 1;
              v27[1] = v32 + 12;
              v27[2] = 4;
              memmove(v27 + 3, v42, v32);
              if ( v38 )
                *v38 = (_DWORD)v9 - (_DWORD)v38;
              v11 = v9;
              v38 = v9;
            }
            v9 = (_DWORD *)((char *)v9 + v26);
            v16 = v40;
            goto LABEL_48;
          }
          v8 -= v24;
        }
        v25 = v29;
        goto LABEL_40;
      }
    }
LABEL_48:
    v28 = *v15;
    if ( !(_DWORD)v28 )
      break;
    v15 = (unsigned int *)((char *)v15 + v28);
  }
  v2 = v37;
  v10 = v30;
  if ( v11 )
    *v11 = 0;
LABEL_52:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v36 )
    ExUnlockUserBuffer(v36);
  if ( v13 >= 0 )
    v13 = v10;
  *v2 = (_DWORD)v9 - (_DWORD)v35;
  return v13;
}
