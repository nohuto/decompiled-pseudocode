/*
 * XREFs of ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18005F6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180002E30 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013044 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x180018430 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x180058F50 (WPP_SF_dg.c)
 *     WPP_SF_dgd @ 0x18005FE34 (WPP_SF_dgd.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::UpdateAudioVolume(
        CPerEndpointVolumeAudioSession *a1,
        int a2,
        bool a3,
        struct SessionPolicyGains *a4,
        char a5,
        float a6,
        unsigned int a7,
        float *a8,
        __int64 a9)
{
  int VolumeStrip; // ebx
  _QWORD *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edi
  float *v16; // rsi
  CAudioSession *v17; // rcx
  __int64 v18; // rdx
  void (*v19)(void); // rax
  CVolumeStrip *v20; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF

  v20 = 0LL;
  CAudioSession::SetVolumeAllStreams((__int64)a1, a2, a3, a4, 0, 1.0, 0, 0LL, a9);
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    VolumeStrip = CPerEndpointVolumeAudioSession::GetVolumeStrip(a1, &v20);
    if ( VolumeStrip < 0 )
      goto LABEL_22;
    v12 = (_QWORD *)((char *)a1 + 400);
    VolumeStrip = (*(__int64 (__fastcall **)(CVolumeStrip *, bool, _QWORD *))(*(_QWORD *)v20 + 184LL))(
                    v20,
                    a5 != 0,
                    (_QWORD *)a1 + 50);
    if ( VolumeStrip < 0 )
      goto LABEL_22;
    v13 = *((_QWORD *)a1 + 132);
    v21 = 0;
    VolumeStrip = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 88LL))(v13, &v21);
    if ( VolumeStrip < 0 )
      goto LABEL_22;
    v15 = 0;
    if ( a7 )
    {
      v16 = a8;
      v17 = WPP_GLOBAL_Control;
      do
      {
        if ( v17 != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v17 + 7) & 0x200000) != 0
          && *((_BYTE *)v17 + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)v17 + 2),
            0x95u,
            (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
            v15,
            (float)(a6 * *v16));
          v17 = WPP_GLOBAL_Control;
        }
        if ( v15 >= v21 )
          goto LABEL_20;
        VolumeStrip = (*(__int64 (__fastcall **)(CVolumeStrip *, _QWORD, __int64, _QWORD *))(*(_QWORD *)v20 + 136LL))(
                        v20,
                        v15,
                        v14,
                        v12);
        if ( VolumeStrip == 1 )
          VolumeStrip = 0;
        if ( VolumeStrip < 0 )
        {
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
            || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
          {
            goto LABEL_20;
          }
          WPP_SF_dgd(*((_QWORD *)WPP_GLOBAL_Control + 2), v18, v14, v15, (float)(a6 * *v16), VolumeStrip);
        }
        v17 = WPP_GLOBAL_Control;
LABEL_20:
        ++v15;
        ++v16;
      }
      while ( v15 < a7 );
    }
    if ( VolumeStrip < 0 )
LABEL_22:
      AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::UpdateAudioVolume", 5686, VolumeStrip);
  }
  if ( v20 )
  {
    v19 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
    if ( (char *)v19 == (char *)CVolumeStrip::Release )
      CVolumeStrip::Release(v20);
    else
      v19();
  }
}
