/*
 * XREFs of MiInvalidateCollidedIos @ 0x14012CBCC
 * Callers:
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiPurgeImageSection @ 0x14021C698 (MiPurgeImageSection.c)
 * Callees:
 *     MiReleaseInPageRefs @ 0x14012CE5C (MiReleaseInPageRefs.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x1402260DC (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiInvalidateCollidedIos(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 *v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v10; // r12
  _QWORD *v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 PteShadow; // rax
  __int64 updated; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  _QWORD *v23; // rdi
  _QWORD *v24; // rbx
  _QWORD *v25; // r14
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx

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
    v4 = *(_QWORD *)(a1 + 312);
    v8 = *(_QWORD *)(a1 + 304);
    v9 = v4 + 256;
    v10 = 48 * v8;
    v3 = (__int64 *)(*(_QWORD *)(48 * v8 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
    if ( *(_QWORD *)(v4 + 248) )
      v9 = *(_QWORD *)(v4 + 248);
    v1 = 0;
    v11 = (_QWORD *)(v9 + 48);
    v12 = *(_QWORD *)(v9 + 48);
    v13 = (((*(_DWORD *)(v9 + 32) + *(_DWORD *)(v9 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v9 + 40) + 4095) >> 12;
    v14 = v9 + 40 + 8 * v13;
    v15 = *(_QWORD *)(48 * v12 - 0x58000000000LL + 8) | 0x8000000000000000uLL;
    if ( (unsigned __int64)v3 >= v15
      && (v16 = (__int64)((__int64)v3 - v15) >> 3, v16 < v13)
      && (v17 = 48LL * v11[v16] - 0x58000000000LL, v3 == (__int64 *)(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL)) )
    {
LABEL_10:
      PteShadow = *v3;
      v1 = 1;
      if ( (unsigned __int64)(v3 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(*(_QWORD *)(48 * v8 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL, *v3);
      updated = MiUpdateTransitionPteFrame(PteShadow, v8);
      *v3 = updated;
      v20 = updated;
      if ( v21 <= v22 )
        MiWritePteShadow(v3, updated);
      *(_QWORD *)(a1 + 168) = v20;
      *(_QWORD *)(v10 - 0x58000000000LL + 16) ^= (*(_DWORD *)(v10 - 0x58000000000LL + 16) ^ *(_DWORD *)(v17 + 16)) & 0x3E0;
    }
    else
    {
      while ( (unsigned __int64)v11 <= v14 )
      {
        v17 = 48LL * *v11 - 0x58000000000LL;
        if ( (__int64 *)(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) == v3 )
          goto LABEL_10;
        ++v11;
      }
      v17 = v10 - 0x58000000000LL;
      *(_BYTE *)(v4 + 188) |= 1u;
    }
    MiReleaseInPageRefs(v17);
  }
  else
  {
    v3 = 0LL;
    v4 = a1;
  }
  v23 = (_QWORD *)(v4 + 16);
  v24 = *(_QWORD **)(v4 + 16);
  while ( v24 != v23 )
  {
    v25 = v24 - 2;
    v24 = (_QWORD *)*v24;
    v26 = 48LL * v25[38] - 0x58000000000LL;
    if ( (*(_BYTE *)(a1 + 189) & 8) == 0 || (__int64 *)(*(_QWORD *)(v26 + 8) | 0x8000000000000000uLL) == v3 )
    {
      MiReleaseInPageRefs(v26);
      v27 = v25 + 2;
      v28 = v25[2];
      v29 = (_QWORD *)v25[3];
      if ( *(_QWORD **)(v28 + 8) != v25 + 2 || (_QWORD *)*v29 != v27 )
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      v25[3] = v25 + 2;
      *v27 = v27;
    }
  }
  return v1;
}
