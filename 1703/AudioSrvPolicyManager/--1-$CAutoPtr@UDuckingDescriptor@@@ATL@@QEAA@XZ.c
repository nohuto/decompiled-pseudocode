/*
 * XREFs of ??1?$CAutoPtr@UDuckingDescriptor@@@ATL@@QEAA@XZ @ 0x18001C4A4
 * Callers:
 *     _TsSessionCreate_::_1_::dtor$0 @ 0x180022A4E (_TsSessionCreate_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall ATL::CAutoPtr<DuckingDescriptor>::~CAutoPtr<DuckingDescriptor>(void **a1)
{
  operator delete(*a1, 0x10uLL);
  *a1 = 0LL;
}
