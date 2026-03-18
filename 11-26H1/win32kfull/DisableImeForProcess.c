/*
 * XREFs of DisableImeForProcess @ 0x1402A1A90
 * Callers:
 *     <none>
 * Callees:
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140295B28 (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DisableImeForProcess(struct tagPROCESSINFO *a1)
{
  UserDisableImeForProcess(a1);
}
