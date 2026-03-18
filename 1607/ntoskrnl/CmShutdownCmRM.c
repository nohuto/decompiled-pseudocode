/*
 * XREFs of CmShutdownCmRM @ 0x1404D9898
 * Callers:
 *     CmpTryToRundownHive @ 0x1400876A8 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 * Callees:
 *     CmpStopRMLog @ 0x1404D9AD4 (CmpStopRMLog.c)
 */

__int64 __fastcall CmShutdownCmRM(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 64) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
      if ( !*(_DWORD *)(a1 + 64) )
        CmpStopRMLog();
    }
  }
  LOBYTE(a2) = v2;
  return CmpRunDownCmRM(a1, a2);
}
