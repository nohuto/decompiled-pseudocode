/*
 * XREFs of _std::_Uninit_move_ParsedTaskbarLayout_____ptr64_ParsedTaskbarLayout_____ptr64_std::allocator_ParsedTaskbarLayout__ParsedTaskbarLayout__::_1_::catch$0 @ 0x180030EF2
 * Callers:
 *     <none>
 * Callees:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x180009C8C (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x18002F35C (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn std::_Uninit_move_ParsedTaskbarLayout_____ptr64_ParsedTaskbarLayout_____ptr64_std::allocator_ParsedTaskbarLayout__ParsedTaskbarLayout__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  unsigned __int64 j; // rdi
  __int64 v5; // rcx

  for ( i = *(_QWORD *)(a2 + 88); i != *(_QWORD *)(a2 + 80); i += 104LL )
  {
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(i + 32));
    if ( *(_QWORD *)i )
    {
      for ( j = 0LL; j < *(_QWORD *)(i + 8); ++j )
      {
        v5 = *(_QWORD *)(*(_QWORD *)i + 8 * j);
        if ( v5 )
        {
          *(_QWORD *)(*(_QWORD *)i + 8 * j) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
      }
      CoTaskMemFree(*(LPVOID *)i);
      *(_QWORD *)i = 0LL;
    }
    *(_QWORD *)(i + 8) = 0LL;
    *(_QWORD *)(i + 24) = 0LL;
  }
  throw;
}
