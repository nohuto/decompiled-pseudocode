/*
 * XREFs of ?SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z @ 0x180070860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x18007090C (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetVolumeLimitScalar(CVolumeControlBase *this, float a2)
{
  int v2; // edi
  unsigned int v3; // ebx

  v2 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 17) )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v3 >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      v2 = CVolumeUnit::SetVolumeLimitScalar((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * v3), a2);
      if ( v2 < 0 )
        break;
      if ( ++v3 >= *((_DWORD *)this + 17) )
        return (unsigned int)v2;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Bu,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        v2);
    }
  }
  return (unsigned int)v2;
}
