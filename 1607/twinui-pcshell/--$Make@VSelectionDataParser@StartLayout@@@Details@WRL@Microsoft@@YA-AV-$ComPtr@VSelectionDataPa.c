/*
 * XREFs of ??$Make@VSelectionDataParser@StartLayout@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@StartLayout@@@12@XZ @ 0x18000C4A4
 * Callers:
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18000ABFC (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 * Callees:
 *     ??0SelectionDataParser@StartLayout@@QEAA@XZ @ 0x18001A4A8 (--0SelectionDataParser@StartLayout@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<StartLayout::SelectionDataParser>(__int64 *a1)
{
  StartLayout::SelectionDataParser *v2; // rax
  __int64 v3; // rdi

  *a1 = 0LL;
  v2 = (StartLayout::SelectionDataParser *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = StartLayout::SelectionDataParser::SelectionDataParser(v2);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
