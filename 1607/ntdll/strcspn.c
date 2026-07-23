/*
 * XREFs of strcspn @ 0x18009B460
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x180096DD0 (__report_rangecheckfailure.c)
 */

size_t __cdecl strcspn(const char *Str, const char *Control)
{
  int v2; // r9d
  const char *v3; // r8
  __int64 v4; // rax
  bool v6; // cf
  unsigned __int8 i; // al
  _BYTE v9[32]; // [rsp+20h] [rbp-38h]

  v2 = 0;
  v3 = Control;
  v4 = 0LL;
  v6 = 1;
  do
  {
    if ( !v6 )
      _report_rangecheckfailure();
    v9[v4++] = 0;
    v6 = (unsigned __int64)v4 < 0x20;
  }
  while ( v4 < 32 );
  for ( i = *Control; i; i = *v3 )
  {
    ++v3;
    v9[(unsigned __int64)i >> 3] |= 1 << (i & 7);
  }
  v9[0] |= 1u;
  while ( ((unsigned __int8)(1 << (*Str & 7)) & v9[(unsigned __int64)*(unsigned __int8 *)Str >> 3]) == 0 )
  {
    ++v2;
    ++Str;
  }
  return v2;
}
