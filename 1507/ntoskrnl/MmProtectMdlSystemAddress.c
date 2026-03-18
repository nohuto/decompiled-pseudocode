/*
 * XREFs of MmProtectMdlSystemAddress @ 0x1401184E8
 * Callers:
 *     VerifierMmProtectMdlSystemAddress @ 0x140753DA4 (VerifierMmProtectMdlSystemAddress.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // r14
  unsigned __int64 v5; // r8
  unsigned int ProtectionMask; // r15d
  unsigned __int64 v7; // rdx
  __int64 ByteCount; // r12
  unsigned __int64 v9; // r12
  ULONG_PTR *v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // r10
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR *v14; // r9
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // r10d
  ULONG_PTR v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+38h] [rbp-C8h]
  ULONG_PTR *v26; // [rsp+40h] [rbp-C0h]
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v28; // [rsp+54h] [rbp-ACh]
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ch] [rbp-A4h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]

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
  if ( ProtectionMask == -1 )
    return -1073741755;
  v7 = ProtectionMask >> 3;
  if ( (unsigned int)(v7 - 1) <= 1 || (_DWORD)v7 == 3 && (ProtectionMask & 7) != 0 )
    return -1073741755;
  if ( (ProtectionMask & 5) == 5 )
    return -1073741755;
  ByteCount = MemoryDescriptorList->ByteCount;
  v30 = 0;
  v27 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v9 = ((MappedSystemVa & 0xFFF) + ByteCount + 4095) >> 12;
  v28 = 0;
  v10 = (ULONG_PTR *)(((MappedSystemVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v29 = 20;
  v11 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  if ( v9 )
  {
    v12 = 0xFFFFFFFFFLL;
    while ( 1 )
    {
      BugCheckParameter4 = *v10;
      v14 = v10 + 0x12090482600LL;
      v26 = v10 + 0x12090482600LL;
      if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
        BugCheckParameter4 = MiReadPteShadow(v10, BugCheckParameter4);
      v24 = BugCheckParameter4;
      if ( (BugCheckParameter4 & 1) != 0 )
      {
        v25 = 1;
        v15 = BugCheckParameter4;
        if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8 )
          v15 = MiReadPteShadow(&v24, BugCheckParameter4);
        v16 = v12 & (v15 >> 12);
        MiInsertTbFlushEntry((__int64)&v27, v11, 1LL, 0);
      }
      else
      {
        if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
          KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v10, BugCheckParameter4);
        v17 = MiReverseSwizzleInvalidPte(BugCheckParameter4, v7, v5, v14);
        v16 = v18 & (v17 >> 12);
      }
      if ( ProtectionMask != 24 )
        break;
      v19 = (BugCheckParameter4 >> 1) & 0xC | MiMakeTransitionPte(v16, 24LL) & 0xFFFFFFFFFFFFFFF3uLL;
      v24 = v19;
      *v10 = v19;
      if ( v20 <= 0x7F8 )
      {
        v7 = v19;
LABEL_33:
        MiWritePteShadow(v10, v7);
      }
LABEL_34:
      v11 += 4096LL;
      ++v10;
      v12 = 0xFFFFFFFFFLL;
      if ( !--v9 )
        goto LABEL_35;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v10) )
      v21 |= 0x100uLL;
    v5 = v21 & 0xFFFFFFFFFFFFFE7FuLL;
    v7 = v5 | ((unsigned __int64)(word_14034EC18 & 1) << 8);
    v24 = v7;
    if ( (ProtectionMask & 4) != 0 )
    {
      v7 |= 0x42uLL;
      v24 = v7;
    }
    if ( v23 == 1 )
    {
      v7 ^= ((unsigned __int8)v7 ^ (unsigned __int8)BugCheckParameter4) & 0x18;
      v24 = v7;
    }
    *v10 = v7;
    if ( v22 > 0x7F8 )
      goto LABEL_34;
    goto LABEL_33;
  }
LABEL_35:
  MiFlushTbList((__int64)&v27);
  return 0;
}
