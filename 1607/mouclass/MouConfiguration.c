/*
 * XREFs of MouConfiguration @ 0x1C000E020
 * Callers:
 *     DriverEntry @ 0x1C000E350 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002390 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_d @ 0x1C0002470 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C00024F0 (WPP_RECORDER_SF_Dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     WPP_RECORDER_SF_D @ 0x1C0004FC4 (WPP_RECORDER_SF_D.c)
 */

void MouConfiguration()
{
  int v0; // edi
  const WCHAR *v1; // rsi
  _DWORD *PoolWithTag; // rax
  int v3; // edx
  _DWORD *v4; // rbx
  WCHAR *v5; // rax
  int Length; // edx
  unsigned __int64 v7; // rdx
  PWSTR Buffer; // rsi
  PVOID SystemRoutineAddress; // rax
  int v10; // eax
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+20h] [rbp-58h]
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
  v1 = (const WCHAR *)P;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x43756F4Du);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v19 = 59;
LABEL_20:
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v3, 1, v19);
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, 0x118uLL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  DestinationString.MaximumLength = word_1C0008260 + 26;
  v5 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(word_1C0008260 + 26), 0x43756F4Du);
  DestinationString.Buffer = v5;
  if ( !v5 )
  {
    v19 = 60;
    goto LABEL_20;
  }
  memset(v5, 0, DestinationString.MaximumLength);
  RtlAppendUnicodeToString(&DestinationString, v1);
  RtlAppendUnicodeToString(&DestinationString, L"\\Parameters");
  Length = DestinationString.Length;
  if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
  {
    v7 = (unsigned __int64)DestinationString.Length >> 1;
    DestinationString.Buffer[v7 + 1] = 0;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v7, 1, 61);
    v4[2] = 288;
    *((_QWORD *)v4 + 2) = L"MouseDataQueueSize";
    v4[8] = 67108868;
    *((_QWORD *)v4 + 3) = &WPP_MAIN_CB.Reserved + 1;
    v4[16] = 288;
    *((_QWORD *)v4 + 9) = L"MaximumPortsServiced";
    *((_QWORD *)v4 + 10) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
    *((_QWORD *)v4 + 16) = L"PointerDeviceBaseName";
    *((_QWORD *)v4 + 23) = L"ConnectMultiplePorts";
    *((_QWORD *)v4 + 24) = &WPP_MAIN_CB.DeviceQueue.Lock;
    v4[22] = 67108868;
    v4[30] = 288;
    *((_QWORD *)v4 + 17) = &::DestinationString;
    v4[36] = 16777217;
    v4[44] = 288;
    v4[50] = 67108868;
    Buffer = DestinationString.Buffer;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v20 = 0;
    v10 = ((__int64 (__fastcall *)(__int64, PWSTR, _DWORD *, _QWORD))SystemRoutineAddress)(
            0x80000000LL,
            Buffer,
            v4,
            0LL);
    if ( v10 < 0 )
    {
      LOBYTE(Length) = 3;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, Length, v11, 62, 0, v10);
    }
  }
LABEL_8:
  LOBYTE(Length) = 4;
  WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, Length, 1, 63);
  v15 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
  if ( !*((_DWORD *)&WPP_MAIN_CB.Reserved + 2) )
  {
    WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14, v20, 0);
    v15 = 100;
    goto LABEL_10;
  }
  if ( *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) <= 0xAAAAAAAu )
  {
LABEL_10:
    v16 = 24 * v15;
    goto LABEL_11;
  }
  v16 = 2400;
LABEL_11:
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = v16;
  WPP_RECORDER_SF_Dd(WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14, v20, v16, SBYTE4(WPP_MAIN_CB.DeviceQueue.Lock));
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    v0 = 1;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v0;
  LOBYTE(v17) = 4;
  WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v17, v18, 66, v21, v0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
