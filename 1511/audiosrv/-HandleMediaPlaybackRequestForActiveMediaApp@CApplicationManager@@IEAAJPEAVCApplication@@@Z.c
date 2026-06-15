/*
 * XREFs of ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18009E84C
 * Callers:
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z @ 0x18009E8F0 (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBGK@Z.c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18001C6A0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800A0498 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?HasPLMExemption@CApplication@@QEAAHXZ @ 0x1800A062C (-HasPLMExemption@CApplication@@QEAAHXZ.c)
 */

__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(
        CApplicationManager *this,
        const wchar_t **a2)
{
  int v3; // edx
  TraceLoggingHProvider v4; // rcx
  unsigned __int16 v5; // dx

  if ( *((_DWORD *)a2 + 28)
    || (unsigned int)CApplication::HasPLMExemption((CApplication *)a2)
    || (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)a2) )
  {
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v5 = 39;
      goto LABEL_12;
    }
  }
  else
  {
    CApplication::GrantGoodFaithPLMExemption((CApplication *)a2, v3);
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      v5 = 40;
LABEL_12:
      WPP_SF_S(*((_QWORD *)v4 + 2), v5, (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, a2[2]);
    }
  }
  return 0LL;
}
