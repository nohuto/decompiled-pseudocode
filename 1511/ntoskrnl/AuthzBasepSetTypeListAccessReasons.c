/*
 * XREFs of AuthzBasepSetTypeListAccessReasons @ 0x14012BE3C
 * Callers:
 *     SepAccessCheckEx @ 0x1401359B4 (SepAccessCheckEx.c)
 * Callees:
 *     AuthzBasepSetAccessReasons @ 0x1400D5CC0 (AuthzBasepSetAccessReasons.c)
 */

__int64 __fastcall AuthzBasepSetTypeListAccessReasons(int a1, int a2, int a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 result; // rax
  __int64 *v8; // r11
  __int64 v9; // rbx
  __int64 v10; // r11

  result = a5;
  if ( a5 )
  {
    v8 = (__int64 *)(a4 + 40);
    v9 = a5;
    do
    {
      result = AuthzBasepSetAccessReasons(a1, a2, a3, *v8, a6);
      v8 = (__int64 *)(v10 + 48);
      --v9;
    }
    while ( v9 );
  }
  return result;
}
