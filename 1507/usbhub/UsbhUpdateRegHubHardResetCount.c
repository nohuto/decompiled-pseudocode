/*
 * XREFs of UsbhUpdateRegHubHardResetCount @ 0x1C004C100
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPdoRegistryParameter @ 0x1C0006624 (UsbhGetPdoRegistryParameter.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C000AB2C (UsbhSetPdoRegistryParameter.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhUpdateRegHubHardResetCount(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _DEVICE_OBJECT *v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+28h] [rbp-20h]
  ULONG v7; // [rsp+30h] [rbp-18h]
  int Data; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v7) = 1;
  v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)FdoExt(a1, a2, a3, a4) + 149);
  Data = 0;
  result = UsbhGetPdoRegistryParameter(v4, L"HardResetCount", &Data, 4u, 0LL, 0LL, v7);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741772 )
  {
    if ( Data != -1 )
      ++Data;
    return UsbhSetPdoRegistryParameter(v4, L"HardResetCount", 4u, &Data, 4u);
  }
  else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v6) = result;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x57u,
             (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
             v6);
  }
  return result;
}
