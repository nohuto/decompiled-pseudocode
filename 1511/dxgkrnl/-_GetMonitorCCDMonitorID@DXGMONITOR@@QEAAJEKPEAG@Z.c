/*
 * XREFs of ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C009C8AC
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C00A0070 (MonitorGetCCDMonitorID.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C00E1748 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 * Callees:
 *     ?DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z @ 0x1C0177068 (-DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorCCDMonitorID(
        const UNICODE_STRING *this,
        char a2,
        int a3,
        unsigned __int16 *a4)
{
  __int64 v8; // rax
  struct ADAPTER_DISPLAY *v9; // rcx
  unsigned int v10; // edx
  const UNICODE_STRING *v11; // rdx
  NTSTATUS appended; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 IsOnlySingleSourceModeExposed; // al
  const WCHAR *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  NTSTATUS v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a4 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  Destination.Length = 0;
  a4[a3 - 1] = 0;
  v8 = *(_QWORD *)&this[1].Length;
  Destination.Buffer = a4;
  Destination.MaximumLength = 2 * (a3 - 1);
  v9 = *(struct ADAPTER_DISPLAY **)(v8 + 8);
  v10 = *(_DWORD *)(*((_QWORD *)v9 + 2) + 284LL);
  if ( (v10 & 0x20) != 0 )
  {
    IsOnlySingleSourceModeExposed = DmmIsOnlySingleSourceModeExposed(v9, v10);
    v24 = L"MSNIL";
    if ( !IsOnlySingleSourceModeExposed )
      v24 = L"MSBDD_";
    LODWORD(v17) = RtlAppendUnicodeToString(&Destination, v24);
    if ( (int)v17 < 0 )
    {
      v29 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      *(_QWORD *)(v29 + 24) = (int)v17;
LABEL_21:
      WdLogEvent5_WdWarning(v29);
      return (unsigned int)v17;
    }
  }
  v11 = this + 28;
  if ( !a2 )
    v11 = this + 29;
  appended = RtlAppendUnicodeStringToString(&Destination, v11);
  v17 = appended;
  if ( appended < 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v29 + 24) = v17;
    goto LABEL_21;
  }
  v18 = *(_QWORD *)&this[31].Length;
  if ( v18 && !*(_DWORD *)(v18 + 16) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[1].Length + 8LL) + 16LL) + 284LL) & 0x20) == 0 )
  {
    v19 = *(_QWORD *)&this[31].Length;
    if ( v19 )
    {
      if ( *(_DWORD *)(v19 + 16) <= 1u )
        return 0LL;
    }
  }
  v31 = RtlAppendUnicodeStringToString(&Destination, this + 30);
  v36 = v31;
  if ( v31 >= 0 )
    return 0LL;
  v37 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
  *(_QWORD *)(v37 + 24) = v36;
  WdLogEvent5_WdWarning(v37);
  return (unsigned int)v36;
}
