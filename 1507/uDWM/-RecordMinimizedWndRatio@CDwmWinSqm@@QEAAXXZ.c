/*
 * XREFs of ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x18007AE94
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CAC0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EDB0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007AF7C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetTickCountDifference@CDwmWinSqm@@AEAAKKK@Z @ 0x18007AD14 (-GetTickCountDifference@CDwmWinSqm@@AEAAKKK@Z.c)
 */

void __fastcall CDwmWinSqm::RecordMinimizedWndRatio(CDwmWinSqm *this)
{
  DWORD TickCount; // ebx
  CDwmWinSqm *v2; // rcx
  int TickCountDifference; // eax
  float v4; // xmm1_4
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  TickCount = GetTickCount();
  TickCountDifference = CDwmWinSqm::GetTickCountDifference(v2, TickCount, dword_1800BD1EC);
  if ( TickCountDifference )
  {
    v9 = 0;
    v5 = 1;
    v7 = 1LL;
    v4 = *(double *)&xmmword_1800BD1F8 / (double)TickCountDifference;
    v6 = (unsigned int)(int)(float)(v4 + 0.5);
    v8 = (int)(float)((float)(*((double *)&xmmword_1800BD1F8 + 1) / (double)TickCountDifference) + 0.5);
    WinSqmAddToStream(0LL, 3332LL, 2LL, &v5);
  }
  dword_1800BD1EC = TickCount;
  xmmword_1800BD1F8 = 0LL;
}
