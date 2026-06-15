/*
 * XREFs of ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x18006B674
 * Callers:
 *     ?RemoveAce@CDacl@ATL@@UEAAXI@Z @ 0x18006B660 (-RemoveAce@CDacl@ATL@@UEAAXI@Z.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x180008148 (-CallDestructors@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@V.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

errno_t __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // rsi
  errno_t result; // eax
  unsigned __int64 v7; // rsi

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  result = (unsigned int)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
                           *a1 + 8 * a2,
                           1uLL);
  v7 = v5 - v2;
  if ( v7 )
  {
    result = memmove_s((void *const)(*a1 + 8 * a2), 8 * v7, (const void *const)(*a1 + 8 * v2), 8 * v7);
    if ( result )
    {
      if ( result == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( result == 22 || result == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( result != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  --a1[1];
  return result;
}
