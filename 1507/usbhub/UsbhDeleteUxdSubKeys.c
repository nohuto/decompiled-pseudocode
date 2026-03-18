/*
 * XREFs of UsbhDeleteUxdSubKeys @ 0x1C0056858
 * Callers:
 *     UsbhUxdShutdown @ 0x1C00571B4 (UsbhUxdShutdown.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C0056C58 (UsbhGetUxdLoadKeySettings.c)
 */

__int64 __fastcall UsbhDeleteUxdSubKeys(__int64 a1, WCHAR *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // r14
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rdi
  ULONG v8; // edx
  ULONG v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-98h] BYREF
  _DWORD v14[20]; // [rsp+40h] [rbp-88h] BYREF

  v5 = FdoExt(a1, (__int64)a2, a3, a4);
  memset(v14, 0, 0x44uLL);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x42554855u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x2AuLL);
  v8 = 0;
  v9 = 0;
  while ( ZwEnumerateValueKey(a2, v8, KeyValueBasicInformation, v7, 0x2Au, ResultLength) >= 0 )
  {
    ++v9;
    if ( *((_DWORD *)v7 + 1) == 3 && (int)UsbhGetUxdLoadKeySettings(v11, a2, v7 + 6, v14) >= 0 && (v14[9] || v5[1294]) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          v10,
          0x22u,
          (__int64)&WPP_7b111e6d9aaacafadc26834d2b580d22_Traceguids,
          v7 + 6);
      if ( RtlDeleteRegistryValue(0x40000000u, a2, v7 + 6) >= 0 )
        --v9;
    }
    v8 = v9;
  }
  ExFreePoolWithTag(v7, 0);
  return 0LL;
}
