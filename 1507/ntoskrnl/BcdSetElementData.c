/*
 * XREFs of BcdSetElementData @ 0x14070D9D8
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140266E7C (WheaPersistOfflinedPage.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall BcdSetElementData(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  return BcdSetElementDataWithFlags(a1, a2, a3, a3, a4);
}
