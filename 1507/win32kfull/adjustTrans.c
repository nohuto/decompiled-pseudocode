/*
 * XREFs of adjustTrans @ 0x1C02DC224
 * Callers:
 *     scl_InitializeScaling @ 0x1C00AB384 (scl_InitializeScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall adjustTrans(int *a1)
{
  __int64 v2; // r10
  int *v3; // r8
  __int64 v4; // r11
  unsigned int v5; // edx
  __int64 result; // rax
  int v7; // edx

  v2 = 2LL;
  do
  {
    v3 = a1;
    v4 = 2LL;
    do
    {
      v5 = *v3;
      if ( *v3 < 0 )
        v5 = -v5;
      result = HIWORD(v5);
      v7 = v5 - ((1310 * result) & 0xFFFF0000);
      if ( *v3 < 0 )
        v7 = -v7;
      *v3++ = v7;
      --v4;
    }
    while ( v4 );
    a1 += 3;
    --v2;
  }
  while ( v2 );
  return result;
}
