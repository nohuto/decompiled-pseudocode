/*
 * XREFs of RtlSparseBitmapCtxStart @ 0x1800F8724
 * Callers:
 *     RtlpHpLargeSparseBmpInitialize @ 0x1800F0544 (RtlpHpLargeSparseBmpInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSparseBitmapCtxStart(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r10
  int v5; // r9d
  unsigned int v6; // edx
  int v7; // ecx

  v3 = *(unsigned int *)(a2 + 12);
  v4 = (v3 + *(_QWORD *)a2 - 1LL) / v3;
  if ( v4 - 1 > 0xFFFFFFFE )
    return (unsigned int)-1073741811;
  v5 = *(_DWORD *)(a2 + 40);
  if ( (v5 & 2) != 0 && ((8 * v4) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    dword_1801445B4 = (v3 + *(_QWORD *)a2 - 1LL) / v3;
    dword_1801445B8 = v3;
    v6 = 0;
    qword_1801445A0 = *(_QWORD *)(a2 + 24);
    qword_1801445A8 = *(_QWORD *)(a2 + 32);
    dword_1801445B0 = 0;
    dword_180144590 = 0;
    v7 = (((unsigned __int8)dword_1801445C8 ^ (unsigned __int8)v5) & 2 ^ (unsigned __int8)dword_1801445C8 ^ (unsigned __int8)v5) & 1 ^ ((unsigned __int8)dword_1801445C8 ^ (unsigned __int8)v5) & 2 ^ dword_1801445C8;
    qword_180144598 = 0LL;
    dword_1801445C4 = *(_DWORD *)(a2 + 8);
    dword_1801445C8 = ((unsigned __int8)v7 ^ (unsigned __int8)v5) & 4 ^ v7;
    dword_1801445C0 = 4 * ((v3 + 31) >> 5) + 24;
    dword_1801445BC = *(_DWORD *)(a2 + 16);
  }
  return v6;
}
