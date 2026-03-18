/*
 * XREFs of UsbhGetRegUsbDeviceFlags @ 0x1C00059C0
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0005674 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0005CB4 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004FE2C (WPP_RECORDER_SF_DDD.c)
 */

_QWORD *__fastcall UsbhGetRegUsbDeviceFlags(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rcx
  _QWORD *result; // rax
  __int64 v6; // rdi
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  int v11; // r8d
  wchar_t **v12; // rbx
  void (__fastcall *SystemRoutineAddress)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall *v15)(int, int, int, int, __int64, __int64); // [rsp+50h] [rbp-78h] BYREF
  int v16; // [rsp+58h] [rbp-70h]
  wchar_t *v17; // [rsp+60h] [rbp-68h]
  wchar_t **v18; // [rsp+68h] [rbp-60h]
  int v19; // [rsp+70h] [rbp-58h]
  __int64 v20; // [rsp+78h] [rbp-50h]
  int v21; // [rsp+80h] [rbp-48h]
  __int64 v22; // [rsp+88h] [rbp-40h]
  int v23; // [rsp+90h] [rbp-38h]
  __int64 v24; // [rsp+98h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      78,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids);
  v3 = (unsigned __int16 *)PdoExt(a2);
  UsbhRegQueryGlobalLegacyDeviceKeys(v4, a2);
  result = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2CuLL, 0x42554855u);
  v6 = (__int64)result;
  if ( result )
  {
    *result = 0LL;
    result[1] = 0LL;
    result[2] = 0LL;
    result[3] = 0LL;
    result[4] = 0LL;
    *((_DWORD *)result + 10) = 0;
    *(_OWORD *)result = *(_OWORD *)L"usbflags\\vvvvpppprrrr";
    *((_OWORD *)result + 1) = *(_OWORD *)L"\\vvvvpppprrrr";
    result[4] = *(_QWORD *)L"prrrr";
    *((_DWORD *)result + 10) = *(_DWORD *)L"r";
    v7 = v3[700];
    v8 = v3[701];
    v9 = v3[702];
    v10 = v3[700] & 0xF;
    *((_WORD *)result + 9) = Nibble[(unsigned __int64)v3[700] >> 12];
    *((_WORD *)result + 10) = Nibble[(v7 >> 8) & 0xF];
    *((_WORD *)result + 11) = Nibble[(unsigned __int8)v7 >> 4];
    *((_WORD *)result + 12) = Nibble[v10];
    *((_WORD *)result + 13) = Nibble[(unsigned __int64)v8 >> 12];
    *((_WORD *)result + 14) = Nibble[(v8 >> 8) & 0xF];
    *((_WORD *)result + 15) = Nibble[(unsigned __int8)v8 >> 4];
    *((_WORD *)result + 16) = Nibble[v8 & 0xF];
    *((_WORD *)result + 17) = Nibble[(unsigned __int64)v9 >> 12];
    *((_WORD *)result + 18) = Nibble[(v9 >> 8) & 0xF];
    *((_WORD *)result + 19) = Nibble[(unsigned __int8)v9 >> 4];
    *((_WORD *)result + 20) = Nibble[v9 & 0xF];
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned __int16)v8,
        (unsigned __int16)v7,
        79,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        v7,
        v8,
        v9);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v11,
          80,
          (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
          v6);
    }
    v12 = &GlobalDeviceValues;
    if ( GlobalDeviceValues )
    {
      do
      {
        v17 = *v12;
        v19 = *((_DWORD *)v12 + 2);
        v15 = UsbhQueryGlobalDeviceValue;
        v16 = 0;
        v18 = v12;
        v20 = 0LL;
        v21 = 0;
        v22 = 0LL;
        v23 = 0;
        v24 = 0LL;
        RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
        SystemRoutineAddress(2LL, v6, &v15, a2, 0LL);
        v12 += 3;
      }
      while ( *v12 );
    }
    return (_QWORD *)v6;
  }
  return result;
}
