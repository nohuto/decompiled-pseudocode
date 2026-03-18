/*
 * XREFs of MiSectionCreated @ 0x140038BD8
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiInitializeTransitionPfn @ 0x140011764 (MiInitializeTransitionPfn.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiReferenceControlAreaPfn @ 0x1400AB390 (MiReferenceControlAreaPfn.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v3; // r12
  KIRQL v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rsi
  volatile LONG *v10; // rbp
  __int64 v11; // r15
  _QWORD *v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 *i; // rbp
  __int64 v18; // r14
  __int64 v19; // rdx
  char v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = (volatile LONG *)(a2 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 72));
  if ( (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) != 0 )
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
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1402FE280);
  if ( a3 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    ExReleaseSpinLockExclusive(v3, v7);
    if ( !(unsigned int)MiSubsectionUsingExtents(a2 + 120, v14, v15) )
    {
      for ( i = *(__int64 **)(v16 + 8); ; MmAccessFault(2uLL, (ULONG_PTR)i) )
      {
        v18 = MiLockProtoPoolPage(i, &v20);
        if ( v18 )
          break;
      }
      MiLockPageAtDpcInline(a3);
      MiInitializeTransitionPfn((a3 + 0x58000000000LL) / 48, i);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v19) = v20;
      MiUnlockProtoPoolPage(v18, v19);
      *(_QWORD *)a3 = 0LL;
      if ( (*(_DWORD *)(a3 + 16) & 0x400LL) != 0 )
        MiReferenceControlAreaPfn(a2, 0LL, 1LL);
    }
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 40);
    *v12 = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE280);
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    *(_DWORD *)(a2 + 56) &= ~2u;
    ExReleaseSpinLockExclusive(v3, v7);
    KeAbPostRelease((ULONG_PTR)v12);
  }
  return v11;
}
