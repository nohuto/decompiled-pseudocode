/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EDF60
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01EF1CC (-xxxTurnOffStickyKeys@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( (xmmword_1C0323934 & 1) != 0
    || (dword_1C032392C & 1) != 0
    || (xmmword_1C0323904 & 1) != 0
    || (dword_1C0323924 & 1) != 0
    || (xmmword_1C0328824 & 1) != 0
    || (gHighContrast[1] & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL);
    LODWORD(xmmword_1C0323934) = xmmword_1C0323934 & 0xFFFFFFFE;
    xxxTurnOffStickyKeys();
    LODWORD(xmmword_1C0323904) = xmmword_1C0323904 & 0xFFFFFFFE;
    dword_1C0323924 &= ~1u;
    LODWORD(xmmword_1C0328824) = xmmword_1C0328824 & 0xFFFFFFFE;
    gdwPUDFlags &= ~0x8000u;
    gHighContrast[1] &= ~1u;
    PostWinlogonMessage(1026LL, 9LL);
    if ( (qword_1C03238F4 & 2) != 0 )
      PostEventMessageEx(*(_QWORD *)(v1 + 16), *(_QWORD *)(*(_QWORD *)(v1 + 16) + 392LL), 0xEu, 0LL, 1u, 0LL, 0LL, 0LL);
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v2, *(_QWORD *)(v2 + 392), 0xDu, 0LL, 0, (LARGE_INTEGER)11LL, (LARGE_INTEGER)3LL, 0LL);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v3, *(_QWORD *)(v3 + 392), 0xDu, 0LL, 0, (LARGE_INTEGER)11LL, (LARGE_INTEGER)2LL, 0LL);
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v4, *(_QWORD *)(v4 + 392), 0xDu, 0LL, 0, (LARGE_INTEGER)11LL, (LARGE_INTEGER)1LL, 0LL);
  }
  SetAccessEnabledFlag();
}
