/*
 * XREFs of ?HasEnded@CAnimation@@MEAA_NXZ @ 0x1800396B0
 * Callers:
 *     ?IsAnimate@CAnimation@@UEAA_NPEA_N@Z @ 0x180039C50 (-IsAnimate@CAnimation@@UEAA_NPEA_N@Z.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800B02F0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::HasEnded(CAnimation *this)
{
  __int64 result; // rax

  if ( (*((_BYTE *)this + 176) & 2) != 0 )
    return 1LL;
  result = 0LL;
  if ( !*((_QWORD *)this + 23) )
    return 1LL;
  return result;
}
