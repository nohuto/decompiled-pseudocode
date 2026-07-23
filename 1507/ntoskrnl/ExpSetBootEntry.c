/*
 * XREFs of ExpSetBootEntry @ 0x1406F235C
 * Callers:
 *     NtAddBootEntry @ 0x1406F4308 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x1406F56E8 (NtModifyBootEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     strcmp @ 0x1401733C0 (strcmp.c)
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
 *     ExpVerifyWindowsOsOptions @ 0x1406F42A0 (ExpVerifyWindowsOsOptions.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  _FILE_PATH *v16; // r15
  int EnvironmentVariable; // ebx
  _FILE_PATH *v18; // rsi
  __int64 v19; // r13
  __int64 v20; // rsi
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
  _WORD *v31; // rbx
  void *v32; // rcx
  __int64 v33; // rbx
  char *v34; // rbx
  char *v35; // r13
  _FILE_PATH *v36; // r8
  __int64 v37; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rbx
  _DWORD *v42; // r13
  signed __int32 v43; // eax
  struct _KTHREAD *v44; // rcx
  __int16 v45; // ax
  ULONG OutputFilePathLength; // [rsp+34h] [rbp-C4h] BYREF
  ULONG v47; // [rsp+38h] [rbp-C0h] BYREF
  _FILE_PATH *v48; // [rsp+40h] [rbp-B8h]
  unsigned int *v49; // [rsp+50h] [rbp-A8h]
  _FILE_PATH *v50; // [rsp+58h] [rbp-A0h]
  ULONG v51; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v52; // [rsp+64h] [rbp-94h]
  int v53; // [rsp+68h] [rbp-90h]
  int v55; // [rsp+70h] [rbp-88h]
  unsigned int v56; // [rsp+74h] [rbp-84h]
  PVOID P; // [rsp+78h] [rbp-80h]
  size_t Size; // [rsp+80h] [rbp-78h]
  PVOID v59; // [rsp+88h] [rbp-70h]
  char *v60; // [rsp+90h] [rbp-68h]
  wchar_t Dst[12]; // [rsp+A8h] [rbp-50h] BYREF

  v3 = a3;
  v49 = a3;
  v55 = a1;
  v59 = 0LL;
  i = 0;
  v50 = 0LL;
  v6 = 0LL;
  v48 = 0LL;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = a2 + 1;
    if ( (unsigned __int64)(a2 + 1) >= MmUserProbeAddress )
      v8 = (unsigned int *)MmUserProbeAddress;
    v9 = *v8;
    v56 = *v8;
  }
  else
  {
    v9 = a2[1];
    v56 = v9;
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
      v9 = v56;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72766E45u);
  v15 = PoolWithTag;
  v59 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v9);
  Size = (size_t)v15 + v9;
  if ( *v15 != 1 )
  {
    EnvironmentVariable = -1073741811;
    v18 = v50;
    goto LABEL_98;
  }
  v16 = 0LL;
  if ( v55 || v15[2] <= 0xFFFF )
  {
    v15[3] &= 3u;
    v19 = v15[4];
    if ( (v19 & 1) != 0
      || (v52 = v15[5], (v52 & 3) != 0)
      || (v20 = v15[6], (unsigned int)v20 > v9)
      || (v60 = (char *)v15 + v20 + 28, v60 >= (char *)v15 + v9) )
    {
      EnvironmentVariable = -1073741811;
      v18 = 0LL;
      v6 = 0LL;
      goto LABEL_98;
    }
    if ( (unsigned int)v20 >= 8 && !strcmp((const char *)v15 + 28, "WINDOWS") )
    {
      if ( (unsigned int)v20 <= 0x14 )
      {
        EnvironmentVariable = -1073741811;
LABEL_34:
        v18 = 0LL;
LABEL_35:
        v6 = v18;
LABEL_97:
        v3 = v49;
        goto LABEL_98;
      }
      EnvironmentVariable = ExpVerifyWindowsOsOptions(v15 + 7, (unsigned int)v20);
      if ( EnvironmentVariable < 0 )
        goto LABEL_34;
      v53 = 1;
      v16 = (_FILE_PATH *)((char *)v15 + v15[11] + 28);
    }
    else
    {
      v53 = 0;
    }
    v21 = (char *)v15 + v19;
    v22 = ExpSafeWcslen(v21, Size);
    if ( v22 == -1 )
    {
      EnvironmentVariable = -1073741811;
      v18 = v50;
      goto LABEL_35;
    }
    LODWORD(Size) = 2 * v22 + 2;
    v18 = (_FILE_PATH *)((char *)v15 + v52);
    v50 = v18;
    EnvironmentVariable = ExpVerifyFilePath(v18);
    if ( EnvironmentVariable < 0 )
    {
      v6 = 0LL;
      goto LABEL_97;
    }
    if ( v60 > v21 || &v21[(unsigned int)Size] > (char *)v18 )
    {
      EnvironmentVariable = -1073741811;
      goto LABEL_48;
    }
    if ( v18->Type == 4 )
    {
      Length = v18->Length;
      v48 = (_FILE_PATH *)((char *)v15 + v52);
    }
    else
    {
      OutputFilePathLength = 0;
      EnvironmentVariable = ZwTranslateFilePath(v18, 4u, 0LL, (ULONG)&OutputFilePathLength);
      if ( EnvironmentVariable != -1073741789 )
      {
LABEL_48:
        v6 = v48;
        goto LABEL_97;
      }
      v23 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
      v24 = v23;
      v48 = v23;
      if ( !v23 )
      {
        EnvironmentVariable = -1073741670;
        goto LABEL_48;
      }
      memset(v23, 0, OutputFilePathLength);
      v47 = OutputFilePathLength;
      EnvironmentVariable = ZwTranslateFilePath(v18, 4u, v24, (ULONG)&v47);
      if ( EnvironmentVariable < 0 )
        goto LABEL_48;
      Length = OutputFilePathLength;
    }
    v26 = Length - 12;
    OutputFilePathLength = v26;
    v51 = 0;
    if ( !v53 || v16->Type == 4 )
    {
      v27 = v15[6];
    }
    else
    {
      EnvironmentVariable = ZwTranslateFilePath(v16, 4u, 0LL, (ULONG)&v51);
      if ( EnvironmentVariable != -1073741789 )
        goto LABEL_48;
      v27 = v15[6] + v51 - v16->Length;
      v26 = OutputFilePathLength;
    }
    v52 = Size + 6 + v27 + v26;
    v28 = v52;
    v29 = ExAllocatePoolWithTag(NonPagedPoolNx, v52, 0x72766E45u);
    P = v29;
    if ( !v29 )
    {
      EnvironmentVariable = -1073741670;
LABEL_59:
      v18 = v50;
      goto LABEL_48;
    }
    v30 = v28;
    v31 = v29;
    memset(v29, 0, v30);
    *(_DWORD *)v31 = 0;
    *(_DWORD *)v31 = (v15[3] & 1) != 0;
    v31[2] = OutputFilePathLength;
    v32 = v31 + 3;
    v33 = (unsigned int)Size;
    memmove(v32, v21, (unsigned int)Size);
    v34 = (char *)P + v33 + 6;
    memmove(v34, v48->FilePath, OutputFilePathLength);
    v35 = &v34[OutputFilePathLength];
    if ( !v53 || v16->Type == 4 )
    {
      memmove(&v34[OutputFilePathLength], v15 + 7, v27);
    }
    else
    {
      memmove(&v34[OutputFilePathLength], v15 + 7, v15[11]);
      *((_DWORD *)v35 + 3) = v27;
      v36 = (_FILE_PATH *)&v35[v15[11]];
      v47 = v51;
      EnvironmentVariable = ZwTranslateFilePath(v16, 4u, v36, (ULONG)&v51);
      if ( EnvironmentVariable )
        goto LABEL_59;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v39 = KeGetCurrentThread();
    v40 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v37);
    v41 = v40;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v40);
    if ( v41 )
      *(_BYTE *)(v41 + 26) |= 1u;
    qword_140325228 = (__int64)v39;
    if ( v55 )
    {
      for ( i = 0; i <= 0xFFFF; ++i )
      {
        swprintf_s(Dst, 9uLL, L"Boot%04x", i);
        v47 = 0;
        EnvironmentVariable = IoGetEnvironmentVariableEx(
                                (__int64)Dst,
                                (__int64)&EfiBootVariablesGuid,
                                0LL,
                                (__int64)&v47,
                                0LL);
        if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
        {
          swprintf_s(Dst, 9uLL, L"Boot%04X", i);
          v47 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(
                                  (__int64)Dst,
                                  (__int64)&EfiBootVariablesGuid,
                                  0LL,
                                  (__int64)&v47,
                                  0LL);
        }
        if ( EnvironmentVariable == -1073741568 )
          break;
        if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
          goto LABEL_86;
      }
      if ( i > 0xFFFF )
      {
        EnvironmentVariable = -1073741670;
LABEL_86:
        qword_140325228 = 0LL;
        v43 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
        if ( v43 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v43);
        KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
        v44 = KeGetCurrentThread();
        v45 = v44->KernelApcDisable + 1;
        v44->KernelApcDisable = v45;
        if ( !v45
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v44->ApcState.ApcListHead[0].Flink != &v44->152
          && !v44->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v15 = (unsigned int *)v59;
        goto LABEL_59;
      }
    }
    else
    {
      v42 = v59;
      i = *((_DWORD *)v59 + 2);
      swprintf_s(Dst, 9uLL, L"Boot%04X", i);
      v47 = 0;
      EnvironmentVariable = IoGetEnvironmentVariableEx(
                              (__int64)Dst,
                              (__int64)&EfiBootVariablesGuid,
                              0LL,
                              (__int64)&v47,
                              0LL);
      if ( EnvironmentVariable == -1073741568 && ((2 * ((v42[2] | (2 * v42[2])) & 0xC4444444)) & v42[2]) != 0 )
      {
        swprintf_s(Dst, 9uLL, L"Boot%04x");
        v47 = 0;
        EnvironmentVariable = IoGetEnvironmentVariableEx(
                                (__int64)Dst,
                                (__int64)&EfiBootVariablesGuid,
                                0LL,
                                (__int64)&v47,
                                0LL);
      }
      if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
        goto LABEL_86;
    }
    EnvironmentVariable = IoSetEnvironmentVariableEx((__int64)Dst, (__int64)&EfiBootVariablesGuid, (__int64)P, v52, 1);
    goto LABEL_86;
  }
  EnvironmentVariable = -1073741811;
  v18 = 0LL;
LABEL_98:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v6 && v6 != v18 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v55 && v3 && EnvironmentVariable >= 0 )
    *v3 = i;
  return (unsigned int)EnvironmentVariable;
}
