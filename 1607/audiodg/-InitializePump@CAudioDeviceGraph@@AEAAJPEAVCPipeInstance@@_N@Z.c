/*
 * XREFs of ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140006280
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140006FA0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioDeviceGraph::InitializePump(CAudioDeviceGraph *this, struct CPipeInstance *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v9; // r12d
  __int128 v10; // xmm6
  unsigned int v11; // r14d
  __int128 v13; // [rsp+50h] [rbp-58h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+20h] BYREF

  v15 = 0LL;
  pv = 0LL;
  v6 = *((_QWORD *)a2 + 3);
  if ( !v6 )
    ATL::AtlThrowImpl(-2147467259);
  v7 = **(_QWORD **)(*(_QWORD *)(v6 + 16) + 32LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 14))(
         *((_QWORD *)this + 14),
         &GUID_8c03925f_1468_45a1_8278_5cc94bc4c6cc,
         &v15);
  if ( v8 < 0 )
    goto LABEL_22;
  v9 = *((_DWORD *)this + 24);
  v10 = *(_OWORD *)((char *)a2 + 152);
  v11 = 4;
  if ( !*((_DWORD *)this + 27) )
    v11 = 8;
  if ( a3 == 1 )
    v11 |= 0x20u;
  v13 = *(_OWORD *)((char *)a2 + 152);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int64, __int64))(**((_QWORD **)this + 15) + 24LL))(
         *((_QWORD *)this + 15),
         v11 | 0x10,
         v9,
         &v13,
         v15,
         v7);
  if ( v8 < 0 )
  {
    if ( *((_DWORD *)this + 74) != 1 )
    {
      v13 = v10;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int64, __int64))(**((_QWORD **)this + 15)
                                                                                           + 24LL))(
             *((_QWORD *)this + 15),
             v11,
             v9,
             &v13,
             v15,
             v7);
    }
    if ( v8 < 0 )
      goto LABEL_22;
  }
  mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)a2 + 23), &pv);
  v13 = *((_OWORD *)this + 21);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, LPVOID))(**((_QWORD **)this + 15) + 80LL))(
         *((_QWORD *)this + 15),
         &v13,
         pv);
  if ( v8 < 0 )
  {
LABEL_22:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        56LL,
        &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        (unsigned int)v8);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::InitializePump", 0x540u, v8);
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v8;
}
