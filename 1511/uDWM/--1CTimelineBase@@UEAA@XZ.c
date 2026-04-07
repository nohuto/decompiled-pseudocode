/*
 * XREFs of ??1CTimelineBase@@UEAA@XZ @ 0x18006E7C4
 * Callers:
 *     ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x180073BF0 (--_ECLivePreviewTimeline@@UEAAPEAXI@Z.c)
 *     ??_E?$CTimeline@I@@UEAAPEAXI@Z @ 0x180082320 (--_E-$CTimeline@I@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CTimelineBase::~CTimelineBase(CTimelineBase *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CTimelineBase::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 8) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
