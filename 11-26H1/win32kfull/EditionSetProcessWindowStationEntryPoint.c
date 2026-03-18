/*
 * XREFs of EditionSetProcessWindowStationEntryPoint @ 0x14022F2D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x14022F3A0 (xxxSetProcessWindowStation.c)
 */

__int64 __fastcall EditionSetProcessWindowStationEntryPoint(HANDLE SourceHandle)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 1;
  EnterCrit(1LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v5 = *(_QWORD *)(CurrentProcessWin32Process + 664);
  if ( (int)xxxSetProcessWindowStation(SourceHandle) >= 0 )
  {
    v8 = PsGetCurrentProcessWin32Process(v6);
    if ( v8 )
    {
      v6 = -*(_QWORD *)v8;
      v8 &= -(__int64)(*(_QWORD *)v8 != 0LL);
    }
    if ( v5 != *(_QWORD *)(v8 + 664) )
    {
      v9 = PsGetCurrentProcessWin32Process(v6);
      if ( v9 )
      {
        v6 = -*(_QWORD *)v9;
        v9 &= -(__int64)(*(_QWORD *)v9 != 0LL);
      }
      *(_QWORD *)(v9 + 808) |= 0x4000000uLL;
    }
  }
  else
  {
    v2 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v2;
}
