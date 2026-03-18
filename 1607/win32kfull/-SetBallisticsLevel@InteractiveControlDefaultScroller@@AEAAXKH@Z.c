/*
 * XREFs of ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C023F92C
 * Callers:
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@@Z @ 0x1C023F62C (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAVInteractiveControlDevice@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C023F99C (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

void __fastcall InteractiveControlDefaultScroller::SetBallisticsLevel(
        InteractiveControlDefaultScroller *this,
        unsigned int a2,
        int a3)
{
  __int64 v3; // rdi
  int v5; // ebx
  int v6; // ecx

  v3 = a2;
  if ( *((_DWORD *)this + 16) == 2 )
    v3 = 3LL;
  if ( *((_DWORD *)this + 6) != (_DWORD)v3 || a3 )
  {
    *((_DWORD *)this + 6) = v3;
    v5 = *((_DWORD *)InteractiveControlManager::Instance() + 43);
    if ( v5 == *((_DWORD *)InteractiveControlManager::Instance() + 44) )
      v6 = dword_1C0334724[2 * v3];
    else
      v6 = *((_DWORD *)InteractiveControlManager::Instance() + 43);
    *((_DWORD *)this + 7) = v6;
  }
}
