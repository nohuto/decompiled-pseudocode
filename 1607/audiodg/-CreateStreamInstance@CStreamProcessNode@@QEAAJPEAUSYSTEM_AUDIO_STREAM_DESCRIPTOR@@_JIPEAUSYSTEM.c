/*
 * XREFs of ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140010278
 * Callers:
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000B474 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 * Callees:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140004DF0 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 */

__int64 __fastcall CStreamProcessNode::CreateStreamInstance(
        CStreamProcessNode *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        int a3,
        unsigned int a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  int v6; // ebx
  struct CEndpointInstance *v8; // [rsp+30h] [rbp-18h] BYREF

  v6 = CEndpointInstance::CreateStreamEndpointInstance(a2, a3, a4, a5, &v8);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17LL,
        &WPP_00124d7d191530a40c6a65552c411b8b_Traceguids,
        (unsigned int)v6);
    }
    AudDGTraceLoggingErrorHelper("CStreamProcessNode::CreateStreamInstance", 0x1C9u, v6);
  }
  else
  {
    *((_QWORD *)this + 4) = v8;
  }
  return (unsigned int)v6;
}
