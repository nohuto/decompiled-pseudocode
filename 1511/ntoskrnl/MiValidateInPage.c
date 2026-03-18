/*
 * XREFs of MiValidateInPage @ 0x1400390F0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     HvlFlushTbAllPartitions @ 0x1400E8120 (HvlFlushTbAllPartitions.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1404DB440 (MiValidateImagePfn.c)
 *     SeValidateImageData @ 0x1404DB660 (SeValidateImageData.c)
 *     SeGetStrongImageReference @ 0x14064D37C (SeGetStrongImageReference.c)
 */

__int64 __fastcall MiValidateInPage(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r9
  int v3; // r8d
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 *v7; // r15
  int v8; // edx
  unsigned __int64 v9; // r12
  unsigned int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r10
  bool v16; // zf
  int v17; // ebp
  PVOID v18; // rsi
  int v19; // eax
  __int16 v20; // ax
  unsigned __int64 v21; // rbx
  __int64 result; // rax
  int v23; // eax
  int v24; // ebp
  int v25; // ebx
  __int64 v26; // r12
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rbp
  __int64 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rbx
  int BugCheckOnFailure; // [rsp+20h] [rbp-98h]
  _KPROCESS *Process; // [rsp+40h] [rbp-78h]
  __int64 v35; // [rsp+48h] [rbp-70h]
  int v36; // [rsp+50h] [rbp-68h]
  unsigned __int64 v37; // [rsp+58h] [rbp-60h]
  __int64 v38; // [rsp+60h] [rbp-58h] BYREF
  __int64 v39; // [rsp+68h] [rbp-50h]
  unsigned int v40; // [rsp+C8h] [rbp+10h]
  unsigned int v41; // [rsp+D0h] [rbp+18h]
  PVOID v42; // [rsp+D8h] [rbp+20h]

  v1 = a1 + 256;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_DWORD *)(a1 + 180);
  v36 = v2;
  if ( *(_QWORD *)(a1 + 248) )
    v1 = *(_QWORD *)(a1 + 248);
  v41 = 0;
  v5 = 0;
  v35 = *(_QWORD *)(v2 + 96);
  v40 = 0;
  v6 = *(unsigned int *)(v1 + 40);
  v7 = (__int64 *)(v1 + 48);
  v8 = *(_DWORD *)(v1 + 44);
  v9 = ((unsigned __int64)(((_WORD)v8 + (unsigned __int16)*(_DWORD *)(v1 + 32)) & 0xFFF) + v6 + 4095) >> 12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v37 = v1 + 48 + 8LL * (unsigned int)v9;
  *(_QWORD *)(a1 + 96) += (unsigned int)(v3 - v6 - v8);
  v10 = v3 - *(_DWORD *)(v1 + 40) - *(_DWORD *)(v1 + 44);
  *(_DWORD *)(a1 + 184) += ((v10 & 0xFFF) != 0) + (v10 >> 12);
  v11 = 0LL;
  v12 = *(_QWORD *)(v35 + 8);
  v13 = 48LL * *(_QWORD *)(v1 + 48) - 0x58000000000LL;
  v14 = *(_QWORD *)(v13 + 16);
  v15 = ((unsigned __int64)v14 >> 5) & 0x1F;
  v16 = (*(_DWORD *)(v2 + 92) & 0xC000000) == 0;
  v39 = v15;
  if ( v16 || (v13 = v12 & 0xFFFFFFFFFFFFFFF8uLL, (v12 & 0xFFFFFFFFFFFFFFF8uLL) <= 8) )
  {
    if ( (MiFlags & 0x40000) != 0 )
    {
      v13 = (unsigned __int8)v15;
      LOBYTE(v13) = v15 & 2;
      if ( (v15 & 2) != 0 )
        v11 = 3LL;
      v40 = v11;
    }
  }
  else
  {
    v5 = 1;
  }
  if ( (MiFlags & 0x80000) != 0 && (v5 & 1) != 0 )
  {
    v5 |= 4u;
    if ( (*(_DWORD *)(v2 + 56) & 0x4000000) != 0 )
    {
      v14 >>= 16;
      if ( (*(_BYTE *)(v14 + 34) & 2) != 0 )
        v5 &= ~4u;
    }
  }
  if ( (*(_BYTE *)(a1 + 190) & 8) != 0 )
  {
    v5 |= 2u;
    if ( (MiFlags & 0x100000) != 0 )
    {
      v13 = v5;
      LOBYTE(v13) = v5 & 5;
      if ( (v5 & 5) == 1 )
        v5 &= ~2u;
    }
  }
  v17 = v15 & 2;
  if ( (v15 & 2) != 0 && (MiFlags & 0x40000) != 0 && (v5 & 4) == 0 )
  {
    if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v1 + 24), (PMDL)v1);
    ++dword_1402FE710;
    HvlFlushTbAllPartitions(v13, v14, v11);
    KeFlushTb(3u, 2u);
  }
  v18 = 0LL;
  v19 = (v5 >> 2) & 1;
  v42 = 0LL;
  if ( !v19 )
  {
    if ( (v12 & 0xFFFFFFFFFFFFFFF8uLL) > 8 && (unsigned int)v9 > 1 )
    {
      v20 = *(_WORD *)(v1 + 10);
      if ( (v20 & 0x4000) != 0 )
      {
        v18 = (v20 & 5) != 0
            ? *(PVOID *)(v1 + 24)
            : MmMapLockedPagesSpecifyCache((PMDL)v1, 0, MmCached, 0LL, 0, 0xC0000010);
        v42 = v18;
        if ( v18 )
        {
          v21 = v12 & 0xFFFFFFFFFFFFFFF8uLL;
          if ( (v5 & 1) != 0 && !*(_QWORD *)(v35 + 16) )
          {
            result = SeGetStrongImageReference(v21, &v38, v11);
            if ( (int)result < 0 )
              return result;
            *(_QWORD *)(v35 + 16) = v38;
          }
          v23 = 0;
          v16 = v17 == 0;
          v24 = (int)Process;
          if ( !v16 )
            v23 = 2;
          BugCheckOnFailure = v23;
          if ( (int)SeValidateImageData(v21, v18, (unsigned int)((_DWORD)v9 << 12), *(_QWORD *)(a1 + 96)) < 0 )
            v18 = 0LL;
          v19 = 0;
          v42 = v18;
          goto LABEL_44;
        }
      }
    }
    v19 = 0;
  }
  v24 = (int)Process;
LABEL_44:
  if ( (unsigned __int64)v7 >= v37 )
    return v41;
  v25 = v36;
  v26 = 0LL;
  while ( 1 )
  {
    v27 = 48 * *v7 - 0x58000000000LL;
    if ( v27 != qword_1402FF240 )
    {
      if ( v18 )
      {
        MiMarkPfnVerified(v27, v40);
      }
      else if ( !v19 && (*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      {
        v28 = MiValidateImagePfn(v25, *(_QWORD *)(a1 + 96), v24, -1, BugCheckOnFailure, v39, *v7);
        if ( v28 < 0 )
        {
          if ( v28 == -1073741670 )
            goto LABEL_68;
          v41 = -1073740748;
        }
      }
      if ( (v5 & 2) != 0 )
        break;
    }
LABEL_65:
    *(_QWORD *)(a1 + 96) += 4096LL;
    ++v7;
    ++*(_DWORD *)(a1 + 184);
    v26 += 8LL;
    if ( (unsigned __int64)v7 >= v37 )
      return v41;
    v19 = (v5 >> 2) & 1;
    v24 = (int)Process;
  }
  if ( (*(_BYTE *)(v1 + 10) & 1) != 0 )
  {
    v29 = *(_QWORD *)(v1 + 24) + (v26 >> 3 << 12);
    v30 = (__int64 *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v31 = MI_READ_PTE_LOCK_FREE(v30);
    if ( (v31 & 0x42) == 0 )
    {
      v32 = v31 | 0x842;
      *v30 = v31 | 0x842;
      if ( (unsigned int)MiPteInShadowRange(v30) )
        MiWritePteShadow(v30, v32);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        KeFlushSingleTb(v29, 0, 1u);
    }
    v18 = v42;
  }
  else
  {
    LODWORD(v29) = 0;
  }
  if ( (int)MiRelocateImagePfn(v36, v29, *(_DWORD *)(a1 + 184), *v7, 0LL) >= 0 )
  {
    v25 = v36;
    goto LABEL_65;
  }
LABEL_68:
  *(_DWORD *)(a1 + 80) = -1073741670;
  return v41;
}
