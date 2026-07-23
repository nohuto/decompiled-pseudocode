/*
 * XREFs of MiDbgTranslatePhysicalAddress @ 0x140147634
 * Callers:
 *     MiDbgCopyMemory @ 0x140084338 (MiDbgCopyMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140108DE8 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeFlushSingleCurrentTb @ 0x14012CDD0 (KeFlushSingleCurrentTb.c)
 *     MiCheckPhysicalAddressRange @ 0x140147790 (MiCheckPhysicalAddressRange.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140148D38 (MiDbgUnTranslatePhysicalAddress.c)
 *     KeFlushCurrentTbOnly @ 0x1401D5EF0 (KeFlushCurrentTbOnly.c)
 */

unsigned __int64 __fastcall MiDbgTranslatePhysicalAddress(unsigned __int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // r15
  int v7; // edx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  int ProtectionPfnCompatible; // ebp
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rsi
  unsigned __int64 ValidKernelPte; // rax
  volatile signed __int64 *v15; // r8
  signed __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KLOCK_QUEUE_HANDLE *v19; // rdx
  __int64 v20; // r9
  _QWORD *v21; // rdx
  int v22; // esi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  char v25; // bl
  __int16 v26; // [rsp+60h] [rbp+8h]

  v26 = a1;
  v3 = qword_140327248;
  if ( !qword_140327248 || !(unsigned int)MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  v8 = a1 >> 12;
  v9 = v3 << 25 >> 16;
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
  if ( MiIsPfnInline(v8) )
  {
    v13 = 48 * v8 - 0x58000000000LL;
    if ( (a2 & 4) != 0 )
    {
      *(_DWORD *)a3 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        if ( (a2 & 0x41) != 0 || (KiBugCheckActive & 3) == 0 )
          return 0LL;
        dword_140327250 += v11;
        *(_DWORD *)a3 = 4;
      }
    }
    else
    {
      *(_DWORD *)a3 = v12;
      MiLockPageAtDpcInline(48 * v8 - 0x58000000000LL);
    }
    *(_QWORD *)(a3 + 8) = v13;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v8 - 0x58000000000LL);
    if ( (*(_BYTE *)(v13 + 34) & 0xC0) == 0xC0 )
      ProtectionPfnCompatible |= 8u;
    goto LABEL_10;
  }
  v19 = (struct _KLOCK_QUEUE_HANDLE *)(a3 + 16);
  if ( (a2 & 4) != 0 )
  {
    *(_DWORD *)a3 = 8;
    if ( !(unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel((__int64)&qword_140327600, v19) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)a3 = 16;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327600, v19);
  }
  v21 = (_QWORD *)qword_140327610;
  v22 = 3;
  while ( v21 )
  {
    v23 = v21[5];
    if ( v8 < v23 )
    {
      v21 = (_QWORD *)*v21;
    }
    else
    {
      if ( v8 < v23 + 512 )
        break;
      v21 = (_QWORD *)v21[1];
    }
  }
  if ( !v21 )
    goto LABEL_38;
  v22 = *(unsigned __int16 *)(v21[6] + 2 * ((v8 & 0xFFFFFFFFFLL) - v21[5])) >> 14;
  if ( v22 == 3 )
    v21 = 0LL;
  if ( !v21 )
  {
LABEL_38:
    v21 = (_QWORD *)qword_140327618;
    while ( v21 )
    {
      v24 = v21[5];
      if ( v8 < v24 )
      {
        v21 = (_QWORD *)*v21;
      }
      else
      {
        if ( v8 < v24 + 512 )
        {
          v22 = *(unsigned __int16 *)(v21[6] + 2 * ((v8 & 0xFFFFFFFFFLL) - v21[5])) >> 14;
          break;
        }
        v21 = (_QWORD *)v21[1];
      }
    }
  }
  if ( v22 == 3 )
  {
    if ( (a2 & 4) != 0 )
      v22 = 0;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_52;
    v25 = a2 & 0xD7;
  }
  else
  {
    v25 = a2 & 0xC7;
    if ( v22 )
    {
      if ( v22 == 2 )
        a2 = v25 | 0x20;
      else
        a2 = v25 | 8;
      goto LABEL_52;
    }
  }
  a2 = v25 | 0x10;
LABEL_52:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      KeFlushCurrentTbOnly(3LL, v21, 0xFFFFFFFFFLL, v20);
      ProtectionPfnCompatible |= 0x28u;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_64:
        MiDbgUnTranslatePhysicalAddress(a3);
        return 0LL;
      }
      KeFlushCurrentTbOnly(3LL, v21, 0xFFFFFFFFFLL, v20);
      ProtectionPfnCompatible |= 0x38u;
    }
  }
  if ( v22 == 3 )
    ++dword_140327250;
LABEL_10:
  ValidKernelPte = MiMakeValidKernelPte(v8, ProtectionPfnCompatible, qword_140327248);
  v16 = ValidKernelPte;
  if ( (ProtectionPfnCompatible & 4) != 0 )
    v16 = ValidKernelPte | 0x42;
  if ( (a2 & 0x41) != 0 )
    byte_140327240 = 1;
  if ( _InterlockedCompareExchange64(v15, v16, 0LL) )
    goto LABEL_64;
  *(_DWORD *)a3 |= 0x20u;
  if ( (*(_DWORD *)a3 & 0x12) != 0 )
    KeFlushSingleTb(v9, 0, 1u);
  else
    KeFlushSingleCurrentTb(v9, 0);
  return v9 + (v26 & 0xFFF);
}
