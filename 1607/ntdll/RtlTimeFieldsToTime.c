/*
 * XREFs of RtlTimeFieldsToTime @ 0x1800621D0
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x180062030 (RtlCutoverTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlTimeFieldsToTime(__int16 *a1, _QWORD *a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  int v4; // ebx
  unsigned int v6; // esi
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  int v10; // edx
  __int64 v11; // r11
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  char result; // al

  v2 = (unsigned int)(a1[1] - 1);
  v3 = *a1;
  v4 = a1[2] - 1;
  v6 = a1[3];
  v7 = a1[4];
  v8 = a1[5];
  v9 = a1[6];
  if ( a1[1] < 1 || a1[2] < 1 || (unsigned int)v2 > 0xB || v3 - 1601 > 0x722A )
    return 0;
  if ( v3 != 400 * (v3 / 0x190) && (v3 == 100 * (v3 / 0x64) || (v3 & 3) != 0) )
  {
    v10 = NormalYearDaysPrecedingMonth[a1[1]];
    v11 = v2;
    v12 = NormalYearDaysPrecedingMonth[v2];
  }
  else
  {
    v10 = LeapYearDaysPrecedingMonth[a1[1]];
    v11 = v2;
    v12 = LeapYearDaysPrecedingMonth[v2];
  }
  if ( (__int16)v4 >= v10 - v12 || v6 > 0x17 || v7 > 0x3B || v8 > 0x3B || v9 > 0x3E7 )
    return 0;
  if ( v3 - 1600 != 400 * ((v3 - 1600) / 0x190) && (v3 - 1600 == 100 * ((v3 - 1600) / 0x64) || (v3 & 3) != 0) )
    v13 = NormalYearDaysPrecedingMonth[v11];
  else
    v13 = LeapYearDaysPrecedingMonth[v11];
  v14 = v13 + ((v3 - 1601) >> 2) + 365 * (v3 - 1601) + (v3 - 1601) / 0x190 - (v3 - 1601) / 0x64;
  result = 1;
  *a2 = 10000 * (v9 + 1000 * (v8 + 60 * (v7 + 60 * v6)) + 86400000LL * (v14 + v4));
  return result;
}
