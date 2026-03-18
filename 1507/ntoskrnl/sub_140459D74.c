/*
 * XREFs of sub_140459D74 @ 0x140459D74
 * Callers:
 *     sub_1404DABD0 @ 0x1404DABD0 (sub_1404DABD0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     sub_140459F24 @ 0x140459F24 (sub_140459F24.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     sub_1404DB260 @ 0x1404DB260 (sub_1404DB260.c)
 *     sub_1404DB414 @ 0x1404DB414 (sub_1404DB414.c)
 *     sub_1404DB560 @ 0x1404DB560 (sub_1404DB560.c)
 *     sub_1406FC290 @ 0x1406FC290 (sub_1406FC290.c)
 */

__int64 __fastcall sub_140459D74(
        int *a1,
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
  DeviceInterfaces = IopGetDeviceInterfaces(a1, 0LL, a2 != 0, 0, SourceString, 0LL);
  v9 = (WCHAR *)SourceString[0];
  v10 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
LABEL_14:
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
          if ( (int)sub_1404DB560(0LL, &DestinationString, &DEVPKEY_DeviceInterface_Enabled, 17LL, 1, v16) < 0 )
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
          goto LABEL_10;
        v14 = sub_140459F24(&String1, a4, &Object);
        v6 = (struct _DEVICE_OBJECT *)Object;
        if ( v14 < 0 )
          goto LABEL_10;
        if ( Object )
        {
          if ( (int)sub_1404DB414((PDEVICE_OBJECT)Object, a5) >= 0 && (int)sub_1404DB260(v6) >= 0 )
          {
            ObfDereferenceObject(v6);
            v6 = 0LL;
            Object = 0LL;
            if ( a3(a6, &String1, a5) >= 0 )
              String2 = String1;
            goto LABEL_12;
          }
          goto LABEL_10;
        }
LABEL_12:
        v11 += ((unsigned __int64)Length >> 1) + 1;
        if ( !*v11 )
        {
          v9 = (WCHAR *)SourceString[0];
          goto LABEL_14;
        }
      }
      if ( (int)sub_1406FC290(&DestinationString, a5) >= 0 && v7 < 0x14 && a3(a6, 0LL, a5) >= 0 )
        ++v7;
LABEL_29:
      Length = DestinationString.Length;
LABEL_10:
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        v6 = 0LL;
        Object = 0LL;
      }
      goto LABEL_12;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v10;
}
