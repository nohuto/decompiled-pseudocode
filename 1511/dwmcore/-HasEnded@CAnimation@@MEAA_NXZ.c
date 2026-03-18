/*
 * XREFs of ?HasEnded@CAnimation@@MEAA_NXZ @ 0x180083B60
 * Callers:
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800AB9D0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAnimation::HasEnded(CAnimation *this)
{
  return (*((_BYTE *)this + 96) & 2) != 0 || !*((_QWORD *)this + 13);
}
