/*
 * XREFs of ?_Syserror_map@std@@YAPEBDH@Z @ 0x180042C60
 * Callers:
 *     ?default_error_condition@_System_error_category@std@@UEBA?AVerror_condition@2@H@Z @ 0x180068BE0 (-default_error_condition@_System_error_category@std@@UEBA-AVerror_condition@2@H@Z.c)
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180068DE0 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     <none>
 */

const char *__fastcall std::_Syserror_map(int a1)
{
  const char *v1; // rax

  v1 = "f";
  if ( !"address family not supported" )
    return 0LL;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 16;
    if ( !*((_QWORD *)v1 + 1) )
      return 0LL;
  }
  return (const char *)*((_QWORD *)v1 + 1);
}
