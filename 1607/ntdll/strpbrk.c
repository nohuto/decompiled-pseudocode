/*
 * XREFs of strpbrk @ 0x18009B9E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180096DD0 (__report_rangecheckfailure.c)
 */

char *__cdecl strpbrk(const char *Str, const char *Control)
{
  __int64 v2; // rax
  const char *v3; // r9
  bool v4; // cf
  unsigned __int8 i; // al
  _BYTE v8[32]; // [rsp+20h] [rbp-38h]

  v2 = 0LL;
  v3 = Control;
  v4 = 1;
  do
  {
    if ( !v4 )
      _report_rangecheckfailure();
    v8[v2++] = 0;
    v4 = (unsigned __int64)v2 < 0x20;
  }
  while ( v2 < 32 );
  for ( i = *Control; i; i = *v3 )
  {
    ++v3;
    v8[(unsigned __int64)i >> 3] |= 1 << (i & 7);
  }
  while ( 1 )
  {
    if ( !*Str )
      return 0LL;
    if ( ((unsigned __int8)(1 << (*Str & 7)) & v8[(unsigned __int64)*(unsigned __int8 *)Str >> 3]) != 0 )
      break;
    ++Str;
  }
  return (char *)Str;
}
