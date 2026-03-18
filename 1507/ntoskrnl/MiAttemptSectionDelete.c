/*
 * XREFs of MiAttemptSectionDelete @ 0x1401195C8
 * Callers:
 *     MmFlushImageSection @ 0x140119354 (MmFlushImageSection.c)
 *     MmForceSectionClosed @ 0x1401194D0 (MmForceSectionClosed.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x1400886B0 (MiRemoveUnusedSegment.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     MiCleanSection @ 0x140158DAC (MiCleanSection.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiAttemptSectionDelete(__int64 a1, unsigned __int8 a2, char a3)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h]
  __int16 v12; // [rsp+30h] [rbp-20h] BYREF
  char v13; // [rsp+32h] [rbp-1Eh]
  int v14; // [rsp+34h] [rbp-1Ch]
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]

  if ( *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 40) || (v7 = *(_DWORD *)(a1 + 56), (v7 & 2) != 0) )
  {
    if ( a3 )
      *(_DWORD *)(a1 + 56) |= 0x40000u;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    __writecr8(a2);
    return 0;
  }
  else if ( (v7 & 1) != 0 )
  {
    v11 = 1;
    v15[1] = v15;
    v15[0] = v15;
    v10 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v10;
    v12 = 263;
    v13 = 6;
    v14 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    __writecr8(a2);
    KeWaitForGate(&v12, 19LL);
    return 1;
  }
  else
  {
    MiRemoveUnusedSegment(a1);
    LOBYTE(v8) = a3;
    *(_QWORD *)(a1 + 40) = 1LL;
    LOBYTE(v9) = a2;
    return MiCleanSection(a1, v9, v8);
  }
}
