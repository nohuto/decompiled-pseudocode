/*
 * XREFs of ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x18006EB20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeRange(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5)
{
  unsigned int v5; // ebx
  float *v6; // rcx

  v5 = -2147467261;
  if ( a3 && a4 && a5 )
  {
    if ( a2 == -1 )
      a2 = *((_DWORD *)this + 16);
    if ( a2 < *((_DWORD *)this + 17) )
    {
      if ( (unsigned __int64)a2 >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      v6 = (float *)(*((_QWORD *)this + 4) + 56LL * a2);
      v5 = 0;
      *a3 = v6[2];
      *a4 = v6[3];
      *a5 = v6[4];
      return v5;
    }
    v5 = -2147024809;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xDu,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      v5);
  }
  return v5;
}
