/*
 * XREFs of ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18005BE98
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x180065E3C (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18002EA70 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 */

__int64 __fastcall std::wstring::operator=(__int64 a1, _QWORD *a2)
{
  if ( (_QWORD *)a1 != a2 )
  {
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      operator delete(*(void **)a1);
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_WORD *)a1 = 0;
    std::wstring::_Assign_rv((_QWORD *)a1, a2);
  }
  return a1;
}
