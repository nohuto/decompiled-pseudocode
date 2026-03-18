/*
 * XREFs of UPDWORDPointer @ 0x1C0010730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall UPDWORDPointer(int a1)
{
  return (char *)&gpviCPUserPreferences + 16 * ((unsigned int)(a1 - 0x2000) >> 1) + 16;
}
