/*
 * XREFs of MiDeprioritizeVad @ 0x1400ED6E0
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiTryLockVad @ 0x1400ED7E0 (MiTryLockVad.c)
 *     MiDeprioritizeVARange @ 0x1401D257C (MiDeprioritizeVARange.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfCheckDeprioritizeFile @ 0x1403E7394 (PfCheckDeprioritizeFile.c)
 */

void __fastcall MiDeprioritizeVad(unsigned int *P, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  int v7; // ebp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  ULONG_PTR v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  KIRQL v16; // r15

  v3 = *(_QWORD *)(a3 + 184);
  --*(_WORD *)(a3 + 486);
  v7 = 0;
  if ( (unsigned int)MiTryLockVad(a3, P) )
  {
    if ( !MiVadDeleted((__int64)P) )
    {
      v8 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      v9 = ((a2 >> 12) - v8) >> 8;
      if ( (P[16] & 0x2000000) != 0 )
      {
        v10 = **((_QWORD **)P + 9);
        v11 = MI_REFERENCE_CONTROL_AREA_FILE(v10);
        v12 = *(_QWORD *)(v11 + 24);
        MI_DEREFERENCE_CONTROL_AREA_FILE(v10, v11);
        if ( (*(_DWORD *)(v3 + 772) & 0x4000) != 0 )
          v7 = PfCheckDeprioritizeFile(*(unsigned int *)(v3 + 1180), v12, v9 << 8);
        v13 = v3 + 1280;
        v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1280));
        if ( v7 == 1 )
        {
          if ( (P[16] & 0x2000000) != 0 )
            MiDeprioritizeVARange((v8 << 12) + (((v9 << 8) - 256) << 12), 256LL, v13, 50LL);
        }
        else
        {
          P[16] &= ~0x2000000u;
        }
        LOBYTE(v14) = v16;
        MiUnlockWorkingSetExclusive(v13, v14, v15);
      }
    }
    MiUnlockAndDereferenceVad(P);
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x80000) != 0 )
      ExFreePoolWithTag(P, 0);
    KiLeaveGuardedRegionUnsafe(a3);
  }
}
