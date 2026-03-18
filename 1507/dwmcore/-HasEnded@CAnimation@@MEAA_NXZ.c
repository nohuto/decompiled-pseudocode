/*
 * XREFs of ?HasEnded@CAnimation@@MEAA_NXZ @ 0x180046D40
 * Callers:
 *     ?IsAnimate@CAnimation@@UEAA_NPEA_N@Z @ 0x180047050 (-IsAnimate@CAnimation@@UEAA_NPEA_N@Z.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x18005CE68 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimation::HasEnded(CAnimation *this)
{
  __int64 result; // rax

  if ( (*((_BYTE *)this + 96) & 2) != 0 )
    return 1LL;
  result = 0LL;
  if ( !*((_QWORD *)this + 13) )
    return 1LL;
  return result;
}
