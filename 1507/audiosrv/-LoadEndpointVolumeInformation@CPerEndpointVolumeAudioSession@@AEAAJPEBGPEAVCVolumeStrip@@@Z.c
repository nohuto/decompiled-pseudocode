/*
 * XREFs of ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x180079A2C
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x180079340 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180010610 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180067E84 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180067ECC (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_dg @ 0x18007118C (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x1800711D8 (WPP_SF_g.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        struct CVolumeStrip *a3)
{
  __int64 v3; // rax
  int v6; // edi
  _DWORD *v7; // rbx
  __int64 i; // r12
  float v9; // xmm0_4
  HANDLE OwningThread; // rcx
  unsigned __int64 RecursionCount; // rcx
  LPVOID v12; // rax
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
    || (v6 = CAudioSession::SetMute((CAudioSession *)this, v22, (struct _GUID *)&EVENTCONTEXT_AUDIOSUBSYSTEM, 1), v6 < 0)
    || (v6 = (*(__int64 (__fastcall **)(struct CVolumeStrip *, float *))(*(_QWORD *)a3 + 120LL))(a3, &v23), v6 < 0) )
  {
LABEL_30:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x51u,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
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
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v19, this + 18);
  v9 = v23;
  *(float *)&this[19].DebugInfo = v23;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_g(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x4Fu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      v9);
  }
  OwningThread = this[19].OwningThread;
  this[19].RecursionCount = (int)v21;
  operator delete(OwningThread);
  RecursionCount = (unsigned int)this[19].RecursionCount;
  this[19].OwningThread = 0LL;
  v12 = operator new(saturated_mul(RecursionCount, 4uLL));
  this[19].OwningThread = v12;
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
  if ( this[19].RecursionCount )
  {
    do
    {
      v13[v14] = v7[v14];
      v13 = this[19].OwningThread;
      if ( *(float *)&v13[v14] > v15 )
        v15 = *(float *)&v13[v14];
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (unsigned int)v14 < this[19].RecursionCount );
    if ( v15 > 0.0 )
    {
      for ( j = 0LL; (unsigned int)j < this[19].RecursionCount; j = (unsigned int)(j + 1) )
      {
        *((float *)this[19].OwningThread + j) = *((float *)this[19].OwningThread + j) / v15;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_dg(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x50u,
            (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
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
