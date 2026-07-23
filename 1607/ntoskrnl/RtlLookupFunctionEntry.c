/*
 * XREFs of RtlLookupFunctionEntry @ 0x1400F4070
 * Callers:
 *     RtlDispatchException @ 0x1400F2B50 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1400F34B0 (RtlUnwindEx.c)
 *     RtlpSameFunction @ 0x140159958 (RtlpSameFunction.c)
 *     RtlRaiseException @ 0x140211C30 (RtlRaiseException.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     RtlInitializeHistoryTable @ 0x1407B82C0 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400510C0 (RtlpxLookupFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  unsigned int GlobalHint; // edx
  unsigned int v7; // ecx
  unsigned int *v8; // r9
  unsigned __int64 v9; // r8
  PRUNTIME_FUNCTION result; // rax
  DWORD LocalHint; // edx
  DWORD v12; // r9d
  DWORD64 v13; // r10
  PRUNTIME_FUNCTION FunctionEntry; // r8
  __int64 UnwindData; // rax
  char *v16; // r11
  struct _RUNTIME_FUNCTION *v17; // rsi
  __int64 v18; // r8
  unsigned __int128 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  struct _RUNTIME_FUNCTION *v22; // r10
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  __int64 Count; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_18;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_1403A9635 + 6];
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_1403A9635 + 8];
    if ( result )
    {
      if ( ControlPc < v31 + result->EndAddress && ControlPc >= v31 + result->BeginAddress )
      {
        *ImageBase = v31;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_18;
  if ( ControlPc >= qword_1403A9640
    || ControlPc < qword_1403A9638
    || (GlobalHint = HistoryTable->GlobalHint, v7 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_11:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v12 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v13 = HistoryTable->Entry[v12].ImageBase;
          FunctionEntry = HistoryTable->Entry[v12].FunctionEntry;
          if ( ControlPc < v13 + FunctionEntry->EndAddress && ControlPc >= v13 + FunctionEntry->BeginAddress )
            break;
          if ( ++v12 >= HistoryTable->Count )
            goto LABEL_18;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v13;
        UnwindData = FunctionEntry->UnwindData;
        if ( (UnwindData & 1) != 0 )
        {
          FunctionEntry = (PRUNTIME_FUNCTION)(v13 + UnwindData - 1);
          if ( v13 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)FunctionEntry & 3) != 0 )
            ExRaiseDatatypeMisalignment();
        }
        return FunctionEntry;
      }
    }
LABEL_18:
    if ( ControlPc < *(&xmmword_1402F6FB0 + 1) || ControlPc >= *(&xmmword_1402F6FB0 + 1) + (unsigned int)qword_1402F6FC0 )
    {
      v16 = (char *)RtlpxLookupFunctionTable(ControlPc, (__int64 *)&v32);
    }
    else
    {
      v32 = *(_OWORD *)&xmmword_1402F6FB0;
      v33 = qword_1402F6FC0;
      v16 = (char *)xmmword_1402F6FB0;
    }
    v17 = 0LL;
    if ( v16 )
    {
      v18 = *((_QWORD *)&v32 + 1);
      v19 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v32 + 1);
      v20 = *((_QWORD *)&v19 + 1) >> 3;
      if ( (_DWORD)v20 )
      {
        v21 = ControlPc - v18;
        v22 = (struct _RUNTIME_FUNCTION *)&v16[12 * (unsigned int)(v20 - 1)];
        if ( v21 < v22->BeginAddress )
        {
          v23 = v20 - 2;
          v24 = 0;
          while ( v23 >= v24 )
          {
            v25 = (v23 + v24) >> 1;
            v22 = (struct _RUNTIME_FUNCTION *)&v16[12 * v25];
            if ( v21 < v22->BeginAddress )
            {
              v23 = v25 - 1;
            }
            else
            {
              if ( v21 < v22[1].BeginAddress )
                break;
              v24 = v25 + 1;
            }
          }
        }
        if ( v21 >= v22->BeginAddress && v21 < v22->EndAddress )
        {
          v17 = v22;
          if ( HistoryTable )
          {
            if ( !HistoryTable->Search )
            {
              Count = HistoryTable->Count;
              if ( (unsigned int)Count < 0xC )
              {
                HistoryTable->Count = Count + 1;
                HistoryTable->Entry[Count].ImageBase = *ImageBase;
                HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v22;
                v27 = *ImageBase + v22->BeginAddress;
                v28 = *ImageBase + v22->EndAddress;
                if ( v27 < HistoryTable->LowAddress )
                  HistoryTable->LowAddress = v27;
                if ( v28 > HistoryTable->HighAddress )
                  HistoryTable->HighAddress = v28;
              }
            }
          }
        }
      }
    }
    v29 = *ImageBase;
    if ( v17 )
    {
      v30 = v17->UnwindData;
      if ( (v30 & 1) != 0 )
      {
        v17 = (struct _RUNTIME_FUNCTION *)(v30 + v29 - 1);
        if ( v29 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v17 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
    }
    return v17;
  }
  while ( 1 )
  {
    v8 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
    v9 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v7 + 6];
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_11;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v7 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
