/*
 * XREFs of ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x18007AF54
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002CAC0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EDB0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007AF7C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDwmWinSqm::TestCounter(CDwmWinSqm *this)
{
  if ( ++dword_1800BD1E8 == 50 )
  {
    dword_1800BD1E8 = 0;
    return 1;
  }
  else
  {
    return 0;
  }
}
