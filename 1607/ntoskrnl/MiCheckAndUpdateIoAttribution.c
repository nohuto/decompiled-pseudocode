/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x14006EA30
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x1400E6250 (MiValidFault.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001F3AC (IoDiskIoAttributionDereference.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     IoReferenceIoAttributionFromThread @ 0x14006ED10 (IoReferenceIoAttributionFromThread.c)
 *     MiGetPrototypePteDirect @ 0x1401F26B0 (MiGetPrototypePteDirect.c)
 */

void __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  __int64 PrototypePteDirect; // rax
  __int64 v2; // r8
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)PrototypePteDirect;
  if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) == 0
    && (int)IoReferenceIoAttributionFromThread(v2, &v7) >= 0 )
  {
    v4 = v7;
    if ( v7 == 8LL * *(_QWORD *)(v3 + 120)
      || (v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72)),
          v6 = (v4 >> 3) | *(_QWORD *)(v3 + 120) & 0xE000000000000000uLL,
          v4 = 8LL * *(_QWORD *)(v3 + 120),
          *(_QWORD *)(v3 + 120) = v6,
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), v5),
          v4) )
    {
      IoDiskIoAttributionDereference(v4);
    }
  }
}
