/*
 * XREFs of EditionPostAccessibilitySettingChangedEvent @ 0x1402533B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall EditionPostAccessibilitySettingChangedEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagQ **v3; // rcx

  v2 = (unsigned int)a1;
  v3 = *(struct tagQ ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19176) + 40LL) + 24LL)
                        + 16LL);
  return PostEventMessageEx((struct tagTHREADINFO *)v3, v3[58], 0xDu, 0LL, 0, 0xBuLL, v2, 0LL);
}
