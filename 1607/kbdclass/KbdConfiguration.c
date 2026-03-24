/*
 * XREFs of KbdConfiguration @ 0x1C000F420
 * Callers:
 *     DriverEntry @ 0x1C000F020 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0001940 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019F0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001ED0 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0003140 (memset.c)
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
  int Length; // edx
  unsigned __int64 v9; // rdx
  PWSTR Buffer; // rsi
  PVOID SystemRoutineAddress; // rax
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  int v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+50h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&SourceString, 0LL);
  RtlInitUnicodeString(&SourceString, L"KeyboardClass");
  dword_1C0009194 = 100;
  *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 1;
  WPP_MAIN_CB.DeviceQueue.Lock = 1LL;
  v0 = 0;
  RtlCopyUnicodeString(&::DestinationString, &SourceString);
  v1 = (const WCHAR *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x150uLL, 0x4364624Bu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v21 = 61;
LABEL_20:
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v21);
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, 0x150uLL);
  DestinationString.MaximumLength = word_1C0009288 + 26;
  v6 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C0009288 + 26), 0x4364624Bu);
  DestinationString.Buffer = v6;
  if ( !v6 )
  {
    v21 = 62;
    goto LABEL_20;
  }
  memset(v6, 0, DestinationString.MaximumLength);
  RtlAppendUnicodeToString(&DestinationString, v1);
  RtlAppendUnicodeToString(&DestinationString, L"\\Parameters");
  Length = DestinationString.Length;
  if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
  {
    v9 = (unsigned __int64)DestinationString.Length >> 1;
    DestinationString.Buffer[v9 + 1] = 0;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v9, v7, 63);
    v5[2] = 288;
    *((_QWORD *)v5 + 2) = L"KeyboardDataQueueSize";
    v5[8] = 67108868;
    *((_QWORD *)v5 + 3) = &dword_1C0009194;
    v5[16] = 288;
    *((_QWORD *)v5 + 9) = L"MaximumPortsServiced";
    *((_QWORD *)v5 + 10) = &WPP_MAIN_CB.DeviceQueue.1;
    *((_QWORD *)v5 + 16) = L"KeyboardDeviceBaseName";
    *((_QWORD *)v5 + 23) = L"ConnectMultiplePorts";
    *((_QWORD *)v5 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
    *((_QWORD *)v5 + 30) = L"SendOutputToAllPorts";
    *((_QWORD *)v5 + 31) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
    v5[22] = 67108868;
    v5[30] = 288;
    *((_QWORD *)v5 + 17) = &::DestinationString;
    v5[36] = 16777217;
    v5[44] = 288;
    v5[50] = 67108868;
    v5[58] = 288;
    v5[64] = 67108868;
    Buffer = DestinationString.Buffer;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v22 = 0;
    v12 = ((__int64 (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(
            0x80000000LL,
            Buffer,
            v5,
            0LL);
    if ( v12 < 0 )
    {
      LOBYTE(Length) = 3;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v7, 64, 0, v12);
    }
  }
LABEL_8:
  LOBYTE(Length) = 4;
  WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, Length, v7, 65);
  v15 = dword_1C0009194;
  if ( !dword_1C0009194 )
  {
    WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 66, v22, 0);
    v15 = 100;
    goto LABEL_10;
  }
  if ( (unsigned int)dword_1C0009194 <= 0x15555555 )
  {
LABEL_10:
    v16 = 12 * v15;
    goto LABEL_11;
  }
  v16 = 1200;
LABEL_11:
  dword_1C0009194 = v16;
  WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v13, v14, 67, v22, v16);
  LOBYTE(v17) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v17, v18, 68, v23, WPP_MAIN_CB.DeviceQueue.Busy);
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v0 = 1;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v0;
  LOBYTE(v19) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v19, v20, 69, v24, v0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
