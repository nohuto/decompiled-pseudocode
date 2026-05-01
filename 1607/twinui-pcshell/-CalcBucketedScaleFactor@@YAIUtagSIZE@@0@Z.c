/*
 * XREFs of ?CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z @ 0x18001B32C
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x18001B0B8 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcBucketedScaleFactor(struct tagSIZE a1, struct tagSIZE a2)
{
  unsigned int v2; // r8d
  LONG cy; // eax
  unsigned int v4; // r9d
  bool v5; // cc
  LONG cx; // [rsp+10h] [rbp+10h]

  v2 = 400;
  cx = a1.cx;
  if ( 20 * ((int)(16300 * a2.cx / 0x6900u + 16300 * a2.cy / 0x6900u) / 2 / 0x14u) )
    v2 = 20 * ((int)(16300 * a2.cx / 0x6900u + 16300 * a2.cy / 0x6900u) / 2 / 0x14u);
  if ( a1.cx <= a1.cy )
  {
    a1.cx = a1.cy;
    cy = cx;
  }
  else
  {
    cy = a1.cy;
  }
  v4 = 100;
  v5 = v2 <= 0x64;
  if ( v2 > 0x64 )
  {
    do
    {
      if ( 100 * cy / v2 >= 0x180 && 100 * a1.cx / v2 >= 0x280 )
        break;
      v2 -= 20;
    }
    while ( v2 > 0x64 );
    v5 = v2 <= 0x64;
  }
  if ( !v5 )
    return v2;
  return v4;
}
