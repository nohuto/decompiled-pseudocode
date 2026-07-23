/*
 * XREFs of _PnpGetGenericStorePropertyKeys @ 0x1406DC340
 * Callers:
 *     PiDqPnPGetObjectPropertyKeys @ 0x140632150 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x140637050 (PiDevCfgCopyObjectProperties.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x1406DB498 (_PnpGetObjectPropertyKeysWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0D84 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400C1760 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     RtlUnicodeStringToInteger @ 0x1404A31F0 (RtlUnicodeStringToInteger.c)
 *     _PnpCtxRegEnumValue @ 0x1404B90C0 (_PnpCtxRegEnumValue.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegEnumKey @ 0x1406D7228 (_PnpCtxRegEnumKey.c)
 */

signed int __fastcall PnpGetGenericStorePropertyKeys(
        __int64 *a1,
        int a2,
        const wchar_t *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  const WCHAR *v7; // rdi
  int v8; // r11d
  signed int result; // eax
  __int64 v11; // rcx
  ULONG i; // r13d
  int v13; // eax
  __int64 v14; // rcx
  ULONG v15; // r15d
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
  unsigned int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Value; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v31; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v32; // [rsp+60h] [rbp-A0h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  GUID Guid; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v38[8]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int SourceString[20]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v40[176]; // [rsp+110h] [rbp+10h] BYREF

  v7 = a3;
  v8 = a2;
  v34 = a3;
  *a7 = 0;
  v35 = a5;
  if ( !a3 || (result = RtlUnalignedStringCchLengthW(a3, 0x55uLL, &pcchLength), result >= 0) )
  {
    result = PnpOpenPropertiesKey(a1, v8, 0LL, 9, 0, v25, &v32);
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
          v13 = PnpCtxRegEnumKey(v11, v32, i++, SourceString, &v27);
          LODWORD(pcchLength) = i;
        }
        while ( v13 == -1073741789 );
        if ( v13 )
        {
          ZwClose(v32);
          return a6 < *a7 ? 0xC0000023 : 0;
        }
        if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString) < 0
          || RtlGUIDFromString(&DestinationString, &Guid) < 0 )
        {
          goto LABEL_7;
        }
        v14 = a1 ? *a1 : 0LL;
        if ( (int)SysCtxRegOpenKey(v14, (__int64)v32, (__int64)SourceString, 0, 9u, (__int64)&v31) < 0 )
          goto LABEL_7;
        v15 = 0;
        while ( 1 )
        {
          do
          {
            v27 = 9;
            v16 = PnpCtxRegEnumKey(v11, v31, v15++, v38, &v27);
          }
          while ( v16 == -1073741789 );
          if ( v16 )
            break;
          if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)v38) >= 0
            && RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) >= 0 )
          {
            v17 = a1 ? *a1 : 0LL;
            if ( (int)SysCtxRegOpenKey(v17, (__int64)v31, (__int64)v38, 0, 1u, (__int64)&Handle) >= 0 )
            {
              v18 = 0;
              if ( a4 )
              {
                v19 = 0;
                do
                {
                  v27 = 85;
                  v20 = PnpCtxRegEnumValue(v11, Handle, v19++, v40, (__int64)&v27, (__int64)&v28, 0LL, 0);
                }
                while ( v20 == -1073741789 );
                v7 = v34;
                v21 = v20 == 0;
              }
              else
              {
                v27 = 0;
                v22 = PnpCtxRegQueryValue(v11, Handle, v7, &v28, 0LL, &v27);
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
        ZwClose(v31);
      }
    }
  }
  return result;
}
