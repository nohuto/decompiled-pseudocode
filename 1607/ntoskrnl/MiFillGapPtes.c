/*
 * XREFs of MiFillGapPtes @ 0x140141F84
 * Callers:
 *     MiFillGapAddresses @ 0x1400B3218 (MiFillGapAddresses.c)
 *     MiFillGapPtes @ 0x140141F84 (MiFillGapPtes.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiFillGapPtes @ 0x140141F84 (MiFillGapPtes.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFillGapPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v9; // r9
  int v10; // r11d
  unsigned __int64 ValidKernelPte; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v6 = a1;
  v7 = a2;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a5) )
    v6 = *(_QWORD *)(a3 + 16LL * a5);
  if ( a2 > *(_QWORD *)(a3 + 16LL * a5 + 8) )
    v7 = *(_QWORD *)(a3 + 16LL * a5 + 8);
  while ( v6 <= v7 )
  {
    result = MI_READ_PTE_LOCK_FREE(v6);
    if ( (result & 1) != 0 )
    {
      if ( a5 && (result & 0x80u) == 0LL )
        result = MiFillGapPtes(
                   (__int64)(v6 << 25) >> 16,
                   (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
                   v10,
                   (_DWORD)a4,
                   a5 - 1);
    }
    else
    {
      if ( a5 )
        ValidKernelPte = MiMakeValidKernelPte(a4[v9], 4, 0LL) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
      else
        ValidKernelPte = MiMakeValidKernelPte(*a4, 1, v6);
      *(_QWORD *)v6 = ValidKernelPte;
      result = MiPteInShadowRange(v6, ValidKernelPte);
      if ( (_DWORD)result )
        result = MiWritePteShadow(v13, v12);
    }
    v6 += 8LL;
  }
  return result;
}
