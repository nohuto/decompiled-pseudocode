/*
 * XREFs of MiDbgCopyMemory @ 0x1401DD808
 * Callers:
 *     MmDbgCopyMemory @ 0x1401DE338 (MmDbgCopyMemory.c)
 * Callees:
 *     MiAcquireProperVm @ 0x140007D88 (MiAcquireProperVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     MiGetPhysicalAddress @ 0x1401042C0 (MiGetPhysicalAddress.c)
 *     MiCopyFromUntrustedMemory @ 0x1401DD5B8 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x1401DD6D8 (MiCopyToUntrustedMemory.c)
 *     MiDbgReleaseAddress @ 0x1401DDCD4 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401DDD84 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1401DE068 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x1401DE0F4 (MiDbgWriteCheck.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiDbgCopyMemory(char *BaseAddress, _BYTE *a2, ULONG a3, unsigned int a4, unsigned int a5)
{
  char *v6; // r14
  unsigned int v8; // esi
  int v9; // r15d
  LONG *v10; // r12
  char v11; // bl
  unsigned int v12; // edi
  char *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-78h] BYREF
  __int64 v20; // [rsp+28h] [rbp-70h] BYREF
  char v21[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v22[96]; // [rsp+38h] [rbp-60h] BYREF
  KIRQL v24; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+20h]

  v25 = a4;
  v6 = BaseAddress;
  if ( !a3 )
    return 3221225713LL;
  v8 = a5;
  v9 = a5 & 0x40;
  if ( (a5 & 0x40) != 0 && ((a5 & 2) != 0 || (a5 & 1) == 0 || (a5 & 4) == 0) )
    return 3221225714LL;
  v10 = 0LL;
  v24 = 17;
  v11 = 0;
  v12 = 1;
  if ( (a5 & 2) != 0 )
  {
    if ( (a5 & 4) != 0 || KeGetCurrentIrql() <= 1u )
    {
      v6 = (char *)MiDbgTranslatePhysicalAddress(BaseAddress, a5, v22);
      if ( !v6 )
        return 3221225473LL;
LABEL_41:
      if ( (v8 & 1) != 0 )
      {
        v6 = (char *)MiDbgWriteCheck(v6, v21, v12);
        if ( !v6 )
        {
          v16 = -1073741585;
          goto LABEL_48;
        }
        v11 = 1;
        goto LABEL_45;
      }
      goto LABEL_46;
    }
    return 3221225714LL;
  }
  if ( (a5 & 4) != 0 )
    goto LABEL_36;
  if ( KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  v19 = 0;
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
      v13 = &BaseAddress[a3];
      if ( (unsigned __int64)&v6[a3] > MmUserProbeAddress || v13 < v6 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( (v8 & 1) != 0 )
    {
LABEL_45:
      v18 = MiCopyToUntrustedMemory(v6, a2, a3, v25);
LABEL_47:
      v16 = v18;
      goto LABEL_48;
    }
LABEL_46:
    v18 = MiCopyFromUntrustedMemory(a2, v6, a3, v25);
    goto LABEL_47;
  }
  v10 = (LONG *)MiAcquireProperVm((unsigned __int64)BaseAddress, &v24);
  if ( (unsigned __int64)v10 <= 1 )
  {
    v10 = &dword_1402FFA80;
    v24 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
  }
  if ( v10 != &dword_1402FFA80 )
  {
    v12 = v19;
LABEL_36:
    if ( !MiIsAddressValid((__int64)v6) )
    {
      v16 = -1073741585;
      goto LABEL_52;
    }
    if ( !v9 )
      goto LABEL_41;
    PhysicalAddress = MmGetPhysicalAddress(v6);
    v6 = (char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiDbgTranslatePhysicalAddress)(
                   (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                   v8,
                   v22);
    if ( v6 )
    {
      v8 |= 2u;
      goto LABEL_41;
    }
    goto LABEL_31;
  }
  if ( (unsigned int)MiGetPhysicalAddress((unsigned __int64)v6, &v20, &v19) )
  {
    v6 = (char *)MiDbgTranslatePhysicalAddress(v20, v8, v22);
    if ( v6 )
    {
      v8 |= 2u;
      if ( (v8 & 1) != 0 )
      {
        if ( !v19 )
        {
          v16 = -1073741819;
LABEL_48:
          if ( (v11 & 1) != 0 )
            MiDbgReleaseAddress(v6, v21, v8);
          if ( (v8 & 2) != 0 )
            MiDbgUnTranslatePhysicalAddress(v22);
          goto LABEL_52;
        }
        goto LABEL_45;
      }
      goto LABEL_46;
    }
LABEL_31:
    v16 = -1073741823;
    goto LABEL_52;
  }
  v16 = -1073741819;
LABEL_52:
  if ( v10 )
  {
    LOBYTE(v14) = v24;
    MiUnlockWorkingSetExclusive((__int64)v10, v14, v15);
  }
  return v16;
}
