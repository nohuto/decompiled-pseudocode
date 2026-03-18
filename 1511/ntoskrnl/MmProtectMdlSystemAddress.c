/*
 * XREFs of MmProtectMdlSystemAddress @ 0x1400E5CC4
 * Callers:
 *     VerifierMmProtectMdlSystemAddress @ 0x1406D02D8 (VerifierMmProtectMdlSystemAddress.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // r14
  unsigned int ProtectionMask; // eax
  _KPROCESS *v6; // rdx
  int v7; // r15d
  unsigned int v8; // eax
  __int64 v9; // r12
  unsigned __int64 v10; // r12
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r14
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v14; // r9
  ULONG_PTR v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  unsigned __int64 ValidKernelPte; // rax
  __int64 v20; // rdi
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+38h] [rbp-C8h]
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v24; // [rsp+44h] [rbp-BCh]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  __int64 v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]

  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (*(_BYTE *)(8 * ((MappedSystemVa >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)(((MappedSystemVa >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((MappedSystemVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return -1073741637;
  }
  ProtectionMask = MiMakeProtectionMask(NewProtect);
  v7 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  v8 = ProtectionMask >> 3;
  if ( v8 - 1 <= 1 || v8 == 3 && (v7 & 7) != 0 )
    return -1073741755;
  if ( (v7 & 5) == 5 )
    return -1073741755;
  v9 = MemoryDescriptorList->ByteCount + 4095LL;
  v25 = 20LL;
  v10 = ((MappedSystemVa & 0xFFF) + v9) >> 12;
  v11 = (_QWORD *)(((MappedSystemVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  v23 = 0;
  v24 = 0;
  v26 = 0LL;
  v27 = 0LL;
  if ( v10 )
  {
    while ( 1 )
    {
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v11);
      v21 = BugCheckParameter4;
      v15 = BugCheckParameter4;
      if ( (BugCheckParameter4 & 1) != 0 )
      {
        v22 = 1;
        v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v21) >> 12) & 0xFFFFFFFFFLL;
        MiInsertTbFlushEntry((__int64)&v23, v12, 1LL, 0);
      }
      else
      {
        if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
          KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v11, BugCheckParameter4);
        v16 = (BugCheckParameter4 >> 12) & 0xFFFFFFFFFLL;
        v22 = 0;
      }
      if ( v7 != 24 )
        break;
      v17 = v15 & 0xFFFFFFFFFFFFF01EuLL | 0xB00;
      v21 = v17;
      *v11 = v17;
      if ( (unsigned int)MiPteInShadowRange(v11) )
      {
        v18 = v17;
LABEL_27:
        MiWritePteShadow(v11, v18);
      }
LABEL_28:
      v12 += 4096LL;
      ++v11;
      if ( !--v10 )
        goto LABEL_29;
    }
    ValidKernelPte = MiMakeValidKernelPte(v16, v7, (unsigned __int64)v11, v14);
    v21 = ValidKernelPte;
    v20 = ValidKernelPte;
    if ( (v7 & 4) != 0 )
    {
      v20 = ValidKernelPte | 0x42;
      v21 = ValidKernelPte | 0x42;
    }
    if ( v22 == 1 )
    {
      v20 = ((unsigned __int8)v20 ^ (unsigned __int8)v15) & 0x18 ^ (unsigned __int64)v20;
      v21 = v20;
    }
    *v11 = v20;
    if ( !(unsigned int)MiPteInShadowRange(v11) )
      goto LABEL_28;
    v18 = v20;
    goto LABEL_27;
  }
LABEL_29:
  MiFlushTbList((__int64)&v23, v6);
  return 0;
}
