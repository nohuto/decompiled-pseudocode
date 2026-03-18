/*
 * XREFs of ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x1801498F8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CNotificationResource@@QEAA@PEAVCComposition@@@Z @ 0x18010B9CC (--0CNotificationResource@@QEAA@PEAVCComposition@@@Z.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x180137864 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x180145C68 (-Reset@ManipulationData@@QEAAXXZ.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::CInteractionTracker(
        CInteractionTracker *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  CInteractionTracker *result; // rax

  CNotificationResource::CNotificationResource(this, a2);
  *(_QWORD *)this = &CInteractionTracker::`vftable';
  *((_DWORD *)this + 44) = 1065353216;
  *((_DWORD *)this + 45) = 1065353216;
  *((_DWORD *)this + 46) = 1065353216;
  ManipulationData::Reset((CInteractionTracker *)((char *)this + 220));
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 376),
    12LL,
    3LL,
    (void (__fastcall *)(TemporaryConfiguration *))CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis);
  *((_BYTE *)this + 412) &= 0xFCu;
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 416),
    8LL,
    3LL,
    (void (__fastcall *)(TemporaryConfiguration *))Microsoft::WRL::ComPtr<CConditionalExpression>::ComPtr<CConditionalExpression>);
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 456),
    8LL,
    3LL,
    (void (__fastcall *)(TemporaryConfiguration *))Microsoft::WRL::ComPtr<CConditionalExpression>::ComPtr<CConditionalExpression>);
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_DWORD *)this + 146) = 0;
  v3 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 155) = 1117126656;
  *((_DWORD *)this + 156) = 1130430464;
  *((_DWORD *)this + 157) = 1104674816;
  *((_DWORD *)this + 158) = 1123680256;
  *((_DWORD *)this + 159) = 1102053376;
  CExpressionManager::RegisterInteractionTrackerNotification(*(CExpressionManager **)(v3 + 168), this);
  *((_DWORD *)this + 41) = 1064514355;
  *((_DWORD *)this + 42) = 1064514355;
  result = this;
  *((_DWORD *)this + 50) = 1053609164;
  return result;
}
