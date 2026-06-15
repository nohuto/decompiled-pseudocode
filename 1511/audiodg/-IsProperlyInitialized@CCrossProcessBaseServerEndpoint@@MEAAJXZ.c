/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140037B30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::IsProperlyInitialized(CCrossProcessBaseServerEndpoint *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 50);
  if ( v1 )
  {
    _InterlockedExchange64((volatile __int64 *)this + 49, v1);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_d8fb3126b0185d15d45516e49e60f215_Traceguids,
        *((_QWORD *)this + 49));
    }
    if ( !*((_QWORD *)this + 49) )
      return 2147500037LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_d8fb3126b0185d15d45516e49e60f215_Traceguids);
  }
  return 0LL;
}
