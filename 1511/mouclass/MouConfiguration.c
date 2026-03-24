/*
 * XREFs of MouConfiguration @ 0x1C000E020
 * Callers:
 *     DriverEntry @ 0x1C000E350 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002210 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002310 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0002390 (WPP_RECORDER_SF_Dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002AC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002E40 (memset.c)
 *     WPP_RECORDER_SF_D @ 0x1C0004FF4 (WPP_RECORDER_SF_D.c)
 */

void MouConfiguration()
{
  int v0; // edi
  const wchar_t *v1; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  WCHAR *v4; // rax
  PWSTR Buffer; // rsi
  PVOID SystemRoutineAddress; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // ecx
  __int64 v13; // r8
  unsigned __int16 v14; // r9
  int v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+60h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  RtlInitUnicodeString(&SourceString, L"PointerClass");
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 100;
  v0 = 0;
  WPP_MAIN_CB.DeviceQueue.Lock = 0x100000000LL;
  RtlCopyUnicodeString(&::DestinationString, &SourceString);
  v1 = (const wchar_t *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x43756F4Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = 59;
LABEL_20:
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, v14, v15, v1);
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, 0x118uLL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  DestinationString.MaximumLength = word_1C0008260 + 26;
  v4 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C0008260 + 26), 0x43756F4Du);
  DestinationString.Buffer = v4;
  if ( !v4 )
  {
    v14 = 60;
    goto LABEL_20;
  }
  memset(v4, 0, DestinationString.MaximumLength);
  RtlAppendUnicodeToString(&DestinationString, v1);
  RtlAppendUnicodeToString(&DestinationString, L"\\Parameters");
  if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
  {
    DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x3Du, v15, DestinationString.Buffer);
    v3[2] = 288;
    *((_QWORD *)v3 + 2) = L"MouseDataQueueSize";
    v3[8] = 0x4000000;
    *((_QWORD *)v3 + 3) = &WPP_MAIN_CB.Reserved + 1;
    v3[16] = 288;
    *((_QWORD *)v3 + 9) = L"MaximumPortsServiced";
    *((_QWORD *)v3 + 10) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
    *((_QWORD *)v3 + 16) = L"PointerDeviceBaseName";
    *((_QWORD *)v3 + 23) = L"ConnectMultiplePorts";
    *((_QWORD *)v3 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
    v3[22] = 0x4000000;
    v3[30] = 288;
    *((_QWORD *)v3 + 17) = &::DestinationString;
    v3[36] = 0x1000000;
    v3[44] = 288;
    v3[50] = 0x4000000;
    Buffer = DestinationString.Buffer;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v15 = 0;
    if ( ((int (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(0x80000000LL, Buffer, v3, 0LL) < 0 )
      WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 3u, v7, 0x3Eu, 0);
  }
LABEL_8:
  WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x3Fu, v15, ::DestinationString.Buffer);
  v11 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
  if ( !*((_DWORD *)&WPP_MAIN_CB.Reserved + 2) )
  {
    WPP_RECORDER_SF_D((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, v16);
    v11 = 100;
    goto LABEL_10;
  }
  if ( *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) <= 0xAAAAAAAu )
  {
LABEL_10:
    v12 = 24 * v11;
    goto LABEL_11;
  }
  v12 = 2400;
LABEL_11:
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = v12;
  WPP_RECORDER_SF_Dd((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, v16);
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v0 = 1;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v0;
  WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v13, 0x42u, v17);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
