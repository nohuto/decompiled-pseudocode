/*
 * XREFs of ?Reset@CCrossProcessControl@@UEAAJXZ @ 0x14003A5A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXE_K@Z @ 0x1400395E0 (-AEWMILOG_CONTROL@@YAXKPEAXE_K@Z.c)
 *     ?DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ @ 0x140039894 (-DrainAndResetQueue@CCrossProcessBaseEndpoint@@IEAAXXZ.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14003A3E0 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Reset(CCrossProcessControl *this)
{
  int v2; // ebx
  CCrossProcessBaseEndpoint *v3; // rax
  int v4; // esi
  __int64 v5; // rcx

  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v3 = (CCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
    v4 = *(_DWORD *)(*((_QWORD *)v3 + 8) + 156LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(v3, v4) )
    {
      if ( (v4 & 1) != 0 )
      {
        v2 = -2005139434;
      }
      else
      {
        WaitForSingleObject(*(HANDLE *)(*((_QWORD *)this + 1) + 120LL), 0x3E8u);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 16LL), 0LL);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 8LL), 0LL);
        _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 144LL), 0LL);
        *(_QWORD *)(*((_QWORD *)this + 1) + 160LL) = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 1) + 168LL) = 0LL;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 136LL), 1);
        CCrossProcessBaseEndpoint::DrainAndResetQueue(*((CCrossProcessBaseEndpoint **)this + 1));
        AEWMILOG_CONTROL(v5, this, 8u);
      }
    }
    else
    {
      v2 = -2005139387;
    }
  }
  else
  {
    v2 = -2005139437;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( v2 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, v2);
  }
  return (unsigned int)v2;
}
