/*
 * XREFs of PiForEachDriverQueryRoutine @ 0x140538C30
 * Callers:
 *     PpForEachDeviceInstanceDriver @ 0x14050F6D0 (PpForEachDeviceInstanceDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall PiForEachDriverQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  const WCHAR *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a2;
  result = 0LL;
  if ( (a1 == 1 || a1 == 7) && a3 > 2 )
  {
    if ( a1 == 1 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      return ((__int64 (__fastcall *)(_QWORD, UNICODE_STRING *, _QWORD))a4[1])(*a4, &DestinationString, a4[2]);
    }
    else if ( *a2 )
    {
      while ( 1 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( v6[v8] );
        v9 = v8 + 1;
        if ( v5 < 2 * (int)v9 )
          break;
        v5 -= 2 * v9;
        RtlInitUnicodeString(&DestinationString, v6);
        result = ((__int64 (__fastcall *)(_QWORD, UNICODE_STRING *, _QWORD))a4[1])(*a4, &DestinationString, a4[2]);
        if ( (int)result >= 0 && v5 >= 2 )
        {
          v6 += v9;
          if ( *v6 )
            continue;
        }
        return result;
      }
      return 0LL;
    }
  }
  return result;
}
