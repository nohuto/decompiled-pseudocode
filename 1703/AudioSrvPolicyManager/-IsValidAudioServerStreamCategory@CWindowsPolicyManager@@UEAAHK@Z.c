/*
 * XREFs of ?IsValidAudioServerStreamCategory@CWindowsPolicyManager@@UEAAHK@Z @ 0x1800049D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 */

__int64 __fastcall CWindowsPolicyManager::IsValidAudioServerStreamCategory(
        CWindowsPolicyManager *this,
        unsigned int a2)
{
  if ( a2 < 0x15 )
    return 1LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_d1d10f4d9ad336f5fb5da7b06d958b8d_Traceguids, a2);
  }
  return 0LL;
}
