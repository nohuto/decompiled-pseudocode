/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18002241C
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800104C8 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010DA4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_180034D18);
  v3 = 0LL;
  if ( (int)v2 <= (int)qword_180034D48 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == (_DWORD)qword_180034D48 )
    {
      v3 = qword_180034D00;
    }
    else
    {
      if ( (int)v2 >= (int)qword_180034D48 )
      {
        ATL::_AtlRaiseException();
        JUMPOUT(0x180022480LL);
      }
      v3 = *((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&stru_180034D18);
  return v3;
}
