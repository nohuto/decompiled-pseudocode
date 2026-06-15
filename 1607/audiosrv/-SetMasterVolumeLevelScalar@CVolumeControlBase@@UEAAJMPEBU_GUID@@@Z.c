/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180058350
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180026EF8 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180027010 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180027038 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180029A08 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180056804 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qdg @ 0x180058FD8 (WPP_SF_qdg.c)
 *     WPP_SF_qdgg @ 0x180059030 (WPP_SF_qdgg.c)
 *     WPP_SF_qg_guid_ @ 0x18005916C (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x180059230 (WPP_SF_qggg.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rax
  int v7; // r8d
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  int v10; // r8d
  float DB; // xmm10_4
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  CVolumeUnit *v14; // rax
  int v15; // xmm7_4
  int v16; // xmm8_4
  int v17; // xmm9_4
  float v18; // xmm0_4
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  float v21; // xmm7_4
  __int64 v22; // rax
  double v23; // xmm2_8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // xmm4_8
  unsigned int i; // ebx
  __int64 v28; // rax
  float v29; // xmm6_4
  __int64 v30; // rax
  double v31; // xmm2_8
  LPCRITICAL_SECTION v33; // [rsp+40h] [rbp-78h] BYREF
  char v34; // [rsp+48h] [rbp-70h]

  v5 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v33, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    v5 = -2147024809;
  }
  else
  {
    v6 = *((unsigned int *)this + 28);
    if ( v6 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    if ( a2 != CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v6)) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qg_guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          23,
          v7,
          (_DWORD)this,
          COERCE_UNSIGNED_INT64(a2),
          (__int64)a3);
      }
      v8 = *((unsigned int *)this + 28);
      if ( v8 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v8));
      if ( (CAudioSession **)v9 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v9 + 28) & 0x10000) != 0
        && *(_BYTE *)(v9 + 25) >= 4u )
      {
        WPP_SF_qdg(*(_QWORD *)(v9 + 16), 24LL, &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids, this, v10, a2);
      }
      v12 = *((unsigned int *)this + 28);
      if ( v12 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v5 = CVolumeUnit::SetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v12), a2);
      if ( v5 < 0 )
        goto LABEL_45;
      v13 = *((unsigned int *)this + 28);
      if ( v13 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v14 = (CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v13);
      v15 = *((_DWORD *)v14 + 2);
      v16 = *((_DWORD *)v14 + 3);
      v17 = *((_DWORD *)v14 + 4);
      v18 = CVolumeUnit::GetDB(v14);
      AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
      *((float *)this + 42) = v18;
      *((_DWORD *)this + 43) = v15;
      *((_DWORD *)this + 44) = v16;
      *((_DWORD *)this + 45) = v17;
      v19 = *((unsigned int *)this + 28);
      if ( v19 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v21 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v19)) - DB;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        if ( v20 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        v23 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v20));
        WPP_SF_qggg(*(_QWORD *)(v22 + 16), v24, v25, this, v21, *(_QWORD *)&v23, v26);
      }
      for ( i = 0; i < *((_DWORD *)this + 29); ++i )
      {
        if ( i != *((_DWORD *)this + 28) )
        {
          if ( (unsigned __int64)i >= *((_QWORD *)this + 11) )
            ATL::AtlThrowImpl(-2147024809);
          v29 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * i)) + v21;
          if ( (CAudioSession **)v28 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(v28 + 28) & 0x10000) != 0
            && *(_BYTE *)(v28 + 25) >= 4u )
          {
            if ( (unsigned __int64)i >= *((_QWORD *)this + 11) )
              ATL::AtlThrowImpl(-2147024809);
            v31 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * i));
            WPP_SF_qdgg(
              *(_QWORD *)(v30 + 16),
              26LL,
              &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids,
              this,
              i,
              *(_QWORD *)&v31,
              v29);
          }
          if ( (unsigned __int64)i >= *((_QWORD *)this + 11) )
            ATL::AtlThrowImpl(-2147024809);
          CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * i), v29);
        }
      }
      v5 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
      if ( v5 < 0 )
LABEL_45:
        AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetMasterVolumeLevelScalar", 754, v5);
      else
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 48LL))(
          *((_QWORD *)this + 16),
          0LL,
          a3);
    }
  }
  if ( v34 )
    ATL::CCritSecLock::Unlock(&v33);
  return (unsigned int)v5;
}
