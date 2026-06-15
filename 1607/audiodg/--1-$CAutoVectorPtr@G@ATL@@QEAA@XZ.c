/*
 * XREFs of ??1?$CAutoVectorPtr@G@ATL@@QEAA@XZ @ 0x140034C04
 * Callers:
 *     _ATL::CExpansionVector::Add_::_1_::dtor$0 @ 0x14003577E (_ATL--CExpansionVector--Add_--_1_--dtor$0.c)
 *     _ATL::CExpansionVector::Add_::_1_::dtor$1 @ 0x1400357A5 (_ATL--CExpansionVector--Add_--_1_--dtor$1.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 */

void __fastcall ATL::CAutoVectorPtr<unsigned short>::~CAutoVectorPtr<unsigned short>(void **a1)
{
  operator delete[](*a1);
  *a1 = 0LL;
}
