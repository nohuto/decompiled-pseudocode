/*
 * XREFs of MiValidFault @ 0x14005B5E0
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiLockPageAndSetDirty @ 0x14003C7B8 (MiLockPageAndSetDirty.c)
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MI_CHECK_KERNEL_NOEXECUTE_FAULT @ 0x14007ECA0 (MI_CHECK_KERNEL_NOEXECUTE_FAULT.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     KeInvalidAccessAllowed @ 0x140111530 (KeInvalidAccessAllowed.c)
 *     MiUpdatePrefetchPriority @ 0x140124004 (MiUpdatePrefetchPriority.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiCanGrantExecute @ 0x140223AF4 (MiCanGrantExecute.c)
 *     MiValidVirtualizationFault @ 0x140224154 (MiValidVirtualizationFault.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiValidFault(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        __int64 *a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  ULONG_PTR v6; // r10
  __int64 *v8; // rsi
  __int64 v11; // rbx
  _KPROCESS *Process; // rcx
  ULONG_PTR v13; // r12
  char v14; // al
  __int64 v16; // rax
  unsigned int v17; // r15d
  ULONG_PTR v18; // r13
  unsigned __int64 PteShadow; // rax
  __int64 v20; // rbx
  _BYTE *v21; // rdi
  __int64 Address; // rax
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  _KPROCESS *v33; // [rsp+78h] [rbp+10h]
  __int64 v34; // [rsp+88h] [rbp+20h] BYREF

  v6 = BugCheckParameter2;
  v8 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = *v8;
  Process = KeGetCurrentThread()->ApcState.Process;
  v33 = Process;
  v13 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v14 = *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v14 == 1 )
    {
      MiUpdatePrefetchPriority(a4 & 0xFFFFFFFFFFFFFFFEuLL, a2, v11, 0LL);
      return 0LL;
    }
    if ( v14 == 3 )
      return 0LL;
  }
  v16 = *a3;
  if ( (*a3 & 0x80u) != 0LL )
  {
    if ( (a4 & 1) == 0 )
      goto LABEL_12;
    if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      if ( (a4 & 1) == 0 )
        goto LABEL_12;
      if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
      {
        if ( (a4 & 1) != 0 )
          goto LABEL_73;
LABEL_12:
        if ( (unsigned __int8)KeInvalidAccessAllowed(a4) != 1 )
LABEL_73:
          KeBugCheckEx(0x50u, a2, v6, a4, 8uLL);
      }
    }
    return 3221225477LL;
  }
  v17 = 0;
  if ( (v16 & 4) == 0 && a2 <= (unsigned __int64)MmHighestUserAddress )
    return 3221225477LL;
  v18 = v6 & 2;
  if ( (v6 & 2) != 0 )
  {
    if ( (v16 & 0x200) != 0 )
    {
      if ( !(unsigned int)MiCopyOnWriteEx(
                            a2,
                            (volatile __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                            -1LL,
                            a5,
                            0) )
        return 3221226548LL;
      v17 = 274;
      goto LABEL_38;
    }
    if ( (v16 & 0x800) == 0 )
      return 3221225477LL;
  }
  else if ( (v6 & 0x10) != 0 )
  {
    if ( v16 < 0 )
    {
      if ( (unsigned int)MiCanGrantExecute(Process, a2) != 1 )
        return 3221225477LL;
      PteShadow = *a3;
      if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(a3, *a3);
      if ( !(unsigned int)MI_IS_PFN((PteShadow >> 12) & 0xFFFFFFFFFLL) )
        return 3221225477LL;
      v20 = qword_1403D0220 | v11 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        v20 |= 0x20uLL;
      *v8 = v20;
      if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v8, v20);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        KeFlushSingleTb(a2, 1, 0);
LABEL_37:
      v17 = 0;
      goto LABEL_38;
    }
    if ( !a6 )
      MI_CHECK_KERNEL_NOEXECUTE_FAULT(v6, a2, a4, v16, 5);
  }
  if ( !v33[1].ActiveProcessors.Bitmap[3] || (Address = MiLocateAddress(a2)) == 0 || (*(_BYTE *)(Address + 48) & 7) != 3 )
  {
    if ( v18 )
    {
      v23 = *a3;
      if ( (unsigned __int64)(a3 + 0x12090482600LL) <= 0x7F8 )
        v23 = MiReadPteShadow(a3, *a3);
      if ( (unsigned int)MI_IS_PFN((v23 >> 12) & 0xFFFFFFFFFLL) )
      {
        v26 = 48 * v25 - 0x58000000000LL;
        v27 = *(_QWORD *)(v26 + 16);
        if ( (unsigned __int64)(v26 + 0x90482413010LL) <= 0x7F8 )
          v27 = MiReadPteShadow(v26 + 16, *(_QWORD *)(v26 + 16));
        v34 = v27;
        if ( (unsigned int)MiInvalidPteConforms(v27, v24) && (v28 & 0x400) == 0 )
        {
          if ( (unsigned __int64)&STACK[0x90482413088] <= 0x7F8 )
            LOBYTE(v28) = MiReadPteShadow(&v34, v28);
          if ( (v28 & 4) != 0 )
            MiLockPageAndSetDirty(v29, 1);
        }
      }
    }
    v30 = *v8;
    if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
      v30 = MiReadPteShadow(v8, *v8);
    if ( v18 && (v30 & 2) == 0 )
    {
      v31 = v30 | 0x62;
      *v8 = v31;
      if ( (unsigned __int64)(v8 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v8, v31);
      if ( (MiFlags & 0x100) == 0 )
      {
        v17 = 0;
        if ( (MiFlags & 0x200) == 0 )
        {
          v32 = 0;
          if ( v33 != (_KPROCESS *)-1272LL )
            v32 = MiTbFlushType((__int64)&v33[1].IdealNode[8]);
          KeFlushSingleTb(a2, v32, 0);
        }
        goto LABEL_38;
      }
    }
    goto LABEL_37;
  }
  if ( !v13 )
    return v17;
  if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
  {
LABEL_38:
    if ( v13 )
    {
      v21 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v21 == 5 )
        MiValidVirtualizationFault(v21, v8, a5);
    }
    return v17;
  }
  return 3221225793LL;
}
