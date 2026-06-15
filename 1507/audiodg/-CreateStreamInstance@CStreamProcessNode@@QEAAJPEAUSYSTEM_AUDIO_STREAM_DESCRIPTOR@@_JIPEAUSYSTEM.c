/*
 * XREFs of ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000C250
 * Callers:
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400085E0 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 * Callees:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003FB0 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 */

__int64 __fastcall CStreamProcessNode::CreateStreamInstance(
        CStreamProcessNode *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        __int64 a3,
        unsigned int a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  int v6; // ebx
  struct CEndpointInstance *v8; // [rsp+30h] [rbp-18h] BYREF

  v6 = CEndpointInstance::CreateStreamEndpointInstance(a2, a3, a4, a5, &v8);
  if ( v6 < 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        17LL,
        &WPP_a99c0ea68331a2f1b88ee9cd60aee7de_Traceguids,
        (unsigned int)v6);
    }
  }
  else
  {
    *((_QWORD *)this + 4) = v8;
  }
  return (unsigned int)v6;
}
