/*
 * XREFs of sub_140495DD4 @ 0x140495DD4
 * Callers:
 *     sub_14045751C @ 0x14045751C (sub_14045751C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     sub_140458F88 @ 0x140458F88 (sub_140458F88.c)
 *     sub_14045913C @ 0x14045913C (sub_14045913C.c)
 *     sub_140459288 @ 0x140459288 (sub_140459288.c)
 *     sub_140495F7C @ 0x140495F7C (sub_140495F7C.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     sub_140677AC0 @ 0x140677AC0 (sub_140677AC0.c)
 */

__int64 __fastcall sub_140495DD4(
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
          if ( sub_140459288(0LL, (__int64)&DestinationString, &DEVPKEY_DeviceInterface_Enabled, 17, 1u, v16) < 0 )
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
        v14 = sub_140495F7C(&String1, a4, &Object);
        v6 = (struct _DEVICE_OBJECT *)Object;
        if ( v14 < 0 )
          goto LABEL_15;
        if ( Object )
        {
          if ( (int)sub_14045913C((PDEVICE_OBJECT)Object, a5) < 0 || (int)sub_140458F88(v6, a5) < 0 )
            goto LABEL_15;
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
      if ( (int)sub_140677AC0(&DestinationString, a5) >= 0 && v7 < 0x14 && a3(a6, 0LL, a5) >= 0 )
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
