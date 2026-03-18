/*
 * XREFs of ?PackFrameControls@@YAHHHH@Z @ 0x1C010C734
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0060E84 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PackFrameControls(int a1, int a2, int a3)
{
  int v3; // r9d
  int v4; // r11d
  int v5; // r10d
  __int64 v8; // r8
  int *v9; // r8
  __int64 v10; // rdx
  int v11; // ecx

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( a3 )
    v8 = gpsi + 7140LL;
  else
    v8 = gpsi + 5652LL;
  v9 = (int *)(v8 + 8);
  v10 = 93LL;
  do
  {
    v11 = *v9;
    if ( *v9 )
    {
      if ( v11 + v4 > a1 )
      {
        v5 += v3;
        v3 = 0;
        v4 = 0;
      }
      if ( a2 )
      {
        *(v9 - 2) = v4;
        *(v9 - 1) = v5;
      }
      if ( v3 < v9[1] )
        v3 = v9[1];
      v4 += v11;
    }
    v9 += 4;
    --v10;
  }
  while ( v10 );
  return (unsigned int)(v5 + v3);
}
