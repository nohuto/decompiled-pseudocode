/*
 * XREFs of UsbhGetRegUsbClassFlags @ 0x1C0007D50
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0007DC0 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0008A60 (RtlStringCbPrintfW.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029900 (memset.c)
 */

void __fastcall UsbhGetRegUsbClassFlags(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  unsigned __int8 v4; // di
  unsigned __int8 v5; // si
  unsigned __int8 v6; // r12
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rbx
  unsigned int v9; // r15d
  int v10; // r13d
  wchar_t **v11; // rdi
  wchar_t **v12; // rsi
  void (__fastcall *SystemRoutineAddress)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  wchar_t **v14; // rsi
  void (__fastcall *v15)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  void (__fastcall *v16)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  int v17; // [rsp+28h] [rbp-59h]
  __int64 v18; // [rsp+28h] [rbp-59h]
  int v19; // [rsp+30h] [rbp-51h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall *v21)(int, int, int, int, __int64, __int64); // [rsp+48h] [rbp-39h] BYREF
  int v22; // [rsp+50h] [rbp-31h]
  wchar_t *v23; // [rsp+58h] [rbp-29h]
  wchar_t **v24; // [rsp+60h] [rbp-21h]
  int v25; // [rsp+68h] [rbp-19h]
  __int64 v26; // [rsp+70h] [rbp-11h]
  int v27; // [rsp+78h] [rbp-9h]
  __int64 v28; // [rsp+80h] [rbp-1h]
  int v29; // [rsp+88h] [rbp+7h]
  __int64 v30; // [rsp+90h] [rbp+Fh]

  v3 = (_BYTE *)PdoExt(a2);
  v4 = v3[2413];
  v5 = v3[2414];
  v6 = v3[2415];
  if ( (unsigned __int8)(v4 - 1) <= 0xFDu )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x54uLL, 0x42554855u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x54uLL);
      v19 = v6;
      v9 = v4;
      v10 = v5;
      v17 = v5;
      if ( (RtlStringCbPrintfW(v8, 0x54uLL, L"usbflags\\CLASS_%02X_SUBCLASS_%02X_PROTOCOL_%02X", v4, v17, v19) & 0xC0000000) != 0xC0000000 )
      {
        v11 = &GlobalClassValues;
        v12 = &GlobalClassValues;
        if ( GlobalClassValues )
        {
          do
          {
            v23 = *v12;
            v25 = *((_DWORD *)v12 + 2);
            v21 = UsbhQueryGlobalDeviceValue;
            v22 = 0;
            v24 = v12;
            v26 = 0LL;
            v27 = 0;
            v28 = 0LL;
            v29 = 0;
            v30 = 0LL;
            RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
            SystemRoutineAddress = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
            if ( !SystemRoutineAddress )
              SystemRoutineAddress = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
            SystemRoutineAddress(2LL, v8, &v21, a2, 0LL);
            v12 += 3;
          }
          while ( *v12 );
          v11 = &GlobalClassValues;
        }
        LODWORD(v18) = v10;
        if ( (RtlStringCbPrintfW(v8, 0x54uLL, L"usbflags\\CLASS_%02X_SUBCLASS_%02X", v9, v18) & 0xC0000000) != 0xC0000000 )
        {
          v14 = &GlobalClassValues;
          if ( GlobalClassValues )
          {
            do
            {
              v23 = *v14;
              v25 = *((_DWORD *)v14 + 2);
              v21 = UsbhQueryGlobalDeviceValue;
              v22 = 0;
              v24 = v14;
              v26 = 0LL;
              v27 = 0;
              v28 = 0LL;
              v29 = 0;
              v30 = 0LL;
              RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
              v15 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
              if ( !v15 )
                v15 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
              v15(2LL, v8, &v21, a2, 0LL);
              v14 += 3;
            }
            while ( *v14 );
          }
          if ( (RtlStringCbPrintfW(v8, 0x54uLL, L"usbflags\\CLASS_%02X", v9) & 0xC0000000) != 0xC0000000
            && GlobalClassValues )
          {
            do
            {
              v22 = 0;
              v21 = UsbhQueryGlobalDeviceValue;
              v23 = *v11;
              v25 = *((_DWORD *)v11 + 2);
              v24 = v11;
              v26 = 0LL;
              v27 = 0;
              v28 = 0LL;
              v29 = 0;
              v30 = 0LL;
              RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
              v16 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
              if ( !v16 )
                v16 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
              v16(2LL, v8, &v21, a2, 0LL);
              v11 += 3;
            }
            while ( *v11 );
          }
        }
      }
      ExFreePoolWithTag(v8, 0);
    }
  }
}
