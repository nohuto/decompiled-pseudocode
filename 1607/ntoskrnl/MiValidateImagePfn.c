/*
 * XREFs of MiValidateImagePfn @ 0x1405098BC
 * Callers:
 *     MiValidateInPage @ 0x140026330 (MiValidateInPage.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiRevertRelocatedImagePfn @ 0x140509AF8 (MiRevertRelocatedImagePfn.c)
 *     SeGetStrongImageReference @ 0x14068CA5C (SeGetStrongImageReference.c)
 */

__int64 __fastcall MiValidateImagePfn(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // rdi
  _QWORD *v9; // r15
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  ULONG_PTR v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // r12
  int ProtectionPfnCompatible; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // rdi
  int v20; // r14d
  int v21; // ebx
  __int64 v22; // rax
  char v23; // dl

  v7 = a7;
  v9 = *(_QWORD **)(a1 + 96);
  v10 = 48 * a7 - 0x58000000000LL;
  v11 = v9[1] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC000000) != 0 && !v9[2] )
  {
    result = SeGetStrongImageReference(v9[1] & 0xFFFFFFFFFFFFFFF8uLL, &a7);
    if ( (int)result < 0 )
      return result;
    v9[2] = a7;
  }
  v13 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, a3);
  v14 = (_QWORD *)v13;
  if ( !v13 )
    return 3221225626LL;
  v15 = (__int64)(v13 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v10);
  *v14 = MiMakeValidKernelPte(v7, ProtectionPfnCompatible, (unsigned __int64)v14);
  if ( MiPteInShadowRange((unsigned __int64)v14) )
    MiWritePteShadow(v18, v17);
  v19 = 0LL;
  v20 = 0;
  if ( (a6 & 2) != 0 )
    v20 = 2;
  if ( (MiFlags & 0x80000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC000000) != 0 )
  {
    if ( a4 != -1 && *v9 )
      v20 |= 1u;
  }
  else if ( a4 != -1 )
  {
    v22 = MiRevertRelocatedImagePfn(v15, a1, a4);
    v19 = (void *)v22;
    if ( v22 == -1 )
    {
      v19 = 0LL;
    }
    else
    {
      if ( !v22 )
      {
        MiReleasePtes((__int64)&qword_1403278B0, (__int64)v14, 1u);
        return 3221225626LL;
      }
      v15 = v22;
    }
  }
  if ( qword_140301148 )
  {
    v21 = qword_140301148(v11, v15, 4096LL, a2, v20, a3);
    if ( v21 >= 0 )
    {
      v23 = 0;
      if ( (MiFlags & 0x10000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC000000) == 0 && ((*(_BYTE *)(v10 + 16) >> 5) & 2) != 0 )
        v23 = 3;
      MiMarkPfnVerified(v10, v23);
      goto LABEL_31;
    }
  }
  else
  {
    v21 = -1073740760;
  }
  _InterlockedIncrement(&dword_1403267EC);
LABEL_31:
  MiReleasePtes((__int64)&qword_1403278B0, (__int64)v14, 1u);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return (unsigned int)v21;
}
