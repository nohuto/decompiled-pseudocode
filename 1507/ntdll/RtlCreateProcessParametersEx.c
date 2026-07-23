/*
 * XREFs of RtlCreateProcessParametersEx @ 0x1800461E0
 * Callers:
 *     RtlCreateProcessParameters @ 0x1800C2730 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpCopyProcString @ 0x180046648 (RtlpCopyProcString.c)
 *     ValidateOptionalString @ 0x1800466E8 (ValidateOptionalString.c)
 *     ValidateStringParameter @ 0x1800466FC (ValidateStringParameter.c)
 *     RtlpGetBlockSizeEx @ 0x180047584 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlDeNormalizeProcessParams @ 0x1800C27A0 (RtlDeNormalizeProcessParams.c)
 */

NTSTATUS __cdecl RtlCreateProcessParametersEx(
        PRTL_USER_PROCESS_PARAMETERS *pProcessParameters,
        PUNICODE_STRING ImagePathName,
        PUNICODE_STRING DllPath,
        PUNICODE_STRING CurrentDirectory,
        PUNICODE_STRING CommandLine,
        PVOID Environment,
        PUNICODE_STRING WindowTitle,
        PUNICODE_STRING DesktopInfo,
        PUNICODE_STRING ShellInfo,
        PUNICODE_STRING RuntimeData,
        ULONG Flags)
{
  __int64 v14; // r8
  unsigned __int64 v15; // r14
  __int16 v16; // r8
  _WORD *v17; // rcx
  PUNICODE_STRING v18; // r8
  __int64 v19; // r9
  unsigned __int16 *v20; // r10
  unsigned __int16 *v21; // r11
  _WORD *v22; // rdx
  PUNICODE_STRING v23; // rsi
  unsigned __int16 *v24; // rax
  unsigned __int16 *v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  size_t BlockSize; // rsi
  unsigned __int64 v31; // rdi
  _RTL_USER_PROCESS_PARAMETERS *Heap; // rax
  _RTL_USER_PROCESS_PARAMETERS *v33; // rbx
  _RTL_USER_PROCESS_PARAMETERS *v34; // rdi
  __int64 MaximumLength; // r9
  char v37; // [rsp+20h] [rbp-40h]
  _RTL_USER_PROCESS_PARAMETERS *v38; // [rsp+28h] [rbp-38h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+30h] [rbp-30h]
  PUNICODE_STRING v40; // [rsp+38h] [rbp-28h]
  unsigned __int16 *v41; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v42; // [rsp+48h] [rbp-18h]
  _WORD *v43; // [rsp+50h] [rbp-10h]
  PUNICODE_STRING CommandLinea; // [rsp+C0h] [rbp+60h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( (int)ValidateStringParameter(ImagePathName) < 0 || (int)ValidateOptionalString(v14) < 0 )
    return -1073741811;
  v37 = 0;
  v15 = 0LL;
  if ( CurrentDirectory )
  {
    v15 = (unsigned __int64)CurrentDirectory->Length >> 1;
    if ( (int)ValidateStringParameter(CurrentDirectory) < 0 || !v15 )
      return -1073741811;
    if ( CurrentDirectory->Buffer[v15 - 1] != v16 )
    {
      if ( v15 > 0x103 )
        return -1073741811;
      v37 = 1;
    }
  }
  if ( (int)ValidateOptionalString(CommandLine) < 0
    || (int)ValidateOptionalString(WindowTitle) < 0
    || (int)ValidateOptionalString(DesktopInfo) < 0
    || (int)ValidateOptionalString(ShellInfo) < 0
    || (int)ValidateOptionalString(RuntimeData) < 0 )
  {
    return -1073741811;
  }
  v22 = &RtlpNullString;
  v23 = (PUNICODE_STRING)&RtlpNullString;
  v24 = (unsigned __int16 *)&RtlpNullString;
  if ( !v18 )
    v18 = ImagePathName;
  CommandLinea = v18;
  if ( WindowTitle )
    v23 = WindowTitle;
  v25 = (unsigned __int16 *)&RtlpNullString;
  v40 = v23;
  if ( v21 )
    v25 = v21;
  v41 = v25;
  if ( v20 )
    v24 = v20;
  v42 = v24;
  v26 = v25[1];
  if ( v17 )
    v22 = v17;
  v27 = v18->Length + 9LL;
  v28 = v24[1] + 7LL;
  v43 = v22;
  v29 = ((ImagePathName->Length + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v23->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + (v28 & 0xFFFFFFFFFFFFFFF8uLL)
      + (v27 & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1560;
  if ( *v22 )
    v29 += ((unsigned __int16)v22[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( DllPath )
    v29 += (DllPath->MaximumLength + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Environment )
    BlockSize = RtlpGetBlockSizeEx(Environment, 1LL);
  else
    BlockSize = *(_QWORD *)(v19 + 1008);
  while ( 1 )
  {
    v31 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v31 < BlockSize || v31 + v29 < v29 )
      return -1073741675;
    Heap = (_RTL_USER_PROCESS_PARAMETERS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v31 + v29);
    v33 = Heap;
    if ( !Heap )
      return -1073741670;
    if ( Environment )
    {
      memmove((char *)Heap + v29, Environment, BlockSize);
      goto LABEL_36;
    }
    RtlEnterCriticalSection(&FastPebLock);
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( BlockSize <= v31 )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v33);
  }
  memmove((char *)v33 + v29, ProcessParameters->Environment, ProcessParameters->EnvironmentSize);
  RtlLeaveCriticalSection(&FastPebLock);
  v31 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_36:
  memset(v33, 0, sizeof(_RTL_USER_PROCESS_PARAMETERS));
  v33->EnvironmentSize = v31;
  v34 = ProcessParameters;
  v33->Environment = (char *)v33 + v29;
  v33->MaximumLength = v29;
  v33->Length = v29;
  v38 = v33 + 1;
  *(_QWORD *)&v33->Flags = 1LL;
  v33->CurrentDirectory.Handle = 0LL;
  v33->ConsoleFlags = v34->ConsoleFlags;
  if ( CurrentDirectory )
  {
    RtlpCopyProcString(&v38, &v33->CurrentDirectory, CurrentDirectory, 520LL);
    if ( v37 )
    {
      v33->CurrentDirectory.DosPath.Buffer[v15] = 92;
      v33->CurrentDirectory.DosPath.Length += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection(&FastPebLock);
    RtlpCopyProcString(&v38, &v33->CurrentDirectory, &v34->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection(&FastPebLock);
  }
  if ( DllPath )
    RtlpCopyProcString(&v38, &v33->DllPath, DllPath, DllPath->MaximumLength);
  RtlpCopyProcString(&v38, &v33->ImagePathName, ImagePathName, (unsigned int)ImagePathName->Length + 2);
  if ( CommandLinea->Length == CommandLinea->MaximumLength )
    MaximumLength = CommandLinea->MaximumLength;
  else
    MaximumLength = (unsigned int)CommandLinea->Length + 2;
  RtlpCopyProcString(&v38, &v33->CommandLine, CommandLinea, MaximumLength);
  RtlpCopyProcString(&v38, &v33->WindowTitle, v40, v40->MaximumLength);
  RtlpCopyProcString(&v38, &v33->DesktopInfo, v41, v41[1]);
  RtlpCopyProcString(&v38, &v33->ShellInfo, v42, v42[1]);
  if ( *v43 )
    RtlpCopyProcString(&v38, &v33->RuntimeData, v43, (unsigned __int16)v43[1]);
  if ( (Flags & 1) != 0 )
    *pProcessParameters = v33;
  else
    *pProcessParameters = RtlDeNormalizeProcessParams(v33);
  return 0;
}
