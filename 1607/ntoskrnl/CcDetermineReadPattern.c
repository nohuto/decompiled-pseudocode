/*
 * XREFs of CcDetermineReadPattern @ 0x14006ED48
 * Callers:
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 * Callees:
 *     CcAreOffsetsRoughlyEqual @ 0x14006EDC0 (CcAreOffsetsRoughlyEqual.c)
 */

__int64 __fastcall CcDetermineReadPattern(__int64 a1, __int64 a2)
{
  int v3; // ecx
  char v4; // al
  __int64 v5; // r9
  _QWORD *v6; // r11
  unsigned int v7; // r10d

  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
  if ( (v3 & 0x20) != 0 )
    return 1LL;
  if ( (v3 & 0x100000) != 0 )
    return 0LL;
  v4 = CcAreOffsetsRoughlyEqual(a2, a1 + 40);
  v7 = 0;
  if ( v4 && (unsigned __int8)CcAreOffsetsRoughlyEqual(v5 + 24, v5 + 32) )
    return 2LL;
  if ( *v6 - *(_QWORD *)(v5 + 32) == *(_QWORD *)(v5 + 32) - *(_QWORD *)(v5 + 16) )
    return 3;
  return v7;
}
