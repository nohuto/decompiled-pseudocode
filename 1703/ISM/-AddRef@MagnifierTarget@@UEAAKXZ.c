/*
 * XREFs of ?AddRef@MagnifierTarget@@UEAAKXZ @ 0x1800059C0
 * Callers:
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x1800072F0 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 *     ?AddRef@EdgeGestureTarget@@WBI@EAAKXZ @ 0x180007330 (-AddRef@EdgeGestureTarget@@WBI@EAAKXZ.c)
 *     ?AddRef@EdgeGestureTarget@@W7EAAKXZ @ 0x180007390 (-AddRef@EdgeGestureTarget@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MagnifierTarget::AddRef(MagnifierTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
