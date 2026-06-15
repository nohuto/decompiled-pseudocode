/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x140034AC8
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x14002A610 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     ?Lock@?$CComCritSecLock@VCComCriticalSection@ATL@@@ATL@@QEAAJXZ @ 0x140034B54 (-Lock@-$CComCritSecLock@VCComCriticalSection@ATL@@@ATL@@QEAAJXZ.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v2 = a2;
  lpCriticalSection = &stru_140055CD8;
  v6 = 0;
  if ( (int)ATL::CComCritSecLock<ATL::CComCriticalSection>::Lock(&lpCriticalSection) < 0
    || (int)v2 > dword_140055D08
    || (int)v2 < 0 )
  {
    v3 = 0LL;
  }
  else if ( (_DWORD)v2 == dword_140055D08 )
  {
    v3 = qword_140055CC0;
  }
  else
  {
    if ( (int)v2 >= dword_140055D08 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    v3 = *((_QWORD *)qword_140055D00 + v2);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
