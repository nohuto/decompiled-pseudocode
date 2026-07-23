/*
 * XREFs of RtlLookupFunctionEntry @ 0x180035F90
 * Callers:
 *     RtlDispatchException @ 0x1800349B0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180035330 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlInitializeHistoryTable @ 0x18007C070 (RtlInitializeHistoryTable.c)
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x180096C80 (__report_gsfailure.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180080810 (RtlpLookupDynamicFunctionEntry.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        ULONG64 ControlPc,
        PULONG64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  unsigned int GlobalHint; // ecx
  unsigned int v7; // r9d
  unsigned int *v8; // r8
  unsigned __int64 v9; // rdx
  PRUNTIME_FUNCTION result; // rax
  __int64 v11; // r10
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v12; // r11
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v15; // rdx
  bool v16; // sf
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  __int64 Count; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  DWORD LocalHint; // edx
  DWORD v25; // r9d
  DWORD64 v26; // r8
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  __int64 UnwindInfoAddress; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+28h] [rbp-20h]
  unsigned int v31; // [rsp+34h] [rbp-14h]

  if ( !HistoryTable )
    goto LABEL_10;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    v29 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[2 * BYTE5(LdrSystemDllInitBlock.Wow64SharedInformation[15]) + 1];
    result = (PRUNTIME_FUNCTION)LdrSystemDllInitBlock.MitigationOptionsMap.Map[2
                                                                             * BYTE5(LdrSystemDllInitBlock.Wow64SharedInformation[15])
                                                                             + 2];
    if ( result )
    {
      if ( ControlPc >= v29 + result->BeginAddress && ControlPc < v29 + result->EndAddress )
      {
        *ImageBase = v29;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_10;
  if ( ControlPc < *(_QWORD *)&LdrSystemDllInitBlock.RngData
    || ControlPc >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]
    || (GlobalHint = HistoryTable->GlobalHint,
        v7 = GlobalHint,
        GlobalHint >= LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15])) )
  {
LABEL_36:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v25 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v26 = HistoryTable->Entry[v25].ImageBase;
          FunctionEntry = HistoryTable->Entry[v25].FunctionEntry;
          if ( ControlPc >= v26 + FunctionEntry->BeginAddress && ControlPc < v26 + FunctionEntry->EndAddress )
            break;
          if ( ++v25 >= HistoryTable->Count )
            goto LABEL_10;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v26;
        UnwindInfoAddress = FunctionEntry->UnwindInfoAddress;
        if ( (UnwindInfoAddress & 1) != 0 )
          return (PRUNTIME_FUNCTION)(UnwindInfoAddress + v26 - 1);
        return FunctionEntry;
      }
    }
LABEL_10:
    if ( ControlPc < *((_QWORD *)&xmmword_180163430 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_180163430 + 1) + (unsigned __int64)(unsigned int)qword_180163440 )
    {
      v11 = RtlpxLookupFunctionTable((PVOID)ControlPc);
    }
    else
    {
      v30 = *((_QWORD *)&xmmword_180163430 + 1);
      v11 = xmmword_180163430;
      v31 = HIDWORD(qword_180163440);
    }
    if ( v11 )
    {
      v12 = 0LL;
      *ImageBase = v30;
      v13 = v31 / 0xC;
      if ( !(v31 / 0xC) )
        return v12;
      v14 = ControlPc - v30;
      v15 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v11 + 12LL * (v13 - 1));
      if ( v14 < v15->BeginAddress )
      {
        v16 = (int)(v13 - 2) < 0;
        v17 = v13 - 2;
        v18 = 0;
        if ( !v16 )
        {
          do
          {
            v19 = (v17 + v18) >> 1;
            v15 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v11 + 12LL * v19);
            if ( v14 < v15->BeginAddress )
            {
              v17 = v19 - 1;
            }
            else
            {
              if ( v14 < v15[1].BeginAddress )
                break;
              v18 = v19 + 1;
            }
          }
          while ( v17 >= v18 );
        }
      }
      if ( v14 < v15->BeginAddress || v14 >= v15->EndAddress )
        goto LABEL_32;
      v12 = v15;
    }
    else
    {
      v12 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
    }
    if ( v12 )
    {
      if ( HistoryTable )
      {
        if ( !HistoryTable->Search )
        {
          Count = HistoryTable->Count;
          if ( (unsigned int)Count < 0xC )
          {
            HistoryTable->Count = Count + 1;
            HistoryTable->Entry[Count].ImageBase = *ImageBase;
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v12;
            v21 = *ImageBase + v12->BeginAddress;
            v22 = *ImageBase + v12->EndAddress;
            if ( v21 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v21;
            if ( v22 > HistoryTable->HighAddress )
              HistoryTable->HighAddress = v22;
          }
        }
      }
LABEL_32:
      if ( v12 )
      {
        v23 = v12->UnwindInfoAddress;
        if ( (v23 & 1) != 0 )
          return (PRUNTIME_FUNCTION)(v23 + *ImageBase - 1);
      }
    }
    return v12;
  }
  while ( 1 )
  {
    v8 = (unsigned int *)LdrSystemDllInitBlock.MitigationOptionsMap.Map[2 * v7 + 2];
    v9 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[2 * v7 + 1];
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[15]) )
      goto LABEL_36;
  }
  result = (PRUNTIME_FUNCTION)LdrSystemDllInitBlock.MitigationOptionsMap.Map[2 * v7 + 2];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
