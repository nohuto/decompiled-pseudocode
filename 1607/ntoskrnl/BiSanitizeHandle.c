/*
 * XREFs of BiSanitizeHandle @ 0x140124DA8
 * Callers:
 *     BiGetKeyName @ 0x1405328D4 (BiGetKeyName.c)
 *     BcdFlushStore @ 0x140532A04 (BcdFlushStore.c)
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 *     BiCloseStore @ 0x14053B6F4 (BiCloseStore.c)
 *     BiEnumerateSubKeys @ 0x14053C2A0 (BiEnumerateSubKeys.c)
 *     BiDeleteRegistryValue @ 0x14053C69C (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x14053D6A0 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14053D91C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiSetRegistryValue @ 0x14053E21C (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
