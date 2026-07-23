/*
 * XREFs of HdlspProcessDumpCommand @ 0x14075AAA0
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140759D1C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140759E40 (HdlspDispatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlTimeToTimeFields @ 0x140137F0C (RtlTimeToTimeFields.c)
 *     sprintf_s @ 0x1401777DC (sprintf_s.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404FF2E0 (RtlUnicodeStringToAnsiString.c)
 *     HdlspPutMore @ 0x14075ADD4 (HdlspPutMore.c)
 *     HdlspPutString @ 0x14075AE70 (HdlspPutString.c)
 */

__int64 __fastcall HdlspProcessDumpCommand(char a1)
{
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int16 v4; // dx
  __int64 result; // rax
  char *v6; // rax
  unsigned int v7; // r14d
  unsigned int i; // r15d
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  const char *v19; // rcx
  _TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  _STRING v21; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  char v24; // [rsp+A8h] [rbp+38h] BYREF

  v2 = HeadlessGlobals;
  if ( (*(_DWORD *)(HeadlessGlobals + 48) & 2) != 0 )
  {
    CurrentIrql = -1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)v2);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v2);
    }
    v2 = HeadlessGlobals;
  }
  v4 = *(_WORD *)(v2 + 98);
  result = 0xFFFFLL;
  if ( v4 == 0xFFFF )
  {
    if ( CurrentIrql == 0xFF )
      return result;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
      goto LABEL_11;
LABEL_59:
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v2, retaddr);
    goto LABEL_12;
  }
  *(_DWORD *)(v2 + 48) &= ~4u;
  v6 = *(char **)(v2 + 24);
  v7 = 0;
  *(_DWORD *)&v21.Length = 5242880;
  v21.Buffer = v6;
  for ( i = v4; ; i = (unsigned __int8)(i + 1) )
  {
    v9 = *(_QWORD *)(v2 + 16) + 56LL * i;
    if ( CurrentIrql != 0xFF )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)v2, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
      __writecr8(CurrentIrql);
    }
    RtlTimeToTimeFields((PLARGE_INTEGER)(v9 + 8), &TimeFields);
    sprintf_s(
      *(char **)(HeadlessGlobals + 24),
      0x50uLL,
      "%02d:%02d:%02d.%03d : ",
      TimeFields.Hour,
      TimeFields.Minute,
      TimeFields.Second,
      TimeFields.Milliseconds);
    HdlspPutString(*(_QWORD *)(HeadlessGlobals + 24), v10, v11);
    v12 = *(_QWORD *)(v9 + 48);
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(v12 + 2 * v13) );
    if ( v13 >= 0x4F )
      *(_WORD *)(v12 + 158) = 0;
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v9 + 48));
    RtlUnicodeStringToAnsiString(&v21, &DestinationString, 0);
    v16 = HeadlessGlobals;
    if ( (*(_DWORD *)(HeadlessGlobals + 48) & 2) != 0 )
    {
      CurrentIrql = -1;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)v16);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v16);
      }
      v16 = HeadlessGlobals;
    }
    if ( (*(_DWORD *)(v16 + 48) & 4) != 0 )
      break;
    HdlspPutString(*(_QWORD *)(v16 + 24), v14, v15);
    HdlspPutString("\r\n", v17, v18);
    v2 = HeadlessGlobals;
    ++v7;
    result = *(unsigned __int16 *)(HeadlessGlobals + 96);
    if ( i == (_DWORD)result )
    {
      if ( CurrentIrql == 0xFF )
        return result;
      goto LABEL_58;
    }
    if ( a1 && v7 > 0x14 )
    {
      if ( CurrentIrql != 0xFF )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)HeadlessGlobals, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)HeadlessGlobals, 0LL);
        __writecr8(CurrentIrql);
      }
      HdlspPutMore(&v24);
      v2 = HeadlessGlobals;
      if ( (*(_DWORD *)(HeadlessGlobals + 48) & 2) != 0 )
      {
        CurrentIrql = -1;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)v2);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v2);
        }
        v2 = HeadlessGlobals;
      }
      if ( v24 )
      {
        v19 = "\r\n";
        goto LABEL_56;
      }
      if ( (*(_DWORD *)(v2 + 48) & 4) != 0 )
      {
        v19 = "New log entries have been added while waiting, command aborted.\r\n";
        goto LABEL_56;
      }
      v7 = 0;
    }
  }
  v19 = "New log entries have been added during dump, command aborted.\r\n";
LABEL_56:
  result = HdlspPutString(v19, v14, v15);
  if ( CurrentIrql == 0xFF )
    return result;
  v2 = HeadlessGlobals;
LABEL_58:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    goto LABEL_59;
LABEL_11:
  _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
LABEL_12:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
