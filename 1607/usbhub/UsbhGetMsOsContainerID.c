/*
 * XREFs of UsbhGetMsOsContainerID @ 0x1C0029238
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C00404FC (UsbhGetMsOsFeatureDescriptor.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetMsOsContainerID(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  _DWORD *v6; // rbx
  int v7; // r8d
  int v9; // r8d
  unsigned int MsOsFeatureDescriptor; // r14d
  const WCHAR *v11; // rdx
  unsigned int v12; // esi
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm0
  int v16; // [rsp+48h] [rbp-38h]
  int ValueData; // [rsp+50h] [rbp-30h] BYREF
  int v18[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h]

  ValueData = 0;
  v5 = a2;
  v6 = PdoExt(a2, a2, a3, a4);
  if ( (v6[356] & 0x8400) != 0x400 )
    return 0LL;
  *(_QWORD *)v18 = 0LL;
  v19 = 0uLL;
  MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v5, 0, v7, 6, (__int64)v18, 8, (__int64)&ValueData);
  if ( (MsOsFeatureDescriptor & 0xC0000000) == 0xC0000000 )
  {
    v11 = (const WCHAR *)*((_QWORD *)v6 + 142);
    if ( v11 )
    {
      ValueData = 1;
      RtlWriteRegistryValue(2u, v11, L"SkipContainerIdQuery", 3u, &ValueData, 4u);
      v6[356] |= 0x8000u;
    }
    return MsOsFeatureDescriptor;
  }
  if ( !ValueData )
    return 0LL;
  if ( ValueData != 8 || v18[1] != 393472 || v18[0] != 24 )
  {
    LOBYTE(v16) = 0;
    UsbhException(a1, *((unsigned __int16 *)v6 + 710), 135, (int)v18, 24, 0, 0, usbfile_msos_c, 719, v16);
    return 3221225659LL;
  }
  v12 = UsbhGetMsOsFeatureDescriptor(v5, 0, v9, 6, (__int64)v18, 24, (__int64)&ValueData);
  if ( (v12 & 0xC0000000) != 0xC0000000 )
  {
    if ( ValueData != 24 )
    {
      LOBYTE(v16) = 0;
      UsbhException(a1, *((unsigned __int16 *)v6 + 710), 135, (int)v18, 24, 0, 0, usbfile_msos_c, 753, v16);
      return 3221225659LL;
    }
    v14 = v19 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v19 == *(_QWORD *)&GUID_NULL.Data1 )
      v14 = *((_QWORD *)&v19 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v14 )
    {
      LOBYTE(v16) = 0;
      UsbhException(a1, *((unsigned __int16 *)v6 + 710), 135, (int)v18, 24, 0, 0, usbfile_msos_c, 762, v16);
      return 3221225659LL;
    }
    v15 = v19;
    *((_BYTE *)v6 + 2708) = 1;
    *(_OWORD *)(v6 + 673) = v15;
    return 0LL;
  }
  v13 = (const WCHAR *)*((_QWORD *)v6 + 142);
  if ( v13 )
  {
    ValueData = 1;
    RtlWriteRegistryValue(2u, v13, L"SkipContainerIdQuery", 3u, &ValueData, 4u);
    v6[356] |= 0x8000u;
    LOBYTE(v16) = 0;
    UsbhException(a1, *((unsigned __int16 *)v6 + 710), 135, (int)v18, 24, v12, 0, usbfile_msos_c, 746, v16);
  }
  return v12;
}
