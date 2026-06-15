/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140014D80
 * Callers:
 *     ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140014D10 (-PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x14003ABC8 (WPP_SF_dq.c)
 */

void __fastcall CCrossProcessBaseServerEndpoint::ProcessingComplete(
        CCrossProcessBaseServerEndpoint *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r9

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, *((unsigned int *)this + 36), *((_QWORD *)this + 49));
  }
  if ( (*((_DWORD *)this + 36) & 0x40000) != 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 7) + 156LL), 0, 0) & 1) != 0 )
    {
      v4 = *((_QWORD *)this + 49);
      if ( v4 )
      {
        _InterlockedExchange64((volatile __int64 *)this + 48, v4);
        *((_QWORD *)this + 49) = 0LL;
      }
    }
    v5 = *((_QWORD *)this + 48);
    if ( v5 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, v5);
      }
      SetEvent(*((HANDLE *)this + 48));
    }
    else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids);
    }
  }
}
