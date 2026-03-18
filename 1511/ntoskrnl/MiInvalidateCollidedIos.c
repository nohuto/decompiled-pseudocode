/*
 * XREFs of MiInvalidateCollidedIos @ 0x1400F16AC
 * Callers:
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 * Callees:
 *     MiReleaseInPageRefs @ 0x1400F1950 (MiReleaseInPageRefs.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInvalidateCollidedIos(__int64 a1)
{
  unsigned int v1; // r15d
  _QWORD *v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r12
  _QWORD *v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  _QWORD *v19; // rdi
  _QWORD *v20; // rbx
  _QWORD *v21; // r14
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx

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
    v9 = v4 + 256;
    v10 = 48 * v8;
    v3 = (_QWORD *)(*(_QWORD *)(48 * v8 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
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
      && (v17 = 48LL * v11[v16] - 0x58000000000LL, v3 == (_QWORD *)(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL)) )
    {
LABEL_10:
      v1 = 1;
      v18 = ((v8 & 0xFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE(*(_QWORD *)(48 * v8 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL) & 0xFFFF000000000FFFuLL;
      *v3 = v18;
      if ( (unsigned int)MiPteInShadowRange(v3) )
        MiWritePteShadow(v3, v18);
      *(_QWORD *)(a1 + 168) = v18;
      *(_QWORD *)(v10 - 0x58000000000LL + 16) ^= (*(_DWORD *)(v10 - 0x58000000000LL + 16) ^ *(_DWORD *)(v17 + 16)) & 0x3E0;
    }
    else
    {
      while ( (unsigned __int64)v11 <= v14 )
      {
        v17 = 48LL * *v11 - 0x58000000000LL;
        if ( (_QWORD *)(*(_QWORD *)(v17 + 8) | 0x8000000000000000uLL) == v3 )
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
  v19 = (_QWORD *)(v4 + 16);
  v20 = *(_QWORD **)(v4 + 16);
  if ( v20 != (_QWORD *)(v4 + 16) )
  {
    do
    {
      v21 = v20 - 2;
      v20 = (_QWORD *)*v20;
      v22 = 48LL * v21[38] - 0x58000000000LL;
      if ( (*(_BYTE *)(a1 + 189) & 8) == 0 || (_QWORD *)(*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) == v3 )
      {
        MiReleaseInPageRefs(v22);
        v23 = v21 + 2;
        v24 = v21[2];
        v25 = (_QWORD *)v21[3];
        if ( *(_QWORD **)(v24 + 8) != v21 + 2 || (_QWORD *)*v25 != v23 )
          __fastfail(3u);
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        v21[3] = v21 + 2;
        *v23 = v23;
      }
    }
    while ( v20 != v19 );
  }
  return v1;
}
