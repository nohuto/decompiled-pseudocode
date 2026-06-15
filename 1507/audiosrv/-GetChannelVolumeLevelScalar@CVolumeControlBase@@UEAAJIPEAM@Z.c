/*
 * XREFs of ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x18006E6B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180031BDC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3)
{
  unsigned int v3; // ebx

  if ( a2 >= *((_DWORD *)this + 17) )
  {
    v3 = -2147024809;
LABEL_5:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Eu,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        v3);
    }
    return v3;
  }
  v3 = 0;
  if ( !a3 )
  {
    v3 = -2147467261;
    goto LABEL_5;
  }
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 5) )
    ATL::AtlThrowImpl(-2147024809);
  *a3 = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * a2));
  return v3;
}
