/*
 * XREFs of ?Lock@?$CComCritSecLock@VCComCriticalSection@ATL@@@ATL@@QEAAJXZ @ 0x140032710
 * Callers:
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x140032684 (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCritSecLock<ATL::CComCriticalSection>::Lock(__int64 a1)
{
  __int64 result; // rax

  EnterCriticalSection(*(LPCRITICAL_SECTION *)a1);
  result = 0LL;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
