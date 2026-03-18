/*
 * XREFs of RtlLookupFunctionEntry @ 0x14001D0C0
 * Callers:
 *     RtlDispatchException @ 0x14001BBB0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14001C500 (RtlUnwindEx.c)
 *     RtlpSameFunction @ 0x1401609E0 (RtlpSameFunction.c)
 *     RtlRaiseException @ 0x140246A34 (RtlRaiseException.c)
 *     RtlInitializeHistoryTable @ 0x1407E36A4 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14001F3E0 (RtlpxLookupFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  __int64 v6; // r11
  struct _RUNTIME_FUNCTION *v7; // rdi
  __int64 v8; // r8
  unsigned __int128 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  struct _RUNTIME_FUNCTION *v12; // r10
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  PRUNTIME_FUNCTION result; // rax
  unsigned int GlobalHint; // ecx
  unsigned int v20; // edx
  unsigned int *v21; // r10
  unsigned __int64 v22; // r9
  __int64 Count; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  DWORD LocalHint; // edx
  DWORD v27; // r9d
  DWORD64 v28; // r10
  PRUNTIME_FUNCTION FunctionEntry; // r8
  __int64 UnwindData; // rax
  unsigned __int64 v31; // r8
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_2;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_1403D05F5 + 6];
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_1403D05F5 + 8];
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
    goto LABEL_2;
  if ( ControlPc >= qword_1403D0600
    || ControlPc < qword_1403D05F8
    || (GlobalHint = HistoryTable->GlobalHint, v20 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_35:
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
            goto LABEL_2;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v28;
        UnwindData = FunctionEntry->UnwindData;
        if ( (UnwindData & 1) != 0 )
        {
          FunctionEntry = (PRUNTIME_FUNCTION)(UnwindData + v28 - 1);
          if ( v28 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)FunctionEntry & 3) != 0 )
            ExRaiseDatatypeMisalignment();
        }
        return FunctionEntry;
      }
    }
LABEL_2:
    if ( ControlPc < *(&xmmword_14031EF70 + 1) || ControlPc >= *(&xmmword_14031EF70 + 1) + (unsigned int)qword_14031EF80 )
    {
      v6 = RtlpxLookupFunctionTable(ControlPc, &v32);
    }
    else
    {
      v32 = *(_OWORD *)&xmmword_14031EF70;
      v33 = qword_14031EF80;
      v6 = xmmword_14031EF70;
    }
    v7 = 0LL;
    if ( v6 )
    {
      v8 = *((_QWORD *)&v32 + 1);
      v9 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v32 + 1);
      v10 = *((_QWORD *)&v9 + 1) >> 3;
      if ( (_DWORD)v10 )
      {
        v11 = ControlPc - v8;
        v12 = (struct _RUNTIME_FUNCTION *)(v6 + 12LL * (unsigned int)(v10 - 1));
        if ( v11 < v12->BeginAddress )
        {
          v13 = v10 - 2;
          v14 = 0;
          while ( v13 >= v14 )
          {
            v15 = (v13 + v14) >> 1;
            v12 = (struct _RUNTIME_FUNCTION *)(v6 + 12LL * v15);
            if ( v11 < v12->BeginAddress )
            {
              v13 = v15 - 1;
            }
            else
            {
              if ( v11 < v12[1].BeginAddress )
                break;
              v14 = v15 + 1;
            }
          }
        }
        if ( v11 >= v12->BeginAddress && v11 < v12->EndAddress )
        {
          v7 = v12;
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
                v24 = *ImageBase + v12->BeginAddress;
                v25 = *ImageBase + v12->EndAddress;
                if ( v24 < HistoryTable->LowAddress )
                  HistoryTable->LowAddress = v24;
                if ( v25 > HistoryTable->HighAddress )
                  HistoryTable->HighAddress = v25;
              }
            }
          }
        }
      }
    }
    v16 = *ImageBase;
    if ( v7 )
    {
      v17 = v7->UnwindData;
      if ( (v17 & 1) != 0 )
      {
        v7 = (struct _RUNTIME_FUNCTION *)(v17 + v16 - 1);
        if ( v16 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v7 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
    }
    return v7;
  }
  while ( 1 )
  {
    v21 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v20 + 8];
    v22 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v20 + 6];
    if ( ControlPc >= v22 + *v21 && ControlPc < v22 + v21[1] )
      break;
    if ( ++v20 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_35;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v20 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v22;
  return result;
}
