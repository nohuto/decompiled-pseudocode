/*
 * XREFs of ??1?$CAutoPtr@E@ATL@@QEAA@XZ @ 0x14003361C
 * Callers:
 *     _SerializeDeviceGraphs_::_1_::dtor$0 @ 0x14003427D (_SerializeDeviceGraphs_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

void __fastcall ATL::CAutoPtr<unsigned char>::~CAutoPtr<unsigned char>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
