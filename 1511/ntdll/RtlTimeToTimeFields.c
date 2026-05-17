/*
 * XREFs of RtlTimeToTimeFields @ 0x180067860
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x1800674B0 (RtlCutoverTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTimeToTimeFields(__int64 *a1, _WORD *a2)
{
  __int64 v2; // r8
  unsigned __int128 v4; // rax
  __int64 v5; // rcx
  unsigned __int128 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ebx
  __int64 v11; // r11
  __int64 v12; // rbx
  __int16 v13; // ax
  unsigned int v14; // r8d
  __int64 result; // rax

  v2 = *a1;
  if ( *a1 < 0 )
    v4 = (unsigned __int64)-v2 * (unsigned __int128)(unsigned __int64)Magic10000;
  else
    v4 = (unsigned __int64)v2 * (unsigned __int128)(unsigned __int64)Magic10000;
  v5 = *((_QWORD *)&v4 + 1) >> 13;
  if ( v2 < 0 )
    v5 = -v5;
  if ( v5 < 0 )
    v6 = (unsigned __int64)-v5 * (unsigned __int128)(unsigned __int64)Magic86400000;
  else
    v6 = (unsigned __int64)v5 * (unsigned __int128)(unsigned __int64)Magic86400000;
  v7 = *((_QWORD *)&v6 + 1) >> 26;
  if ( v5 < 0 )
    v7 = -v7;
  v8 = v5 - 86400000 * v7;
  a2[7] = ((int)v7 + 1) % 7u;
  v9 = (100 * ((-36524 * ((100 * ((unsigned int)v7 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v7 % 0x23AB1) % 0x5B5)
      + 75)
     / 0x8EAD
     + 4
     * ((-36524 * ((100 * ((unsigned int)v7 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v7 % 0x23AB1) / 0x5B5
      + 25 * ((100 * ((unsigned int)v7 % 0x23AB1) + 75) / 0x37BB49 + 4 * ((unsigned int)v7 / 0x23AB1)));
  v10 = v9 + 1;
  v11 = (_DWORD)v7 + -365 * v9 - v9 / 0x190 - (v9 >> 2) + v9 / 0x64;
  if ( v9 + 1 != 400 * ((v9 + 1) / 0x190) && (v10 == 100 * (v10 / 0x64) || (v10 & 3) != 0) )
  {
    v12 = NormalYearDayToMonth[v11];
    v13 = NormalYearDaysPrecedingMonth[v12];
  }
  else
  {
    v12 = LeapYearDayToMonth[v11];
    v13 = LeapYearDaysPrecedingMonth[v12];
  }
  a2[1] = v12 + 1;
  a2[2] = v7 + -365 * v9 - v9 / 0x190 - (v9 >> 2) + v9 / 0x64 - v13 + 1;
  v14 = v8 / 0x3E8 / 0x3C;
  *a2 = v9 + 1601;
  a2[3] = v14 / 0x3C;
  a2[4] = v14 % 0x3C;
  a2[5] = v8 / 0x3E8 % 0x3C;
  result = 1000LL;
  a2[6] = v8 % 0x3E8;
  return result;
}
