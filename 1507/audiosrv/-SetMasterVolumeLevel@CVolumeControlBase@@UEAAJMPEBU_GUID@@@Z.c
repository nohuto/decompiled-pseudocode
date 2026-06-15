/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180070290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180067CCC (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006E74C (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qg_guid_ @ 0x180071354 (WPP_SF_qg_guid_.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(CVolumeControlBase *this, float a2, const struct _GUID *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  float DB; // xmm3_4
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  float v15; // xmm0_4
  unsigned int v16; // eax
  float i; // xmm2_4
  __int64 v18; // rdx
  float v19; // xmm0_4

  v4 = *((unsigned int *)this + 16);
  if ( v4 >= *((_QWORD *)this + 5) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = *((_QWORD *)this + 4) + 56 * v4;
  if ( *(float *)(v6 + 8) <= a2 && a2 <= *(float *)(v6 + 12) )
  {
    v7 = 0;
    if ( v4 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    if ( a2 == CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v4)) )
      return v7;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qg_guid_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        32,
        v8,
        (_DWORD)this,
        COERCE_UNSIGNED_INT64(a2),
        v8);
    }
    v9 = *((unsigned int *)this + 16);
    if ( v9 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v9));
    if ( v11 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    v13 = *((_QWORD *)this + 4) + 56 * v11;
    if ( *(float *)(v13 + 8) > a2 || a2 > *(float *)(v13 + 12) )
    {
      v7 = -2147024809;
    }
    else
    {
      if ( v11 >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v11), a2);
      v14 = *((unsigned int *)this + 16);
      if ( v14 >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      v15 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v14));
      v16 = 0;
      for ( i = v15 - DB; v16 < *((_DWORD *)this + 17); ++v16 )
      {
        if ( v16 != *((_DWORD *)this + 16) )
        {
          if ( (unsigned __int64)v16 >= *((_QWORD *)this + 5) )
            ATL::AtlThrowImpl(-2147024809);
          v19 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * v16)) + i;
          CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v18), v19);
        }
      }
      v7 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
      if ( (v7 & 0x80000000) == 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 10) + 48LL))(
          *((_QWORD *)this + 10),
          0LL,
          a3);
        return v7;
      }
      v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v10 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v10 + 28) & 0x10000) != 0
      && *(_BYTE *)(v10 + 25) >= 2u )
    {
      WPP_SF_D(*(_QWORD *)(v10 + 16), 0x21u, (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids, v7);
    }
    return v7;
  }
  return 2147942487LL;
}
