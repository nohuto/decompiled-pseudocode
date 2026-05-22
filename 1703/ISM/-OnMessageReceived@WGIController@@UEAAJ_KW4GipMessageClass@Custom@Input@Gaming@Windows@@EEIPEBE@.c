/*
 * XREFs of ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x180062930
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x180062CC4 (-NotifyCurrentGamepadReading@WGIController@@AEAAJXZ.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800634B4 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall WGIController::OnMessageReceived(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned int v8; // esi
  _BYTE *v9; // rdi
  int v10; // ebx
  _DWORD *v11; // rax
  DWORD TickCount; // eax
  _QWORD v14[236]; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+7A8h] [rbp+6A0h] BYREF

  WGIController::NotifyCurrentGamepadReading((WGIController *)(a1 - 16));
  if ( *(_BYTE *)(a1 + 176) && a6 >= 0x31 )
  {
    v8 = 0;
    v9 = (_BYTE *)(a7 + 32);
    do
    {
      if ( *v9 )
      {
        v10 = (unsigned __int8)*v9 + 44;
        QueryPerformanceCounter(&PerformanceCount);
        memset(v14, 0, sizeof(v14));
        v11 = *(_DWORD **)(a1 + 104);
        LODWORD(v14[0]) = 128;
        HIDWORD(v14[0]) = *v11;
        TickCount = GetTickCount();
        LODWORD(v14[5]) = 1888;
        LODWORD(v14[1]) = TickCount;
        v14[2] = PerformanceCount.QuadPart;
        v14[84] = *(_QWORD *)(a1 + 88);
        BYTE1(v14[87]) = 1;
        LODWORD(v14[88]) = v10;
        BYTE4(v14[88]) = 1;
        WGIController::NotifyInputReport((WGIController *)(a1 - 16), (struct InputInfo *)v14);
      }
      ++v8;
      ++v9;
    }
    while ( v8 < 0x11 );
  }
  return 0LL;
}
