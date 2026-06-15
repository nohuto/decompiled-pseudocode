/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180031B60
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x18001CFD0 (-GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180031BDC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x180071214 (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevelScalar(CVolumeControlBase *this, float *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // rax
  float Wiper; // xmm0_4

  v2 = 0;
  if ( a2 )
  {
    v5 = *((unsigned int *)this + 16);
    if ( v5 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v5));
    *a2 = Wiper;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qdg(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        28LL,
        &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        this,
        *((_DWORD *)this + 16),
        Wiper);
    }
  }
  else
  {
    v2 = -2147467261;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Du,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        -2147467261);
    }
  }
  return v2;
}
