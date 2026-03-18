/*
 * XREFs of MiBadRefCount @ 0x1401F2B98
 * Callers:
 *     MiFreeInitializationCode @ 0x14047D5E8 (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadRefCount(__int64 a1)
{
  KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
}
