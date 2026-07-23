/*
 * XREFs of ExpSetDriverEntry @ 0x1406B1FAC
 * Callers:
 *     NtAddDriverEntry @ 0x1406B35A4 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x1406B45CC (NtModifyDriverEntry.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x14015D7F0 (ZwTranslateFilePath.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x1406281EC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140628318 (IoSetEnvironmentVariableEx.c)
 *     ExpSafeWcslen @ 0x1406B17CC (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x1406B33C8 (ExpVerifyFilePath.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, unsigned int *a2, unsigned __int64 a3)
{
  _DWORD *v3; // r12
  unsigned int i; // r14d
  _FILE_PATH *v6; // r15
  _FILE_PATH *v7; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v9; // rax
  SIZE_T v10; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *PoolWithTag; // rax
  _DWORD *v15; // rdi
  int EnvironmentVariable; // ebx
  __int64 v17; // rax
  char *v18; // rsi
  int v19; // eax
  __int64 v20; // r8
  _FILE_PATH *v21; // rax
  ULONG Length; // eax
  unsigned int v23; // ebx
  PVOID v24; // rax
  _WORD *v25; // rdi
  __int64 v26; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  ULONG v31; // [rsp+34h] [rbp-94h] BYREF
  ULONG OutputFilePathLength; // [rsp+38h] [rbp-90h] BYREF
  _DWORD *v33; // [rsp+40h] [rbp-88h]
  unsigned int Size; // [rsp+4Ch] [rbp-7Ch]
  int Size_4; // [rsp+50h] [rbp-78h]
  unsigned int v37; // [rsp+54h] [rbp-74h]
  PVOID v38; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h]
  unsigned int v40; // [rsp+68h] [rbp-60h]
  wchar_t Dst[12]; // [rsp+80h] [rbp-48h] BYREF

  v3 = (_DWORD *)a3;
  v33 = (_DWORD *)a3;
  Size_4 = a1;
  v38 = 0LL;
  i = 0;
  v6 = 0LL;
  v7 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)(a2 + 1);
    if ( (unsigned __int64)(a2 + 1) >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v10 = *(unsigned int *)v9;
    v37 = *(_DWORD *)v9;
  }
  else
  {
    v10 = a2[1];
    v37 = a2[1];
  }
  if ( (unsigned int)v10 < 0x14 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (unsigned __int64)a2 + (unsigned int)v10;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      v13 = a3;
      if ( a3 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v13 = *(_DWORD *)v13;
      v10 = v37;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
  v15 = PoolWithTag;
  v38 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v10);
  if ( *v15 == 1 )
  {
    if ( !Size_4 && v15[2] > 0xFFFFu )
      goto LABEL_25;
    v17 = (unsigned int)v15[3];
    if ( (v17 & 1) != 0 )
      goto LABEL_25;
    if ( (v15[4] & 3) != 0 )
      goto LABEL_25;
    v18 = (char *)v15 + v17;
    v19 = ExpSafeWcslen((_DWORD *)((char *)v15 + v17), (unsigned __int64)v15 + v10);
    if ( v19 == -1 )
      goto LABEL_25;
    Size = 2 * v19 + 2;
    v6 = (_FILE_PATH *)((char *)v15 + v20);
    EnvironmentVariable = ExpVerifyFilePath((char *)v15 + v20);
    if ( EnvironmentVariable < 0 )
      goto LABEL_58;
    if ( &v18[Size] > (char *)v6 )
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
        v21 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
        v7 = v21;
        if ( !v21 )
        {
LABEL_34:
          EnvironmentVariable = -1073741670;
          goto LABEL_58;
        }
        memset(v21, 0, OutputFilePathLength);
        v31 = OutputFilePathLength;
        EnvironmentVariable = ZwTranslateFilePath(v6, 4u, v7, (ULONG)&v31);
        if ( EnvironmentVariable < 0 )
          goto LABEL_58;
        Length = OutputFilePathLength;
LABEL_38:
        OutputFilePathLength = Length - 12;
        v40 = Size + 6 + Length - 12;
        v23 = v40;
        v24 = ExAllocatePoolWithTag(NonPagedPoolNx, v40, 0x72766E45u);
        P = v24;
        if ( !v24 )
          goto LABEL_34;
        v25 = v24;
        memset(v24, 0, v23);
        v25[2] = OutputFilePathLength;
        v26 = Size;
        memmove(v25 + 3, v18, Size);
        memmove((char *)v25 + v26 + 6, v7->FilePath, OutputFilePathLength);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        if ( Size_4 )
        {
          for ( i = 0; i <= 0xFFFF; ++i )
          {
            swprintf_s(Dst, 0xBuLL, L"Driver%04x", i);
            v31 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (__int64)Dst,
                                    (__int64)&EfiDriverVariablesGuid,
                                    0LL,
                                    (__int64)&v31,
                                    0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
            {
              swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
              v31 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (__int64)Dst,
                                      (__int64)&EfiDriverVariablesGuid,
                                      0LL,
                                      (__int64)&v31,
                                      0LL);
            }
            if ( EnvironmentVariable == -1073741568 )
              break;
            if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
              goto LABEL_56;
          }
          if ( i > 0xFFFF )
          {
            EnvironmentVariable = -1073741670;
LABEL_56:
            ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v28, v29, v30);
            v15 = v38;
            goto LABEL_58;
          }
        }
        else
        {
          i = *((_DWORD *)v38 + 2);
          swprintf_s(Dst, 0xBuLL, L"Driver%04X", i);
          v31 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(
                                  (__int64)Dst,
                                  (__int64)&EfiDriverVariablesGuid,
                                  0LL,
                                  (__int64)&v31,
                                  0LL);
          if ( EnvironmentVariable == -1073741568
            && ((2 * ((*((_DWORD *)v38 + 2) | (2 * *((_DWORD *)v38 + 2))) & 0xC4444444)) & *((_DWORD *)v38 + 2)) != 0 )
          {
            swprintf_s(Dst, 0xBuLL, L"Driver%04x");
            v31 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (__int64)Dst,
                                    (__int64)&EfiDriverVariablesGuid,
                                    0LL,
                                    (__int64)&v31,
                                    0LL);
          }
          if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
            goto LABEL_56;
        }
        EnvironmentVariable = IoSetEnvironmentVariableEx(
                                (__int64)Dst,
                                (__int64)&EfiDriverVariablesGuid,
                                (__int64)P,
                                v40,
                                1);
        goto LABEL_56;
      }
    }
LABEL_58:
    v3 = v33;
    goto LABEL_59;
  }
  EnvironmentVariable = -1073741811;
LABEL_59:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 && v7 != v6 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v15, 0);
  if ( Size_4 && v3 && EnvironmentVariable >= 0 )
    *v3 = i;
  return (unsigned int)EnvironmentVariable;
}
