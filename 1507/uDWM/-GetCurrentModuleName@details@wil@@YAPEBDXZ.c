/*
 * XREFs of ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x180067DD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

const char *__fastcall wil::details::GetCurrentModuleName(wil::details *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  CHAR *i; // rdx
  _BYTE *v4; // rcx
  signed __int64 v5; // rdx
  char v6; // al
  HMODULE phModule; // [rsp+20h] [rbp-138h] BYREF
  CHAR Filename[272]; // [rsp+30h] [rbp-128h] BYREF

  if ( !`wil::details::GetCurrentModuleName'::`2'::s_fModuleValid )
  {
    v1 = 64LL;
    memset_0(&`wil::details::GetCurrentModuleName'::`2'::s_szModule, 0, 0x40uLL);
    phModule = 0LL;
    if ( GetModuleHandleExW(6u, (LPCWSTR)wil::details::RecordFailFast, &phModule)
      && GetModuleFileNameA(phModule, Filename, 0x104u) )
    {
      v2 = -1LL;
      do
        ++v2;
      while ( Filename[v2] );
      for ( i = &Filename[v2]; i > Filename && *(i - 1) != 92; --i )
        ;
      v4 = &`wil::details::GetCurrentModuleName'::`2'::s_szModule;
      v5 = i - (CHAR *)&`wil::details::GetCurrentModuleName'::`2'::s_szModule;
      do
      {
        if ( v1 == -2147483582 )
          break;
        v6 = v4[v5];
        if ( !v6 )
          break;
        *v4++ = v6;
        --v1;
      }
      while ( v1 );
      if ( !v1 )
        --v4;
      *v4 = 0;
    }
    `wil::details::GetCurrentModuleName'::`2'::s_fModuleValid = 1;
  }
  return (const char *)&`wil::details::GetCurrentModuleName'::`2'::s_szModule;
}
