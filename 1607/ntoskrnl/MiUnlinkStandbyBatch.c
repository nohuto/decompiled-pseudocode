/*
 * XREFs of MiUnlinkStandbyBatch @ 0x1400358F0
 * Callers:
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x140036D30 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F2570 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F25B8 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F26C4 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiUnlinkStandbyBatch(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, ULONG_PTR *a6)
{
  __int64 v6; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  ULONG_PTR v15; // rbx
  __int64 v16; // rax
  char v17; // al
  char v18; // cl
  int v19; // eax
  __int64 v20; // rdi
  _QWORD *v21; // rdi
  __int64 v22; // r11
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  v27 = a1;
  v6 = a5;
  v10 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      v11 = MI_READ_PTE_LOCK_FREE(a2);
      v27 = v11;
      if ( (v11 & 1) != 0 )
        break;
      if ( (v11 & 0x400) != 0 || (v11 & 0x800) == 0 )
        return v10 - v6;
      if ( (unsigned int)MiInvalidPteConforms(v11) )
      {
        v12 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v27);
LABEL_8:
        if ( v12 <= qword_140326A90
          && (!MmPhysicalMemoryBlock || (*(_QWORD *)(v14 + 48 * v12) & 0x20000000000000LL) != 0) )
        {
          v15 = v13 + 48 * v12;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
            return v10 - v6;
          v16 = MI_READ_PTE_LOCK_FREE(a2);
          if ( v16 == v27 )
          {
            if ( !v15 )
              return v10 - v6;
            if ( (MI_READ_PTE_LOCK_FREE(a2) & 1) != 0
              || (v17 = *(_BYTE *)(v15 + 34), (v17 & 0x20) != 0)
              || (v18 = *(_BYTE *)(v15 + 35), (v18 & 0x40) != 0)
              || (v17 & 7) != 2
              || ((v18 & 8) == 0 ? (v19 = v18 & 7) : (v19 = 5), v19 != a3) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              return v10 - v6;
            }
            if ( !(unsigned int)MiUnlinkPageFromList(v15) )
            {
              *a6 = v15;
              return v10 - v6;
            }
            v20 = *(_QWORD *)(v15 + 8);
            ++*(_WORD *)(v15 + 32);
            v21 = (_QWORD *)(v20 | 0x8000000000000000uLL);
            a4 += 8LL;
            a2 += 8LL;
            *(_BYTE *)(v15 + 34) = *(_BYTE *)(v15 + 34) & 0xF8 | 6;
            MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v15 + 16);
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a4) )
              v22 |= 0x100uLL;
            v23 = v22 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_140326AA8 & 1) << 8);
            *v21 = v23;
            if ( (unsigned int)MiPteInShadowRange(v21, v23) )
              MiWritePteShadow(v25, v24);
            *(_QWORD *)(v15 + 24) = *(_QWORD *)(v15 + 24) & 0xC000000000000000uLL | 1;
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !--v6 )
              return v10 - v6;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
      }
    }
    v12 = MI_GET_PAGE_FRAME_FROM_PTE(&v27);
    goto LABEL_8;
  }
  return v10 - v6;
}
