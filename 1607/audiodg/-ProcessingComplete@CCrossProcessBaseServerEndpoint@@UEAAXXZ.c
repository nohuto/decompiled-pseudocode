/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140013520
 * Callers:
 *     ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x1400134B0 (-PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 *     WPP_SF_q @ 0x14002B2DC (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x140039A54 (WPP_SF_dq.c)
 */

void __fastcall CCrossProcessBaseServerEndpoint::ProcessingComplete(
        CCrossProcessBaseServerEndpoint *this,
        __int64 a2,
        __int64 a3)
{
  signed __int32 v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r9

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, *((unsigned int *)this + 36), *((_QWORD *)this + 49));
  }
  if ( (*((_DWORD *)this + 36) & 0x40000) != 0 )
  {
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 7) + 156LL), 0, 0) & 1;
    if ( v4 )
    {
      v5 = *((_QWORD *)this + 49);
      if ( v5 )
      {
        _InterlockedExchange64((volatile __int64 *)this + 48, v5);
        *((_QWORD *)this + 49) = 0LL;
      }
    }
    v6 = *((_QWORD *)this + 48);
    if ( v6 )
    {
      if ( (*((_BYTE *)this + 144) & 1) == 0 || v4 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids, v6);
        }
        SetEvent(*((HANDLE *)this + 48));
      }
    }
    else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids);
    }
  }
}
