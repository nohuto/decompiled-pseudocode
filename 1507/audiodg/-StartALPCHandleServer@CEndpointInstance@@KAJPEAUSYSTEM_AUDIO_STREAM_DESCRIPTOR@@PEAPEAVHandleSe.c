/*
 * XREFs of ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x1400030B4
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003FB0 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x1400031B8 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018ADC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_dD @ 0x14003308C (WPP_SF_dD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointInstance::StartALPCHandleServer(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        struct HandleSendReceiveServer **a2)
{
  void **v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  unsigned __int16 *v11; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp+18h]

  v11 = 0LL;
  v5 = operator new(0x40uLL);
  v12 = v5;
  if ( v5 )
  {
    v7 = *((_DWORD *)a1 + 3);
    v4 = &HandleSendReceiveServer::`vftable';
    *v5 = &HandleSendReceiveServer::`vftable';
    v5[1] = 0LL;
    *((_DWORD *)v5 + 4) = v7;
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
    v5[6] = 0LL;
    *((_DWORD *)v5 + 14) = 0;
    *((_BYTE *)v5 + 60) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = (struct HandleSendReceiveServer *)v5;
  if ( v5 )
  {
    v8 = HandleSendReceiveServer::Initialize((HandleSendReceiveServer *)v5, &v11);
    if ( v8 >= 0 && v11 )
      *((_QWORD *)a1 + 11) = v11;
  }
  else
  {
    v8 = -2147024882;
  }
  v9 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_dD(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), v4, v6, *((unsigned int *)a1 + 3), v8);
    v9 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  if ( v8 < 0
    && (unsigned int *)v9 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v9 + 28) & 0x20000) != 0
    && *(_BYTE *)(v9 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v9 + 16), 14LL, &WPP_ffe90e00dae7115ac53e8b1f73fce6e5_Traceguids, (unsigned int)v8);
  }
  return (unsigned int)v8;
}
