/*
 * XREFs of ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C00F1444
 * Callers:
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C00F12EC (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C00EEC24 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     ParseResolutionKeyName @ 0x1C00EF9C8 (ParseResolutionKeyName.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00F2E90 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATIO.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00F2F60 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ParseFreqRangeValue @ 0x1C01B2338 (ParseFreqRangeValue.c)
 */

__int64 __fastcall DXGMONITOR::_ProcessMonitorResolutionKey(
        DXGMONITOR *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  unsigned __int16 NameLength; // ax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  UINT v10; // r15d
  UINT v11; // r12d
  unsigned __int16 v12; // di
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // bl
  __int64 v24; // rcx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v25; // rax
  __int64 v26; // rcx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v27; // rbx
  int valid; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  DXGMONITOR *v34; // rbx
  DXGMONITOR **v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  UINT v38; // [rsp+30h] [rbp-39h] BYREF
  UINT v39; // [rsp+34h] [rbp-35h] BYREF
  UINT v40; // [rsp+38h] [rbp-31h] BYREF
  UINT v41; // [rsp+3Ch] [rbp-2Dh] BYREF
  struct _KEY_VALUE_PARTIAL_INFORMATION *v42; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  struct _UNICODE_STRING v44; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  WCHAR SourceString[8]; // [rsp+70h] [rbp+7h] BYREF

  NameLength = a3->NameLength;
  Handle = 0LL;
  v38 = 0;
  v39 = 0;
  v44.Length = NameLength;
  v44.MaximumLength = NameLength;
  v44.Buffer = a3->Name;
  if ( !(unsigned __int8)ParseResolutionKeyName((const void **)&v44, (int)&v38, (int)&v39) )
  {
    v21 = WdLogNewEntry5_WdError(v6);
    goto LABEL_22;
  }
  v7 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, a2, &v44);
  v9 = v7;
  if ( v7 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v22 + 24) = v9;
    WdLogEvent5_WdError(v22);
    goto LABEL_8;
  }
  wcscpy(SourceString, L"ModeX");
  RtlInitUnicodeString(&DestinationString, SourceString);
  v10 = v38;
  v11 = v39;
  v12 = 1;
  while ( 1 )
  {
    v42 = 0LL;
    SourceString[4] = v12 + 48;
    v13 = DxgkRetrieveValueFromRegistry(Handle, &DestinationString, &v42);
    v18 = v13;
    if ( v13 < 0 )
    {
      v19 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      *(_QWORD *)(v19 + 24) = v12;
      *(_QWORD *)(v19 + 32) = v18;
      goto LABEL_6;
    }
    v39 = 0;
    v38 = 0;
    v40 = 0;
    v41 = 0;
    v23 = ParseFreqRangeValue((_DWORD)v42, (unsigned int)&v39, (unsigned int)&v38, (unsigned int)&v40, (__int64)&v41);
    operator delete(v42);
    if ( !v23 )
      break;
    v25 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new(0x40uLL, 0x4D677844u, PagedPool);
    v27 = v25;
    if ( !v25 )
    {
      v37 = WdLogNewEntry5_WdError(v26);
      WdLogEvent5_WdError(v37);
      LODWORD(v9) = -1073741801;
      goto LABEL_8;
    }
    v25->RangeLimits.MinVSyncFreq.Numerator = v39;
    v25->RangeLimits.MaxVSyncFreq.Numerator = v38;
    v25->RangeLimits.MinHSyncFreq.Numerator = v40;
    v25->Origin = D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE;
    v25->ConstraintType = D3DKMDT_MFRC_ACTIVESIZE;
    v25->Constraint.ActiveSize.cx = v10;
    v25->Constraint.ActiveSize.cy = v11;
    v25->RangeLimits.MinVSyncFreq.Denominator = 1;
    v25->RangeLimits.MaxVSyncFreq.Denominator = 1;
    v25->RangeLimits.MinHSyncFreq.Denominator = 1;
    v25->RangeLimits.MaxHSyncFreq.Numerator = v41;
    v25->RangeLimits.MaxHSyncFreq.Denominator = 1;
    valid = IsValidFrequencyRange(v25);
    v33 = valid;
    if ( valid < 0 )
    {
      v36 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
      *(_QWORD *)(v36 + 24) = v33;
      WdLogEvent5_WdWarning(v36);
      operator delete(v27);
    }
    else
    {
      v34 = (DXGMONITOR *)&v27[1];
      v35 = (DXGMONITOR **)*((_QWORD *)this + 27);
      if ( *v35 != (DXGMONITOR *)((char *)this + 208) )
        __fastfail(3u);
      *(_QWORD *)v34 = (char *)this + 208;
      *((_QWORD *)v34 + 1) = v35;
      *v35 = v34;
      *((_QWORD *)this + 27) = v34;
      ++*((_DWORD *)this + 50);
      ++*((_DWORD *)this + 29);
    }
LABEL_6:
    if ( ++v12 >= 9u )
    {
      LODWORD(v9) = 0;
      goto LABEL_8;
    }
  }
  v21 = WdLogNewEntry5_WdError(v24);
  *(_QWORD *)(v21 + 24) = v12;
LABEL_22:
  WdLogEvent5_WdError(v21);
  LODWORD(v9) = -1073741823;
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
