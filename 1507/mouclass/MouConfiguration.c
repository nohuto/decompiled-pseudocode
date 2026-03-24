/*
 * XREFs of MouConfiguration @ 0x1C000E020
 * Callers:
 *     DriverEntry @ 0x1C000E390 (DriverEntry.c)
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
  const wchar_t *v0; // rsi
  int v1; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  WCHAR *v4; // rax
  PWSTR Buffer; // rsi
  PVOID SystemRoutineAddress; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // r8
  unsigned __int16 v15; // r9
  int v16; // [rsp+20h] [rbp-50h]
  int v17; // [rsp+20h] [rbp-50h]
  int v18; // [rsp+20h] [rbp-50h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+60h] [rbp-10h] BYREF
  int v22; // [rsp+A0h] [rbp+30h] BYREF
  int v23; // [rsp+A8h] [rbp+38h] BYREF
  int v24; // [rsp+B0h] [rbp+40h] BYREF

  v0 = (const wchar_t *)P;
  v22 = 100;
  v1 = 0;
  v23 = 1;
  v24 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x43756F4Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = 59;
LABEL_22:
    WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, v15, v16, v0);
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, 0x118uLL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  DestinationString.MaximumLength = word_1C0008260 + 26;
  v4 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C0008260 + 26), 0x43756F4Du);
  DestinationString.Buffer = v4;
  if ( !v4 )
  {
    v15 = 60;
    goto LABEL_22;
  }
  memset(v4, 0, DestinationString.MaximumLength);
  RtlAppendUnicodeToString(&DestinationString, v0);
  RtlAppendUnicodeToString(&DestinationString, L"\\Parameters");
  if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
  {
LABEL_8:
    *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = v22;
    HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v23;
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v24;
    RtlCopyUnicodeString(&::DestinationString, &SourceString);
    goto LABEL_9;
  }
  DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
  WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x3Du, v16, DestinationString.Buffer);
  RtlInitUnicodeString(&SourceString, L"PointerClass");
  v3[2] = 32;
  *((_QWORD *)v3 + 2) = L"MouseDataQueueSize";
  v3[8] = 4;
  *((_QWORD *)v3 + 3) = &WPP_MAIN_CB.Reserved + 1;
  v3[12] = 4;
  *((_QWORD *)v3 + 5) = &v22;
  *((_QWORD *)v3 + 9) = L"MaximumPortsServiced";
  *((_QWORD *)v3 + 10) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
  *((_QWORD *)v3 + 12) = &v23;
  *((_QWORD *)v3 + 16) = L"PointerDeviceBaseName";
  v3[16] = 32;
  v3[22] = 4;
  v3[26] = 4;
  v3[30] = 32;
  *((_QWORD *)v3 + 17) = &::DestinationString;
  v3[36] = 1;
  *((_QWORD *)v3 + 19) = SourceString.Buffer;
  *((_QWORD *)v3 + 23) = L"ConnectMultiplePorts";
  *((_QWORD *)v3 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
  *((_QWORD *)v3 + 26) = &v24;
  v3[40] = 0;
  v3[44] = 32;
  v3[50] = 4;
  v3[54] = 4;
  Buffer = DestinationString.Buffer;
  RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v16 = 0;
  if ( ((int (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(0x80000000LL, Buffer, v3, 0LL) < 0 )
  {
    WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 3u, v7, 0x3Eu, 0);
    goto LABEL_8;
  }
LABEL_9:
  WPP_RECORDER_SF_S((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 1u, 0x3Fu, v16, ::DestinationString.Buffer);
  v11 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
  if ( *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) )
  {
    v12 = v22;
  }
  else
  {
    WPP_RECORDER_SF_D((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, v17);
    v12 = v22;
    v11 = v22;
  }
  if ( v11 > 0xAAAAAAA )
    v13 = 3 * v12;
  else
    v13 = 3 * v11;
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 8 * v13;
  WPP_RECORDER_SF_Dd((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, v17);
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v1 = 1;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v1;
  WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v14, 0x42u, v18);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
