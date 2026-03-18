/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C01EDEAC
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01EE990 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C01357F4 (-MKHideMouseCursor@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void TurnOffMouseKeys(void)
{
  __int64 v0; // rcx
  __int64 v1; // rcx

  LODWORD(xmmword_1C0323904) = xmmword_1C0323904 & 0xFFFFFFFE;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (xmmword_1C0323904 & 0x10) != 0 )
  {
    v0 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v0, *(_QWORD *)(v0 + 392), 0xEu, 0LL, 1u, 0LL, 0LL, 0LL);
  }
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
  PostEventMessageEx(v1, *(_QWORD *)(v1 + 392), 0xDu, 0LL, 0, (LARGE_INTEGER)11LL, (LARGE_INTEGER)3LL, 0LL);
}
