/*
 * XREFs of MiPteNeedsCommitCharge @ 0x1400926E8
 * Callers:
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiCountSharedPages @ 0x140092450 (MiCountSharedPages.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiPteNeedsCommitCharge(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  bool v5; // zf
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v3 = 0;
  if ( (v2 & 7) == 2
    && (v2 & 0xF8) != 8
    && (MiGetProtoPteAddress(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 1, &v7), v7) )
  {
    v5 = (v7[4] & 0xA) == 10;
  }
  else
  {
    v5 = (*(_BYTE *)(a1 + 48) & 0x28) == 40;
  }
  LOBYTE(v3) = !v5;
  return v3;
}
