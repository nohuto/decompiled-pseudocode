/*
 * XREFs of MiDbgTranslatePhysicalAddress @ 0x1401DDD84
 * Callers:
 *     MiDbgCopyMemory @ 0x1401DD808 (MiDbgCopyMemory.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400D5698 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     KeFlushSingleCurrentTb @ 0x140115120 (KeFlushSingleCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x1401C6F54 (KeFlushCurrentTbOnly.c)
 *     MiCheckPhysicalAddressRange @ 0x1401DD550 (MiCheckPhysicalAddressRange.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1401DE068 (MiDbgUnTranslatePhysicalAddress.c)
 */

__int64 __fastcall MiDbgTranslatePhysicalAddress(signed __int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // r15
  int v7; // r9d
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  int ProtectionPfnCompatible; // ebp
  unsigned __int8 CurrentIrql; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // rsi
  __int64 v17; // r9
  struct _KLOCK_QUEUE_HANDLE *v18; // rdx
  _QWORD *v19; // rdx
  int v20; // esi
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rax
  char v24; // bl
  volatile signed __int64 *v25; // rsi
  unsigned __int64 ValidKernelPte; // rax
  signed __int64 v27; // rcx
  __int16 v29; // [rsp+60h] [rbp+8h]
  unsigned __int16 v30; // [rsp+78h] [rbp+20h]
  unsigned __int16 v31; // [rsp+78h] [rbp+20h]

  v29 = a1;
  v3 = qword_1402FEE08;
  if ( !qword_1402FEE08 || !MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  v8 = v3 << 25 >> 16;
  v9 = a1 >> 12;
  *(_DWORD *)a3 = 0;
  ProtectionPfnCompatible = v7 + (((unsigned __int8)v7 & a2) != 0 ? 3 : 0);
  if ( (a2 & 4) != 0 )
  {
    *(_BYTE *)(a3 + 4) = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a3 + 4) = CurrentIrql;
  }
  if ( MI_IS_PFN(v9) )
  {
    v16 = 48 * v9 - 0x58000000000LL;
    if ( (a2 & 4) != 0 )
    {
      *(_DWORD *)a3 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        if ( (a2 & 0x41) != 0 || (KiBugCheckActive & 3) == 0 )
          return 0LL;
        dword_1402FEE10 += v14;
        *(_DWORD *)a3 = 4;
      }
    }
    else
    {
      *(_DWORD *)a3 = v15;
      MiLockPageAtDpcInline(48 * v9 - 0x58000000000LL, v12, v13);
    }
    *(_QWORD *)(a3 + 8) = v16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v9 - 0x58000000000LL);
    if ( (*(_BYTE *)(v16 + 34) & 0xC0) == 0xC0 )
      ProtectionPfnCompatible |= 8u;
    goto LABEL_56;
  }
  v18 = (struct _KLOCK_QUEUE_HANDLE *)(a3 + 16);
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)a3 = 8;
    if ( !(unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel((__int64)&qword_1402FF180, v18) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)a3 = 16;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_1402FF180, v18);
  }
  v19 = (_QWORD *)qword_1402FF190;
  v20 = 3;
  while ( v19 )
  {
    v21 = v19[5];
    if ( v9 < v21 )
    {
      v19 = (_QWORD *)*v19;
    }
    else
    {
      if ( v9 < v21 + 512 )
        break;
      v19 = (_QWORD *)v19[1];
    }
  }
  if ( !v19
    || ((v30 = *(_WORD *)(v19[6] + 2 * (v9 - v19[5])), (v30 & 0xC000) == 0xC000)
      ? (v19 = 0LL)
      : (_QWORD *)(v20 = v30 >> 14),
        !v19) )
  {
    v22 = (_QWORD *)qword_1402FF198;
    while ( v22 )
    {
      v23 = v22[5];
      if ( v9 < v23 )
      {
        v22 = (_QWORD *)*v22;
      }
      else
      {
        if ( v9 < v23 + 512 )
        {
          v31 = *(_WORD *)(v22[6] + 2 * (v9 - v22[5]));
          if ( (v31 & 0xC000) != 0xC000 )
            v20 = v31 >> 14;
          break;
        }
        v22 = (_QWORD *)v22[1];
      }
    }
  }
  if ( v20 == 3 )
  {
    if ( (a2 & 4) != 0 )
      v20 = 0;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_45;
    v24 = a2 & 0xD7;
  }
  else
  {
    v24 = a2 & 0xC7;
    if ( v20 )
    {
      if ( v20 == 2 )
        a2 = v24 | 0x20;
      else
        a2 = v24 | 8;
      goto LABEL_45;
    }
  }
  a2 = v24 | 0x10;
LABEL_45:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      KeFlushCurrentTbOnly(3);
      ProtectionPfnCompatible |= 0x28u;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_65:
        MiDbgUnTranslatePhysicalAddress(a3);
        return 0LL;
      }
      KeFlushCurrentTbOnly(3);
      ProtectionPfnCompatible |= 0x38u;
    }
  }
  if ( v20 == 3 )
    ++dword_1402FEE10;
LABEL_56:
  v25 = (volatile signed __int64 *)qword_1402FEE08;
  ValidKernelPte = MiMakeValidKernelPte(v9, ProtectionPfnCompatible, qword_1402FEE08, v17);
  v27 = ValidKernelPte;
  if ( (ProtectionPfnCompatible & 4) != 0 )
    v27 = ValidKernelPte | 0x42;
  if ( (a2 & 0x41) != 0 )
    byte_1402FEE00 = 1;
  if ( _InterlockedCompareExchange64(v25, v27, 0LL) )
    goto LABEL_65;
  *(_DWORD *)a3 |= 0x20u;
  if ( (*(_DWORD *)a3 & 0x12) != 0 )
    KeFlushSingleTb(v8, 0, 1u);
  else
    KeFlushSingleCurrentTb(v8, 0);
  return v8 + (v29 & 0xFFF);
}
