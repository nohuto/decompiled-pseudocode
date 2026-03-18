/*
 * XREFs of MiValidateImagePfn @ 0x1404B13C4
 * Callers:
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 * Callees:
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiRevertRelocatedImagePfn @ 0x1404B1740 (MiRevertRelocatedImagePfn.c)
 *     SeGetStrongImageReference @ 0x1406D07B4 (SeGetStrongImageReference.c)
 */

__int64 __fastcall MiValidateImagePfn(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rbp
  __int64 result; // rax
  _QWORD *v9; // r14
  unsigned __int64 v10; // rdi
  __int64 *v11; // rax
  unsigned __int64 *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  void *v16; // rbx
  bool v17; // r12
  int v18; // edi
  __int64 v19; // rax

  v7 = 48 * a6 - 0x58000000000LL;
  if ( (BYTE2(MiFlags) & 3u) > 1
    && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE((__int64 *)(v7 + 16)) & 2) == 0
    && MiCanPageMove(v7) )
  {
    return 0LL;
  }
  v9 = *(_QWORD **)(a1 + 96);
  if ( (v9[1] & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
  {
    MiMarkPfnVerified(v7, 2);
    return 0LL;
  }
  v10 = v9[1] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC000000) != 0 && !v9[2] )
  {
    result = SeGetStrongImageReference(v10, &a6, a3);
    if ( (int)result < 0 )
      return result;
    v9[2] = a6;
  }
  v11 = MiReservePtes((__int64)&qword_14034FC70, 1u, a3);
  v12 = (unsigned __int64 *)v11;
  if ( !v11 )
    return 3221225626LL;
  v13 = (__int64)((_QWORD)v11 << 25) >> 16;
  MiMakeProtectionPfnCompatible(1, v7);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v12) )
    v14 |= 0x100uLL;
  v15 = v14 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  *v12 = v15;
  if ( MiPteInShadowRange((__int64)v12) )
    MiWritePteShadow((__int64)v12, v15);
  v16 = 0LL;
  v17 = 0;
  if ( (MiFlags & 0x100000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC000000) != 0 )
  {
    if ( a4 != -1 )
      v17 = *v9 != 0LL;
  }
  else if ( a4 != -1 )
  {
    v19 = MiRevertRelocatedImagePfn(v13, a1, a4);
    v16 = (void *)v19;
    if ( v19 == -1 )
    {
      v16 = 0LL;
    }
    else
    {
      if ( !v19 )
      {
        MiReleasePtes((__int64)&qword_14034FC70, v12, 1u);
        return 3221225626LL;
      }
      v13 = v19;
    }
  }
  if ( qword_14032C148 )
  {
    v18 = qword_14032C148(v10, v13, 4096LL, a2, v17, a3);
    if ( v18 >= 0 )
    {
      MiMarkPfnVerified(v7, 0);
      goto LABEL_32;
    }
  }
  else
  {
    v18 = -1073740760;
  }
  _InterlockedIncrement(&dword_14034E9AC);
LABEL_32:
  MiReleasePtes((__int64)&qword_14034FC70, v12, 1u);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  return (unsigned int)v18;
}
