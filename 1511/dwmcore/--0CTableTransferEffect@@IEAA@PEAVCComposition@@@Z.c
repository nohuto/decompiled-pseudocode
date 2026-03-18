/*
 * XREFs of ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x18012CE84
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x18001A8C8 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

CTableTransferEffect *__fastcall CTableTransferEffect::CTableTransferEffect(
        CTableTransferEffect *this,
        struct CComposition *a2)
{
  unsigned int *v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // edx
  int v6; // eax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1TableTransfer);
  *(_QWORD *)this = &CTableTransferEffect::`vftable';
  `vector constructor iterator'(
    (CTableTransferEffect *)((char *)this + 216),
    40LL,
    4,
    (void (__fastcall *)(CBitmapOfDeviceBitmaps::DeviceBitmapInfo *))DynArrayIA<float,2,0>::DynArrayIA<float,2,0>);
  v3 = (unsigned int *)((char *)this + 240);
  v4 = 4LL;
  do
  {
    v5 = *v3 + 2;
    if ( v5 >= *v3 )
    {
      if ( v5 > *(v3 - 1) )
      {
        v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(v3 - 6), 4, 2, &qword_180183C18);
        if ( v6 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v3 - 3) + 4LL * *v3) = 0x3F80000000000000LL;
        *v3 = v5;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    v3 += 10;
    --v4;
  }
  while ( v4 );
  return this;
}
