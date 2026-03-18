/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4680
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01E542C (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( (xmmword_1C0326F34 & 1) != 0
    || (dword_1C0326F2C & 1) != 0
    || (xmmword_1C0326F04 & 1) != 0
    || (dword_1C0326F24 & 1) != 0
    || (xmmword_1C032BBAC & 1) != 0
    || (gHighContrast[1] & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL);
    LODWORD(xmmword_1C0326F34) = xmmword_1C0326F34 & 0xFFFFFFFE;
    xxxTurnOffStickyKeys();
    LODWORD(xmmword_1C0326F04) = xmmword_1C0326F04 & 0xFFFFFFFE;
    dword_1C0326F24 &= ~1u;
    LODWORD(xmmword_1C032BBAC) = xmmword_1C032BBAC & 0xFFFFFFFE;
    gdwPUDFlags &= ~0x8000u;
    gHighContrast[1] &= ~1u;
    PostWinlogonMessage(1026LL, 9LL);
    if ( (qword_1C0326EF4 & 2) != 0 )
      PostEventMessageEx(*(_QWORD *)(v1 + 16), *(_QWORD *)(*(_QWORD *)(v1 + 16) + 384LL), 0xEu, 0LL, 1u, 0LL, 0LL, 0LL);
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v2, *(_QWORD *)(v2 + 384), 0xDu, 0LL, 0, 11LL, 3LL, 0LL);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v3, *(_QWORD *)(v3 + 384), 0xDu, 0LL, 0, 11LL, 2LL, 0LL);
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v4, *(_QWORD *)(v4 + 384), 0xDu, 0LL, 0, 11LL, 1LL, 0LL);
  }
  SetAccessEnabledFlag();
}
