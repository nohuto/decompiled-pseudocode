/*
 * XREFs of UsbhGetRegUsbHubFlags @ 0x1C00067B0
 * Callers:
 *     UsbhCheckHubErrata @ 0x1C000671C (UsbhCheckHubErrata.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004FE2C (WPP_RECORDER_SF_DDD.c)
 */

void __fastcall UsbhGetRegUsbHubFlags(unsigned __int16 *a1)
{
  _QWORD *PoolWithTag; // rax
  void *v3; // rdi
  unsigned int v4; // r8d
  unsigned int v5; // edx
  unsigned int v6; // r9d
  __int64 v7; // rcx
  int v8; // r8d
  wchar_t **v9; // rbx
  void (__fastcall *SystemRoutineAddress)(__int64, void *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), unsigned __int16 *, _QWORD); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall *v12)(int, int, int, int, __int64, __int64); // [rsp+50h] [rbp-78h] BYREF
  int v13; // [rsp+58h] [rbp-70h]
  wchar_t *v14; // [rsp+60h] [rbp-68h]
  wchar_t **v15; // [rsp+68h] [rbp-60h]
  int v16; // [rsp+70h] [rbp-58h]
  __int64 v17; // [rsp+78h] [rbp-50h]
  int v18; // [rsp+80h] [rbp-48h]
  __int64 v19; // [rsp+88h] [rbp-40h]
  int v20; // [rsp+90h] [rbp-38h]
  __int64 v21; // [rsp+98h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      81,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2CuLL, 0x42554855u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    *((_DWORD *)PoolWithTag + 10) = 0;
    *(_OWORD *)PoolWithTag = *(_OWORD *)L"usbflags\\vvvvpppprrrr";
    *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)L"\\vvvvpppprrrr";
    PoolWithTag[4] = *(_QWORD *)L"prrrr";
    *((_DWORD *)PoolWithTag + 10) = *(_DWORD *)L"r";
    v4 = a1[1274];
    v5 = a1[1275];
    v6 = a1[1276];
    v7 = a1[1274] & 0xF;
    *((_WORD *)PoolWithTag + 9) = Nibble[(unsigned __int64)a1[1274] >> 12];
    *((_WORD *)PoolWithTag + 10) = Nibble[(v4 >> 8) & 0xF];
    *((_WORD *)PoolWithTag + 11) = Nibble[(unsigned __int8)v4 >> 4];
    *((_WORD *)PoolWithTag + 12) = Nibble[v7];
    *((_WORD *)PoolWithTag + 13) = Nibble[(unsigned __int64)v5 >> 12];
    *((_WORD *)PoolWithTag + 14) = Nibble[(v5 >> 8) & 0xF];
    *((_WORD *)PoolWithTag + 15) = Nibble[(unsigned __int8)v5 >> 4];
    *((_WORD *)PoolWithTag + 16) = Nibble[v5 & 0xF];
    *((_WORD *)PoolWithTag + 17) = Nibble[(unsigned __int64)v6 >> 12];
    *((_WORD *)PoolWithTag + 18) = Nibble[(v6 >> 8) & 0xF];
    *((_WORD *)PoolWithTag + 19) = Nibble[(unsigned __int8)v6 >> 4];
    *((_WORD *)PoolWithTag + 20) = Nibble[v6 & 0xF];
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned __int16)v5,
        (unsigned __int16)v4,
        82,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        v4,
        v5,
        v6);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v8,
          83,
          (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
          (__int64)v3);
    }
    v9 = &GlobalHubValues;
    if ( GlobalHubValues )
    {
      do
      {
        v14 = *v9;
        v16 = *((_DWORD *)v9 + 2);
        v12 = UsbhQueryGlobalDeviceValue;
        v13 = 0;
        v15 = v9;
        v17 = 0LL;
        v18 = 0;
        v19 = 0LL;
        v20 = 0;
        v21 = 0LL;
        RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = (void (__fastcall *)(__int64, void *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), unsigned __int16 *, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = (void (__fastcall *)(__int64, void *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), unsigned __int16 *, _QWORD))RtlQueryRegistryValues;
        SystemRoutineAddress(2LL, v3, &v12, a1, 0LL);
        v9 += 3;
      }
      while ( *v9 );
    }
    ExFreePoolWithTag(v3, 0);
  }
}
