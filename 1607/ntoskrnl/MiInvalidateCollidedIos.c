/*
 * XREFs of MiInvalidateCollidedIos @ 0x1400B0704
 * Callers:
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 * Callees:
 *     MiReleaseInPageRefs @ 0x1400B0950 (MiReleaseInPageRefs.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2864 (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiInvalidateCollidedIos(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r11
  _QWORD **v22; // r14
  _QWORD *v23; // rdi
  _QWORD *v24; // r15
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx

  v1 = 1;
  if ( (*(_BYTE *)(a1 + 189) & 8) != 0 )
  {
    v5 = a1 + 16;
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD **)(a1 + 24);
    if ( *(_QWORD *)(v6 + 8) != v5 || *v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD *)(a1 + 304);
    v4 = *(_QWORD *)(a1 + 312);
    v3 = (_QWORD *)(*(_QWORD *)(48 * v8 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
    v9 = v4 + 256;
    if ( *(_QWORD *)(v4 + 248) )
      v9 = *(_QWORD *)(v4 + 248);
    v10 = (_QWORD *)(v9 + 48);
    v11 = (((*(_DWORD *)(v9 + 32) + *(_DWORD *)(v9 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v9 + 40) + 4095) >> 12;
    v12 = 6LL * *(_QWORD *)(v9 + 48);
    v13 = v9 + 40 + 8 * v11;
    v1 = 0;
    v14 = *(_QWORD *)(8 * v12 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
    if ( (unsigned __int64)v3 >= v14
      && (v15 = (__int64)((__int64)v3 - v14) >> 3, v15 < v11)
      && v3 == (_QWORD *)(*(_QWORD *)(48LL * v10[v15] - 0x58000000000LL + 8) | 0x8000000000000000uLL) )
    {
LABEL_10:
      v1 = 1;
      v16 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(48 * v8 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
      *v3 = MiUpdateTransitionPteFrame(v16, v8);
      if ( (unsigned int)MiPteInShadowRange(v3, v17) )
        MiWritePteShadow(v18, v19);
      *(_QWORD *)(a1 + 168) = v19;
      *(_QWORD *)(8 * v21 - 0x58000000000LL + 16) ^= (*(_DWORD *)(8 * v21 - 0x58000000000LL + 16) ^ *(_DWORD *)(v20 + 16)) & 0x3E0;
    }
    else
    {
      while ( (unsigned __int64)v10 <= v13 )
      {
        if ( (_QWORD *)(*(_QWORD *)(48LL * *v10 - 0x58000000000LL + 8) | 0x8000000000000000uLL) == v3 )
          goto LABEL_10;
        ++v10;
      }
      *(_BYTE *)(v4 + 188) |= 1u;
      v20 = 48 * v8 - 0x58000000000LL;
    }
    MiReleaseInPageRefs(v20);
  }
  else
  {
    v3 = 0LL;
    v4 = a1;
  }
  v22 = (_QWORD **)(v4 + 16);
  v23 = *v22;
  while ( v23 != v22 )
  {
    v24 = v23 - 2;
    v23 = (_QWORD *)*v23;
    v25 = 48LL * v24[38] - 0x58000000000LL;
    if ( (*(_BYTE *)(a1 + 189) & 8) == 0 || (_QWORD *)(*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) == v3 )
    {
      MiReleaseInPageRefs(v25);
      v26 = v24 + 2;
      v27 = v24[2];
      v28 = (_QWORD *)v24[3];
      if ( *(_QWORD **)(v27 + 8) != v24 + 2 || (_QWORD *)*v28 != v26 )
        __fastfail(3u);
      *v28 = v27;
      *(_QWORD *)(v27 + 8) = v28;
      v24[3] = v24 + 2;
      *v26 = v26;
    }
  }
  return v1;
}
