/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00B7B48
 * Callers:
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C005CB6C (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00B7BC8 (-vMakeIso@DC@@QEAAXXZ.c)
 * Callees:
 *     UserGetCurrentProcessDpiAwareness @ 0x1C0070540 (UserGetCurrentProcessDpiAwareness.c)
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = -1;
  UserGetCurrentProcessDpiAwareness(&v3);
  if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 1) == 0 )
    return *(unsigned int *)(*(_QWORD *)this + 2200LL);
  result = 96LL;
  if ( (unsigned int)(v3 - 1) <= 1 )
    return *(unsigned int *)(*(_QWORD *)this + 2200LL);
  return result;
}
