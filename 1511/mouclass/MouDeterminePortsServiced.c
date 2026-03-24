/*
 * XREFs of MouDeterminePortsServiced @ 0x1C000B670
 * Callers:
 *     MouseClassFindMorePorts @ 0x1C000B120 (MouseClassFindMorePorts.c)
 *     DriverEntry @ 0x1C000E350 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002310 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002AC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002E40 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004F28 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall MouDeterminePortsServiced(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned __int64 v4; // r8
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  PVOID SystemRoutineAddress; // rax
  int v9; // ebx
  __int64 v10; // r8
  int v12; // [rsp+20h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *a2 = 0;
  v4 = *a1;
  if ( a1[1] < v4 + 2 )
    return 3221225473LL;
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1) + 2) = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x43756F4Du);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v6[2] = 0LL;
    *v6 = MouDeviceMapQueryCallback;
    v7 = *((_QWORD *)a1 + 1);
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v9 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _DWORD *, _QWORD))SystemRoutineAddress)(
           2147483652LL,
           v7,
           v6,
           a2,
           0LL);
    if ( v9 < 0 )
      WPP_RECORDER_SF_d((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, v10, 0x4Bu, v12);
    ExFreePoolWithTag(v6, 0);
    return (unsigned int)v9;
  }
  else
  {
    WPP_RECORDER_SF_((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 1u, 0x4Au);
    return 3221225473LL;
  }
}
