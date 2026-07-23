/*
 * XREFs of _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405139AC
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1404B126C (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140003C28 (RtlStringCchPrintfW.c)
 *     RtlUnalignedStringCchLengthW @ 0x14008FA28 (RtlUnalignedStringCchLengthW.c)
 *     RtlTimeToTimeFields @ 0x140123118 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
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
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-60h]
  __int64 v22; // [rsp+28h] [rbp-58h]
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+48h] [rbp-38h] BYREF
  wchar_t pszDest[12]; // [rsp+58h] [rbp-28h] BYREF

  Handle = 0LL;
  v7 = &off_1406A4260;
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
  v15 = *((_DWORD *)v13 + 2);
  if ( a4 != v15 )
  {
    if ( a4 == 25 )
    {
      if ( v15 == 18 )
        goto LABEL_10;
    }
    else if ( a4 < 2 )
    {
      goto LABEL_10;
    }
    return (unsigned int)-1073741811;
  }
LABEL_10:
  v16 = CmOpenDeviceRegKey(a1, a2, 0x12u, 0, 2, 1, (__int64)&Handle, 0LL);
  if ( v16 >= 0 )
  {
    v17 = PnpCtxRegSetValue(a6, Handle, (__int64)v13[2], *((unsigned int *)v13 + 6), (__int64)Time, a6);
    if ( v17 == -1073741444 )
    {
      v16 = -1073741772;
    }
    else if ( v17 < 0 )
    {
      v16 = v17;
    }
    else if ( *(_DWORD *)(a3 + 16) == 2 )
    {
      v19 = *(_QWORD *)a3 - *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1;
      if ( *(_QWORD *)a3 == *(_QWORD *)&DEVPKEY_Device_DriverDate.fmtid.Data1 )
        v19 = *(_QWORD *)(a3 + 8) - *(_QWORD *)DEVPKEY_Device_DriverDate.fmtid.Data4;
      if ( !v19 )
      {
        RtlTimeToTimeFields(Time, &TimeFields);
        LODWORD(v22) = TimeFields.Year;
        LODWORD(v21) = TimeFields.Day;
        if ( RtlStringCchPrintfW(pszDest, 0xBuLL, L"%d-%d-%d", (unsigned int)TimeFields.Month, v21, v22) >= 0
          && RtlUnalignedStringCchLengthW(pszDest, 0xBuLL, (size_t *)&TimeFields) >= 0 )
        {
          PnpCtxRegSetValue(
            v20,
            Handle,
            (__int64)L"DriverDate",
            1LL,
            (__int64)pszDest,
            2 * (*(_DWORD *)&TimeFields.Year + 1));
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v16;
}
