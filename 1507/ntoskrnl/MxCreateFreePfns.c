/*
 * XREFs of MxCreateFreePfns @ 0x1407C5084
 * Callers:
 *     MxReleaseFreeDescriptor @ 0x1407C4A30 (MxReleaseFreeDescriptor.c)
 *     MiCreateFreePfns @ 0x1407C4F18 (MiCreateFreePfns.c)
 * Callees:
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     MiPageToChannel @ 0x1400FFFF0 (MiPageToChannel.c)
 *     MiRestrictRangeToNode @ 0x14015F6F4 (MiRestrictRangeToNode.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiInitializeBlankPfns @ 0x1407C5470 (MiInitializeBlankPfns.c)
 *     MiFreeEmptyBootPageTable @ 0x1407FB334 (MiFreeEmptyBootPageTable.c)
 */

void __fastcall MxCreateFreePfns(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rbp
  unsigned __int8 v4; // r13
  volatile signed __int32 *v5; // r12
  __int64 v6; // rdi
  int v7; // eax
  __int16 v8; // ax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // r14
  unsigned __int8 v15; // bp
  volatile signed __int32 *v16; // rdi
  unsigned __int64 v17; // r14
  int v18; // eax
  int v19; // r10d
  unsigned int v20; // esi
  int v21; // eax
  int v22; // r10d
  unsigned int v23; // r13d
  int v24; // [rsp+70h] [rbp+8h]
  unsigned __int8 CurrentIrql; // [rsp+78h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
  {
    if ( !--v2 )
      return;
    v1 = 1LL;
  }
  v4 = *(_DWORD *)(a1 + 16) != 24;
  v5 = 0LL;
  v6 = 48 * v1 - 0x58000000000LL;
  v24 = v4;
  if ( v2 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1 + 16);
      if ( v7 == 2 || v7 == 24 )
        goto LABEL_14;
      v8 = *(_WORD *)(v6 + 32);
      if ( v8 == 1 )
        break;
      if ( !v8 )
        goto LABEL_14;
LABEL_20:
      v6 += 48LL;
      ++v1;
      if ( !--v2 )
        goto LABEL_21;
    }
    v9 = (_QWORD *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL);
    v10 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL;
    *v9 = 0LL;
    v11 = 48 * v10 - 0x58000000000LL;
    if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow((__int64)v9, 0LL);
    v12 = *(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v11 + 24) = v12;
    if ( (v12 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      MiFreeEmptyBootPageTable(v11, 1LL, 0x3FFFFFFFFFFFFFFFLL);
    *(_WORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
LABEL_14:
    if ( (v1 & 0x1FF) == 0
      && ((v13 = *(_DWORD *)(a1 + 16), v13 == 2) || v13 == 24)
      && v2 >= 0x200
      && (v14 = MiRestrictRangeToNode(v1, v2 & 0xFFFFFFFFFFFFFE00uLL) & 0xFFFFFFFFFFFFFE00uLL, v14 >= 0x200) )
    {
      MiPageToNode(v1, 0);
      v21 = MiPageToChannel(v1);
      MiInitializeBlankPfns(v6, v14, v22, v21, v4);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v23 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v23);
        }
        while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
      }
      v4 = v24;
      MiInsertLargePageInNodeList(v1, v14, v24);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v2 += 1 - v14;
      v6 = 48 * v14 + v6 - 48;
      v1 += v14 - 1;
    }
    else
    {
      *(_QWORD *)v6 = v5;
      v5 = (volatile signed __int32 *)v6;
    }
    goto LABEL_20;
  }
LABEL_21:
  v15 = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( v5 )
  {
    v16 = v5;
    v5 = *(volatile signed __int32 **)v5;
    v17 = (__int64)(v16 + 0x16000000000LL) / 48;
    MiPageToNode(v17, 0);
    v18 = MiPageToChannel(v17);
    MiInitializeBlankPfns((_DWORD)v16, 1, v19, v18, v4);
    v20 = 0;
    *((_QWORD *)v16 + 5) &= 0xFFFFFFF000000000uLL;
    if ( _interlockedbittestandset64(v16 + 6, 0x3FuLL) )
    {
      do
      {
        if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v20);
      }
      while ( (*((_QWORD *)v16 + 3) & 0x8000000000000000uLL) != 0 || _interlockedbittestandset64(v16 + 6, 0x3FuLL) );
    }
    MiInsertPageInFreeOrZeroedList(v17, 2);
    _InterlockedAnd64((volatile signed __int64 *)v16 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(v15);
}
