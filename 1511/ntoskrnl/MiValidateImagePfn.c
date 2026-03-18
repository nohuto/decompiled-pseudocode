/*
 * XREFs of MiValidateImagePfn @ 0x1404DB440
 * Callers:
 *     MiValidateInPage @ 0x1400390F0 (MiValidateInPage.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiRevertRelocatedImagePfn @ 0x1404DB678 (MiRevertRelocatedImagePfn.c)
 *     SeGetStrongImageReference @ 0x14064D37C (SeGetStrongImageReference.c)
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
  _QWORD *v8; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 result; // rax
  ULONG_PTR v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // r12
  int ProtectionPfnCompatible; // eax
  __int64 v17; // r9
  unsigned __int64 ValidKernelPte; // rax
  __int64 v19; // rdi
  void *v20; // rdi
  int v21; // r15d
  int v22; // ebx
  __int64 v23; // rax
  char v24; // dl

  v7 = a7;
  v8 = *(_QWORD **)(a1 + 96);
  v10 = v8[1] & 0xFFFFFFFFFFFFFFF8uLL;
  v11 = 48 * a7 - 0x58000000000LL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC000000) != 0 && !v8[2] )
  {
    result = SeGetStrongImageReference(v8[1] & 0xFFFFFFFFFFFFFFF8uLL, &a7, a3);
    if ( (int)result < 0 )
      return result;
    v8[2] = a7;
  }
  v13 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, a3);
  v14 = (_QWORD *)v13;
  if ( !v13 )
    return 3221225626LL;
  v15 = (__int64)(v13 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v11);
  ValidKernelPte = MiMakeValidKernelPte(v7, ProtectionPfnCompatible, (unsigned __int64)v14, v17);
  *v14 = ValidKernelPte;
  v19 = ValidKernelPte;
  if ( MiPteInShadowRange((__int64)v14) )
    MiWritePteShadow((__int64)v14, v19);
  v20 = 0LL;
  v21 = 0;
  if ( (a6 & 2) != 0 )
    v21 = 2;
  if ( (MiFlags & 0x100000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC000000) != 0 )
  {
    if ( a4 != -1 && *v8 )
      v21 |= 1u;
  }
  else if ( a4 != -1 )
  {
    v23 = MiRevertRelocatedImagePfn(v15, a1, a4);
    v20 = (void *)v23;
    if ( v23 == -1 )
    {
      v20 = 0LL;
    }
    else
    {
      if ( !v23 )
      {
        MiReleasePtes((__int64)&qword_1402FF7B0, v14, 1u);
        return 3221225626LL;
      }
      v15 = v23;
    }
  }
  if ( qword_1402DBDE8 )
  {
    v22 = qword_1402DBDE8(v10, v15, 4096LL, a2, v21, a3);
    if ( v22 >= 0 )
    {
      v24 = 0;
      if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC000000) == 0 && ((*(_BYTE *)(v11 + 16) >> 5) & 2) != 0 )
        v24 = 3;
      MiMarkPfnVerified(v11, v24);
      goto LABEL_31;
    }
  }
  else
  {
    v22 = -1073740760;
  }
  _InterlockedIncrement(&dword_1402FE4E4);
LABEL_31:
  MiReleasePtes((__int64)&qword_1402FF7B0, v14, 1u);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  return (unsigned int)v22;
}
