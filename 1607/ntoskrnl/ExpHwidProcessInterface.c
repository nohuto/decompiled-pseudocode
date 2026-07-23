/*
 * XREFs of ExpHwidProcessInterface @ 0x1404BE6E8
 * Callers:
 *     sub_1404D8808 @ 0x1404D8808 (sub_1404D8808.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     sub_1404BE890 @ 0x1404BE890 (sub_1404BE890.c)
 *     ExpHwidAuthenticateHardwareId @ 0x1404D917C (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x1404D9330 (ExpHwidGetDeviceProperties.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     ExpHwidGetDevicePropertyDataFixed @ 0x1404DA098 (ExpHwidGetDevicePropertyDataFixed.c)
 *     sub_1406B9FB4 @ 0x1406B9FB4 (sub_1406B9FB4.c)
 */

__int64 __fastcall ExpHwidProcessInterface(
        int a1,
        char a2,
        int (__fastcall *a3)(__int64, UNICODE_STRING *, __int64),
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _DEVICE_OBJECT *v6; // rbx
  unsigned int v7; // r13d
  int DeviceInterfaces; // eax
  WCHAR *v9; // rsi
  unsigned int v10; // r14d
  const WCHAR *v11; // r15
  unsigned __int16 Length; // di
  unsigned __int16 i; // cx
  int v14; // eax
  char v16[8]; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PCWSTR SourceString[2]; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-10h] BYREF

  SourceString[0] = 0LL;
  v6 = 0LL;
  Object = 0LL;
  v7 = 0;
  DeviceInterfaces = IopGetDeviceInterfaces(a1, 0, a2 != 0, 0, (__int64)SourceString, 0LL);
  v9 = (WCHAR *)SourceString[0];
  v10 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
LABEL_19:
    v10 = 0;
  }
  else
  {
    v11 = SourceString[0];
    *(_QWORD *)&String2.Length = 0LL;
    String2.Buffer = 0LL;
    if ( *SourceString[0] )
    {
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, v11);
        v16[0] = -1;
        if ( a2 )
        {
          if ( (int)ExpHwidGetDevicePropertyDataFixed(
                      0LL,
                      &DestinationString,
                      &DEVPKEY_DeviceInterface_Enabled,
                      17LL,
                      1,
                      v16) < 0 )
            goto LABEL_29;
          if ( v16[0] != -1 )
            break;
        }
        Length = _mm_cvtsi128_si32((__m128i)DestinationString);
        String1 = DestinationString;
        if ( Length >= 0xAu )
        {
          String1.Length = 8;
          for ( i = 8; i < Length; String1.Length = i )
          {
            if ( String1.Buffer[(unsigned __int64)i >> 1] == 92 )
              break;
            i += 2;
          }
        }
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          goto LABEL_15;
        v14 = sub_1404BE890(&String1, a4, &Object);
        v6 = (struct _DEVICE_OBJECT *)Object;
        if ( v14 < 0 )
          goto LABEL_15;
        if ( Object )
        {
          if ( (int)ExpHwidGetDeviceProperties((PDEVICE_OBJECT)Object, a5) < 0
            || (int)ExpHwidAuthenticateHardwareId(v6) < 0 )
          {
            goto LABEL_15;
          }
          ObfDereferenceObject(v6);
          v6 = 0LL;
          Object = 0LL;
          if ( a3(a6, &String1, a5) >= 0 )
            String2 = String1;
        }
LABEL_17:
        v11 += ((unsigned __int64)Length >> 1) + 1;
        if ( !*v11 )
        {
          v9 = (WCHAR *)SourceString[0];
          goto LABEL_19;
        }
      }
      if ( (int)sub_1406B9FB4(&DestinationString, a5) >= 0 && v7 < 0x14 && a3(a6, 0LL, a5) >= 0 )
        ++v7;
LABEL_29:
      Length = DestinationString.Length;
LABEL_15:
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        v6 = 0LL;
        Object = 0LL;
      }
      goto LABEL_17;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v10;
}
