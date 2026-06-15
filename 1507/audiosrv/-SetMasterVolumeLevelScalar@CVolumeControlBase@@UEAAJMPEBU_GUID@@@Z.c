/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x1800704F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180031BDC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180067CCC (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180067CF0 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006E74C (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qdg @ 0x180071214 (WPP_SF_qdg.c)
 *     WPP_SF_qdgg @ 0x18007126C (WPP_SF_qdgg.c)
 *     WPP_SF_qg_guid_ @ 0x180071354 (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x180071418 (WPP_SF_qggg.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3)
{
  int v3; // esi
  unsigned __int64 v6; // rax
  int v7; // r8d
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  int v10; // r8d
  float DB; // xmm8_4
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  float v15; // xmm7_4
  __int64 v16; // rax
  double v17; // xmm2_8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // xmm4_8
  unsigned int i; // ebx
  __int64 v22; // rax
  float v23; // xmm6_4
  __int64 v24; // rax
  double v25; // xmm2_8

  v3 = 0;
  if ( a2 < 0.0 || a2 > 1.0 )
    return 2147942487LL;
  v6 = *((unsigned int *)this + 16);
  if ( v6 >= *((_QWORD *)this + 5) )
    ATL::AtlThrowImpl(-2147024809);
  if ( a2 != CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v6)) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qg_guid_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        35,
        v7,
        (_DWORD)this,
        COERCE_UNSIGNED_INT64(a2),
        (__int64)a3);
    }
    v8 = *((unsigned int *)this + 16);
    if ( v8 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v8));
    if ( (struct _GUID *)v9 != &WPP_GLOBAL_Control && (*(_DWORD *)(v9 + 28) & 0x10000) != 0 && *(_BYTE *)(v9 + 25) >= 4u )
      WPP_SF_qdg(*(_QWORD *)(v9 + 16), 36LL, &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids, this, v10, a2);
    v12 = *((unsigned int *)this + 16);
    if ( v12 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    v3 = CVolumeUnit::SetWiper((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v12), a2);
    if ( v3 < 0 )
      goto LABEL_44;
    v13 = *((unsigned int *)this + 16);
    if ( v13 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    v15 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v13)) - DB;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      if ( v14 >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      v17 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v14));
      WPP_SF_qggg(*(_QWORD *)(v16 + 16), v18, v19, this, v15, *(_QWORD *)&v17, v20);
    }
    for ( i = 0; i < *((_DWORD *)this + 17); ++i )
    {
      if ( i != *((_DWORD *)this + 16) )
      {
        if ( (unsigned __int64)i >= *((_QWORD *)this + 5) )
          ATL::AtlThrowImpl(-2147024809);
        v23 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * i)) + v15;
        if ( (struct _GUID *)v22 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(v22 + 28) & 0x10000) != 0
          && *(_BYTE *)(v22 + 25) >= 4u )
        {
          if ( (unsigned __int64)i >= *((_QWORD *)this + 5) )
            ATL::AtlThrowImpl(-2147024809);
          v25 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * i));
          WPP_SF_qdgg(
            *(_QWORD *)(v24 + 16),
            38LL,
            &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
            this,
            i,
            *(_QWORD *)&v25,
            v23);
        }
        if ( (unsigned __int64)i >= *((_QWORD *)this + 5) )
          ATL::AtlThrowImpl(-2147024809);
        CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * i), v23);
      }
    }
    v3 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
    if ( v3 < 0 )
    {
LABEL_44:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x27u,
          (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
          v3);
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 10) + 48LL))(
        *((_QWORD *)this + 10),
        0LL,
        a3);
    }
  }
  return (unsigned int)v3;
}
