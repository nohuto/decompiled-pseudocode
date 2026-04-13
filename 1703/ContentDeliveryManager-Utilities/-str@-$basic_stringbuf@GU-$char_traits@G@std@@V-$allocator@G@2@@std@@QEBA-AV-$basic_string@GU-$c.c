/*
 * XREFs of ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18003D2DC
 * Callers:
 *     ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18003CAE0 (-str@-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18002EA70 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18002FD9C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::basic_stringbuf<unsigned short>::str(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r8
  char **v5; // rax
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  void *v10[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  unsigned __int64 v12; // [rsp+40h] [rbp-10h]

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    v3 = *(unsigned __int64 **)(a1 + 64);
    if ( *v3 )
    {
      v4 = *(_QWORD *)(a1 + 104);
      if ( v4 < *v3 )
        v4 = *v3;
      v5 = *(char ***)(a1 + 32);
      goto LABEL_6;
    }
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
  {
    v8 = **(_QWORD **)(a1 + 56);
    if ( v8 )
    {
      v5 = *(char ***)(a1 + 24);
      v4 = v8 + 2LL * **(int **)(a1 + 80);
LABEL_6:
      v6 = *v5;
      v7 = v4 - (_QWORD)*v5;
      v11 = 0LL;
      v12 = 7LL;
      LOWORD(v10[0]) = 0;
      std::wstring::assign(v10, v6, v7 >> 1);
      goto LABEL_11;
    }
  }
  v11 = 0LL;
  v12 = 7LL;
  LOWORD(v10[0]) = 0;
LABEL_11:
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  std::wstring::_Assign_rv(a2, v10);
  if ( v12 >= 8 )
    operator delete(v10[0]);
  return a2;
}
