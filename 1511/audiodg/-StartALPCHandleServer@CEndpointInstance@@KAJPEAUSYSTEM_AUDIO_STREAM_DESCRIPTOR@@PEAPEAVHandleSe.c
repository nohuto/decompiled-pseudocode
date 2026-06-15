/*
 * XREFs of ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140016648
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A810 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x140016538 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140018A20 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_dD @ 0x1400332E0 (WPP_SF_dD.c)
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
  _QWORD *v9; // rcx
  unsigned __int16 *v11; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp+18h]

  v11 = 0LL;
  v5 = operator new(0x40uLL);
  v12 = v5;
  if ( v5 )
  {
    v7 = *((_DWORD *)a1 + 4);
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
      *((_QWORD *)a1 + 12) = v11;
  }
  else
  {
    v8 = -2147024882;
  }
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, v6, *((unsigned int *)a1 + 4), v8);
    v9 = WPP_GLOBAL_Control;
  }
  if ( v8 < 0 && v9 != &WPP_GLOBAL_Control && (*((_DWORD *)v9 + 7) & 0x20000) != 0 && *((_BYTE *)v9 + 25) >= 2u )
    WPP_SF_D(v9[2], 16LL, &WPP_cb2dd724c9740f90d85210ba28dcd87c_Traceguids, (unsigned int)v8);
  return (unsigned int)v8;
}
