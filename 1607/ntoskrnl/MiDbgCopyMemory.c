/*
 * XREFs of MiDbgCopyMemory @ 0x140084338
 * Callers:
 *     MmDbgCopyMemory @ 0x1400842A4 (MmDbgCopyMemory.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     MiGetPhysicalAddress @ 0x140024BB0 (MiGetPhysicalAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MiCopyFromUntrustedMemory @ 0x1400844A0 (MiCopyFromUntrustedMemory.c)
 *     MiAcquireProperVm @ 0x1400A2B28 (MiAcquireProperVm.c)
 *     MiCopyToUntrustedMemory @ 0x14012AF80 (MiCopyToUntrustedMemory.c)
 *     MiDbgWriteCheck @ 0x14012CB4C (MiDbgWriteCheck.c)
 *     MiDbgReleaseAddress @ 0x14012CD4C (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140147634 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140148D38 (MiDbgUnTranslatePhysicalAddress.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiDbgCopyMemory(char *BaseAddress, __int64 a2, ULONG a3, unsigned int a4, unsigned int a5)
{
  char *v6; // r14
  unsigned int v7; // esi
  int v8; // r12d
  char v9; // bl
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // edi
  char *v15; // rcx
  char *v16; // rdi
  LONG *SharedVm; // rdi
  KIRQL v18; // al
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v20; // [rsp+20h] [rbp-78h] BYREF
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  char v23[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v24[88]; // [rsp+40h] [rbp-58h] BYREF
  char v26; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v6 = BaseAddress;
  if ( !a3 )
    return 3221225713LL;
  v7 = a5;
  v8 = a5 & 0x40;
  if ( (a5 & 0x40) != 0 && ((a5 & 2) != 0 || (a5 & 1) == 0 || (a5 & 4) == 0) )
    return 3221225714LL;
  AnyMultiplexedVm = 0LL;
  v26 = 17;
  v9 = 0;
  v10 = 1;
  if ( (a5 & 2) != 0 )
  {
    if ( (a5 & 4) != 0 || KeGetCurrentIrql() <= 1u )
    {
      v6 = (char *)MiDbgTranslatePhysicalAddress(BaseAddress, a5, v24);
      if ( !v6 )
        return 3221225473LL;
      goto LABEL_7;
    }
    return 3221225714LL;
  }
  if ( (a5 & 4) != 0 )
  {
LABEL_5:
    if ( MiIsAddressValid((__int64)v6) )
    {
      if ( !v8 )
      {
LABEL_7:
        if ( (v7 & 1) == 0 )
        {
LABEL_8:
          v12 = MiCopyFromUntrustedMemory(a2, v6, a3, v27);
LABEL_9:
          v13 = v12;
LABEL_10:
          if ( (v9 & 1) != 0 )
            MiDbgReleaseAddress(v6, v23, v7);
          if ( (v7 & 2) != 0 )
            MiDbgUnTranslatePhysicalAddress(v24);
          goto LABEL_14;
        }
        v6 = (char *)MiDbgWriteCheck(v6, v23, v10);
        if ( !v6 )
        {
          v13 = -1073741585;
          goto LABEL_10;
        }
        v9 = 1;
LABEL_19:
        v12 = MiCopyToUntrustedMemory(v6, a2, a3, v27);
        goto LABEL_9;
      }
      PhysicalAddress = MmGetPhysicalAddress(v6);
      v6 = (char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiDbgTranslatePhysicalAddress)(
                     (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                     v7,
                     v24);
      if ( v6 )
      {
        v7 |= 2u;
        goto LABEL_7;
      }
      goto LABEL_51;
    }
    v13 = -1073741585;
    goto LABEL_14;
  }
  if ( KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  v20 = 0;
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
      v15 = &BaseAddress[a3];
      if ( (unsigned __int64)&v6[a3] > 0x7FFFFFFF0000LL || v15 < v6 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( (v7 & 1) == 0 )
      goto LABEL_8;
    goto LABEL_19;
  }
  v16 = (char *)MiAcquireProperVm(BaseAddress, &v26);
  AnyMultiplexedVm = v16;
  if ( (unsigned __int64)v16 <= 1 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v18 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v26 = v18;
    v16 = AnyMultiplexedVm;
  }
  if ( v16 != MiGetAnyMultiplexedVm(1) )
  {
    v10 = v20;
    goto LABEL_5;
  }
  if ( (unsigned int)MiGetPhysicalAddress((unsigned __int64)v6, &v22, &v20) )
  {
    v6 = (char *)MiDbgTranslatePhysicalAddress(v22, v7, v24);
    if ( v6 )
    {
      v7 |= 2u;
      if ( (v7 & 1) == 0 )
        goto LABEL_8;
      if ( !v20 )
      {
        v13 = -1073741819;
        goto LABEL_10;
      }
      goto LABEL_19;
    }
LABEL_51:
    v13 = -1073741823;
    goto LABEL_14;
  }
  v13 = -1073741819;
LABEL_14:
  if ( AnyMultiplexedVm )
  {
    LOBYTE(v11) = v26;
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v11);
  }
  return v13;
}
