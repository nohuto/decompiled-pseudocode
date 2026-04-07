/*
 * XREFs of ??1CTimelineBase@@UEAA@XZ @ 0x1800676A0
 * Callers:
 *     ??_ECLivePreviewTimeline@@UEAAPEAXI@Z @ 0x18006B850 (--_ECLivePreviewTimeline@@UEAAPEAXI@Z.c)
 *     ??_E?$CTimeline@I@@UEAAPEAXI@Z @ 0x18007A870 (--_E-$CTimeline@I@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
