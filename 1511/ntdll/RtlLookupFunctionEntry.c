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
  __int64 v12; // r9
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // r11
  unsigned __int128 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v17; // rdx
  bool v18; // sf
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  __int64 Count; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  DWORD LocalHint; // edx
  DWORD v27; // r9d
  DWORD64 v28; // r8
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  __int64 UnwindInfoAddress; // rax
  unsigned __int64 v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_10;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_180158335 + 6];
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_180158335 + 8];
    if ( result )
    {
      if ( ControlPc >= v31 + result->BeginAddress && ControlPc < v31 + result->EndAddress )
      {
        *ImageBase = v31;
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
      v27 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v28 = HistoryTable->Entry[v27].ImageBase;
          FunctionEntry = HistoryTable->Entry[v27].FunctionEntry;
          if ( ControlPc >= v28 + FunctionEntry->BeginAddress && ControlPc < v28 + FunctionEntry->EndAddress )
            break;
          if ( ++v27 >= HistoryTable->Count )
            goto LABEL_10;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v28;
        UnwindInfoAddress = FunctionEntry->UnwindInfoAddress;
        if ( (UnwindInfoAddress & 1) != 0 )
          return (PRUNTIME_FUNCTION)(UnwindInfoAddress + v28 - 1);
        return FunctionEntry;
      }
    }
LABEL_10:
    if ( ControlPc < *((_QWORD *)&xmmword_180155330 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_180155330 + 1) + (unsigned __int64)(unsigned int)qword_180155340 )
    {
      v11 = RtlpxLookupFunctionTable(ControlPc, &v32);
    }
    else
    {
      v11 = xmmword_180155330;
      v32 = xmmword_180155330;
      v33 = qword_180155340;
    }
    if ( v11 )
    {
      v12 = *((_QWORD *)&v32 + 1);
      v13 = 0LL;
      v14 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v32 + 1);
      v15 = *((_QWORD *)&v14 + 1) >> 3;
      if ( !(unsigned int)(*((_QWORD *)&v14 + 1) >> 3) )
        return v13;
      v16 = ControlPc - v12;
      v17 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v11 + 12LL * (unsigned int)(v15 - 1));
      if ( v16 < v17->BeginAddress )
      {
        v18 = (int)v15 - 2 < 0;
        v19 = v15 - 2;
        v20 = 0;
        if ( !v18 )
        {
          do
          {
            v21 = (v19 + v20) >> 1;
            v17 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v11 + 12LL * v21);
            if ( v16 < v17->BeginAddress )
            {
              v19 = v21 - 1;
            }
            else
            {
              if ( v16 < v17[1].BeginAddress )
                break;
              v20 = v21 + 1;
            }
          }
          while ( v19 >= v20 );
        }
      }
      if ( v16 < v17->BeginAddress || v16 >= v17->EndAddress )
        goto LABEL_32;
      v13 = v17;
    }
    else
    {
      v13 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
    }
    if ( v13 )
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
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v13;
            v23 = *ImageBase + v13->BeginAddress;
            v24 = *ImageBase + v13->EndAddress;
            if ( v23 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v23;
            if ( v24 > HistoryTable->HighAddress )
              HistoryTable->HighAddress = v24;
          }
        }
      }
LABEL_32:
      if ( v13 )
      {
        v25 = v13->UnwindInfoAddress;
        if ( (v25 & 1) != 0 )
          return (PRUNTIME_FUNCTION)(v25 + *ImageBase - 1);
      }
    }
    return v13;
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
