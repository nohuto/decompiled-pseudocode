/*
 * XREFs of MiFillGapPtes @ 0x1401383CC
 * Callers:
 *     MiFillGapAddresses @ 0x140138348 (MiFillGapAddresses.c)
 *     MiFillGapPtes @ 0x1401383CC (MiFillGapPtes.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiFillGapPtes @ 0x1401383CC (MiFillGapPtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiFillGapPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  unsigned __int64 v5; // rdi
  int v7; // ebx
  char v8; // al
  __int64 v9; // r9
  unsigned __int64 ValidKernelPte; // rbx
  unsigned __int64 i; // [rsp+58h] [rbp+10h]
  int v12; // [rsp+60h] [rbp+18h]

  v12 = a3;
  v5 = a1;
  v7 = a3;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a5) )
    v5 = *(_QWORD *)(a3 + 16LL * a5);
  if ( a2 > *(_QWORD *)(a3 + 16LL * a5 + 8) )
    a2 = *(_QWORD *)(a3 + 16LL * a5 + 8);
  for ( i = a2; v5 <= i; v5 += 8LL )
  {
    v8 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v8 & 1) != 0 )
    {
      if ( a5 && (a5 != 1 || v8 >= 0) )
        MiFillGapPtes((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, v7, (_DWORD)a4, a5 - 1);
    }
    else
    {
      if ( a5 )
        ValidKernelPte = MiMakeValidKernelPte(a4[a5], 4, 0LL, v9) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
      else
        ValidKernelPte = MiMakeValidKernelPte(*a4, 1, v5, v9);
      *(_QWORD *)v5 = ValidKernelPte;
      if ( (unsigned int)MiPteInShadowRange(v5) )
        MiWritePteShadow(v5, ValidKernelPte);
      v7 = v12;
    }
  }
}
