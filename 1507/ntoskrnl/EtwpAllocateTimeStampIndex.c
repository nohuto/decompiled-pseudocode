/*
 * XREFs of EtwpAllocateTimeStampIndex @ 0x14055C52C
 * Callers:
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpAllocateTimeStampIndex(int a1)
{
  unsigned __int8 i; // dl
  char v2; // r8
  __int64 (__fastcall *v3)(); // rax

  for ( i = 0; i < 2u; ++i )
  {
    v2 = EtwpTimeStampStatus[2 * i];
    if ( v2 > 0 && (unsigned __int8)byte_140326ED9[2 * i] == a1 )
    {
      EtwpTimeStampStatus[2 * i] = v2 + 1;
      return i;
    }
  }
  i = 0;
  while ( EtwpTimeStampStatus[2 * i] )
  {
    if ( ++i >= 2u )
      return 2;
  }
  if ( a1 == 2 )
  {
    v3 = (__int64 (__fastcall *)())EtwpGetSystemTime;
  }
  else if ( a1 == 3 )
  {
    v3 = (__int64 (__fastcall *)())EtwpGetCycleCount;
  }
  else
  {
    v3 = (__int64 (__fastcall *)())PpmQueryTime;
  }
  EtwpSystemTimeStamp[i] = v3;
  byte_140326ED9[2 * i] = a1;
  EtwpTimeStampStatus[2 * i] = 1;
  return i;
}
