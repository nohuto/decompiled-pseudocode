/*
 * XREFs of strtok_s @ 0x140153450
 * Callers:
 *     <none>
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 */

char *__cdecl strtok_s(char *Str, const char *Delim, char **Context)
{
  const char *v4; // r10
  char *v5; // r9
  __int64 v7; // rax
  bool v8; // cf
  unsigned int v9; // r8d
  char *v10; // r10
  _BYTE v11[32]; // [rsp+30h] [rbp-38h]

  v4 = Delim;
  v5 = Str;
  if ( Context && Delim && (Str || *Context) )
  {
    v7 = 0LL;
    v8 = 1;
    do
    {
      if ( !v8 )
        _report_rangecheckfailure(Str, Delim, Context);
      v11[v7++] = 0;
      v8 = (unsigned __int64)v7 < 0x20;
    }
    while ( v7 < 32 );
    do
    {
      v9 = *(unsigned __int8 *)v4++;
      v11[(unsigned __int64)v9 >> 3] |= 1 << (v9 & 7);
    }
    while ( (_BYTE)v9 );
    if ( !Str )
      v5 = *Context;
    while ( ((unsigned __int8)(1 << (*v5 & 7)) & v11[(unsigned __int64)(unsigned __int8)*v5 >> 3]) != 0 && *v5 )
      ++v5;
    v10 = v5;
    while ( *v5 )
    {
      if ( ((unsigned __int8)(1 << (*v5 & 7)) & v11[(unsigned __int64)(unsigned __int8)*v5 >> 3]) != 0 )
      {
        *v5++ = 0;
        break;
      }
      ++v5;
    }
    *Context = v5;
    if ( v10 == v5 )
      return 0LL;
    return v10;
  }
  else
  {
    xHalFreeMessageTarget();
    return 0LL;
  }
}
