/*
 * XREFs of MiBadRefCount @ 0x1402261D8
 * Callers:
 *     MiFreeInitializationCode @ 0x140573D08 (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadRefCount(__int64 a1)
{
  KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
}
