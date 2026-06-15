/*
 * XREFs of ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x140009510
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400066A0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140006FA0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x1400092C0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14000C5D0 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140030288 (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 */

__int64 __fastcall CPipeInstance::AddConnectionsAndActivateAPOs(CPipeInstance *this)
{
  int v2; // edi
  __int64 v3; // rbx
  CConnectionInstance *v4; // rsi
  struct IAudioProcessor *v5; // rdx
  int v6; // eax
  int v7; // eax
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 18) + 32LL))(
         *((_QWORD *)this + 18),
         &v9);
  if ( v2 < 0 )
    goto LABEL_20;
  v3 = *((_QWORD *)this + 9);
  while ( v3 )
  {
    v4 = *(CConnectionInstance **)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    v5 = (struct IAudioProcessor *)*((_QWORD *)this + 18);
    v6 = *((_DWORD *)v4 + 4);
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        v2 = -2147418113;
LABEL_15:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            12LL,
            &WPP_1ca138749e453a9e5342dd7aa161b4a4_Traceguids,
            (unsigned int)v2);
        }
        AudDGTraceLoggingErrorHelper("CConnectionInstance::AddConnections", 0x10Au, v2);
        goto LABEL_7;
      }
      v7 = CConnectionInstance::AddCaptureConnection(v4, v5, v9);
    }
    else
    {
      v7 = CConnectionInstance::AddRenderConnection(v4, v5, v9);
    }
    v2 = v7;
    if ( v7 < 0 )
      goto LABEL_15;
    *((_DWORD *)v4 + 1) = 1;
LABEL_7:
    if ( v2 < 0 )
      goto LABEL_20;
  }
  v2 = CPipeInstance::ActivateAPOs(this, v9);
  if ( v2 < 0
    || (result = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 18) + 40LL))(
                   *((_QWORD *)this + 18),
                   v9),
        v2 = result,
        (int)result < 0) )
  {
LABEL_20:
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 48LL))(*((_QWORD *)this + 18));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        41LL,
        &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
        (unsigned int)v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::AddConnectionsAndActivateAPOs", 0x9A1u, v2);
    return (unsigned int)v2;
  }
  else
  {
    *((_DWORD *)this + 29) = 1;
  }
  return result;
}
