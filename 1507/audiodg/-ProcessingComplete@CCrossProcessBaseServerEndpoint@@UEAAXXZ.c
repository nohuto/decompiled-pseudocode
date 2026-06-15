/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140015BC0
 * Callers:
 *     ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140015B50 (-PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x14003ABA8 (WPP_SF_dq.c)
 */

void __fastcall CCrossProcessBaseServerEndpoint::ProcessingComplete(
        CCrossProcessBaseServerEndpoint *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r9

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 5u )
  {
    WPP_SF_dq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      a2,
      a3,
      *((unsigned int *)this + 36),
      *((_QWORD *)this + 49));
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
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 5u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          22LL,
          &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
          v5);
      }
      SetEvent(*((HANDLE *)this + 48));
    }
    else if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 5u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        23LL,
        &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids);
    }
  }
}
