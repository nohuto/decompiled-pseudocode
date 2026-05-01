/*
 * XREFs of ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180019F6C
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180019DF4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18001A070 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180008DF0 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x18001A1A4 (-_Tidy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_N_K@Z.c)
 *     memcpy_0 @ 0x180030408 (memcpy_0.c)
 */

__int64 __fastcall std::wstring::_Copy(const void **Src, unsigned __int64 a2, const void *a3)
{
  const void *v3; // rsi
  const void **v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r14
  const void **v9; // rdx
  __int64 v10; // rdx
  __int64 result; // rax
  _QWORD *v12; // rdx
  _QWORD v13[11]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+78h] [rbp+20h]

  v13[4] = -2LL;
  v3 = a3;
  v4 = Src;
  v5 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v6 = (unsigned __int64)Src[3];
    v7 = v6 >> 1;
    if ( v6 >> 1 > v5 / 3 )
    {
      v5 = v7 + v6;
      if ( v6 > 0x7FFFFFFFFFFFFFFELL - v7 )
        v5 = 0x7FFFFFFFFFFFFFFELL;
    }
  }
  else
  {
    v5 = a2;
  }
  try
  {
    v8 = std::_Allocate(v5 + 1, 2uLL);
  }
  catch ( ... )
  {
    try
    {
      v21 = std::_Allocate(a2 + 1, 2uLL);
    }
    catch ( ... )
    {
      v12 = v13;
      LOBYTE(v12) = 1;
      std::wstring::_Tidy(Src, v12, 0LL);
      throw;
    }
    v4 = Src;
    v3 = a3;
    v5 = a2;
    v8 = v21;
  }
  if ( v3 )
  {
    if ( (unsigned __int64)v4[3] < 8 )
      v9 = v4;
    else
      v9 = (const void **)*v4;
    memcpy_0(v8, v9, 2LL * (_QWORD)v3);
  }
  LOBYTE(v10) = 1;
  result = std::wstring::_Tidy(v4, v10, 0LL);
  if ( v4 )
    *v4 = v8;
  v4[3] = (const void *)v5;
  v4[2] = v3;
  if ( (unsigned __int64)v4[3] >= 8 )
    v4 = (const void **)*v4;
  *((_WORD *)v4 + (_QWORD)v3) = 0;
  return result;
}
