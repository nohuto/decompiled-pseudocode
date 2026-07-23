/*
 * XREFs of ExpSetDriverEntry @ 0x1406F2BC8
 * Callers:
 *     NtAddDriverEntry @ 0x1406F4328 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x1406F5704 (NtModifyDriverEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x1401824D0 (ZwTranslateFilePath.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x140678A7C (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140678BA8 (IoSetEnvironmentVariableEx.c)
 *     ExpSafeWcslen @ 0x1406F2334 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x1406F414C (ExpVerifyFilePath.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v3; // r12
  unsigned int i; // r14d
  _FILE_PATH *v6; // r15
  _FILE_PATH *v7; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned int *v9; // rcx
  SIZE_T v10; // rbx
  ULONG64 v12; // rcx
  ULONG64 v13; // rax
  _DWORD *v14; // rcx
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  int EnvironmentVariable; // ebx
  __int64 v18; // rax
  char *v19; // rsi
  int v20; // eax
  __int64 v21; // r8
  _FILE_PATH *v22; // rax
  ULONG Length; // eax
  unsigned int v24; // ebx
  PVOID v25; // rax
  _WORD *v26; // rdi
  __int64 v27; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v29; // rdi
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rbx
  _DWORD *v33; // r12
  signed __int32 v34; // eax
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  ULONG v37; // [rsp+34h] [rbp-A4h] BYREF
  ULONG OutputFilePathLength; // [rsp+38h] [rbp-A0h] BYREF
  unsigned int *v39; // [rsp+40h] [rbp-98h]
  int v40; // [rsp+48h] [rbp-90h]
  size_t Size; // [rsp+50h] [rbp-88h]
  PVOID v43; // [rsp+58h] [rbp-80h]
  unsigned int v44; // [rsp+60h] [rbp-78h]
  PVOID P; // [rsp+68h] [rbp-70h]
  unsigned int v46; // [rsp+70h] [rbp-68h]
  wchar_t Dst[12]; // [rsp+88h] [rbp-50h] BYREF

  v3 = a3;
  v39 = a3;
  v40 = a1;
  v43 = 0LL;
  i = 0;
  v6 = 0LL;
  v7 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = a2 + 1;
    if ( (unsigned __int64)(a2 + 1) >= MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    v10 = *v9;
    v44 = *v9;
  }
  else
  {
    v10 = a2[1];
    v44 = a2[1];
  }
  if ( (unsigned int)v10 < 0x14 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (ULONG64)a2 + (unsigned int)v10;
    v13 = MmUserProbeAddress;
    if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)a2 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v13 = MmUserProbeAddress;
    }
    if ( a3 )
    {
      v14 = a3;
      if ( (unsigned __int64)a3 >= v13 )
        v14 = (_DWORD *)v13;
      *v14 = *v14;
      v10 = v44;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
  v16 = PoolWithTag;
  v43 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v10);
  if ( *v16 == 1 )
  {
    if ( !v40 && v16[2] > 0xFFFFu )
      goto LABEL_25;
    v18 = (unsigned int)v16[3];
    if ( (v18 & 1) != 0 )
      goto LABEL_25;
    if ( (v16[4] & 3) != 0 )
      goto LABEL_25;
    v19 = (char *)v16 + v18;
    v20 = ExpSafeWcslen((_DWORD *)((char *)v16 + v18), (unsigned __int64)v16 + v10);
    if ( v20 == -1 )
      goto LABEL_25;
    LODWORD(Size) = 2 * v20 + 2;
    v6 = (_FILE_PATH *)((char *)v16 + v21);
    EnvironmentVariable = ExpVerifyFilePath((char *)v16 + v21);
    if ( EnvironmentVariable < 0 )
      goto LABEL_68;
    if ( &v19[(unsigned int)Size] > (char *)v6 )
    {
LABEL_25:
      EnvironmentVariable = -1073741811;
    }
    else
    {
      if ( v6->Type == 4 )
      {
        Length = v6->Length;
        v7 = v6;
        goto LABEL_38;
      }
      OutputFilePathLength = 0;
      EnvironmentVariable = ZwTranslateFilePath(v6, 4u, 0LL, (ULONG)&OutputFilePathLength);
      if ( EnvironmentVariable == -1073741789 )
      {
        v22 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
        v7 = v22;
        if ( !v22 )
        {
LABEL_34:
          EnvironmentVariable = -1073741670;
          goto LABEL_68;
        }
        memset(v22, 0, OutputFilePathLength);
        v37 = OutputFilePathLength;
        EnvironmentVariable = ZwTranslateFilePath(v6, 4u, v7, (ULONG)&v37);
        if ( EnvironmentVariable < 0 )
          goto LABEL_68;
        Length = OutputFilePathLength;
LABEL_38:
        OutputFilePathLength = Length - 12;
        v46 = Size + 6 + Length - 12;
        v24 = v46;
        v25 = ExAllocatePoolWithTag(NonPagedPoolNx, v46, 0x72766E45u);
        P = v25;
        if ( !v25 )
          goto LABEL_34;
        v26 = v25;
        memset(v25, 0, v24);
        v26[2] = OutputFilePathLength;
        v27 = (unsigned int)Size;
        memmove(v26 + 3, v19, (unsigned int)Size);
        memmove((char *)v26 + v27 + 6, v7->FilePath, OutputFilePathLength);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v29 = KeGetCurrentThread();
        v31 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v30);
        v32 = v31;
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v31);
        if ( v32 )
          *(_BYTE *)(v32 + 26) |= 1u;
        qword_140325228 = (__int64)v29;
        if ( v40 )
        {
          for ( i = 0; i <= 0xFFFF; ++i )
          {
            swprintf_s(Dst, 0xBuLL, L"Driver%04x", i);
            v37 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (__int64)Dst,
                                    (__int64)&EfiDriverVariablesGuid,
                                    0LL,
                                    (__int64)&v37,
                                    0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
            {
              swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
              v37 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (__int64)Dst,
                                      (__int64)&EfiDriverVariablesGuid,
                                      0LL,
                                      (__int64)&v37,
                                      0LL);
            }
            if ( EnvironmentVariable == -1073741568 )
              break;
            if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
              goto LABEL_60;
          }
          if ( i > 0xFFFF )
          {
            EnvironmentVariable = -1073741670;
LABEL_60:
            qword_140325228 = 0LL;
            v34 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
            if ( v34 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v34);
            KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
            v35 = KeGetCurrentThread();
            v36 = v35->KernelApcDisable + 1;
            v35->KernelApcDisable = v36;
            if ( !v36
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
              && !v35->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            v16 = v43;
            goto LABEL_68;
          }
        }
        else
        {
          v33 = v43;
          i = *((_DWORD *)v43 + 2);
          swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
          v37 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(
                                  (__int64)Dst,
                                  (__int64)&EfiDriverVariablesGuid,
                                  0LL,
                                  (__int64)&v37,
                                  0LL);
          if ( EnvironmentVariable == -1073741568 && ((2 * ((v33[2] | (2 * v33[2])) & 0xC4444444)) & v33[2]) != 0 )
          {
            swprintf_s(Dst, 0xBuLL, L"Driver%04x");
            v37 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (__int64)Dst,
                                    (__int64)&EfiDriverVariablesGuid,
                                    0LL,
                                    (__int64)&v37,
                                    0LL);
          }
          if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
            goto LABEL_60;
        }
        EnvironmentVariable = IoSetEnvironmentVariableEx(
                                (__int64)Dst,
                                (__int64)&EfiDriverVariablesGuid,
                                (__int64)P,
                                v46,
                                1);
        goto LABEL_60;
      }
    }
LABEL_68:
    v3 = v39;
    goto LABEL_69;
  }
  EnvironmentVariable = -1073741811;
LABEL_69:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 && v7 != v6 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v16, 0);
  if ( v40 && v3 && EnvironmentVariable >= 0 )
    *v3 = i;
  return (unsigned int)EnvironmentVariable;
}
