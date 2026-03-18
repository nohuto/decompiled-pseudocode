/*
 * XREFs of ??0CAnalogExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x18013B178
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B1F38 (-GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z.c)
 */

CAnalogExclusiveView *__fastcall CAnalogExclusiveView::CAnalogExclusiveView(
        CAnalogExclusiveView *this,
        struct CComposition *a2)
{
  CAnalogExclusiveView *result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  _UNSIGNED_RATIO v6; // [rsp+40h] [rbp+18h] BYREF

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CAnalogExclusiveView::`vftable'{for `CResource'};
  *((_QWORD *)this + 6) = 0LL;
  *(_DWORD *)((char *)this + 57) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 5) = &CAnalogExclusiveView::`vftable'{for `ICompositionSurfaceInfoListener'};
  QueryPerformanceFrequency(&Frequency);
  GetPrimaryVBlankRateAndPeriod(&v6, &v5);
  result = this;
  *((_QWORD *)this + 13) = Frequency.QuadPart * (v5 / 0x989680) + Frequency.QuadPart * (v5 % 0x989680) / 0x989680;
  return result;
}
