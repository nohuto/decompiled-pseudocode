/*
 * XREFs of ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x14003AA10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?AEWMILOG_CONTROL@@YAXKPEAXE_K@Z @ 0x140039560 (-AEWMILOG_CONTROL@@YAXKPEAXE_K@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14003A360 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14003D004 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 */

__int64 __fastcall CCrossProcessControl::Stop(CCrossProcessControl *this)
{
  int v2; // ebx
  CCrossProcessBaseEndpoint *v3; // rax
  int v4; // ebx
  __int64 v5; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 1) + 16LL));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) )
  {
    v3 = (CCrossProcessBaseEndpoint *)*((_QWORD *)this + 1);
    v4 = *(_DWORD *)(*((_QWORD *)v3 + 8) + 156LL);
    if ( CCrossProcessBaseEndpoint::IsValidFlags(v3, v4) )
    {
      if ( (v4 & 1) != 0 )
      {
        v2 = 0;
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 156LL), 0xFFFFFFFC);
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 136LL), 1);
        AERTUnlockZoneHeap(*(void **)(*((_QWORD *)this + 1) + 112LL));
        AEWMILOG_CONTROL(v5, this, 7u);
      }
      else
      {
        v2 = -2005139433;
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
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x22u,
      (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
