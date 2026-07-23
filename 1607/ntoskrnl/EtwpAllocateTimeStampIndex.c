/*
 * XREFs of EtwpAllocateTimeStampIndex @ 0x1404D2ED8
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall EtwpAllocateTimeStampIndex(int a1)
{
  unsigned __int8 i; // dl
  char v3; // r8
  unsigned __int8 result; // al
  int v5; // ecx
  __int64 (__fastcall *v6)(); // rdx
  __int64 v7; // rcx

  for ( i = 0; i < 2u; ++i )
  {
    v3 = EtwpTimeStampStatus[2 * i];
    if ( v3 > 0 && (unsigned __int8)byte_1402FD1A9[2 * i] == a1 )
    {
      v7 = i;
      result = i;
      goto LABEL_10;
    }
  }
  result = 0;
  while ( 1 )
  {
    v3 = EtwpTimeStampStatus[2 * result];
    if ( !v3 )
      break;
    if ( ++result >= 2u )
      return 2;
  }
  v5 = a1 - 2;
  if ( a1 == 2 )
  {
    v6 = (__int64 (__fastcall *)())EtwpGetSystemTime;
  }
  else if ( v5 == 1 )
  {
    v6 = (__int64 (__fastcall *)())EtwpGetCycleCount;
  }
  else
  {
    v6 = (__int64 (__fastcall *)())PpmQueryTime;
  }
  v7 = result;
  EtwpSystemTimeStamp[result] = v6;
  byte_1402FD1A9[2 * result] = a1;
LABEL_10:
  EtwpTimeStampStatus[2 * v7] = v3 + 1;
  return result;
}
