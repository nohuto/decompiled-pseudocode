/*
 * XREFs of _Mbrtowc @ 0x180053CC4
 * Callers:
 *     ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x18001BABC (--$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z.c)
 *     ?do_widen@?$ctype@G@std@@MEBAGD@Z @ 0x18001BF20 (-do_widen@-$ctype@G@std@@MEBAGD@Z.c)
 *     ?do_widen@?$ctype@G@std@@MEBAPEBDPEBD0PEAG@Z @ 0x18001BF70 (-do_widen@-$ctype@G@std@@MEBAPEBDPEBD0PEAG@Z.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18002AB4C (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     _Getcvt @ 0x180054FA8 (_Getcvt.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

int __cdecl Mbrtowc(wchar_t *a1, const char *a2, size_t a3, mbstate_t *a4, const _Cvtvec *a5)
{
  const _Cvtvec *v5; // rbx
  _Cvtvec *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  size_t Isclocale; // rcx
  _Cvtvec v15; // [rsp+30h] [rbp-98h] BYREF
  _OWORD v16[3]; // [rsp+60h] [rbp-68h] BYREF

  v5 = a5;
  if ( !a2 || !a3 )
    return 0;
  if ( !*a2 )
  {
    if ( a1 )
      *a1 = 0;
    return 0;
  }
  if ( !a5 )
  {
    v11 = Getcvt(&v15);
    v5 = (const _Cvtvec *)v16;
    v12 = *(_OWORD *)&v11->_Isleadbyte[4];
    v16[0] = *(_OWORD *)&v11->_Page;
    v13 = *(_OWORD *)&v11->_Isleadbyte[20];
    v16[1] = v12;
    v16[2] = v13;
  }
  if ( *(_DWORD *)v5->_Isleadbyte )
  {
    if ( a1 )
      *a1 = *(unsigned __int8 *)a2;
    return 1;
  }
  if ( a4->_Wchar )
  {
    BYTE1(a4->_Wchar) = *a2;
    if ( v5->_Isclocale > 1u && MultiByteToWideChar(v5->_Mbcurmax, 9u, (LPCCH)a4, 2, a1, a1 != 0LL) )
    {
      a4->_Wchar = 0;
      return v5->_Isclocale;
    }
    goto LABEL_18;
  }
  if ( ((unsigned __int8)(1 << (*a2 & 7)) & v5->_Isleadbyte[((unsigned __int64)*(unsigned __int8 *)a2 >> 3) + 4]) == 0 )
  {
    if ( MultiByteToWideChar(v5->_Mbcurmax, 9u, a2, 1, a1, a1 != 0LL) )
      return 1;
    goto LABEL_19;
  }
  Isclocale = (unsigned int)v5->_Isclocale;
  if ( a3 >= Isclocale )
  {
    if ( (unsigned int)Isclocale > 1 && MultiByteToWideChar(v5->_Mbcurmax, 9u, a2, Isclocale, a1, a1 != 0LL) || a2[1] )
      return v5->_Isclocale;
LABEL_18:
    a4->_Wchar = 0;
LABEL_19:
    *_errno() = 42;
    return -1;
  }
  LOBYTE(a4->_Wchar) = *a2;
  return -2;
}
