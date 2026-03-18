/*
 * XREFs of MiDbgCopyMemory @ 0x140222AD0
 * Callers:
 *     MmDbgCopyMemory @ 0x140223948 (MmDbgCopyMemory.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     MiGetPhysicalAddress @ 0x1400DF980 (MiGetPhysicalAddress.c)
 *     MiAcquireProperVm @ 0x1400FB9F8 (MiAcquireProperVm.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiCopyFromUntrustedMemory @ 0x140222880 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x1402229A0 (MiCopyToUntrustedMemory.c)
 *     MiDbgReleaseAddress @ 0x140223080 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14022311C (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1402235E4 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1402236C0 (MiDbgWriteCheck.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiDbgCopyMemory(char *BaseAddress, _BYTE *a2, ULONG a3, unsigned int a4, unsigned int a5)
{
  char *v6; // r14
  unsigned int v8; // esi
  int v9; // r15d
  char v10; // bl
  unsigned int v11; // edi
  char *v12; // rcx
  signed __int32 *v13; // r8
  unsigned int v15; // ecx
  unsigned int v16; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v18; // eax
  int v19; // [rsp+20h] [rbp-98h]
  signed __int32 *v20; // [rsp+28h] [rbp-90h]
  int v21; // [rsp+34h] [rbp-84h] BYREF
  __int64 CurrentIrql; // [rsp+38h] [rbp-80h]
  char v23[8]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v24; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v25[104]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v27; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v28; // [rsp+D8h] [rbp+20h]

  v28 = a4;
  v6 = BaseAddress;
  if ( !a3 )
    return 3221225713LL;
  v8 = a5;
  v9 = a5 & 0x40;
  if ( (a5 & 0x40) != 0 && ((a5 & 2) != 0 || (a5 & 1) == 0 || (a5 & 4) == 0) )
    return 3221225714LL;
  v20 = 0LL;
  v27 = 17;
  v10 = 0;
  v11 = 1;
  if ( (a5 & 2) != 0 )
  {
    if ( (a5 & 4) != 0 || KeGetCurrentIrql() <= 1u )
    {
      v6 = (char *)MiDbgTranslatePhysicalAddress(BaseAddress, a5, v25);
      if ( !v6 )
        return 3221225473LL;
LABEL_52:
      if ( (v8 & 1) != 0 )
      {
        v6 = (char *)MiDbgWriteCheck(v6, v23, v11);
        if ( !v6 )
        {
          v16 = -1073741585;
          goto LABEL_59;
        }
        v10 = 1;
        goto LABEL_56;
      }
      goto LABEL_57;
    }
    return 3221225714LL;
  }
  if ( (a5 & 4) != 0 )
    goto LABEL_47;
  if ( KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  if ( (unsigned __int64)BaseAddress < 0xFFFF800000000000uLL )
  {
    if ( (a5 & 1) != 0 )
    {
      ProbeForWrite(BaseAddress, a3, a3);
    }
    else
    {
      if ( ((a3 - 1) & (unsigned int)BaseAddress) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = &BaseAddress[a3];
      if ( (unsigned __int64)&v6[a3] > MmUserProbeAddress || v12 < v6 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( (v8 & 1) != 0 )
    {
LABEL_56:
      v18 = MiCopyToUntrustedMemory(v6, a2, a3, v28);
LABEL_58:
      v16 = v18;
      goto LABEL_59;
    }
LABEL_57:
    v18 = MiCopyFromUntrustedMemory(a2, v6, a3, v28);
    goto LABEL_58;
  }
  v13 = (signed __int32 *)MiAcquireProperVm((unsigned __int64)BaseAddress, &v27);
  v20 = v13;
  if ( (unsigned __int64)v13 <= 1 )
  {
    v20 = dword_14034FF40;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
    }
    else
    {
      v19 = 0;
      if ( _interlockedbittestandset(dword_14034FF40, 0x1Fu) )
        v19 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
      while ( (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034FF40[0] & 0x40000000) == 0 )
          _InterlockedCompareExchange(dword_14034FF40, dword_14034FF40[0] | 0x40000000, dword_14034FF40[0]);
        v15 = v19 + 1;
        v19 = v15;
        if ( (v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15);
      }
    }
    v27 = CurrentIrql;
    v13 = dword_14034FF40;
  }
  if ( v13 != dword_14034FF40 )
  {
    v11 = 0;
LABEL_47:
    if ( !MiIsAddressValid((__int64)v6) )
    {
      v16 = -1073741585;
      goto LABEL_63;
    }
    if ( !v9 )
      goto LABEL_52;
    PhysicalAddress = MmGetPhysicalAddress(v6);
    v6 = (char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiDbgTranslatePhysicalAddress)(
                   (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                   v8,
                   v25);
    if ( v6 )
    {
      v8 |= 2u;
      goto LABEL_52;
    }
    goto LABEL_42;
  }
  if ( (unsigned int)MiGetPhysicalAddress((unsigned __int64)v6, &v24, &v21) )
  {
    v6 = (char *)MiDbgTranslatePhysicalAddress(v24, v8, v25);
    if ( v6 )
    {
      v8 |= 2u;
      if ( (v8 & 1) != 0 )
      {
        if ( !v21 )
        {
          v16 = -1073741819;
LABEL_59:
          if ( (v10 & 1) != 0 )
            MiDbgReleaseAddress(v6, v23, v8);
          if ( (v8 & 2) != 0 )
            MiDbgUnTranslatePhysicalAddress(v25);
          goto LABEL_63;
        }
        goto LABEL_56;
      }
      goto LABEL_57;
    }
LABEL_42:
    v16 = -1073741823;
    goto LABEL_63;
  }
  v16 = -1073741819;
LABEL_63:
  if ( v20 )
    MiUnlockWorkingSetExclusive((__int64)v20, v27);
  return v16;
}
