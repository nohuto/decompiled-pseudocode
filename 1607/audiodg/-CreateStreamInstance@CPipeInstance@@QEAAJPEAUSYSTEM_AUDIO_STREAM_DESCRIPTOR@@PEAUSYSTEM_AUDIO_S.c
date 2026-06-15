/*
 * XREFs of ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000B474
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14000D90C (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140010278 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 */

__int64 __fastcall CPipeInstance::CreateStreamInstance(
        CPipeInstance *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct SYSTEM_AUDIO_STREAM *a3)
{
  CStreamProcessNode **Head; // rax
  int StreamInstance; // ebx

  Head = (CStreamProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)this + 16);
  StreamInstance = CStreamProcessNode::CreateStreamInstance(
                     *Head,
                     a2,
                     (unsigned int)(int)((double)*((int *)this + 34)
                                       * 10000000.0
                                       / (double)*(int *)(*((_QWORD *)a2 + 9) + 4LL)
                                       + 0.5),
                     *((_DWORD *)this + 34),
                     a3);
  if ( StreamInstance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
        (unsigned int)StreamInstance);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateStreamInstance", 0x374u, StreamInstance);
  }
  return (unsigned int)StreamInstance;
}
