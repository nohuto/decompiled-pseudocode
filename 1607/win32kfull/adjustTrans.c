/*
 * XREFs of adjustTrans @ 0x1C02DCBA8
 * Callers:
 *     scl_InitializeScaling @ 0x1C001B5AC (scl_InitializeScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall adjustTrans(int *a1)
{
  __int64 v2; // r11
  int *v3; // r9
  __int64 v4; // rbx
  unsigned int v5; // eax
  __int64 result; // rax

  v2 = 2LL;
  do
  {
    v3 = a1;
    v4 = 2LL;
    do
    {
      v5 = abs32(*v3);
      result = v5 - ((1310 * HIWORD(v5)) & 0xFFFF0000);
      if ( *v3 < 0 )
        result = (unsigned int)-(int)result;
      *v3++ = result;
      --v4;
    }
    while ( v4 );
    a1 += 3;
    --v2;
  }
  while ( v2 );
  return result;
}
