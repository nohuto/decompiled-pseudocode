/*
 * XREFs of ??0CAnalogExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x180165318
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 *     ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B5A8C (-GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z.c)
 */

CAnalogExclusiveView *__fastcall CAnalogExclusiveView::CAnalogExclusiveView(
        CAnalogExclusiveView *this,
        struct CComposition *a2)
{
  CAnalogExclusiveView *result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  _UNSIGNED_RATIO v6; // [rsp+48h] [rbp+20h] BYREF

  CResource::CResource(this, a2);
  *(_QWORD *)this = &CAnalogExclusiveView::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAnalogExclusiveView::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 15) = 0LL;
  *(_DWORD *)((char *)this + 129) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 48) = 0;
  InitializeSRWLock((PSRWLOCK)this + 23);
  QueryPerformanceFrequency(&Frequency);
  GetPrimaryVBlankRateAndPeriod(&v6, &v5);
  result = this;
  *((_QWORD *)this + 22) = Frequency.QuadPart * (v5 / 0x989680) + Frequency.QuadPart * (v5 % 0x989680) / 0x989680;
  return result;
}
