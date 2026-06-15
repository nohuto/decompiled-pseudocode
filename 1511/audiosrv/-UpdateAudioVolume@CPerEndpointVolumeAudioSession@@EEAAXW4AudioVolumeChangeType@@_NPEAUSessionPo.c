/*
 * XREFs of ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180077050
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180025AA8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_dg @ 0x18006F8A4 (WPP_SF_dg.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180074560 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_dgd @ 0x180077810 (WPP_SF_dgd.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::UpdateAudioVolume(
        struct IAudioEndpointVolumeCallback *a1,
        int a2,
        char a3,
        struct SessionPolicyGains *a4,
        char a5,
        float a6,
        unsigned int a7,
        float *a8,
        __int64 a9)
{
  __int64 result; // rax
  int v12; // ebx
  struct IAudioEndpointVolumeCallback *v13; // r15
  struct IAudioEndpointVolumeCallbackVtbl *lpVtbl; // rdi
  __int64 v15; // r8
  unsigned int v16; // esi
  TraceLoggingHProvider v17; // rcx
  float *v18; // rbp
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(CVolumeStrip *); // rdi
  double v21; // [rsp+20h] [rbp-78h]
  CVolumeStrip *v22; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+10h] BYREF

  v22 = 0LL;
  CAudioSession::SetVolumeAllStreams((__int64)a1, a2, a3, a4, 0, 1.0, 0, 0LL, a9);
  result = (unsigned int)(a2 - 2);
  if ( (unsigned int)result <= 1 )
    goto LABEL_28;
  result = CPerEndpointVolumeAudioSession::GetVolumeStrip(a1, (struct IAudioEndpointVolumeCallbackVtbl **)&v22);
  v12 = result;
  if ( (int)result < 0
    || (v13 = a1 + 50,
        result = (*(__int64 (__fastcall **)(CVolumeStrip *, bool, struct IAudioEndpointVolumeCallback *))(*(_QWORD *)v22 + 184LL))(
                   v22,
                   a5 != 0,
                   a1 + 50),
        v12 = result,
        (int)result < 0)
    || (lpVtbl = a1[123].lpVtbl,
        v23 = 0,
        result = (*((__int64 (__fastcall **)(struct IAudioEndpointVolumeCallbackVtbl *, unsigned int *))lpVtbl->QueryInterface
                  + 11))(
                   lpVtbl,
                   &v23),
        v12 = result,
        (int)result < 0) )
  {
    v17 = WPP_GLOBAL_Control;
LABEL_24:
    if ( v17 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v17 + 28) & 0x40) != 0
      && *((_BYTE *)v17 + 25) >= 2u )
    {
      result = WPP_SF_D(*((_QWORD *)v17 + 2), 0xC5u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, v12);
    }
    goto LABEL_28;
  }
  v16 = 0;
  v17 = WPP_GLOBAL_Control;
  if ( a7 )
  {
    v18 = a8;
    do
    {
      if ( v17 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)v17 + 7) & 0x200000) != 0
        && *((_BYTE *)v17 + 25) >= 4u )
      {
        v21 = (float)(a6 * *v18);
        result = WPP_SF_dg(*((_QWORD *)v17 + 2), 0xC3u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, v16);
        v17 = WPP_GLOBAL_Control;
      }
      if ( v16 >= v23 )
        goto LABEL_20;
      result = (*(__int64 (__fastcall **)(CVolumeStrip *, _QWORD, __int64, struct IAudioEndpointVolumeCallback *, double))(*(_QWORD *)v22 + 136LL))(
                 v22,
                 v16,
                 v15,
                 v13,
                 COERCE_DOUBLE(*(_QWORD *)&v21));
      v12 = result;
      if ( (_DWORD)result == 1 )
        v12 = 0;
      if ( v12 < 0 )
      {
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
          || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
        {
          goto LABEL_20;
        }
        result = WPP_SF_dgd(*((_QWORD *)WPP_GLOBAL_Control + 2), v19, v15, v16, (float)(a6 * *v18), v12);
      }
      v17 = WPP_GLOBAL_Control;
LABEL_20:
      ++v16;
      ++v18;
    }
    while ( v16 < a7 );
  }
  if ( v12 < 0 )
    goto LABEL_24;
LABEL_28:
  if ( v22 )
  {
    v20 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v22 + 16LL);
    if ( v20 == CVolumeStrip::Release )
      return CVolumeStrip::Release(v22);
    else
      return v20(v22);
  }
  return result;
}
