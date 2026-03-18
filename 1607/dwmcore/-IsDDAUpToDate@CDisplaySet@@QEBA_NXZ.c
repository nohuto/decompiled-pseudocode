/*
 * XREFs of ?IsDDAUpToDate@CDisplaySet@@QEBA_NXZ @ 0x180036480
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z @ 0x18003CC2C (-UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z.c)
 * Callees:
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18003466C (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 */

char __fastcall CDisplaySet::IsDDAUpToDate(CDisplaySet *this)
{
  __int64 v1; // rdi
  char v3; // bl

  v1 = 0LL;
  v3 = 1;
  if ( *((_DWORD *)this + 18) )
  {
    while ( !CDisplay::HasDDAChanged(*(CDisplay **)(*((_QWORD *)this + 6) + 8 * v1)) )
    {
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= *((_DWORD *)this + 18) )
        return v3;
    }
    return 0;
  }
  return v3;
}
