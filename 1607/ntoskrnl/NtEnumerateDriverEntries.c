/*
 * XREFs of NtEnumerateDriverEntries @ 0x1406B3E64
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x140628170 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpSafeWcslen @ 0x1406B17CC (ExpSafeWcslen.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1406B27CC (ExpTranslateDriverEntryNameToId.c)
 */

NTSTATUS __stdcall NtEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r14
  unsigned int *v4; // r12
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD *v9; // rsi
  NTSTATUS v10; // r13d
  _DWORD *v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v13; // r15d
  unsigned int *PoolWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // r14
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  char *v21; // r8
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // r9d
  unsigned int v25; // r10d
  unsigned __int64 v26; // rcx
  unsigned int v27; // edx
  BOOL v28; // ecx
  unsigned int v29; // r13d
  _DWORD *v30; // rcx
  size_t v31; // r8
  __int64 v32; // rax
  BOOL v33; // [rsp+34h] [rbp-94h]
  int v34; // [rsp+38h] [rbp-90h]
  unsigned int v35; // [rsp+40h] [rbp-88h]
  unsigned int v36; // [rsp+44h] [rbp-84h]
  int v37; // [rsp+48h] [rbp-80h] BYREF
  _DWORD v38[3]; // [rsp+4Ch] [rbp-7Ch] BYREF
  _DWORD *v39; // [rsp+58h] [rbp-70h]
  PULONG v40; // [rsp+60h] [rbp-68h]
  struct _MDL *v41; // [rsp+68h] [rbp-60h] BYREF
  size_t Size; // [rsp+70h] [rbp-58h]
  void *Src; // [rsp+78h] [rbp-50h]
  void *v44; // [rsp+80h] [rbp-48h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]
  SIZE_T NumberOfBytes; // [rsp+E8h] [rbp+20h] BYREF

  v2 = BufferLength;
  v40 = BufferLength;
  v4 = 0LL;
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
    result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v38[1], &v41);
    if ( result < 0 )
      return result;
  }
  else
  {
    *(_QWORD *)&v38[1] = 0LL;
    v41 = 0LL;
  }
  v9 = *(_DWORD **)&v38[1];
  v10 = 0;
  v34 = 0;
  v33 = v8 != 0;
  v11 = 0LL;
  v39 = 0LL;
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
  if ( v13 || !(_DWORD)NumberOfBytes )
    goto LABEL_52;
  v18 = v4;
  v19 = (unsigned __int64)v4 + 2 * (unsigned int)NumberOfBytes;
  v45 = v19;
  while ( 1 )
  {
    v20 = *((_QWORD *)v18 + 2) - EfiDriverVariablesGuid;
    if ( !v20 )
      v20 = *((_QWORD *)v18 + 3) + 0x73D4FC671FFFF256LL;
    if ( !v20 && (unsigned int)ExpTranslateDriverEntryNameToId((wint_t *)v18 + 16, &v37) && v18[2] >= 8 )
    {
      v21 = (char *)v18 + v18[1];
      v38[0] = *((unsigned __int16 *)v21 + 2);
      Src = v21 + 6;
      v22 = ExpSafeWcslen((_WORD *)v21 + 3, v19);
      if ( v22 != -1 )
        v22 = 2 * v22 + 2;
      if ( v22 != -1 && v25 < v24 && v24 >= v22 + v25 + 6 )
      {
        Size = v22;
        v44 = (void *)(v23 + v22 + 6LL);
        v26 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (_DWORD *)v26 != v9 )
        {
          v27 = v26 - (_DWORD)v9;
          v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v8 < v27 )
          {
            v28 = 0;
            v33 = 0;
            v8 = 0;
            v34 = -1073741789;
LABEL_40:
            v35 = (v22 + 23) & 0xFFFFFFFC;
            v36 = v35 + v25 + 12;
            v29 = v36 + 4;
            if ( v8 >= v36 + 4 )
            {
              v8 -= v29;
            }
            else
            {
              v8 = 0;
              v28 = 0;
              v33 = 0;
              v34 = -1073741789;
            }
            if ( v28 )
            {
              memset(v9, 0, v29);
              v9[1] = 1;
              v9[2] = v36;
              v9[3] = v37;
              v9[4] = 20;
              v9[5] = v35;
              memmove(v9 + 6, Src, Size);
              v30 = (_DWORD *)((char *)v9 + v35 + 4);
              *v30 = 1;
              v31 = v38[0];
              v30[1] = v38[0] + 12;
              v30[2] = 4;
              memmove(v30 + 3, v44, v31);
              if ( v39 )
                *v39 = (_DWORD)v9 - (_DWORD)v39;
              v11 = v9;
              v39 = v9;
            }
            v9 = (_DWORD *)((char *)v9 + v29);
            v19 = v45;
            goto LABEL_48;
          }
          v8 -= v27;
        }
        v28 = v33;
        goto LABEL_40;
      }
    }
LABEL_48:
    v32 = *v18;
    if ( !(_DWORD)v32 )
      break;
    v18 = (unsigned int *)((char *)v18 + v32);
  }
  v2 = v40;
  v10 = v34;
  if ( v11 )
    *v11 = 0;
LABEL_52:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v41 )
    ExUnlockUserBuffer(v41);
  if ( v13 >= 0 )
    v13 = v10;
  *v2 = (_DWORD)v9 - v38[1];
  return v13;
}
