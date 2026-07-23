/*
 * XREFs of MiSectionCreated @ 0x1400FB048
 * Callers:
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     MiInitializeTransitionPfn @ 0x140022CA4 (MiInitializeTransitionPfn.c)
 *     MiReferenceControlAreaPfn @ 0x140023264 (MiReferenceControlAreaPfn.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // r12
  KIRQL v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rsi
  volatile LONG *v10; // rbp
  __int64 v11; // r15
  __int64 *v12; // rbx
  __int64 v14; // rcx
  __int64 *i; // rbp
  __int64 v16; // r14
  unsigned __int8 v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = (volatile LONG *)(a2 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x200u;
  v8 = *(_QWORD **)(a1 + 40);
  if ( a3 )
  {
    v9 = v8[2];
    v10 = (volatile LONG *)(v9 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    v11 = 0LL;
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(v9 + 80);
  }
  else
  {
    v9 = *v8;
    v10 = (volatile LONG *)(*v8 + 72LL);
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    v11 = *(_QWORD *)(v9 + 80);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(v9 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140326580);
  if ( a3 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326580);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    ExReleaseSpinLockExclusive(v3, v7);
    if ( !(unsigned int)MiSubsectionUsingExtents((unsigned __int8 *)(a2 + 128)) )
    {
      for ( i = *(__int64 **)(v14 + 8); ; MmAccessFault(2uLL, (signed __int64)i, 0, 0LL) )
      {
        v16 = MiLockProtoPoolPage((unsigned __int64)i, &v17);
        if ( v16 )
          break;
      }
      MiLockPageAtDpcInline(a3);
      MiInitializeTransitionPfn((a3 + 0x58000000000LL) / 48, i);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v16, v17);
      *(_QWORD *)a3 = 0LL;
      if ( (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
        MiReferenceControlAreaPfn(a2, 0LL, 1u);
    }
  }
  else
  {
    v12 = *(__int64 **)(a1 + 40);
    *v12 = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326580);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    *(_DWORD *)(a2 + 56) &= ~2u;
    ExReleaseSpinLockExclusive(v3, v7);
    KeAbPostRelease((ULONG_PTR)v12);
  }
  return v11;
}
