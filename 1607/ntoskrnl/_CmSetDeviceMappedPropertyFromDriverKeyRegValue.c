/*
 * XREFs of _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DEAFC
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x14050B6D4 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     RtlTimeToTimeFields @ 0x1400A9368 (RtlTimeToTimeFields.c)
 *     RtlUnalignedStringCchLengthW @ 0x1400C1760 (RtlUnalignedStringCchLengthW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegSetValue @ 0x140512E00 (_PnpCtxRegSetValue.c)
 */

__int64 __fastcall CmSetDeviceMappedPropertyFromDriverKeyRegValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        PLARGE_INTEGER Time,
        ULONG a6)
{
  DEVPROPKEY **v7; // rdx
  int v8; // r11d
  unsigned int i; // r10d
  DEVPROPKEY *v12; // r8
  DEVPROPKEY **v13; // rsi
  __int64 v14; // rcx
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-60h]
  __int64 v22; // [rsp+28h] [rbp-58h]
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-38h] BYREF
  wchar_t pszDest[12]; // [rsp+58h] [rbp-28h] BYREF

  Handle = 0LL;
  v7 = &off_1406EC540;
  v8 = *(_DWORD *)(a3 + 16);
  for ( i = 0; i < 0xD; ++i )
  {
    v12 = *v7;
    v13 = v7;
    if ( v8 == (*v7)->pid )
    {
      v14 = *(_QWORD *)a3 - *(_QWORD *)&v12->fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&v12->fmtid.Data1 )
        v14 = *(_QWORD *)(a3 + 8) - *(_QWORD *)v12->fmtid.Data4;
      if ( !v14 )
        break;
    }
    v13 = 0LL;
    v7 += 4;
  }
  if ( !v13 )
    return (unsigned int)-1073741802;
  v16 = *((_DWORD *)v13 + 2);
  if ( a4 != v16 )
  {
    if ( a4 == 25 )
    {
      if ( v16 != 18 )
        return (unsigned int)-1073741811;
    }
    else if ( a4 >= 2 )
    {
      return (unsigned int)-1073741811;
    }
  }
  v15 = CmOpenDeviceRegKey(a1, a2, 0x12u, 0, 2, 1, (__int64)&Handle, 0LL);
  if ( v15 >= 0 )
  {
    v17 = PnpCtxRegSetValue(a6, Handle, (const WCHAR *)v13[2], *((_DWORD *)v13 + 6), Time, a6);
    if ( v17 == -1073741444 )
    {
      v15 = -1073741772;
    }
    else if ( v17 >= 0 )
    {
      if ( *(_DWORD *)(a3 + 16) == 2 )
      {
        v18 = *(_QWORD *)a3 - *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1;
        if ( *(_QWORD *)a3 == *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1 )
          v18 = *(_QWORD *)(a3 + 8) - *(_QWORD *)DEVPKEY_Device_DriverDate.fmtid.Data4;
        if ( !v18 )
        {
          RtlTimeToTimeFields(Time, &TimeFields);
          LODWORD(v22) = TimeFields.Year;
          LODWORD(v21) = TimeFields.Day;
          if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%d-%d-%d", (unsigned int)TimeFields.Month, v21, v22) >= 0
            && RtlUnalignedStringCchLengthW(pszDest, 0xBuLL, (size_t *)&TimeFields) >= 0 )
          {
            PnpCtxRegSetValue(v19, Handle, L"DriverDate", 1u, pszDest, 2 * (*(_DWORD *)&TimeFields.Year + 1));
          }
        }
      }
    }
    else
    {
      v15 = v17;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v15;
}
