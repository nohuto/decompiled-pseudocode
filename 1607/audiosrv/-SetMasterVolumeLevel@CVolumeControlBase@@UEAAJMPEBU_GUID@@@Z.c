/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180058090
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180027010 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180029A08 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180056804 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qg_guid_ @ 0x18005916C (WPP_SF_qg_guid_.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(CVolumeControlBase *this, float a2, const struct _GUID *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  float v7; // xmm9_4
  float v8; // xmm8_4
  int v9; // xmm10_4
  int v10; // ebx
  int v11; // r8d
  unsigned __int64 v12; // rax
  float DB; // xmm0_4
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  float v16; // xmm3_4
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  float v19; // xmm0_4
  unsigned int v20; // eax
  float i; // xmm2_4
  __int64 v22; // rdx
  float v23; // xmm0_4
  LPCRITICAL_SECTION v25; // [rsp+30h] [rbp-68h] BYREF
  char v26; // [rsp+38h] [rbp-60h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v25, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  v5 = *((unsigned int *)this + 28);
  if ( v5 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = *((_QWORD *)this + 10) + 56 * v5;
  v7 = *(float *)(v6 + 8);
  v8 = *(float *)(v6 + 12);
  v9 = *(_DWORD *)(v6 + 16);
  if ( v7 > a2 || a2 > v8 )
  {
    v10 = -2147024809;
  }
  else
  {
    v10 = 0;
    if ( v5 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    if ( a2 != CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v5)) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qg_guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          22,
          v11,
          (_DWORD)this,
          COERCE_UNSIGNED_INT64(a2),
          (__int64)a3);
      }
      v12 = *((unsigned int *)this + 28);
      if ( v12 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v12));
      AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
      *((float *)this + 42) = DB;
      *((float *)this + 43) = v7;
      *((float *)this + 44) = v8;
      *((_DWORD *)this + 45) = v9;
      v14 = *((unsigned int *)this + 28);
      if ( v14 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v16 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v14));
      if ( v15 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v17 = *((_QWORD *)this + 10) + 56 * v15;
      if ( *(float *)(v17 + 8) > a2 || a2 > *(float *)(v17 + 12) )
      {
        v10 = -2147024809;
      }
      else
      {
        if ( v15 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v15), a2);
        v18 = *((unsigned int *)this + 28);
        if ( v18 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        v19 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v18));
        v20 = 0;
        for ( i = v19 - v16; v20 < *((_DWORD *)this + 29); ++v20 )
        {
          if ( v20 != *((_DWORD *)this + 28) )
          {
            if ( (unsigned __int64)v20 >= *((_QWORD *)this + 11) )
              ATL::AtlThrowImpl(-2147024809);
            v23 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * v20)) + i;
            CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v22), v23);
          }
        }
        v10 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
        if ( v10 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 48LL))(
            *((_QWORD *)this + 16),
            0LL,
            a3);
          goto LABEL_35;
        }
      }
      AudSrvTraceLoggingErrorHelper("CVolumeControlBase::SetMasterVolumeLevel", 602, v10);
    }
  }
LABEL_35:
  if ( v26 )
    ATL::CCritSecLock::Unlock(&v25);
  return (unsigned int)v10;
}
