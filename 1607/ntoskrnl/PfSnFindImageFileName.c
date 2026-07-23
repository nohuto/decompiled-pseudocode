/*
 * XREFs of PfSnFindImageFileName @ 0x1403E8F4C
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1403E7AD0 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1404D2240 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PfSnFindImageFileName(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned __int64 v2; // r11
  __int64 v3; // r9
  int v4; // r8d
  int v5; // r10d
  _WORD *v6; // rax

  v2 = *((_QWORD *)a1 + 1);
  v3 = 0LL;
  v4 = 0;
  v5 = *a1 >> 1;
  v6 = (_WORD *)(v2 + 2LL * (v5 - 1));
  if ( (unsigned __int64)v6 >= v2 )
  {
    do
    {
      if ( *v6 == 92 )
        break;
      ++v4;
      --v6;
    }
    while ( (unsigned __int64)v6 >= v2 );
    if ( v4 )
    {
      *a2 = v4;
      return v2 + 2LL * (unsigned int)(v5 - v4);
    }
  }
  return v3;
}
