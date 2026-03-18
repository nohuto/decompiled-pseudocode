/*
 * XREFs of ?WriteSimulatedMonitorCache@@YAJPEAU_DPI_INFORMATION@@@Z @ 0x1C0165490
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00AD640 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0165318 (-WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 */

__int64 __fastcall WriteSimulatedMonitorCache(struct _DPI_INFORMATION *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  char v11[4]; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING v13; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING v14; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
  RtlInitUnicodeString(&v14, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
  RtlInitUnicodeString(&v13, L"Cache");
  *(_DWORD *)v11 = *((_DWORD *)a1 + 21);
  v2 = WriteDwordToParticularRegValue(&DestinationString, &v14, &v13, L"DpiValue", *(_DWORD *)v11);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
  }
  LODWORD(v12) = *((_DWORD *)a1 + 3);
  v6 = WriteDwordToParticularRegValue(&DestinationString, &v14, &v13, L"PreferredScaleFactor", v12);
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v8;
}
