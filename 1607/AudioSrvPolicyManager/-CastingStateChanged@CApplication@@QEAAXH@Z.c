/*
 * XREFs of ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x18000D724
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180014404 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x180014FC0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     WPP_SF_dd @ 0x180005574 (WPP_SF_dd.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CApplication::CastingStateChanged(CApplication *this, int a2)
{
  _UNKNOWN **v4; // rcx
  bool v5; // cc
  int v6; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)this + 128) += a2;
  v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = *((_DWORD *)this + 128);
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, a2, v6);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v5 = *((_DWORD *)this + 128) <= 0;
  if ( *((int *)this + 128) < 0 )
  {
    if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000000) != 0 && *((_BYTE *)v4 + 25) >= 2u )
      WPP_SF_((TRACEHANDLE)v4[2], 0x23u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids);
    *((_DWORD *)this + 128) = 0;
    v5 = *((_DWORD *)this + 128) <= 0;
  }
  if ( v5 )
    *((_DWORD *)this + 28) &= ~8u;
  else
    *((_DWORD *)this + 28) |= 8u;
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
