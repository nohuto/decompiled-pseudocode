/*
 * XREFs of ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0005AC4
 * Callers:
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C008E4D0 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0005240 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C0007F5C (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 */

const struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::FindBestMatch(
        DMMVIDPNTARGETMODESET *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2)
{
  struct DMMVIDPNSOURCEMODE *v2; // rsi
  _QWORD *v3; // rbx
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx

  v2 = 0LL;
  v3 = (_QWORD *)((char *)this + 48);
  if ( (_QWORD *)*v3 == v3 )
    return v2;
  NextMode = (struct DMMVIDPNSOURCEMODE *)(*v3 - 8LL);
  if ( !NextMode )
    return v2;
  while ( a2->ActiveSize.cx != *((_DWORD *)NextMode + 21)
       || a2->ActiveSize.cy != *((_DWORD *)NextMode + 22)
       || ((*(_BYTE *)&a2->AdditionalSignalInfo ^ *((_BYTE *)NextMode + 120)) & 7) != 0
       || a2->VSyncFreq.Numerator * (unsigned __int64)*((unsigned int *)NextMode + 24) != a2->VSyncFreq.Denominator
                                                                                        * (unsigned __int64)*((unsigned int *)NextMode + 23) )
  {
    if ( !v2 )
    {
      if ( DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
             a2,
             (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)NextMode + 72),
             0) )
      {
        v2 = NextMode;
      }
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode);
    if ( !NextMode )
      return v2;
  }
  return NextMode;
}
