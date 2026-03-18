/*
 * XREFs of ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x18001DE00
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CLegacySurfaceManager::GetLegacyTokens(
        CLegacySurfaceManager *this,
        __int64 a2,
        unsigned int *a3,
        int *a4)
{
  unsigned int v5; // ebx
  int FrameLegacyTokens; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v5 = 0;
  FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&v9, a3, a4);
  if ( FrameLegacyTokens < 0 )
  {
    v5 = FrameLegacyTokens | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x46u);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v7, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory, v5, *a3);
  return v5;
}
