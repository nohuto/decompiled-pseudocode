/*
 * XREFs of ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18006EA50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006E74C (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qdg @ 0x180071214 (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevel(CVolumeControlBase *this, float *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  float DB; // xmm0_4
  float *v6; // rdx

  v2 = -2147467261;
  if ( a2 )
  {
    v3 = *((unsigned int *)this + 16);
    if ( v3 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v3));
    *v6 = DB;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qdg(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        26LL,
        &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        v4,
        *(_DWORD *)(v4 + 64),
        DB);
    }
    return 0;
  }
  else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Bu,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      -2147467261);
  }
  return v2;
}
