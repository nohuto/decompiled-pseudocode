/*
 * XREFs of MiUpControlAreaRefs @ 0x14010A768
 * Callers:
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 * Callees:
 *     MiReferenceSubsection @ 0x1400216EC (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiUnlockNestedVad @ 0x14050B010 (MiUnlockNestedVad.c)
 *     MiLockNestedVad @ 0x14050B040 (MiLockNestedVad.c)
 */

void __fastcall MiUpControlAreaRefs(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 *v4; // rbx
  int v5; // ebp
  volatile LONG *v6; // r14
  KIRQL v7; // al
  KIRQL v8; // r15
  unsigned __int64 v9; // rbx
  __int64 *v10; // rdi
  __int64 *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = **(_QWORD **)(a1 + 72);
  if ( ((((*(_DWORD *)(a1 + 48) >> 3) & 0x1F) - 4) & 0xFFFFFFFD) == 0
    && *(_QWORD *)(v2 + 64)
    && (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 92));
  }
  v3 = *(_DWORD *)(v2 + 56);
  v4 = 0LL;
  v12 = 0LL;
  v5 = 0;
  v11 = 0LL;
  if ( (v3 & 0x20) == 0 && *(_QWORD *)(v2 + 64) && (v3 & 0x400) == 0 )
  {
    v9 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    MiLockNestedVad(a1);
    MiGetProtoPteAddress(a1, v9, 1, &v11);
    v4 = v11;
    if ( v11 )
      v5 = 1;
    else
      MiUnlockNestedVad(a1);
  }
  v6 = (volatile LONG *)(v2 + 72);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  ++*(_QWORD *)(v2 + 40);
  v8 = v7;
  ++*(_QWORD *)(v2 + 48);
  if ( v4 )
  {
    MiGetProtoPteAddress(
      a1,
      *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
      3,
      &v12);
    v10 = v12;
    while ( v4 != v10 )
    {
      MiReferenceSubsection((__int64)v4);
      v4 = (__int64 *)v4[2];
    }
    if ( v10 )
      MiReferenceSubsection((__int64)v10);
  }
  ExReleaseSpinLockExclusive(v6, v8);
  if ( v5 == 1 )
    MiUnlockNestedVad(a1);
}
