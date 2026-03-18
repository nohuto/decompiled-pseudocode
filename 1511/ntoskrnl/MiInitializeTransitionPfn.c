/*
 * XREFs of MiInitializeTransitionPfn @ 0x140011764
 * Callers:
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiSectionCreated @ 0x140038BD8 (MiSectionCreated.c)
 * Callees:
 *     MI_READ_PDE @ 0x14006DE04 (MI_READ_PDE.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeTransitionPfn(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // al
  char v10; // al
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 result; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = 48 * a1 - 0x58000000000LL;
  v18 = MI_READ_PDE((((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = MI_READ_PTE_LOCK_FREE(&v18);
  *(_QWORD *)v4 = 0LL;
  v6 = (v5 >> 12) & 0xFFFFFFFFFLL;
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 16) = v7;
  *(_QWORD *)(v4 + 8) = a2;
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  v9 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 40) = v6 & 0xFFFFFFFFFLL | v8 & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
  if ( (v9 & 0x10) != 0 )
    v10 = v9 & 0xF8 | 3;
  else
    v10 = v9 & 0xF8 | 2;
  *(_BYTE *)(v4 + 34) = v10;
  v11 = MI_READ_PTE_LOCK_FREE(a2);
  v12 = (v11 >> 5) & 0x1F;
  v13 = ((v11 >> 5) & 0x1F) >> 3;
  if ( v13 == 3 && ((v11 >> 5) & 7) != 0 )
  {
    v14 = (unsigned int)dword_1403812A8;
  }
  else
  {
    v14 = 1LL;
    if ( v13 == 1 )
      v14 = (unsigned int)MiPlatformCacheAttributes;
  }
  MiFinalizePageAttribute(v4, v14, 1LL);
  *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
  v15 = 32 * (((a1 & 0xFFFFFFFFFLL) << 7) | v12 & 0x1F | 0x40);
  v18 = v15;
  *a2 = v15;
  if ( (unsigned int)MiPteInShadowRange(a2) )
    MiWritePteShadow(a2, v15);
  v16 = 48 * v6 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v16);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
