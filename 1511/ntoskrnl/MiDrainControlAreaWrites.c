/*
 * XREFs of MiDrainControlAreaWrites @ 0x14000C580
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14000C4EC (MiPrepareSegmentForDeletion.c)
 *     MiDestroySection @ 0x1401070FC (MiDestroySection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 */

void __fastcall MiDrainControlAreaWrites(__int64 a1, KIRQL a2)
{
  __int64 v3; // [rsp+20h] [rbp-30h] BYREF
  int v4; // [rsp+28h] [rbp-28h]
  __int16 v5; // [rsp+30h] [rbp-20h] BYREF
  char v6; // [rsp+32h] [rbp-1Eh]
  int v7; // [rsp+34h] [rbp-1Ch]
  _QWORD v8[3]; // [rsp+38h] [rbp-18h] BYREF

  for ( ; *(_DWORD *)(a1 + 76); a2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72)) )
  {
    v7 = 0;
    v8[1] = v8;
    v4 = 8;
    v8[0] = v8;
    v3 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v3;
    v5 = 263;
    v6 = 6;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), a2);
    KeWaitForGate(&v5, 18LL);
  }
}
