/*
 * XREFs of MiInitializeFileOnlyPfn @ 0x1401E37EC
 * Callers:
 *     MiBuildFileOnlyProtos @ 0x1401E325C (MiBuildFileOnlyProtos.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiReferenceControlAreaPfn @ 0x1400AB390 (MiReferenceControlAreaPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeFileOnlyPfn(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h]

  v4 = *(unsigned __int16 *)(a1 + 32);
  v19 = *(_QWORD *)a1;
  v6 = 16 * ((a1 << 12) | v4 & 0x3E | 0x40);
  v18 = MI_READ_PTE_LOCK_FREE((__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
  v8 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v18) >> 12) & 0xFFFFFFFFFLL;
  v9 = 48 * a3 - 0x58000000000LL;
  *(_QWORD *)v9 = 0LL;
  v10 = 48 * v8 - 0x58000000000LL;
  *(_QWORD *)(v9 + 16) = v6;
  *(_QWORD *)(v9 + 40) |= 0x200000000000000uLL;
  MiLockPageAtDpcInline(v9, v11, v12);
  v13 = *(_QWORD *)(v9 + 40);
  *(_BYTE *)(v9 + 35) &= 0xF8u;
  *(_QWORD *)(v9 + 8) = a2;
  *(_QWORD *)(v9 + 40) ^= (v8 ^ v13) & 0xFFFFFFFFFLL;
  *(_BYTE *)(v9 + 34) = *(_BYTE *)(v9 + 34) & 0x38 | 0x42;
  *(_QWORD *)(v9 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = 32 * (((a3 & 0xFFFFFFFFFLL) << 7) | (v4 >> 1) & 0x1F | 0x40);
  v18 = v14;
  *(_QWORD *)a2 = v14;
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow(a2, v14);
  MiReferenceControlAreaPfn(v19, a1, 1u);
  MiLockPageAtDpcInline(v10, v15, v16);
  result = *(_QWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 24) = result ^ (result ^ (result + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
