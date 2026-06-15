/*
 * XREFs of ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x1800029A0
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180002E30 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ?GetChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAM@Z @ 0x180001EB0 (-GetChannelVolumeLevelScalar@CVolumeStrip@@UEAAJIPEAM@Z.c)
 *     ?GetChannelCount@CVolumeStrip@@UEAAJPEAI@Z @ 0x180001EE0 (-GetChannelCount@CVolumeStrip@@UEAAJPEAI@Z.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18000261C (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180002664 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetMute@CVolumeStrip@@UEAAJPEAH@Z @ 0x180017C20 (-GetMute@CVolumeStrip@@UEAAJPEAH@Z.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x180017C50 (-GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x180058F50 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x180058F9C (WPP_SF_g.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
        CPerEndpointVolumeAudioSession *this,
        const unsigned __int16 *a2,
        struct CVolumeStrip *a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v6)(CVolumeStrip *, unsigned int *); // rax
  int ChannelCount; // eax
  int v8; // edi
  __int64 (__fastcall *v9)(CVolumeStrip *__hidden, int *); // rax
  int v10; // eax
  __int64 (__fastcall *v11)(CVolumeStrip *__hidden, float *); // rax
  int v12; // eax
  bool v13; // r8
  _DWORD *v14; // rbx
  __int64 i; // r14
  float *v16; // r8
  __int64 (__fastcall *v17)(CVolumeStrip *, __int64, float *); // rax
  int v18; // eax
  void *v19; // rcx
  unsigned __int64 v20; // rcx
  _DWORD *v21; // rax
  _DWORD *v22; // r8
  __int64 v23; // rdx
  float v24; // xmm6_4
  __int64 j; // rbx
  _DWORD *v27; // [rsp+30h] [rbp-30h] BYREF
  char v28[8]; // [rsp+38h] [rbp-28h] BYREF
  char v29; // [rsp+40h] [rbp-20h]
  const unsigned __int16 *v30; // [rsp+98h] [rbp+38h] BYREF
  int v31; // [rsp+A0h] [rbp+40h] BYREF
  float v32; // [rsp+A8h] [rbp+48h] BYREF

  v30 = a2;
  v3 = *(_QWORD *)a3;
  LODWORD(v30) = 0;
  v31 = 0;
  v27 = 0LL;
  v6 = *(__int64 (__fastcall **)(CVolumeStrip *, unsigned int *))(v3 + 88);
  if ( v6 == CVolumeStrip::GetChannelCount )
    ChannelCount = CVolumeStrip::GetChannelCount(a3, (unsigned int *)&v30);
  else
    ChannelCount = v6(a3, (unsigned int *)&v30);
  v8 = ChannelCount;
  if ( ChannelCount < 0 )
    goto LABEL_38;
  v9 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, int *))(*(_QWORD *)a3 + 192LL);
  v10 = v9 == CVolumeStrip::GetMute ? CVolumeStrip::GetMute(a3, &v31) : v9(a3, &v31);
  v8 = v10;
  if ( v10 < 0 )
    goto LABEL_38;
  v8 = CAudioSession::SetMute(this, v31, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1);
  if ( v8 < 0 )
    goto LABEL_38;
  v11 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, float *))(*(_QWORD *)a3 + 120LL);
  v12 = v11 == CVolumeStrip::GetMasterVolumeLevelScalar
      ? CVolumeStrip::GetMasterVolumeLevelScalar(a3, &v32)
      : v11(a3, &v32);
  v8 = v12;
  if ( v12 < 0 )
    goto LABEL_38;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&v27, (unsigned int)v30);
  v14 = v27;
  if ( !v27 )
  {
    v8 = -2147024882;
LABEL_38:
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation", 0x8F2u, v8);
    goto LABEL_33;
  }
  for ( i = 0LL; (unsigned int)i < (unsigned int)v30; i = (unsigned int)(i + 1) )
  {
    v16 = (float *)&v14[i];
    v17 = *(__int64 (__fastcall **)(CVolumeStrip *, __int64, float *))(*(_QWORD *)a3 + 152LL);
    v18 = v17 == CVolumeStrip::GetChannelVolumeLevelScalar
        ? CVolumeStrip::GetChannelVolumeLevelScalar(a3, (unsigned int)i, v16)
        : v17(a3, (unsigned int)i, v16);
    v8 = v18;
    if ( v18 < 0 )
      goto LABEL_38;
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v28, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872), v13);
  *((float *)this + 228) = v32;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids);
  }
  v19 = (void *)*((_QWORD *)this + 124);
  *((_DWORD *)this + 246) = (_DWORD)v30;
  operator delete(v19);
  v20 = *((unsigned int *)this + 246);
  *((_QWORD *)this + 124) = 0LL;
  v21 = operator new(saturated_mul(v20, 4uLL));
  *((_QWORD *)this + 124) = v21;
  v22 = v21;
  if ( !v21 )
  {
    v8 = -2147024882;
    if ( v29 )
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v28);
    goto LABEL_38;
  }
  v23 = 0LL;
  v24 = 0.0;
  if ( *((_DWORD *)this + 246) )
  {
    do
    {
      v22[v23] = v14[v23];
      v22 = (_DWORD *)*((_QWORD *)this + 124);
      v24 = fmaxf(v24, *(float *)&v22[v23]);
      v23 = (unsigned int)(v23 + 1);
    }
    while ( (unsigned int)v23 < *((_DWORD *)this + 246) );
    if ( v24 > 0.0 )
    {
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 246); j = (unsigned int)(j + 1) )
      {
        *(float *)(*((_QWORD *)this + 124) + 4 * j) = *(float *)(*((_QWORD *)this + 124) + 4 * j) / v24;
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            52LL,
            &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
            (unsigned int)j,
            *(float *)(*((_QWORD *)this + 124) + 4 * j));
        }
      }
    }
  }
  if ( v29 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v28);
LABEL_33:
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v27);
  return (unsigned int)v8;
}
