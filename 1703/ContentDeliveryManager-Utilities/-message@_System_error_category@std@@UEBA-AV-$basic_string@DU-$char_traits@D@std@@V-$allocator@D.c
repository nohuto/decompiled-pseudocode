/*
 * XREFs of ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1800069D0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180012D28 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 *     ?_Winerror_map@std@@YAPEBDH@Z @ 0x18006A790 (-_Winerror_map@std@@YAPEBDH@Z.c)
 */

_QWORD *__fastcall std::_System_error_category::message(__int64 a1, _QWORD *a2, int a3)
{
  size_t v3; // rbx
  const char *v5; // rax
  char *v6; // rdx
  __int64 v7; // rax

  v3 = 0LL;
  v5 = std::_Winerror_map(a3);
  a2[3] = 15LL;
  a2[2] = 0LL;
  v6 = "unknown error";
  if ( v5 )
    v6 = (char *)v5;
  *(_BYTE *)a2 = 0;
  if ( *v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v3 = v7;
  }
  std::string::assign(a2, v6, v3);
  return a2;
}
