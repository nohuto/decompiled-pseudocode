/*
 * XREFs of ?DisplayDiagHotkeyCallback@@YAX_K_J@Z @ 0x1C01D8530
 * Callers:
 *     <none>
 * Callees:
 *     UserBeep @ 0x1C0229340 (UserBeep.c)
 */

void __fastcall DisplayDiagHotkeyCallback(__int64 a1)
{
  if ( a1 == -15 )
  {
    UserBeep(494LL, 200LL);
    xxxDisplayDiagBlackScreenDetected(1u);
  }
}
