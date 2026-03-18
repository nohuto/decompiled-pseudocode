/*
 * XREFs of ?MonitorCoordComp@@YAHPEBX0@Z @ 0x1C01EF9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorCoordComp(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // r9
  int v4; // r11d
  int v5; // r10d
  int v6; // r8d
  int v7; // eax

  v2 = (_DWORD *)a1[2];
  v3 = (_DWORD *)a2[2];
  if ( *((_QWORD *)v2 + 62) )
  {
    v4 = v2[124];
  }
  else
  {
    v4 = v2[7] + (v2[9] - v2[7]) / 2;
    *((_QWORD *)v2 + 62) = v4;
  }
  if ( *((_QWORD *)v2 + 63) )
  {
    v5 = v2[126];
  }
  else
  {
    v5 = v2[8] + (v2[10] - v2[8]) / 2;
    *((_QWORD *)v2 + 63) = v5;
  }
  if ( *((_QWORD *)v3 + 62) )
  {
    v6 = v3[124];
  }
  else
  {
    v6 = v3[7] + (v3[9] - v3[7]) / 2;
    *((_QWORD *)v3 + 62) = v6;
  }
  if ( *((_QWORD *)v3 + 63) )
  {
    v7 = v3[126];
  }
  else
  {
    v7 = v3[8] + (v3[10] - v3[8]) / 2;
    *((_QWORD *)v3 + 63) = v7;
  }
  if ( v4 < v6 )
    return 0xFFFFFFFFLL;
  if ( v4 != v6 )
    return 1LL;
  if ( v5 < v7 )
    return 0xFFFFFFFFLL;
  return v5 != v7;
}
