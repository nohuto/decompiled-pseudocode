/*
 * XREFs of ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x18000579C
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800056F0 (-OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180005850 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     Template_j @ 0x18009DCBC (Template_j.c)
 */

__int64 __fastcall CAnimationClockCoordinator::_ClearExpiredAnimationClocks(CAnimationClockCoordinator *this)
{
  int v1; // esi
  __int64 v2; // rdi
  __int64 v4; // rbp
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 20) )
  {
    if ( v1 < 0 )
      break;
    v4 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v2);
    if ( *(_DWORD *)(v4 + 80) == 7 )
    {
      v5 = *((_DWORD *)this + 20);
      if ( (unsigned int)v2 >= v5 )
      {
        v1 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
      }
      else
      {
        v6 = *((_QWORD *)this + 7);
        v7 = (unsigned int)v2;
        if ( (unsigned int)v2 < v5 - 1 )
        {
          do
          {
            v9 = (unsigned int)(v7 + 1);
            *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8 * v9);
            v7 = v9;
          }
          while ( (unsigned int)v9 < *((_DWORD *)this + 20) - 1 );
        }
        --*((_DWORD *)this + 20);
        v1 = 0;
        v10 = *(_OWORD *)(v4 + 112);
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          Template_j(v7, &UdwmAnimationClock_Destroy, &v10);
        CBaseObject::Release((CBaseObject *)v4);
      }
    }
    else
    {
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (unsigned int)v1;
}
