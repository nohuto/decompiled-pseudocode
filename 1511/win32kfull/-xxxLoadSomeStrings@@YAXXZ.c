/*
 * XREFs of ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0123214
 * Callers:
 *     xxxInitWindowStation @ 0x1C00D7374 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     xxxClientLoadStringW @ 0x1C0122FD8 (xxxClientLoadStringW.c)
 */

void xxxLoadSomeStrings(void)
{
  int v0; // edx
  __int64 v1; // rdi
  int v2; // ebx

  v0 = 0;
  v1 = 0LL;
  do
  {
    v2 = v0 + 1;
    *(_DWORD *)(v1 + gpsi + 952) = v0 + 800;
    *(_DWORD *)(v1 + gpsi + 948) = v0 + 1;
    xxxClientLoadStringW(v0 + 800, gpsi + 40LL * v0 + 916, 15);
    v1 += 40LL;
    v0 = v2;
  }
  while ( v2 < 11 );
  xxxClientLoadStringW(0x384u, (__int64)&gszMIN, 15);
  xxxClientLoadStringW(0x385u, (__int64)&gszMAX, 15);
  xxxClientLoadStringW(0x386u, (__int64)&gszRESUP, 20);
  xxxClientLoadStringW(0x387u, (__int64)&gszRESDOWN, 20);
  xxxClientLoadStringW(0x389u, (__int64)&gszSCLOSE, 15);
  xxxClientLoadStringW(0x388u, (__int64)&gszHELP, 20);
}
