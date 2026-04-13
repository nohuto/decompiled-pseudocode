/*
 * XREFs of ?_Assign_rv@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX$$QEAV12@@Z @ 0x180014D04
 * Callers:
 *     ?SplitString@?A0x15bf3041@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@PEBG@Z @ 0x18000DB70 (-SplitString@-A0x15bf3041@@YA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ??$_Uninit_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18001B224 (--$_Uninit_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@V-$alloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::_Assign_rv(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a2[3] >= 8uLL )
  {
    if ( a1 )
      *a1 = *a2;
    *a2 = 0LL;
  }
  else if ( a2[2] != -1LL )
  {
    memmove(a1, a2, 2 * (a2[2] + 1LL));
  }
  a1[2] = a2[2];
  result = a2[3];
  a1[3] = result;
  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  return result;
}
