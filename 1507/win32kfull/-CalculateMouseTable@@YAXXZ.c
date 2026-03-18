/*
 * XREFs of ?CalculateMouseTable@@YAXXZ @ 0x1C013581C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0134E24 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     <none>
 */

void CalculateMouseTable(void)
{
  int v0; // r11d
  __int64 v1; // rbx
  int v2; // r8d
  unsigned int v3; // ebp
  int v4; // edi
  int v5; // esi
  int v6; // r9d
  int v7; // r10d
  int v8; // edx
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rax

  v0 = 50 * DWORD1(xmmword_1C0323904);
  v1 = 256LL;
  v2 = 0;
  v3 = 50000 * DWORD1(xmmword_1C0323904) / (unsigned int)(20 * DWORD2(xmmword_1C0323904));
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  do
  {
    v2 += v3;
    if ( v2 > v0 )
      v2 = v0;
    v4 += v2;
    v8 = (v4 - 1000 * v5 + 500) / 1000;
    v5 += v8;
    v9 = v2 == v0;
    if ( v2 < v0 )
    {
      if ( v7 < 128 )
      {
        v11 = v7++;
        gMouseCursor[v11 + 1] = v8;
      }
      v9 = v2 == v0;
    }
    if ( v9 && v6 < 128 )
    {
      v10 = v6++;
      gMouseCursor[v10 + 130] = v8;
    }
    --v1;
  }
  while ( v1 );
  gMouseCursor[0] = v7;
  byte_1C03235F1 = v6;
}
