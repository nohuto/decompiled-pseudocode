/*
 * XREFs of _PnpGetGenericStorePropertyKeys @ 0x140716CBC
 * Callers:
 *     PiDqPnPGetObjectPropertyKeys @ 0x1406821AC (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x140685538 (PiDevCfgCopyObjectProperties.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140715F70 (_PnpGetObjectPropertyKeysWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlUnalignedStringCchLengthW @ 0x14001988C (RtlUnalignedStringCchLengthW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     RtlUnicodeStringToInteger @ 0x140522AA0 (RtlUnicodeStringToInteger.c)
 *     _PnpCtxRegEnumValue @ 0x140588CBC (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegEnumKey @ 0x14058BF10 (_PnpCtxRegEnumKey.c)
 */

signed int __fastcall PnpGetGenericStorePropertyKeys(
        __int64 *a1,
        char *a2,
        const wchar_t *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v7; // rdi
  char *v8; // r11
  signed int result; // eax
  __int64 v11; // rcx
  int i; // r13d
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r15d
  int v16; // eax
  __int64 v17; // rcx
  char v18; // bl
  ULONG v19; // edi
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE v28; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v30; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Value; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[4]; // [rsp+64h] [rbp-9Ch] BYREF
  const wchar_t *v33; // [rsp+68h] [rbp-98h]
  size_t pcchLength; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  GUID Guid; // [rsp+90h] [rbp-70h] BYREF
  WCHAR v38[16]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR SourceString[40]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v40[176]; // [rsp+110h] [rbp+10h] BYREF

  v7 = (__int64)a3;
  v8 = a2;
  v33 = a3;
  *a7 = 0;
  v35 = a5;
  if ( !a3 || (result = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength), result >= 0) )
  {
    result = PnpOpenPropertiesKey(a1, v8, 0LL, 9u, 0, v25, &v28);
    if ( result == -1073741772 )
      return 0;
    if ( result >= 0 )
    {
      for ( i = 0; ; i = pcchLength )
      {
        do
        {
LABEL_7:
          v27 = 39;
          v13 = PnpCtxRegEnumKey(v11, v28);
          LODWORD(pcchLength) = ++i;
        }
        while ( v13 == -1073741789 );
        if ( v13 )
        {
          ZwClose(v28);
          return a6 < *a7 ? 0xC0000023 : 0;
        }
        if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0
          || RtlGUIDFromString(&DestinationString, &Guid) < 0 )
        {
          goto LABEL_7;
        }
        v14 = a1 ? *a1 : 0LL;
        if ( (int)SysCtxRegOpenKey(v14, (char *)v28, SourceString, 0, 9u, &v30) < 0 )
          goto LABEL_7;
        v15 = 0;
        while ( 1 )
        {
          do
          {
            v27 = 9;
            v16 = PnpCtxRegEnumKey(v11, v30);
            ++v15;
          }
          while ( v16 == -1073741789 );
          if ( v16 )
            break;
          if ( RtlInitUnicodeStringEx(&DestinationString, v38) >= 0
            && RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) >= 0 )
          {
            v17 = a1 ? *a1 : 0LL;
            if ( (int)SysCtxRegOpenKey(v17, (char *)v30, v38, 0, 1u, &Handle) >= 0 )
            {
              v18 = 0;
              if ( a4 )
              {
                v19 = 0;
                do
                {
                  v27 = 85;
                  v20 = PnpCtxRegEnumValue(v11, Handle, v19++, v40, (__int64)&v27, (__int64)v32, 0LL, 0);
                }
                while ( v20 == -1073741789 );
                v7 = (__int64)v33;
                v21 = v20 == 0;
              }
              else
              {
                v27 = 0;
                v22 = PnpCtxRegQueryValue(v11, Handle, v7, (__int64)v32, 0LL, (__int64)&v27);
                if ( !v22 )
                  goto LABEL_31;
                v21 = v22 == -1073741789;
              }
              if ( v21 )
LABEL_31:
                v18 = 1;
              ZwClose(Handle);
              if ( v18 )
              {
                v23 = *a7;
                if ( (unsigned int)v23 < a6 )
                {
                  v24 = v35;
                  *(GUID *)(v35 + 20 * v23) = Guid;
                  v11 = 5LL * *a7;
                  *(_DWORD *)(v24 + 20LL * *a7 + 16) = Value;
                }
                ++*a7;
              }
            }
          }
        }
        ZwClose(v30);
      }
    }
  }
  return result;
}
