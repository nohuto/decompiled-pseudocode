/*
 * XREFs of SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x1400F46BC
 * Callers:
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 * Callees:
 *     <none>
 */

char __fastcall SepRmProcessCreationCommandLineAuditSettingsWrkr(__int64 a1, __int64 a2)
{
  char result; // al

  *(_DWORD *)(a2 + 40) = 0;
  result = *(_BYTE *)(a1 + 44);
  SepRmAuditProcessCommandLine = result;
  SepRmAuditingEnabled = 1;
  return result;
}
