/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140036C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 *     WPP_SF_q @ 0x14002B2DC (WPP_SF_q.c)
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
        (__int64)&WPP_07ed9d575cf0393b366f25ce5c5bddee_Traceguids,
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
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_07ed9d575cf0393b366f25ce5c5bddee_Traceguids);
  }
  return 0LL;
}
