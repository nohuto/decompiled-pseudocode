/*
 * XREFs of MiDbgTranslatePhysicalAddress @ 0x14022311C
 * Callers:
 *     MiDbgCopyMemory @ 0x140222AD0 (MiDbgCopyMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400FD3FC (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiIoPfnCompare @ 0x140116BBC (MiIoPfnCompare.c)
 *     KeFlushSingleCurrentTb @ 0x14014A648 (KeFlushSingleCurrentTb.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     MiCheckPhysicalAddressRange @ 0x140222818 (MiCheckPhysicalAddressRange.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402235E4 (MiDbgUnTranslatePhysicalAddress.c)
 */

unsigned __int64 __fastcall MiDbgTranslatePhysicalAddress(unsigned __int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // ebp
  __int64 v5; // r14
  unsigned __int8 v7; // dl
  __int64 v8; // r9
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  int v11; // esi
  unsigned __int8 CurrentIrql; // al
  char v13; // r10
  unsigned __int8 v14; // r10
  int v15; // r11d
  __int64 v16; // rdi
  struct _KLOCK_QUEUE_HANDLE *v17; // rdx
  _QWORD *v18; // rdi
  int v19; // ebp
  int v20; // eax
  _QWORD *v21; // rdi
  int v22; // eax
  char v23; // bl
  __int64 v24; // rdx
  volatile signed __int64 *v25; // r9
  unsigned __int64 v26; // rcx
  unsigned __int64 v28; // [rsp+60h] [rbp+8h]
  unsigned __int16 v30; // [rsp+78h] [rbp+20h]
  unsigned __int16 v31; // [rsp+78h] [rbp+20h]

  v28 = a1;
  v3 = qword_14034F2C8;
  v4 = 0;
  v5 = a3;
  if ( !qword_14034F2C8 || !MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  v9 = v3 << 25 >> 16;
  *(_DWORD *)v5 = 0;
  v10 = v8 >> 12;
  v11 = (v7 & a2) != 0 ? 4 : 1;
  if ( (a2 & 4) != 0 )
  {
    *(_BYTE *)(v5 + 4) = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v8 = v28;
    *(_BYTE *)(v5 + 4) = CurrentIrql;
  }
  if ( (BYTE2(MiFlags) & 3) == 3 && (v8 & 0x400) != 0 )
  {
    LOWORD(v28) = v8 & 0xFBFF;
    v10 = (__int64)(v8 & 0xFFFFFFFFFFFFFBFFuLL) >> 12;
    if ( !MI_IS_PFN(v10) )
      return 0LL;
    if ( (v11 & 4) != 0 )
    {
      if ( (a2 & 4) == 0 || (MiFlags & 0x40000) != 0 )
        return 0LL;
      LOBYTE(v11) = 6;
    }
    else
    {
      LOBYTE(v11) = v13;
    }
  }
  if ( MI_IS_PFN(v10) )
  {
    v16 = 48 * v10 - 0x58000000000LL;
    if ( (a2 & 4) != 0 )
    {
      *(_DWORD *)v5 = 1;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        if ( (a2 & 0x41) != 0 || ((unsigned __int8)KiBugCheckActive & v14) == 0 )
          return 0LL;
        ++dword_14034F2D0;
        *(_DWORD *)v5 = 4;
      }
    }
    else
    {
      *(_DWORD *)v5 = v15;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v4);
        }
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
    }
    *(_QWORD *)(v5 + 8) = v16;
    LOBYTE(v11) = MiMakeProtectionPfnCompatible(v11, 48 * v10 - 0x58000000000LL);
    if ( (*(_BYTE *)(v16 + 34) & 0xC0) == 0xC0 )
      LOBYTE(v11) = v11 | 8;
    goto LABEL_71;
  }
  v17 = (struct _KLOCK_QUEUE_HANDLE *)(v5 + 16);
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)v5 = 8;
    if ( !(unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(&qword_14034F640, v17) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)v5 = 16;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_14034F640, v17);
  }
  v18 = (_QWORD *)qword_14034F650;
  v19 = 3;
  if ( qword_14034F650 )
  {
    do
    {
      v20 = MiIoPfnCompare(v10, (__int64)v18);
      if ( v20 >= 0 )
      {
        if ( v20 <= 0 )
          break;
        v18 = (_QWORD *)v18[1];
      }
      else
      {
        v18 = (_QWORD *)*v18;
      }
    }
    while ( v18 );
    v5 = a3;
  }
  if ( !v18
    || ((v30 = *(_WORD *)(v18[6] + 2 * (v10 - v18[5])), (v30 & 0xC000) == 0xC000)
      ? (v18 = 0LL)
      : (_QWORD *)(v19 = v30 >> 14),
        !v18) )
  {
    v21 = (_QWORD *)qword_14034F658;
    if ( qword_14034F658 )
    {
      do
      {
        v22 = MiIoPfnCompare(v10, (__int64)v21);
        if ( v22 >= 0 )
        {
          if ( v22 <= 0 )
            break;
          v21 = (_QWORD *)v21[1];
        }
        else
        {
          v21 = (_QWORD *)*v21;
        }
      }
      while ( v21 );
      v5 = a3;
      if ( v21 )
      {
        v31 = *(_WORD *)(v21[6] + 2 * (v10 - v21[5]));
        if ( (v31 & 0xC000) != 0xC000 )
          v19 = v31 >> 14;
      }
    }
  }
  if ( v19 == 3 )
  {
    if ( (a2 & 4) != 0 )
      v19 = 0;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_60;
    v23 = a2 & 0xD7;
  }
  else
  {
    v23 = a2 & 0xC7;
    if ( v19 )
    {
      if ( v19 == 2 )
        a2 = v23 | 0x20;
      else
        a2 = v23 | 8;
      goto LABEL_60;
    }
  }
  a2 = v23 | 0x10;
LABEL_60:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      KeFlushCurrentTbOnly(3);
      LOBYTE(v11) = v11 | 0x28;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_82:
        MiDbgUnTranslatePhysicalAddress(v5);
        return 0LL;
      }
      KeFlushCurrentTbOnly(3);
      LOBYTE(v11) = v11 | 0x38;
    }
  }
  if ( v19 == 3 )
    ++dword_14034F2D0;
LABEL_71:
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(qword_14034F2C8) )
    v24 |= 0x100uLL;
  v26 = v24 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  if ( (v11 & 4) != 0 )
    v26 |= 0x42uLL;
  if ( (a2 & 0x41) != 0 )
    byte_14034F2C0 = 1;
  if ( _InterlockedCompareExchange64(v25, v26, 0LL) )
    goto LABEL_82;
  *(_DWORD *)v5 |= 0x20u;
  if ( (*(_DWORD *)v5 & 0x12) != 0 )
    KeFlushSingleTb(v9, 0, 1);
  else
    KeFlushSingleCurrentTb(v9, 0);
  return v9 + (v28 & 0xFFF);
}
