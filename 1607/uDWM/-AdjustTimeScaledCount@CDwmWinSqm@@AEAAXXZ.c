/*
 * XREFs of ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x180082DBC
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C660 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x180083180 (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetTickCountDifference@CDwmWinSqm@@AEAAKKK@Z @ 0x180082F2C (-GetTickCountDifference@CDwmWinSqm@@AEAAKKK@Z.c)
 */

void __fastcall CDwmWinSqm::AdjustTimeScaledCount(CDwmWinSqm *this)
{
  DWORD TickCount; // eax
  CDwmWinSqm *v2; // rcx
  unsigned int v3; // r8d
  unsigned int TickCountDifference; // eax
  unsigned int v5; // r9d

  TickCount = GetTickCount();
  if ( dword_1800BB20C )
  {
    v3 = dword_1800BB210;
  }
  else
  {
    dword_1800BB20C = TickCount;
    v3 = TickCount;
  }
  TickCountDifference = CDwmWinSqm::GetTickCountDifference(v2, TickCount, v3);
  dword_1800BB210 = v5;
  *(double *)&xmmword_1800BB218 = *(double *)&xmmword_1800BB218 + (double)(int)(TickCountDifference * dword_1800BB200);
  *((double *)&xmmword_1800BB218 + 1) = *((double *)&xmmword_1800BB218 + 1)
                                      + (double)(int)(dword_1800BB204 * TickCountDifference);
}
