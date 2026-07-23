/*
 * XREFs of RtlLookupFunctionEntry @ 0x1800361F0
 * Callers:
 *     RtlDispatchException @ 0x180034C40 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1800355D0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     RtlInitializeHistoryTable @ 0x180079104 (RtlInitializeHistoryTable.c)
 *     _invalid_parameter @ 0x180095768 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x180095890 (__report_gsfailure.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180071CC4 (RtlpLookupDynamicFunctionEntry.c)
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
  unsigned __int64 v14; // rbx
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
    v29 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_180158335 + 6];
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_180158335 + 8];
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
  if ( ControlPc < qword_180158338
    || ControlPc >= qword_180158340
    || (GlobalHint = HistoryTable->GlobalHint, v7 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
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
    if ( ControlPc < LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
      || ControlPc >= LdrSystemDllInitBlock.MitigationOptionsMap.Map[1]
                    + LODWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]) )
    {
      v11 = RtlpxLookupFunctionTable((PVOID)ControlPc);
    }
    else
    {
      v11 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[0];
      v30 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[1];
      v31 = HIDWORD(LdrSystemDllInitBlock.MitigationOptionsMap.Map[2]);
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
    v8 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
    v9 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v7 + 6];
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_36;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v7 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
