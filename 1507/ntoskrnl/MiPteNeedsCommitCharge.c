/*
 * XREFs of MiPteNeedsCommitCharge @ 0x140117E7C
 * Callers:
 *     MiCountSharedPages @ 0x14003A9D0 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiPteNeedsCommitCharge(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  bool v5; // zf
  unsigned int *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v3 = 0;
  if ( (v2 & 7) == 2
    && (v2 & 0xF8) != 8
    && (MiGetProtoPteAddress(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 1u, &v7), v7) )
  {
    v5 = (v7[8] & 0xA) == 10;
  }
  else
  {
    v5 = (*(_BYTE *)(a1 + 48) & 0x28) == 40;
  }
  LOBYTE(v3) = !v5;
  return v3;
}
