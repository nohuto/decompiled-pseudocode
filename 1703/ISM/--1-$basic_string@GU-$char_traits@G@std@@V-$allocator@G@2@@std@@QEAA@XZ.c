/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180021768
 * Callers:
 *     _DWMHardwareCursor::UpdateBitmapSource_::_1_::dtor$1 @ 0x1800A02DE (_DWMHardwareCursor--UpdateBitmapSource_--_1_--dtor$1.c)
 *     _Input::PropertyInfo::Describe_::_1_::dtor$0 @ 0x1800A0AB1 (_Input--PropertyInfo--Describe_--_1_--dtor$0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
    std::_Deallocate(*(char **)a1, v1 + 1, 2uLL);
}
