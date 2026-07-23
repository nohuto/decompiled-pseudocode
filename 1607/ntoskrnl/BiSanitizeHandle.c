/*
 * XREFs of BiSanitizeHandle @ 0x140125318
 * Callers:
 *     BiGetKeyName @ 0x140532E14 (BiGetKeyName.c)
 *     BcdFlushStore @ 0x140532F44 (BcdFlushStore.c)
 *     BiDeleteKey @ 0x140532F8C (BiDeleteKey.c)
 *     BiCloseStore @ 0x14053BC34 (BiCloseStore.c)
 *     BiEnumerateSubKeys @ 0x14053C7E0 (BiEnumerateSubKeys.c)
 *     BiDeleteRegistryValue @ 0x14053CBDC (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x14053DBE0 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiSetRegistryValue @ 0x14053E75C (BiSetRegistryValue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
