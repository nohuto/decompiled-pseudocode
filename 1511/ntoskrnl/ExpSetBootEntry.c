/*
 * XREFs of ExpSetBootEntry @ 0x14066E9A4
 * Callers:
 *     NtAddBootEntry @ 0x14067075C (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x140671784 (NtModifyBootEntry.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     strcmp @ 0x140145390 (strcmp.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x140153B60 (ZwTranslateFilePath.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x1405FE10C (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1405FE238 (IoSetEnvironmentVariableEx.c)
 *     ExpSafeWcslen @ 0x14066E97C (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x1406705A0 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1406706F4 (ExpVerifyWindowsOsOptions.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpSetBootEntry(int a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *v3; // r12
  unsigned int i; // r14d
  _FILE_PATH *v6; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned int *v8; // rcx
  unsigned int v9; // ebx
  ULONG64 v11; // rcx
  ULONG64 v12; // rax
  _DWORD *v13; // rcx
  unsigned int *PoolWithTag; // rax
  unsigned int *v15; // rdi
  int EnvironmentVariable; // ebx
  _FILE_PATH *v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rsi
  _FILE_PATH *v20; // r15
  char *v21; // r13
  int v22; // eax
  _FILE_PATH *v23; // rax
  _FILE_PATH *v24; // rbx
  ULONG Length; // eax
  ULONG v26; // eax
  ULONG v27; // esi
  size_t v28; // rbx
  PVOID v29; // rax
  size_t v30; // r8
  int *v31; // rbx
  int v32; // ecx
  void *v33; // rcx
  __int64 v34; // rbx
  char *v35; // rbx
  char *v36; // r13
  _FILE_PATH *v37; // r8
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v39; // r13
  ULONG OutputFilePathLength; // [rsp+34h] [rbp-C4h] BYREF
  ULONG v41; // [rsp+38h] [rbp-C0h] BYREF
  _FILE_PATH *v42; // [rsp+40h] [rbp-B8h]
  unsigned int *v43; // [rsp+50h] [rbp-A8h]
  _FILE_PATH *v44; // [rsp+58h] [rbp-A0h]
  ULONG v45; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v46; // [rsp+64h] [rbp-94h]
  int v47; // [rsp+68h] [rbp-90h]
  int v49; // [rsp+70h] [rbp-88h]
  unsigned int v50; // [rsp+74h] [rbp-84h]
  PVOID P; // [rsp+78h] [rbp-80h]
  size_t Size; // [rsp+80h] [rbp-78h]
  PVOID v53; // [rsp+88h] [rbp-70h]
  char *v54; // [rsp+90h] [rbp-68h]
  wchar_t Dst[12]; // [rsp+A8h] [rbp-50h] BYREF

  v3 = a3;
  v43 = a3;
  v49 = a1;
  v53 = 0LL;
  i = 0;
  v44 = 0LL;
  v6 = 0LL;
  v42 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = a2 + 1;
    if ( (unsigned __int64)(a2 + 1) >= MmUserProbeAddress )
      v8 = (unsigned int *)MmUserProbeAddress;
    v9 = *v8;
    v50 = *v8;
  }
  else
  {
    v9 = a2[1];
    v50 = v9;
  }
  if ( v9 < 0x1C )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (ULONG64)a2 + v9;
    v12 = MmUserProbeAddress;
    if ( v11 > MmUserProbeAddress || v11 < (unsigned __int64)a2 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v12 = MmUserProbeAddress;
    }
    if ( a3 )
    {
      v13 = a3;
      if ( (unsigned __int64)a3 >= v12 )
        v13 = (_DWORD *)v12;
      *v13 = *v13;
      v9 = v50;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72766E45u);
  v15 = PoolWithTag;
  v53 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v9);
  Size = (size_t)v15 + v9;
  if ( *v15 == 1 && (v49 || v15[2] <= 0xFFFF) )
  {
    v15[3] &= 3u;
    v18 = v15[4];
    if ( (v18 & 1) != 0
      || (v46 = v15[5], (v46 & 3) != 0)
      || (v19 = v15[6], (unsigned int)v19 > v9)
      || (v54 = (char *)v15 + v19 + 28, v54 >= (char *)v15 + v9) )
    {
      EnvironmentVariable = -1073741811;
      v17 = v44;
      v6 = v44;
      goto LABEL_86;
    }
    if ( (unsigned int)v19 >= 8 && !strcmp((const char *)v15 + 28, "WINDOWS") )
    {
      if ( (unsigned int)v19 <= 0x14 )
      {
LABEL_33:
        EnvironmentVariable = -1073741811;
LABEL_34:
        v17 = v44;
        v6 = v44;
LABEL_85:
        v3 = v43;
        goto LABEL_86;
      }
      EnvironmentVariable = ExpVerifyWindowsOsOptions(v15 + 7, (unsigned int)v19);
      if ( EnvironmentVariable < 0 )
        goto LABEL_34;
      v47 = 1;
      v20 = (_FILE_PATH *)((char *)v15 + v15[11] + 28);
    }
    else
    {
      v47 = 0;
      v20 = 0LL;
    }
    v21 = (char *)v15 + v18;
    v22 = ExpSafeWcslen(v21, Size);
    if ( v22 == -1 )
      goto LABEL_33;
    LODWORD(Size) = 2 * v22 + 2;
    v17 = (_FILE_PATH *)((char *)v15 + v46);
    v44 = v17;
    EnvironmentVariable = ExpVerifyFilePath(v17);
    if ( EnvironmentVariable >= 0 )
    {
      if ( v54 > v21 || &v21[(unsigned int)Size] > (char *)v17 )
      {
        EnvironmentVariable = -1073741811;
        goto LABEL_84;
      }
      if ( v17->Type == 4 )
      {
        Length = v17->Length;
        v42 = (_FILE_PATH *)((char *)v15 + v46);
      }
      else
      {
        OutputFilePathLength = 0;
        EnvironmentVariable = ZwTranslateFilePath(v17, 4u, 0LL, (ULONG)&OutputFilePathLength);
        if ( EnvironmentVariable != -1073741789 )
          goto LABEL_84;
        v23 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
        v24 = v23;
        v42 = v23;
        if ( !v23 )
        {
          EnvironmentVariable = -1073741670;
          v6 = 0LL;
          goto LABEL_85;
        }
        memset(v23, 0, OutputFilePathLength);
        v41 = OutputFilePathLength;
        EnvironmentVariable = ZwTranslateFilePath(v17, 4u, v24, (ULONG)&v41);
        if ( EnvironmentVariable < 0 )
          goto LABEL_84;
        Length = OutputFilePathLength;
      }
      v26 = Length - 12;
      OutputFilePathLength = v26;
      v45 = 0;
      if ( !v47 || v20->Type == 4 )
      {
        v27 = v15[6];
LABEL_54:
        v46 = Size + 6 + v27 + v26;
        v28 = v46;
        v29 = ExAllocatePoolWithTag(NonPagedPoolNx, v46, 0x72766E45u);
        P = v29;
        if ( !v29 )
        {
          EnvironmentVariable = -1073741670;
LABEL_56:
          v17 = v44;
          goto LABEL_84;
        }
        v30 = v28;
        v31 = (int *)v29;
        memset(v29, 0, v30);
        *v31 = 0;
        v32 = *v31;
        if ( (v15[3] & 1) != 0 )
          v32 = 1;
        *v31 = v32;
        *((_WORD *)v31 + 2) = OutputFilePathLength;
        v33 = (char *)v31 + 6;
        v34 = (unsigned int)Size;
        memmove(v33, v21, (unsigned int)Size);
        v35 = (char *)P + v34 + 6;
        memmove(v35, v42->FilePath, OutputFilePathLength);
        v36 = &v35[OutputFilePathLength];
        if ( !v47 || v20->Type == 4 )
        {
          memmove(&v35[OutputFilePathLength], v15 + 7, v27);
        }
        else
        {
          memmove(&v35[OutputFilePathLength], v15 + 7, v15[11]);
          *((_DWORD *)v36 + 3) = v27;
          v37 = (_FILE_PATH *)&v36[v15[11]];
          v41 = v45;
          EnvironmentVariable = ZwTranslateFilePath(v20, 4u, v37, (ULONG)&v45);
          if ( EnvironmentVariable )
            goto LABEL_56;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
        if ( v49 )
        {
          for ( i = 0; i <= 0xFFFF; ++i )
          {
            swprintf_s(Dst, 9uLL, L"Boot%04x", i);
            v41 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (__int64)Dst,
                                    (__int64)&EfiBootVariablesGuid,
                                    0LL,
                                    (__int64)&v41,
                                    0LL);
            if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
            {
              swprintf_s(Dst, 9uLL, L"Boot%04X", i);
              v41 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      (__int64)Dst,
                                      (__int64)&EfiBootVariablesGuid,
                                      0LL,
                                      (__int64)&v41,
                                      0LL);
            }
            if ( EnvironmentVariable == -1073741568 )
              break;
            if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
              goto LABEL_81;
          }
          if ( i > 0xFFFF )
          {
            EnvironmentVariable = -1073741670;
LABEL_81:
            ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v15 = (unsigned int *)v53;
            goto LABEL_56;
          }
        }
        else
        {
          v39 = v53;
          i = *((_DWORD *)v53 + 2);
          swprintf_s(Dst, 9uLL, L"Boot%04X", i);
          v41 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(
                                  (__int64)Dst,
                                  (__int64)&EfiBootVariablesGuid,
                                  0LL,
                                  (__int64)&v41,
                                  0LL);
          if ( EnvironmentVariable == -1073741568 && ((2 * ((v39[2] | (2 * v39[2])) & 0xC4444444)) & v39[2]) != 0 )
          {
            swprintf_s(Dst, 9uLL, L"Boot%04x");
            v41 = 0;
            EnvironmentVariable = IoGetEnvironmentVariableEx(
                                    (__int64)Dst,
                                    (__int64)&EfiBootVariablesGuid,
                                    0LL,
                                    (__int64)&v41,
                                    0LL);
          }
          if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
            goto LABEL_81;
        }
        EnvironmentVariable = IoSetEnvironmentVariableEx(
                                (__int64)Dst,
                                (__int64)&EfiBootVariablesGuid,
                                (__int64)P,
                                v46,
                                1);
        goto LABEL_81;
      }
      EnvironmentVariable = ZwTranslateFilePath(v20, 4u, 0LL, (ULONG)&v45);
      if ( EnvironmentVariable == -1073741789 )
      {
        v27 = v15[6] + v45 - v20->Length;
        v26 = OutputFilePathLength;
        goto LABEL_54;
      }
    }
LABEL_84:
    v6 = v42;
    goto LABEL_85;
  }
  EnvironmentVariable = -1073741811;
  v17 = v44;
LABEL_86:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v6 && v6 != v17 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v49 && v3 && EnvironmentVariable >= 0 )
    *v3 = i;
  return (unsigned int)EnvironmentVariable;
}
