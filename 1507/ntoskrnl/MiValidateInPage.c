/*
 * XREFs of MiValidateInPage @ 0x140087A20
 * Callers:
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     HvlFlushTbAllPartitions @ 0x1400E6968 (HvlFlushTbAllPartitions.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x1404B1728 (SeValidateImageData.c)
 *     MiRelocateImagePfn @ 0x1404BE420 (MiRelocateImagePfn.c)
 *     SeGetStrongImageReference @ 0x1406D07B4 (SeGetStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r11
  PVOID v3; // r12
  int v4; // r8d
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 *v8; // r14
  int v9; // edx
  unsigned __int64 v10; // rbp
  unsigned int v11; // r8d
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r11
  char v16; // r15
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // r15d
  int v20; // eax
  __int16 v21; // ax
  unsigned __int64 v22; // rbx
  __int64 result; // rax
  __int64 i; // rbp
  __int64 v25; // rbx
  char v26; // dl
  int v27; // eax
  unsigned __int64 v28; // rbx
  __int64 *v29; // r9
  unsigned __int64 v30; // r10
  __int64 PteShadow; // rax
  __int64 v32; // rax
  int BugCheckOnFailure; // [rsp+20h] [rbp-78h]
  _KPROCESS *Process; // [rsp+30h] [rbp-68h]
  unsigned __int64 v35; // [rsp+38h] [rbp-60h]
  _QWORD v36[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v37; // [rsp+A8h] [rbp+10h]
  __int64 v38; // [rsp+B0h] [rbp+18h]
  __int64 v39; // [rsp+B8h] [rbp+20h]

  v1 = a1 + 256;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 180);
  v39 = v2;
  if ( *(_QWORD *)(a1 + 248) )
    v1 = *(_QWORD *)(a1 + 248);
  v37 = 0;
  v6 = 0;
  v38 = *(_QWORD *)(v2 + 96);
  v7 = *(unsigned int *)(v1 + 40);
  v8 = (__int64 *)(v1 + 48);
  v9 = *(_DWORD *)(v1 + 44);
  v10 = ((unsigned __int64)(((_WORD)v9 + (unsigned __int16)*(_DWORD *)(v1 + 32)) & 0xFFF) + v7 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v35 = v1 + 48 + 8LL * (unsigned int)v10;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v4 - v7 - v9);
  v11 = v4 - *(_DWORD *)(v1 + 40) - *(_DWORD *)(v1 + 44);
  *(_DWORD *)(a1 + 184) += ((v11 & 0xFFF) != 0) + (v11 >> 12);
  v12 = *(_QWORD *)(v38 + 8);
  v16 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(48LL * *(_QWORD *)(v1 + 48) - 0x58000000000LL + 16);
  if ( (v16 & 2) == 0 && !MiCanPageMove(v14) )
    v16 = 2;
  v17 = 1LL;
  if ( (*(_DWORD *)(v15 + 92) & 0xC000000) != 0 && (v12 & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
    v6 = 1;
  v18 = (unsigned int)MiFlags;
  if ( (MiFlags & 0x80000) != 0 && (v6 & 1) != 0 )
  {
    v6 |= 4u;
    if ( (*(_DWORD *)(v15 + 56) & 0x4000000) != 0
      && (*(_BYTE *)(MiGetPrototypePteDirect(*(_QWORD *)(v14 + 16), (unsigned int)MiFlags, 1LL, v14) + 34) & 2) != 0 )
    {
      v6 &= ~4u;
    }
  }
  if ( (*(_BYTE *)(a1 + 190) & 8) != 0 )
  {
    v6 |= 2u;
    if ( (v18 & 0x100000) != 0 && (v6 & 5) == (_BYTE)v17 )
      v6 &= ~2u;
  }
  v19 = v16 & 2;
  if ( v19 && (unsigned __int8)(BYTE2(MiFlags) & 3) > (unsigned __int8)v17 && (v6 & 4) == 0 )
  {
    if ( ((unsigned __int8)v17 & *(_BYTE *)(v1 + 10)) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v1 + 24), (PMDL)v1);
    ++dword_14034EBC8;
    HvlFlushTbAllPartitions(v13, v18, v17, v14);
    KeFlushTb(3, 2);
    v17 = 1LL;
  }
  v20 = (v6 >> 2) & 1;
  if ( !v20 )
  {
    if ( (v12 & 0xFFFFFFFFFFFFFFF8uLL) > 8 && (unsigned int)v10 > 1 )
    {
      v21 = *(_WORD *)(v1 + 10);
      if ( (v21 & 0x4000) != 0 )
      {
        v3 = (v21 & 5) != 0
           ? *(PVOID *)(v1 + 24)
           : MmMapLockedPagesSpecifyCache((PMDL)v1, 0, (MEMORY_CACHING_TYPE)v17, 0LL, 0, 0xC0000010);
        if ( v3 )
        {
          v22 = v12 & 0xFFFFFFFFFFFFFFF8uLL;
          if ( (*(_DWORD *)(v39 + 92) & 0xC000000) != 0 && !*(_QWORD *)(v38 + 16) )
          {
            result = SeGetStrongImageReference(v22, v36, v17);
            if ( (int)result < 0 )
              return result;
            *(_QWORD *)(v38 + 16) = v36[0];
          }
          if ( (BYTE2(MiFlags) & 3u) <= 1 || v19 )
          {
            LOBYTE(BugCheckOnFailure) = 0;
            if ( (int)SeValidateImageData(v22, v3, (unsigned int)((_DWORD)v10 << 12), *(_QWORD *)(a1 + 96)) < 0 )
              v3 = 0LL;
          }
        }
      }
    }
    v20 = 0;
  }
  if ( (unsigned __int64)v8 >= v35 )
    return v37;
  for ( i = 0LL; ; i += 8LL )
  {
    v25 = 48 * *v8 - 0x58000000000LL;
    if ( v25 == qword_14034F700 )
      goto LABEL_76;
    if ( v3 )
    {
      if ( (BYTE2(MiFlags) & 3u) > 1 && !v19 )
        goto LABEL_60;
      v26 = 0;
      goto LABEL_59;
    }
    if ( v20 || (*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
    {
      if ( !v19 || (BYTE2(MiFlags) & 3) != 3 || (*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
        goto LABEL_60;
      v26 = 2;
LABEL_59:
      MiMarkPfnVerified(48 * *v8 - 0x58000000000LL, v26);
      goto LABEL_60;
    }
    if ( (BYTE2(MiFlags) & 3u) <= 1 || v19 )
    {
      v27 = MiValidateImagePfn(v39, *(_QWORD *)(a1 + 96), (_DWORD)Process, -1, BugCheckOnFailure, *v8);
      if ( v27 < 0 )
      {
        if ( v27 == -1073741670 )
          break;
        v37 = -1073740748;
      }
    }
LABEL_60:
    if ( (v6 & 2) != 0 )
    {
      if ( (BYTE2(MiFlags) & 3) == 3
        && ((*(_QWORD *)(v25 + 40) >> 54) & 7) == 3
        && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v25 + 16) & 2) != 0 )
      {
        MiMarkPfnVerified(v25, 1);
      }
      if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
      {
        v28 = *(_QWORD *)(v1 + 24) + (i >> 3 << 12);
        v29 = (__int64 *)(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v30 = (unsigned __int64)(v29 + 0x12090482600LL);
        PteShadow = *v29;
        if ( (unsigned __int64)(v29 + 0x12090482600LL) <= 0x7F8 )
          PteShadow = MiReadPteShadow(
                        (((unsigned __int64)(*(_QWORD *)(v1 + 24) + (i >> 3 << 12)) >> 9) & 0x7FFFFFFFF8LL)
                      - 0x98000000000LL,
                        *v29);
        if ( (PteShadow & 0x42) == 0 )
        {
          v32 = PteShadow | 0x842;
          *v29 = v32;
          if ( v30 <= 0x7F8 )
            MiWritePteShadow(v29, v32);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
            KeFlushSingleTb(v28, 0, 1);
        }
      }
      else
      {
        LODWORD(v28) = 0;
      }
      if ( (int)MiRelocateImagePfn(v39, v28, *(_DWORD *)(a1 + 184), *v8, 0LL) < 0 )
        break;
    }
LABEL_76:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v8;
    ++*(_DWORD *)(a1 + 184);
    if ( (unsigned __int64)v8 >= v35 )
      return v37;
    v20 = (v6 >> 2) & 1;
  }
  *(_DWORD *)(a1 + 80) = -1073741670;
  return v37;
}
