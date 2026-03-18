/*
 * XREFs of UsbhRegQueryGlobalKey @ 0x1C00064D0
 * Callers:
 *     UsbhRegDriverEntry @ 0x1C0004F60 (UsbhRegDriverEntry.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0005CB4 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C000639C (UsbhGetGlobalUxdSettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C004D0E4 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhRegQueryGlobalKey(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  PVOID SystemRoutineAddress; // rax
  unsigned int v9; // eax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // esi
  PDEVICE_OBJECT v14; // r10
  __int64 v16; // rbx
  int v18; // [rsp+20h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      61,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  v18 = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v9 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))SystemRoutineAddress)(a1, a2, a4, 0LL);
  v13 = v9;
  v14 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      62,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
      v9);
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v11,
        63,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        a2);
      v14 = WPP_GLOBAL_Control;
    }
  }
  v16 = a4 + 24;
  do
  {
    if ( !*(_QWORD *)(v16 - 24) )
      break;
    if ( *(_DWORD *)(v16 + 8) == 4 && LOWORD(v14->DeviceType) )
    {
      WPP_RECORDER_SF_SD(v14->DeviceExtension, v10, v11, v12, v18, *(_QWORD *)(v16 - 8), **(_DWORD **)v16);
      v14 = WPP_GLOBAL_Control;
    }
    v16 += 56LL;
    a5 -= 56;
  }
  while ( a5 >= 0x38 );
  return v13;
}
