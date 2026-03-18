/*
 * XREFs of UsbhGetInitRegUsbDeviceFlags @ 0x1C0007FCC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004FD8C (WPP_RECORDER_SF_DDD.c)
 */

void __fastcall UsbhGetInitRegUsbDeviceFlags(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rdi
  _OWORD *PoolWithTag; // rax
  _OWORD *v5; // rbx
  unsigned int v6; // r8d
  unsigned int v7; // edx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  wchar_t **v10; // rdi
  PVOID SystemRoutineAddress; // rax
  int v12; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall *v14)(int, int, int, int, __int64, __int64); // [rsp+58h] [rbp-29h] BYREF
  int v15; // [rsp+60h] [rbp-21h]
  wchar_t *v16; // [rsp+68h] [rbp-19h]
  wchar_t **v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      75,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids);
  v3 = (unsigned __int16 *)PdoExt(a2);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2CuLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x2CuLL);
    *v5 = *(_OWORD *)L"usbflags\\vvvvpppprrrr";
    v5[1] = *(_OWORD *)L"\\vvvvpppprrrr";
    *((_QWORD *)v5 + 4) = *(_QWORD *)L"prrrr";
    *((_DWORD *)v5 + 10) = *(_DWORD *)L"r";
    v6 = v3[700];
    v7 = v3[701];
    v8 = v3[702];
    v9 = v3[700] & 0xF;
    *((_WORD *)v5 + 9) = Nibble[(unsigned __int64)v3[700] >> 12];
    *((_WORD *)v5 + 10) = Nibble[(v6 >> 8) & 0xF];
    *((_WORD *)v5 + 11) = Nibble[(unsigned __int8)v6 >> 4];
    *((_WORD *)v5 + 12) = Nibble[v9];
    *((_WORD *)v5 + 13) = Nibble[(unsigned __int64)v7 >> 12];
    *((_WORD *)v5 + 14) = Nibble[(v7 >> 8) & 0xF];
    *((_WORD *)v5 + 15) = Nibble[(unsigned __int8)v7 >> 4];
    *((_WORD *)v5 + 16) = Nibble[v7 & 0xF];
    *((_WORD *)v5 + 17) = Nibble[(unsigned __int64)v8 >> 12];
    *((_WORD *)v5 + 18) = Nibble[(v8 >> 8) & 0xF];
    *((_WORD *)v5 + 19) = Nibble[(unsigned __int8)v8 >> 4];
    *((_WORD *)v5 + 20) = Nibble[v8 & 0xF];
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned __int16)v7,
        (unsigned __int16)v6,
        76,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        v6,
        v7,
        v8);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v12,
          77,
          (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
          (__int64)v5);
    }
    v10 = &GlobalInitDeviceValues;
    if ( GlobalInitDeviceValues )
    {
      do
      {
        v15 = 0;
        v14 = UsbhQueryGlobalDeviceValue;
        v16 = *v10;
        v18 = *((_DWORD *)v10 + 2);
        v17 = v10;
        v19 = 0LL;
        v20 = 0;
        v21 = 0LL;
        v22 = 0;
        v23 = 0LL;
        RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = RtlQueryRegistryValues;
        ((void (__fastcall *)(__int64, _OWORD *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))SystemRoutineAddress)(
          2LL,
          v5,
          &v14,
          a2,
          0LL);
        v10 += 3;
      }
      while ( *v10 );
    }
    ExFreePoolWithTag(v5, 0);
  }
}
