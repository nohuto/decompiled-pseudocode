/*
 * XREFs of A_SHAInit @ 0x18000A480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall A_SHAInit(_DWORD *a1)
{
  a1[21] = 0;
  a1[22] = 0;
  a1[16] = 1732584193;
  a1[17] = -271733879;
  a1[18] = -1732584194;
  a1[19] = 271733878;
  a1[20] = -1009589776;
}
