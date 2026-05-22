/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A36C
 * Callers:
 *     ?DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x180029898 (-DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z.c)
 *     ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180029B28 (-DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z.c)
 *     ??0PropertyTypeInfo@Input@@QEAA@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x180029DF8 (--0PropertyTypeInfo@Input@@QEAA@PEBGKP6AJPEBXKPEAGK@Z@Z.c)
 *     ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x18002A030 (-Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800840A8 (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180021B14 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18002A588 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

void **__fastcall std::wstring::assign(void **a1, void **Src)
{
  unsigned __int64 v2; // rdi
  void **v4; // rbx
  bool v5; // cf
  _WORD *v6; // rax
  void *v7; // rcx
  _WORD *v8; // rax

  v2 = -1LL;
  v4 = a1;
  do
    ++v2;
  while ( *((_WORD *)Src + v2) );
  if ( (unsigned __int64)a1[3] >= 8 )
    a1 = (void **)*a1;
  if ( a1 <= Src && Src < (void **)((char *)a1 + 2 * (_QWORD)v4[2]) )
    return (void **)std::wstring::assign(v4);
  if ( v2 )
  {
    if ( (unsigned __int64)v4[3] < v2 )
      std::wstring::_Copy((const void **)v4, v2);
    if ( (unsigned __int64)v4[3] < 8 )
      v7 = v4;
    else
      v7 = *v4;
    memcpy_0(v7, Src, 2 * v2);
    v5 = (unsigned __int64)v4[3] < 8;
    v4[2] = (void *)v2;
    if ( v5 )
      v8 = v4;
    else
      v8 = *v4;
    v8[v2] = 0;
  }
  else
  {
    v5 = (unsigned __int64)v4[3] < 8;
    v4[2] = 0LL;
    if ( v5 )
      v6 = v4;
    else
      v6 = *v4;
    *v6 = 0;
  }
  return v4;
}
