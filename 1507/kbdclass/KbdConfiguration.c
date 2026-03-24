/*
 * XREFs of KbdConfiguration @ 0x1C000F420
 * Callers:
 *     DriverEntry @ 0x1C000F020 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0001AF0 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001BD0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001F00 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 */

void KbdConfiguration()
{
  int v0; // edi
  const WCHAR *v1; // rsi
  _DWORD *PoolWithTag; // rax
  int v3; // edx
  int v4; // r8d
  _DWORD *v5; // rbx
  WCHAR *v6; // rax
  int v7; // r8d
  unsigned __int64 v8; // rdx
  PWSTR Buffer; // rsi
  PVOID SystemRoutineAddress; // rax
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // r8d
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  int v24; // [rsp+28h] [rbp-19h]
  int v25; // [rsp+28h] [rbp-19h]
  int v26; // [rsp+28h] [rbp-19h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-9h] BYREF
  UNICODE_STRING SourceString; // [rsp+48h] [rbp+7h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+58h] [rbp+17h] BYREF
  int v30; // [rsp+A8h] [rbp+67h] BYREF
  int v31; // [rsp+B0h] [rbp+6Fh] BYREF
  int v32; // [rsp+B8h] [rbp+77h] BYREF
  int v33; // [rsp+C0h] [rbp+7Fh] BYREF

  v0 = 0;
  v31 = 1;
  v32 = 1;
  v30 = 100;
  v33 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&SourceString, 0LL);
  v1 = (const WCHAR *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x150uLL, 0x4364624Bu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v23 = 61;
LABEL_20:
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v23);
    goto LABEL_21;
  }
  memset(PoolWithTag, 0, 0x150uLL);
  DestinationString.MaximumLength = word_1C0009288 + 26;
  v6 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C0009288 + 26), 0x4364624Bu);
  DestinationString.Buffer = v6;
  if ( !v6 )
  {
    v23 = 62;
    goto LABEL_20;
  }
  memset(v6, 0, DestinationString.MaximumLength);
  RtlAppendUnicodeToString(&DestinationString, v1);
  RtlAppendUnicodeToString(&DestinationString, L"\\Parameters");
  if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
  {
LABEL_21:
    dword_1C0009194 = v30;
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = v31;
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v32;
    HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v33;
    RtlCopyUnicodeString(&::DestinationString, &SourceString);
    goto LABEL_7;
  }
  v8 = (unsigned __int64)DestinationString.Length >> 1;
  DestinationString.Buffer[v8 + 1] = 0;
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v8, v7, 63);
  RtlInitUnicodeString(&SourceString, L"KeyboardClass");
  v5[2] = 32;
  *((_QWORD *)v5 + 2) = L"KeyboardDataQueueSize";
  v5[8] = 4;
  *((_QWORD *)v5 + 3) = &dword_1C0009194;
  v5[12] = 4;
  *((_QWORD *)v5 + 5) = &v30;
  v5[16] = 32;
  *((_QWORD *)v5 + 9) = L"MaximumPortsServiced";
  *((_QWORD *)v5 + 10) = &WPP_MAIN_CB.DeviceQueue.1;
  *((_QWORD *)v5 + 12) = &v31;
  *((_QWORD *)v5 + 16) = L"KeyboardDeviceBaseName";
  v5[22] = 4;
  v5[26] = 4;
  v5[30] = 32;
  *((_QWORD *)v5 + 17) = &::DestinationString;
  v5[36] = 1;
  *((_QWORD *)v5 + 19) = SourceString.Buffer;
  *((_QWORD *)v5 + 23) = L"ConnectMultiplePorts";
  *((_QWORD *)v5 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
  *((_QWORD *)v5 + 26) = &v32;
  *((_QWORD *)v5 + 30) = L"SendOutputToAllPorts";
  *((_QWORD *)v5 + 31) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
  *((_QWORD *)v5 + 33) = &v33;
  v5[40] = 0;
  v5[44] = 32;
  v5[50] = 4;
  v5[54] = 4;
  v5[58] = 32;
  v5[64] = 4;
  v5[68] = 4;
  Buffer = DestinationString.Buffer;
  RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v24 = 0;
  v11 = ((__int64 (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(0x80000000LL, Buffer, v5, 0LL);
  if ( v11 < 0 )
  {
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v12, v13, 64, 0, v11);
    goto LABEL_21;
  }
LABEL_7:
  LOBYTE(v12) = 4;
  WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v12, v13, 65);
  v16 = dword_1C0009194;
  if ( dword_1C0009194 )
  {
    v17 = v30;
  }
  else
  {
    WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v14, v15, 66, v24, 0);
    v17 = v30;
    v16 = v30;
  }
  if ( v16 > 0x15555555 )
    v18 = 3 * v17;
  else
    v18 = 3 * v16;
  dword_1C0009194 = 4 * v18;
  WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v14, v15, 67, v24, 4 * v18);
  LOBYTE(v19) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v19, v20, 68, v25, WPP_MAIN_CB.DeviceQueue.Busy);
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v0 = 1;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v0;
  LOBYTE(v21) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v21, v22, 69, v26, v0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
