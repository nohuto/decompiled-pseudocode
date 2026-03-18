/*
 * XREFs of ?DisplayDiagHotkeyCallback@@YAX_K_J@Z @ 0x1C01CF5A0
 * Callers:
 *     <none>
 * Callees:
 *     UserBeep @ 0x1C0228C40 (UserBeep.c)
 */

void __fastcall DisplayDiagHotkeyCallback(__int64 a1)
{
  unsigned int v1; // ecx

  if ( (glinp[15] & 0x20) == 0 )
  {
    if ( a1 == -16 )
    {
      v1 = 8;
    }
    else
    {
      if ( a1 != -15 )
        return;
      UserBeep(494LL, 200LL);
      v1 = 1;
    }
    xxxDisplayDiagBlackScreenDetected(v1);
  }
}
