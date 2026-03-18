/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C01E45C4
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01E5140 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0093234 (-MKHideMouseCursor@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void TurnOffMouseKeys(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx

  LODWORD(xmmword_1C0326F04) = xmmword_1C0326F04 & 0xFFFFFFFE;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (xmmword_1C0326F04 & 0x10) != 0 )
  {
    v0 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v0, *(_QWORD *)(v0 + 384), 0xEu, 0LL, 1u, 0LL, 0LL, 0LL);
  }
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
  PostEventMessageEx(v1, *(_QWORD *)(v1 + 384), 0xDu, 0LL, 0, 11LL, 3LL, 0LL);
}
