/*
 * XREFs of ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x18006E4F8
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180072330 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180031BDC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CVolumeControlBase::FillLevels(CVolumeControlBase *this, int a2, float *a3)
{
  __int64 i; // rbx

  if ( a2 == *((_DWORD *)this + 17) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 17); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned __int64)(unsigned int)i >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      a3[i] = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * (unsigned int)i));
    }
  }
}
