/*
 * XREFs of ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x180062810
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x180062CC4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJXZ.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800634B4 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall WGIController::OnKeyReceived(WGIController *this, __int64 a2, unsigned __int8 a3, char a4)
{
  _DWORD *v7; // rax
  DWORD TickCount; // eax
  _QWORD v10[236]; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+7A8h] [rbp+6A0h] BYREF

  if ( !*((_QWORD *)this + 13) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 190, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( a3 == 91 )
  {
    WGIController::NotifyCurrentGamepadReading((WGIController *)((char *)this - 16));
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    memset(v10, 0, sizeof(v10));
    v7 = (_DWORD *)*((_QWORD *)this + 13);
    LODWORD(v10[0]) = 4;
    HIDWORD(v10[0]) = *v7;
    TickCount = GetTickCount();
    LODWORD(v10[5]) = 1888;
    LODWORD(v10[1]) = TickCount;
    v10[2] = PerformanceCount.QuadPart;
    v10[84] = *((_QWORD *)this + 11);
    WORD1(v10[88]) = a3;
    WORD2(v10[88]) = 65 - (a4 != 0);
    WGIController::NotifyInputReport((WGIController *)((char *)this - 16), (struct InputInfo *)v10);
  }
  return 0LL;
}
