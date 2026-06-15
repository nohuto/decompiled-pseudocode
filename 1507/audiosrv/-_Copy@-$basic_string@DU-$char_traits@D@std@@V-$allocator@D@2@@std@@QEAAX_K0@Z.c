/*
 * XREFs of ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x1800687AC
 * Callers:
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x1800688F0 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 * Callees:
 *     ??$_Allocate@D@std@@YAPEAD_KPEAD@Z @ 0x180068724 (--$_Allocate@D@std@@YAPEAD_KPEAD@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x1800689B4 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?copy@?$char_traits@D@std@@SAPEADPEADPEBD_K@Z @ 0x180068BB4 (-copy@-$char_traits@D@std@@SAPEADPEADPEBD_K@Z.c)
 */

__int64 __fastcall std::string::_Copy(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  LPVOID v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  __int64 result; // rax
  _QWORD *v12; // rdx
  _QWORD v13[11]; // [rsp+0h] [rbp-58h] BYREF
  LPVOID v21; // [rsp+78h] [rbp+20h]

  v13[4] = -2LL;
  v3 = a3;
  v4 = a1;
  v5 = a2 | 0xF;
  if ( (a2 | 0xF) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    v5 = a2;
  }
  else
  {
    v6 = a1[3];
    v7 = v6 >> 1;
    if ( v6 >> 1 > v5 / 3 )
    {
      v5 = v7 + v6;
      if ( v6 > -2LL - v7 )
        v5 = -2LL;
    }
  }
  try
  {
    v8 = std::_Allocate<char>(v5 + 1);
  }
  catch ( ... )
  {
    try
    {
      v21 = std::_Allocate<char>(a2 + 1);
    }
    catch ( ... )
    {
      v12 = v13;
      LOBYTE(v12) = 1;
      std::string::_Tidy(a1, v12, 0LL);
      throw;
    }
    v4 = a1;
    v3 = a3;
    v5 = a2;
    v8 = v21;
  }
  if ( v3 )
  {
    if ( v4[3] < 0x10uLL )
      v9 = v4;
    else
      v9 = (_QWORD *)*v4;
    std::char_traits<char>::copy(v8, v9, v3);
  }
  LOBYTE(v10) = 1;
  result = std::string::_Tidy(v4, v10, 0LL);
  if ( v4 )
    *v4 = v8;
  v4[3] = v5;
  v4[2] = v3;
  if ( v5 >= 0x10 )
    v4 = (_QWORD *)*v4;
  *((_BYTE *)v4 + v3) = 0;
  return result;
}
