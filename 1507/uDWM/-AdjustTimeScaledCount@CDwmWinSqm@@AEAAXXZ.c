/*
 * XREFs of ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x18007ABA4
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CAC0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EDB0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007AF7C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetTickCountDifference@CDwmWinSqm@@AEAAKKK@Z @ 0x18007AD14 (-GetTickCountDifference@CDwmWinSqm@@AEAAKKK@Z.c)
 */

void __fastcall CDwmWinSqm::AdjustTimeScaledCount(CDwmWinSqm *this)
{
  DWORD TickCount; // eax
  CDwmWinSqm *v2; // rcx
  unsigned int v3; // r8d
  unsigned int TickCountDifference; // eax
  unsigned int v5; // r9d

  TickCount = GetTickCount();
  if ( dword_1800BD1EC )
  {
    v3 = dword_1800BD1F0;
  }
  else
  {
    dword_1800BD1EC = TickCount;
    v3 = TickCount;
  }
  TickCountDifference = CDwmWinSqm::GetTickCountDifference(v2, TickCount, v3);
  dword_1800BD1F0 = v5;
  *(double *)&xmmword_1800BD1F8 = *(double *)&xmmword_1800BD1F8 + (double)(int)(TickCountDifference * dword_1800BD1E0);
  *((double *)&xmmword_1800BD1F8 + 1) = *((double *)&xmmword_1800BD1F8 + 1)
                                      + (double)(int)(dword_1800BD1E4 * TickCountDifference);
}
