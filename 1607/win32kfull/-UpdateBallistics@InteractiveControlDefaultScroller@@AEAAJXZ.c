/*
 * XREFs of ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C023F99C
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023F134 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C023F92C (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::UpdateBallistics(InteractiveControlDefaultScroller *this)
{
  int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // edx
  struct InteractiveControlDefaultScroller::BallisticsConfig near **v5; // rcx
  __int64 v6; // rax

  if ( *((_QWORD *)this + 1) - *((_QWORD *)this + 5) >= (unsigned __int64)*((int *)InteractiveControlManager::Instance()
                                                                          + 49) )
  {
    v2 = *((_DWORD *)InteractiveControlManager::Instance() + 50);
    v3 = (unsigned int)(v2 * *((_DWORD *)this + 8)) / *((_DWORD *)InteractiveControlManager::Instance() + 49);
    v4 = 0;
    v5 = &InteractiveControlDefaultScroller::s_ballistics;
    while ( v3 > *(_DWORD *)v5 && *(_DWORD *)v5 )
    {
      ++v4;
      ++v5;
      if ( v4 == 4 )
        goto LABEL_8;
    }
    InteractiveControlDefaultScroller::SetBallisticsLevel(this, v4, 0);
LABEL_8:
    v6 = *((_QWORD *)this + 1);
    *((_DWORD *)this + 8) = 0;
    *((_QWORD *)this + 5) = v6;
  }
  *((_DWORD *)this + 8) += abs32(*((_DWORD *)this + 17));
  return 0LL;
}
