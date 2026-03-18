/*
 * XREFs of IsSysShadow @ 0x140083EE4
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSysShadow(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 136);
  return **(_WORD **)(v2 + 8) == *(_WORD *)(W32GetUserSessionState(a1, a2) + 41366);
}
