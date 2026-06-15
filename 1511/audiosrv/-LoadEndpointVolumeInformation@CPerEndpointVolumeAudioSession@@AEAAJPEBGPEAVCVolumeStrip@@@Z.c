/*
 * XREFs of ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x180074DC4
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180074560 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180028410 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800664B8 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180066500 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_dg @ 0x18006F8A4 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x18006F8F0 (WPP_SF_g.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
        CPerEndpointVolumeAudioSession *this,
        const unsigned __int16 *a2,
        struct CVolumeStrip *a3)
{
  __int64 v3; // rax
  int v6; // edi
  _DWORD *v7; // rbx
  __int64 i; // r12
  float v9; // xmm0_4
  void *v10; // rcx
  unsigned __int64 v11; // rcx
  _DWORD *v12; // rax
  _DWORD *v13; // r8
  __int64 v14; // rdx
  float v15; // xmm6_4
  __int64 j; // rbx
  _DWORD *v18; // [rsp+30h] [rbp-30h] BYREF
  LPCRITICAL_SECTION v19; // [rsp+38h] [rbp-28h] BYREF
  char v20; // [rsp+40h] [rbp-20h]
  const unsigned __int16 *v21; // [rsp+A8h] [rbp+48h] BYREF
  int v22; // [rsp+B0h] [rbp+50h] BYREF
  float v23; // [rsp+B8h] [rbp+58h] BYREF

  v21 = a2;
  v3 = *(_QWORD *)a3;
  LODWORD(v21) = 0;
  v22 = 0;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct CVolumeStrip *, const unsigned __int16 **))(v3 + 88))(a3, &v21);
  if ( v6 < 0
    || (v6 = (*(__int64 (__fastcall **)(struct CVolumeStrip *, int *))(*(_QWORD *)a3 + 192LL))(a3, &v22), v6 < 0)
    || (v6 = CAudioSession::SetMute(this, v22, (struct _GUID *)&EVENTCONTEXT_AUDIOSUBSYSTEM, 1), v6 < 0)
    || (v6 = (*(__int64 (__fastcall **)(struct CVolumeStrip *, float *))(*(_QWORD *)a3 + 120LL))(a3, &v23), v6 < 0) )
  {
LABEL_30:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x51u,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        v6);
    }
    goto LABEL_34;
  }
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&v18, (unsigned int)v21);
  v7 = v18;
  if ( !v18 )
  {
    v6 = -2147024882;
    goto LABEL_30;
  }
  for ( i = 0LL; (unsigned int)i < (unsigned int)v21; i = (unsigned int)(i + 1) )
  {
    v6 = (*(__int64 (__fastcall **)(struct CVolumeStrip *, _QWORD, _DWORD *))(*(_QWORD *)a3 + 152LL))(
           a3,
           (unsigned int)i,
           &v7[i]);
    if ( v6 < 0 )
      goto LABEL_30;
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v19, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
  v9 = v23;
  *((float *)this + 228) = v23;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x4Fu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, v9);
  }
  v10 = (void *)*((_QWORD *)this + 116);
  *((_DWORD *)this + 231) = (_DWORD)v21;
  operator delete(v10);
  v11 = *((unsigned int *)this + 231);
  *((_QWORD *)this + 116) = 0LL;
  v12 = operator new(saturated_mul(v11, 4uLL));
  *((_QWORD *)this + 116) = v12;
  v13 = v12;
  if ( !v12 )
  {
    v6 = -2147024882;
    if ( v20 )
      ATL::CCritSecLock::Unlock(&v19);
    goto LABEL_30;
  }
  v14 = 0LL;
  v15 = 0.0;
  if ( *((_DWORD *)this + 231) )
  {
    do
    {
      v13[v14] = v7[v14];
      v13 = (_DWORD *)*((_QWORD *)this + 116);
      if ( *(float *)&v13[v14] > v15 )
        v15 = *(float *)&v13[v14];
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < *((_DWORD *)this + 231) );
    if ( v15 > 0.0 )
    {
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 231); j = (unsigned int)(j + 1) )
      {
        *(float *)(*((_QWORD *)this + 116) + 4 * j) = *(float *)(*((_QWORD *)this + 116) + 4 * j) / v15;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x50u,
            (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
            j);
        }
      }
    }
  }
  if ( v20 )
    ATL::CCritSecLock::Unlock(&v19);
LABEL_34:
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v18);
  return (unsigned int)v6;
}
