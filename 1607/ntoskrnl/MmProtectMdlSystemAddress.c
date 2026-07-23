/*
 * XREFs of MmProtectMdlSystemAddress @ 0x1401E4310
 * Callers:
 *     <none>
 * Callees:
 *     MiMappingHasIoTracker @ 0x140025988 (MiMappingHasIoTracker.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiIoSpaceIsConstant @ 0x14009BF58 (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x14009BF74 (MiMappingHasIoReferences.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     MiLookupIoPageNode @ 0x140110B24 (MiLookupIoPageNode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // rdi
  unsigned int v5; // r10d
  unsigned int ProtectionMask; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r11d
  unsigned int v10; // r14d
  _KPROCESS *v11; // rdx
  __int64 v12; // rbx
  __int64 ByteCount; // r10
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 *v16; // rbx
  unsigned __int64 v17; // r10
  int HasIoTracker; // r12d
  bool v19; // zf
  unsigned __int64 v20; // r15
  ULONG_PTR BugCheckParameter4; // rax
  int v22; // r11d
  __int64 v23; // rsi
  __int64 v24; // r11
  __int64 TransitionPte; // rax
  __int64 v26; // rdx
  int v27; // r11d
  __int64 v28; // rcx
  unsigned __int64 v29; // r10
  __int64 v30; // r11
  __int64 v31; // rax
  char v32; // r9
  int v33; // r11d
  __int64 v34; // r11
  int ProtectionPfnCompatible; // eax
  _QWORD *v36; // rax
  int v37; // r10d
  unsigned __int8 v38; // r9
  int v39; // ecx
  _QWORD *v40; // rax
  unsigned __int64 ValidKernelPte; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+48h] [rbp-B8h]
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v48; // [rsp+54h] [rbp-ACh]
  int v49; // [rsp+58h] [rbp-A8h]
  int v50; // [rsp+5Ch] [rbp-A4h]
  __int64 v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h]

  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(MappedSystemVa) )
    return -1073741637;
  ProtectionMask = MiMakeProtectionMask(v5);
  v10 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  v11 = (_KPROCESS *)(ProtectionMask >> 3);
  if ( (int)v11 - 1 <= v9 || (_DWORD)v11 == 3 && (ProtectionMask & 7) != 0 )
    return -1073741755;
  if ( (ProtectionMask & 5) == 5 )
    return -1073741755;
  v12 = (MappedSystemVa >> 9) & 0x7FFFFFFFF8LL;
  ByteCount = MemoryDescriptorList->ByteCount;
  v50 = 0;
  v47 = 0;
  v14 = MappedSystemVa & 0xFFF;
  v48 = 0;
  v51 = 0LL;
  v15 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  v52 = 0LL;
  v16 = (__int64 *)(v12 - 0x98000000000LL);
  v17 = (v14 + ByteCount + 4095) >> 12;
  HasIoTracker = 0;
  v19 = v17 == 0;
  v49 = 20;
  v20 = v15;
  while ( 1 )
  {
    v45 = v17;
    if ( v19 )
      break;
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v16);
    v44 = BugCheckParameter4;
    if ( ((unsigned __int8)BugCheckParameter4 & (unsigned __int8)v22) != 0 )
    {
      v46 = v22;
      v23 = MI_GET_PAGE_FRAME_FROM_PTE(&v44);
      MiInsertTbFlushEntry((__int64)&v47, v20, v24, 0);
      if ( v20 == v15 )
        HasIoTracker = MiMappingHasIoTracker(v15);
    }
    else
    {
      if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
        KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v16, BugCheckParameter4);
      v31 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v44);
      v46 = 0;
      v23 = v31;
      if ( v20 == v15 && (v32 & 8) != 0 )
        HasIoTracker = v33;
    }
    if ( v10 == 24 )
    {
      TransitionPte = MiMakeTransitionPte(v23, 24LL);
      v44 = TransitionPte;
      v26 = TransitionPte;
      if ( HasIoTracker == v27 && v20 == v15 )
      {
        v26 = TransitionPte | 8;
        v44 = TransitionPte | 8;
      }
      *v16 = v26;
      if ( (unsigned int)MiPteInShadowRange(v16, v26) )
        MiWritePteShadow(v28, v11);
    }
    else
    {
      if ( MiIsPfnInline(v23) )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v10, 48 * v23 - 0x58000000000LL);
      }
      else
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v36 = MiIoSpaceIsConstant(v23, v34);
        __writecr8(v38);
        if ( v36 )
        {
          v39 = *((_DWORD *)v36 + 10);
        }
        else
        {
          v40 = MiLookupIoPageNode(v23);
          if ( !v40 )
            KeBugCheckEx(0x1Au, 0x61949uLL, v23, 1uLL, 0LL);
          v37 = 2;
          v39 = *(unsigned __int16 *)(v40[6] + 2 * ((v23 & 0xFFFFFFFFFLL) - v40[5])) >> 14;
        }
        ProtectionPfnCompatible = v10 & 7;
        if ( v39 )
        {
          if ( v39 == v37 )
            ProtectionPfnCompatible |= 0x38u;
        }
        else
        {
          ProtectionPfnCompatible |= 0x28u;
        }
      }
      ValidKernelPte = MiMakeValidKernelPte(v23, ProtectionPfnCompatible, (unsigned __int64)v16);
      v44 = ValidKernelPte;
      v42 = ValidKernelPte;
      if ( (ValidKernelPte & 0x800) != 0 )
      {
        v42 = ValidKernelPte | 0x42;
        v44 = ValidKernelPte | 0x42;
      }
      *v16 = v42;
      if ( (unsigned int)MiPteInShadowRange(v16, v42) )
        MiWritePteShadow(v43, v11);
      if ( HasIoTracker == (_DWORD)v30 && v20 == v15 )
      {
        MiMappingHasIoReferences(v15);
        v30 = 1LL;
      }
      v29 = v45;
    }
    v20 += 4096LL;
    ++v16;
    v17 = v29 - v30;
    v19 = v17 == 0;
  }
  MiFlushTbList((__int64)&v47, v11, v7, v8);
  return 0;
}
