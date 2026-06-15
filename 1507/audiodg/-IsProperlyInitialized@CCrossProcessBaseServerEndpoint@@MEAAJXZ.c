/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140037990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::IsProperlyInitialized(CCrossProcessBaseServerEndpoint *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 50);
  if ( v1 )
  {
    _InterlockedExchange64((volatile __int64 *)this + 49, v1);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0xAu,
        (__int64)&WPP_922a60730360a173c64e82180a3fecc4_Traceguids,
        *((_QWORD *)this + 49));
    }
    if ( !*((_QWORD *)this + 49) )
      return 2147500037LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  else if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xBu,
      (__int64)&WPP_922a60730360a173c64e82180a3fecc4_Traceguids);
  }
  return 0LL;
}
