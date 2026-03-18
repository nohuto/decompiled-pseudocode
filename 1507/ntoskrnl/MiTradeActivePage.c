/*
 * XREFs of MiTradeActivePage @ 0x1400FCE2C
 * Callers:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x1400FC0AC (MiReplaceLockedPage.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiTradeActivePage(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebp
  ULONG_PTR v9; // r12
  int PagePrivilege; // eax
  int v11; // r9d
  __int64 *v12; // rdi
  unsigned __int64 v13; // r13
  __int64 PteShadow; // rbx
  unsigned __int64 v16; // rdx
  unsigned int v17; // r15d
  char v18; // al
  __int64 v19; // r12
  unsigned __int64 v20; // rbx
  __int64 *v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // [rsp+20h] [rbp-48h]
  unsigned int v26; // [rsp+70h] [rbp+8h]

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v8 = 0;
  v9 = (a2 + 0x58000000000LL) / 48;
  v25 = (a1 + 0x58000000000LL) / 48;
  if ( (MiFlags & 0x80000) == 0 || (PagePrivilege = MiGetPagePrivilege(a1, 0, 0LL), v11 = 1, PagePrivilege != 1) )
    v11 = 0;
  v12 = (__int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v13 = (unsigned __int64)(v12 + 0x12090482600LL);
  PteShadow = *v12;
  if ( (unsigned __int64)(v12 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v12);
  if ( a5 == 2 )
  {
    if ( (PteShadow & 0x42) != 0 || v11 )
      return 0LL;
  }
  else
  {
    v16 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    *v12 = v16;
    if ( v13 <= 0x7F8 )
      MiWritePteShadow(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v16);
    KeFlushSingleTb(a3, a4, a5);
  }
  v17 = 0;
  v26 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v17);
    }
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    while ( (*(_QWORD *)(a2 + 24) & 0x8000000000000000uLL) != 0 );
  }
  MiFinalizePageAttribute(a2, v26, 1);
  MiCopyPfnEntry(a2, a1);
  MiCopyPage(v9, v25, 0LL, 6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  v18 = *(_BYTE *)(a1 + 34) & 0xC0 | 5;
  *(_BYTE *)(a1 + 35) &= 0xD7u;
  *(_BYTE *)(a1 + 34) = v18;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = (v9 & 0xFFFFFFFFFLL) << 12;
  v20 = v19 | PteShadow & 0xFFFF000000000FFFuLL;
  *v12 = v20;
  if ( v13 <= 0x7F8 )
    MiWritePteShadow(v12, v20);
  KeFlushSingleTb(a3, a4, a5);
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    v21 = (__int64 *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
    v22 = (unsigned __int64)(v21 + 0x12090482600LL);
    v23 = *v21;
    if ( (unsigned __int64)(v21 + 0x12090482600LL) <= 0x7F8 )
      v23 = MiReadPteShadow(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, *v21);
    v24 = v19 | v23 & 0xFFFF000000000FFFuLL;
    *v21 = v24;
    if ( v22 <= 0x7F8 )
      MiWritePteShadow(v21, v24);
  }
  return 1LL;
}
