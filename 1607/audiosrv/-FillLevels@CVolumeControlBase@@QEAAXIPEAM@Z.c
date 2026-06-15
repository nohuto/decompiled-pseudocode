/*
 * XREFs of ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x18002D8EC
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180033B00 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180026EF8 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CVolumeControlBase::FillLevels(CVolumeControlBase *this, int a2, float *a3)
{
  __int64 i; // rbx

  if ( a2 == *((_DWORD *)this + 29) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned __int64)(unsigned int)i >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      a3[i] = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * (unsigned int)i));
    }
  }
}
