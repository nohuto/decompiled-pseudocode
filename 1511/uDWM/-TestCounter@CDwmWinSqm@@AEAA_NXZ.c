/*
 * XREFs of ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x180082980
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002FC50 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031F30 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x1800829A8 (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDwmWinSqm::TestCounter(CDwmWinSqm *this)
{
  if ( ++dword_1800BF1F8 == 50 )
  {
    dword_1800BF1F8 = 0;
    return 1;
  }
  else
  {
    return 0;
  }
}
