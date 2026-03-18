/*
 * XREFs of ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z @ 0x1C002A130
 * Callers:
 *     GreSetSolidBrushLight @ 0x1C0059350 (GreSetSolidBrushLight.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C005B448 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     HmgLockAndModifyHandleType @ 0x1C005C2A0 (HmgLockAndModifyHandleType.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 */

HANDLELOCK *__fastcall HANDLELOCK::HANDLELOCK(HANDLELOCK *this, struct OBJECT *a2, int a3)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  HANDLELOCK::vLockHandle(this, (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000, a3, 0);
  return this;
}
