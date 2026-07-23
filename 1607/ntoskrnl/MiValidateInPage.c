/*
 * XREFs of MiValidateInPage @ 0x140026330
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001D918 (MiFlushEntireTbDueToAttributeChange.c)
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x140509AE0 (SeValidateImageData.c)
 *     SeGetStrongImageReference @ 0x14068CA5C (SeGetStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r10
  PVOID v3; // r12
  int v4; // r8d
  unsigned int v6; // ebx
  __int64 *v7; // r14
  __int64 v8; // rcx
  int v9; // edx
  unsigned __int64 v10; // r13
  unsigned int v11; // r8d
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // r11d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 PrototypePteDirect; // rax
  int v21; // ebp
  __int16 v22; // ax
  unsigned __int64 v23; // rdi
  __int64 result; // rax
  int v25; // eax
  int v26; // edi
  __int64 i; // rbp
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  __int64 *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  int BugCheckOnFailure; // [rsp+20h] [rbp-98h]
  __int64 v36; // [rsp+40h] [rbp-78h]
  __int64 v37; // [rsp+48h] [rbp-70h]
  _KPROCESS *Process; // [rsp+50h] [rbp-68h]
  unsigned __int64 v39; // [rsp+58h] [rbp-60h]
  _QWORD v40[11]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v41; // [rsp+C0h] [rbp+8h]
  unsigned int v42; // [rsp+C8h] [rbp+10h]
  unsigned int v43; // [rsp+D0h] [rbp+18h]

  v1 = a1 + 256;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 180);
  v37 = v2;
  if ( *(_QWORD *)(a1 + 248) )
    v1 = *(_QWORD *)(a1 + 248);
  v43 = 0;
  v6 = 0;
  v36 = *(_QWORD *)(v2 + 96);
  v42 = 0;
  v7 = (__int64 *)(v1 + 48);
  v8 = *(unsigned int *)(v1 + 40);
  v9 = *(_DWORD *)(v1 + 44);
  v10 = ((unsigned __int64)(((_WORD)v9 + (unsigned __int16)*(_DWORD *)(v1 + 32)) & 0xFFF) + v8 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v39 = v1 + 48 + 8LL * (unsigned int)v10;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v4 - v8 - v9);
  v11 = v4 - *(_DWORD *)(v1 + 40) - *(_DWORD *)(v1 + 44);
  *(_DWORD *)(a1 + 184) += ((v11 & 0xFFF) != 0) + (v11 >> 12);
  v12 = *(_QWORD *)(v36 + 8);
  v13 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(48LL * *(_QWORD *)(v1 + 48) - 0x58000000000LL + 16);
  v18 = v13;
  v19 = HIWORD(MiFlags);
  v41 = v13;
  if ( (*(_DWORD *)(v16 + 92) & 0xC000000) != 0 && (v12 & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
  {
    v6 = 1;
  }
  else if ( (MiFlags & 0x10000) != 0 )
  {
    if ( (v13 & 2) != 0 )
      v17 = 3;
    v42 = v17;
  }
  if ( (MiFlags & 0x20000) != 0 && (v6 & 1) != 0 )
  {
    v6 |= 4u;
    if ( (*(_DWORD *)(v16 + 56) & 0x4000000) != 0 )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v15 + 16));
      v18 = v41;
      if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 )
        v6 &= ~4u;
    }
  }
  if ( (*(_BYTE *)(a1 + 190) & 8) != 0 )
  {
    v6 |= 2u;
    if ( (MiFlags & 0x80000) != 0 && (v6 & 5) == 1 )
      v6 &= ~2u;
  }
  v21 = v18 & 2;
  if ( (v18 & 2) != 0 && (v19 & 1) != 0 && (v6 & 4) == 0 )
  {
    if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v1 + 24), (PMDL)v1);
    MiFlushEntireTbDueToAttributeChange(v18, v19, v14, v15);
  }
  if ( ((v6 >> 2) & 1) == 0 && (v12 & 0xFFFFFFFFFFFFFFF8uLL) > 8 && (unsigned int)v10 > 1 )
  {
    v22 = *(_WORD *)(v1 + 10);
    if ( (v22 & 0x4000) != 0 )
    {
      v3 = (v22 & 5) != 0
         ? *(PVOID *)(v1 + 24)
         : MmMapLockedPagesSpecifyCache((PMDL)v1, 0, MmCached, 0LL, 0, 0xC0000010);
      if ( v3 )
      {
        v23 = v12 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( (v6 & 1) != 0 && !*(_QWORD *)(v36 + 16) )
        {
          result = SeGetStrongImageReference(v23, v40);
          if ( (int)result < 0 )
            return result;
          *(_QWORD *)(v36 + 16) = v40[0];
        }
        v25 = 0;
        if ( v21 )
          v25 = 2;
        BugCheckOnFailure = v25;
        if ( (int)SeValidateImageData(v23, v3, (unsigned int)((_DWORD)v10 << 12), *(_QWORD *)(a1 + 96)) < 0 )
          v3 = 0LL;
      }
    }
  }
  if ( (unsigned __int64)v7 >= v39 )
    return v43;
  v26 = v37;
  for ( i = 0LL; ; i += 8LL )
  {
    v28 = 48 * *v7 - 0x58000000000LL;
    if ( v28 != qword_1403276D0 )
    {
      if ( v3 )
      {
        MiMarkPfnVerified(v28, v42);
      }
      else if ( ((v6 >> 2) & 1) == 0 && (*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      {
        v29 = MiValidateImagePfn(v26, *(_QWORD *)(a1 + 96), (_DWORD)Process, -1, BugCheckOnFailure, v41, *v7);
        if ( v29 < 0 )
        {
          if ( v29 == -1073741670 )
            goto LABEL_64;
          v43 = -1073740748;
        }
      }
      if ( (v6 & 2) != 0 )
        break;
    }
LABEL_62:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v7;
    ++*(_DWORD *)(a1 + 184);
    if ( (unsigned __int64)v7 >= v39 )
      return v43;
  }
  if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
  {
    v30 = *(_QWORD *)(v1 + 24) + (i >> 3 << 12);
    v31 = MI_READ_PTE_LOCK_FREE(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v31 & 0x42) == 0 )
    {
      *v32 = v31 | 0x842;
      if ( (unsigned int)MiPteInShadowRange(v32, v31 | 0x842) )
        MiWritePteShadow(v34, v33);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        KeFlushSingleTb(v30, 0LL, 1LL);
    }
  }
  else
  {
    v30 = 0LL;
  }
  BugCheckOnFailure = 0;
  if ( (int)MiRelocateImagePfn(v37, v30, *(unsigned int *)(a1 + 184), *v7) >= 0 )
  {
    v26 = v37;
    goto LABEL_62;
  }
LABEL_64:
  *(_DWORD *)(a1 + 80) = -1073741670;
  return v43;
}
