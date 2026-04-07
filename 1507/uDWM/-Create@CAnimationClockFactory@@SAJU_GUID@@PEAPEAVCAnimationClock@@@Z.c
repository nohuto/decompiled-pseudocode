/*
 * XREFs of ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x180009848
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000B414 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CAnimationClock@@QEAA@XZ @ 0x18000B0E0 (--0CAnimationClock@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationClockFactory::Create(struct _GUID *a1, struct CAnimationClock **a2)
{
  unsigned int v2; // esi
  __int64 v4; // rax
  CAnimationClock *v5; // rax

  v2 = 0;
  *a2 = 0LL;
  v4 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v4 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v4 )
  {
    v5 = (CAnimationClock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              144LL);
    if ( v5 )
      v5 = CAnimationClock::CAnimationClock(v5);
    *a2 = v5;
    if ( !v5 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x27Eu);
      if ( *a2 )
      {
        CBaseObject::Release(*a2);
        *a2 = 0LL;
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
