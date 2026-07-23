/*
 * XREFs of NtTranslateFilePath @ 0x1406F73B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExpTranslateArcPath @ 0x1406F33AC (ExpTranslateArcPath.c)
 *     ExpTranslateEfiPath @ 0x1406F3630 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1406F3C98 (ExpTranslateNtPath.c)
 *     ExpVerifyFilePath @ 0x1406F414C (ExpVerifyFilePath.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        ULONG OutputFilePathLength)
{
  char v7; // cl
  ULONG *p_Length; // rcx
  ULONG Length; // r15d
  char *v10; // rcx
  ULONG64 v11; // rax
  _DWORD *v12; // rcx
  unsigned int v13; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v15; // r14
  _DWORD *v16; // rsi
  NTSTATUS v17; // ebx
  unsigned int v18; // eax
  NTSTATUS v19; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+24h] [rbp-64h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+2Ch] [rbp-5Ch]
  PVOID P; // [rsp+38h] [rbp-50h]
  unsigned int *v25; // [rsp+40h] [rbp-48h]

  v25 = *(unsigned int **)&OutputFilePathLength;
  P = 0LL;
  if ( dword_1403254D0 != 2 )
    return -1073741822;
  if ( OutputType - 1 <= 4 )
  {
    v7 = KeGetCurrentThread()->PreviousMode;
    PreviousMode = v7;
    if ( v7 )
    {
      p_Length = &InputFilePath->Length;
      if ( (unsigned __int64)&InputFilePath->Length >= MmUserProbeAddress )
        p_Length = (ULONG *)MmUserProbeAddress;
      Length = *p_Length;
      NumberOfBytes[0] = *p_Length;
      v7 = PreviousMode;
    }
    else
    {
      Length = InputFilePath->Length;
      NumberOfBytes[0] = Length;
    }
    if ( Length < 0xC )
      return -1073741811;
    if ( v7 )
    {
      if ( ((unsigned __int8)InputFilePath & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (char *)InputFilePath + Length;
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)v10 > MmUserProbeAddress || v10 < (char *)InputFilePath )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v11 = MmUserProbeAddress;
      }
      v12 = *(_DWORD **)&OutputFilePathLength;
      if ( *(_QWORD *)&OutputFilePathLength >= v11 )
        v12 = (_DWORD *)v11;
      *v12 = *v12;
      v13 = OutputFilePath != 0LL ? **(_DWORD **)&OutputFilePathLength : 0;
      v21 = v13;
      if ( v13 )
        ProbeForWrite(OutputFilePath, v13, 4u);
      if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
        return -1073741727;
      Length = NumberOfBytes[0];
    }
    else
    {
      v13 = OutputFilePath != 0LL ? **(_DWORD **)&OutputFilePathLength : 0;
      v21 = v13;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x72766E45u);
    v15 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memmove(PoolWithTag, InputFilePath, Length);
    v15[1] = Length;
    if ( v13 )
    {
      v16 = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x72766E45u);
      *(_QWORD *)&NumberOfBytes[1] = v16;
      if ( !v16 )
      {
        ExFreePoolWithTag(v15, 0);
        P = 0LL;
        return -1073741670;
      }
    }
    else
    {
      v16 = 0LL;
      *(_QWORD *)&NumberOfBytes[1] = 0LL;
    }
    v17 = ExpVerifyFilePath((unsigned __int64)v15, (unsigned __int64)v15 + (unsigned int)v15[1]);
    if ( v17 < 0 )
    {
LABEL_46:
      ExFreePoolWithTag(v15, 0);
      if ( v17 >= 0 )
      {
        if ( !v16 )
        {
LABEL_51:
          *v25 = v13;
          return v17;
        }
        memmove(OutputFilePath, v16, v13);
      }
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        *(_QWORD *)&NumberOfBytes[1] = 0LL;
      }
      goto LABEL_51;
    }
    v18 = v15[2];
    if ( OutputType == v18 )
    {
      if ( v13 < Length )
        v17 = -1073741789;
      else
        memmove(v16, v15, Length);
      v13 = Length;
      v21 = Length;
      goto LABEL_46;
    }
    if ( v18 )
    {
      if ( v18 <= 2 )
      {
        v19 = ExpTranslateArcPath((__int64)v15, OutputType, v16, (__int64)&v21);
        goto LABEL_44;
      }
      if ( v18 == 3 )
      {
        v19 = ExpTranslateNtPath((__int64)v15, OutputType, (char *)v16, &v21);
        goto LABEL_44;
      }
      if ( v18 == 4 )
      {
        v19 = ExpTranslateEfiPath((__int64)v15, OutputType, v16, &v21);
LABEL_44:
        v17 = v19;
        v13 = v21;
        goto LABEL_46;
      }
    }
    v17 = -1073741811;
    goto LABEL_46;
  }
  return -1073741811;
}
