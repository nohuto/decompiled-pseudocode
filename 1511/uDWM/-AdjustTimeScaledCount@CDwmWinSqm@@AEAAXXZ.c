/*
 * XREFs of ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x1800825D0
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002FC50 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031F30 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x1800829A8 (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetTickCountDifference@CDwmWinSqm@@AEAAKKK@Z @ 0x180082740 (-GetTickCountDifference@CDwmWinSqm@@AEAAKKK@Z.c)
 */

void __fastcall CDwmWinSqm::AdjustTimeScaledCount(CDwmWinSqm *this)
{
  DWORD TickCount; // eax
  CDwmWinSqm *v2; // rcx
  unsigned int v3; // r8d
  unsigned int TickCountDifference; // eax
  unsigned int v5; // r9d

  TickCount = GetTickCount();
  if ( dword_1800BF1FC )
  {
    v3 = dword_1800BF200;
  }
  else
  {
    dword_1800BF1FC = TickCount;
    v3 = TickCount;
  }
  TickCountDifference = CDwmWinSqm::GetTickCountDifference(v2, TickCount, v3);
  dword_1800BF200 = v5;
  *(double *)&xmmword_1800BF208 = *(double *)&xmmword_1800BF208 + (double)(int)(TickCountDifference * dword_1800BF1F0);
  *((double *)&xmmword_1800BF208 + 1) = *((double *)&xmmword_1800BF208 + 1)
                                      + (double)(int)(dword_1800BF1F4 * TickCountDifference);
}
