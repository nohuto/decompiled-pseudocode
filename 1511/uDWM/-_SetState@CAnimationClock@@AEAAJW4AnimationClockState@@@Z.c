/*
 * XREFs of ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180004FE4
 * Callers:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180004ED4 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180004FE4 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180005280 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x180005458 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x18009DAD8 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180004ED4 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x180004FE4 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18000514C (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x180005324 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 *     ?OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800056F0 (-OnAnimationClockChanged@CAnimationClockCoordinator@@EEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z @ 0x18009DC6C (-s_GetElapsedMillsecondsFromTime@CAnimationClock@@CA_JPEBT_LARGE_INTEGER@@@Z.c)
 *     Template_jdd @ 0x18009DD14 (Template_jdd.c)
 */

__int64 __fastcall CAnimationClock::_SetState(union _LARGE_INTEGER *a1, __int64 a2)
{
  __int128 v2; // rax
  unsigned int LowPart; // edi
  DWORD v4; // ebp
  union _LARGE_INTEGER *v5; // rsi
  int v6; // ebx
  bool v7; // zf
  void (__fastcall ***QuadPart)(_QWORD, _OWORD *, _QWORD); // rcx
  DWORD v9; // ebp
  signed __int64 HighPart; // rdi
  _OWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+10h]
  void (__fastcall *v14)(_QWORD, _OWORD *, _QWORD); // [rsp+78h] [rbp+20h]

  *((_QWORD *)&v2 + 1) = a2;
  v13 = 0;
  LowPart = -1;
  v4 = DWORD2(v2);
  v5 = a1;
  if ( DWORD2(v2) == 1 )
  {
    LowPart = a1[16].LowPart;
    v6 = 0;
    goto LABEL_9;
  }
  if ( DWORD2(v2) == 2 )
  {
    a1 += 11;
    if ( a1->QuadPart )
    {
      *(_QWORD *)&v2 = CAnimationClock::s_GetElapsedMillsecondsFromTime(a1);
      if ( (__int64)v2 > 0 )
        LowPart = v2;
    }
    else
    {
      LowPart = 0;
    }
  }
  else if ( DWORD2(v2) != 3 )
  {
    if ( DWORD2(v2) != 4 )
    {
      if ( DWORD2(v2) == 5 || DWORD2(v2) == 6 )
      {
        LowPart = 1000;
      }
      else if ( DWORD2(v2) != 7 )
      {
        return (unsigned int)-2147418113;
      }
      goto LABEL_10;
    }
    LowPart = a1[16].HighPart;
    LODWORD(v2) = CAnimationClock::_TriggerAnimation((CAnimationClock *)a1);
    a1 = v5 + 11;
    v13 = v2;
    v6 = v2;
    if ( v5[11].QuadPart )
    {
      *(_QWORD *)&v2 = CAnimationClock::s_GetElapsedMillsecondsFromTime(a1);
      HighPart = (unsigned int)v5[16].HighPart;
      LODWORD(a1) = v2;
      v2 = (__int64)v2;
      if ( (__int64)abs64(v2) >= HighPart )
        LowPart = 0;
      else
        LowPart = HighPart - v2;
    }
LABEL_9:
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
LABEL_10:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_jdd((_DWORD)a1, DWORD2(v2), (_DWORD)v5 + 112, v5[10].LowPart, v4);
  v7 = v5[9].QuadPart == 0;
  v5[10].LowPart = v4;
  if ( !v7 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)&v5[3]);
    QuadPart = (void (__fastcall ***)(_QWORD, _OWORD *, _QWORD))v5[9].QuadPart;
    v12[0] = *(_OWORD *)&v5[14].LowPart;
    v14 = **QuadPart;
    if ( (char *)v14 == (char *)CAnimationClockCoordinator::OnAnimationClockChanged )
      CAnimationClockCoordinator::OnAnimationClockChanged(QuadPart, v12, v4);
    else
      v14(QuadPart, v12, v4);
    EnterCriticalSection((LPCRITICAL_SECTION)&v5[3]);
  }
  if ( v4 == v5[10].LowPart )
  {
    if ( LowPart == -1 )
      v6 = v13;
    else
      v6 = CAnimationClock::_SetTimer((CAnimationClock *)v5, LowPart);
    if ( v6 >= 0 )
    {
      v9 = v4 - 2;
      if ( v9 )
      {
        if ( v9 == 1 )
          return (unsigned int)CAnimationClock::_SetTime(v5, 0, 0LL);
      }
      else if ( LowPart == -1 )
      {
        CAnimationClock::_SetState(v5, 4LL);
      }
    }
  }
  else
  {
    return v13;
  }
  return (unsigned int)v6;
}
