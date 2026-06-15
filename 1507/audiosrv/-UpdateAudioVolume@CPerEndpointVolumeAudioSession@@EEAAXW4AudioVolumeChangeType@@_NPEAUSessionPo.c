/*
 * XREFs of ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18007BDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x18000E858 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_dg @ 0x18007118C (WPP_SF_dg.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180079340 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_dgd @ 0x18007C520 (WPP_SF_dgd.c)
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
  __int64 v17; // rcx
  float *v18; // rbp
  __int64 v19; // rdx
  double v20; // [rsp+20h] [rbp-78h]
  struct CVolumeStrip *v21; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+A8h] [rbp+10h] BYREF

  v21 = 0LL;
  CAudioSession::SetVolumeAllStreams((__int64)a1, a2, a3, a4, 0, 1.0, 0, 0LL, a9);
  result = (unsigned int)(a2 - 2);
  if ( (unsigned int)result <= 1 )
    goto LABEL_28;
  result = CPerEndpointVolumeAudioSession::GetVolumeStrip(a1, (struct IAudioEndpointVolumeCallbackVtbl **)&v21);
  v12 = result;
  if ( (int)result < 0
    || (v13 = a1 + 32,
        result = (*(__int64 (__fastcall **)(struct CVolumeStrip *, bool, struct IAudioEndpointVolumeCallback *))(*(_QWORD *)v21 + 184LL))(
                   v21,
                   a5 != 0,
                   a1 + 32),
        v12 = result,
        (int)result < 0)
    || (lpVtbl = a1[104].lpVtbl,
        v22 = 0,
        result = (*((__int64 (__fastcall **)(struct IAudioEndpointVolumeCallbackVtbl *, unsigned int *))lpVtbl->QueryInterface
                  + 11))(
                   lpVtbl,
                   &v22),
        v12 = result,
        (int)result < 0) )
  {
    v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_24:
    if ( (struct _GUID *)v17 != &WPP_GLOBAL_Control && (*(_BYTE *)(v17 + 28) & 0x40) != 0 && *(_BYTE *)(v17 + 25) >= 2u )
      result = WPP_SF_D(*(_QWORD *)(v17 + 16), 0xC5u, (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids, v12);
    goto LABEL_28;
  }
  v16 = 0;
  v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( a7 )
  {
    v18 = a8;
    do
    {
      if ( (struct _GUID *)v17 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v17 + 28) & 0x200000) != 0
        && *(_BYTE *)(v17 + 25) >= 4u )
      {
        v20 = (float)(a6 * *v18);
        result = WPP_SF_dg(*(_QWORD *)(v17 + 16), 0xC3u, (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids, v16);
        v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( v16 >= v22 )
        goto LABEL_20;
      result = (*(__int64 (__fastcall **)(struct CVolumeStrip *, _QWORD, __int64, struct IAudioEndpointVolumeCallback *, double))(*(_QWORD *)v21 + 136LL))(
                 v21,
                 v16,
                 v15,
                 v13,
                 COERCE_DOUBLE(*(_QWORD *)&v20));
      v12 = result;
      if ( (_DWORD)result == 1 )
        v12 = 0;
      if ( v12 < 0 )
      {
        v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
          || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 2u )
        {
          goto LABEL_20;
        }
        result = WPP_SF_dgd(
                   *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                   v19,
                   v15,
                   v16,
                   (float)(a6 * *v18),
                   v12);
      }
      v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_20:
      ++v16;
      ++v18;
    }
    while ( v16 < a7 );
  }
  if ( v12 < 0 )
    goto LABEL_24;
LABEL_28:
  if ( v21 )
    return (*(__int64 (__fastcall **)(struct CVolumeStrip *))(*(_QWORD *)v21 + 16LL))(v21);
  return result;
}
