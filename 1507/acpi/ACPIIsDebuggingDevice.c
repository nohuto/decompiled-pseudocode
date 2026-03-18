/*
 * XREFs of ACPIIsDebuggingDevice @ 0x1C006ABC4
 * Callers:
 *     ACPIBuildPdo @ 0x1C00192F8 (ACPIBuildPdo.c)
 * Callees:
 *     ACPIQueryDeviceBiosName @ 0x1C006A8B0 (ACPIQueryDeviceBiosName.c)
 */

int __fastcall ACPIIsDebuggingDevice(ULONG_PTR a1)
{
  int result; // eax
  unsigned int v2; // ebx
  _QWORD *i; // rdi
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  result = ACPIQueryDeviceBiosName(a1, &String2);
  if ( result >= 0 )
  {
    v2 = 0;
    for ( i = &unk_1C0059488; ; i += 2 )
    {
      if ( *i )
      {
        result = RtlCompareUnicodeString((PCUNICODE_STRING)&gDebuggingDevicesInUse + v2, &String2, 0);
        if ( !result )
          break;
      }
      if ( ++v2 >= 2 )
        return -1073741823;
    }
  }
  return result;
}
