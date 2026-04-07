/*
 * XREFs of ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x180083158
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C660 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D740 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x180083180 (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDwmWinSqm::TestCounter(CDwmWinSqm *this)
{
  if ( ++dword_1800BB208 == 50 )
  {
    dword_1800BB208 = 0;
    return 1;
  }
  else
  {
    return 0;
  }
}
