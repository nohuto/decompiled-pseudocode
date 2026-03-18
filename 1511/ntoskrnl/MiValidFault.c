/*
 * XREFs of MiValidFault @ 0x140070910
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     MI_CHECK_KERNEL_NOEXECUTE_FAULT @ 0x140008168 (MI_CHECK_KERNEL_NOEXECUTE_FAULT.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiUpdatePrefetchPriority @ 0x140070C90 (MiUpdatePrefetchPriority.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiLockPageAndSetDirty @ 0x1400B820C (MiLockPageAndSetDirty.c)
 *     KeInvalidAccessAllowed @ 0x1400E5FF0 (KeInvalidAccessAllowed.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiCanGrantExecute @ 0x1401DEC6C (MiCanGrantExecute.c)
 *     MiValidVirtualizationFault @ 0x1401DEFD0 (MiValidVirtualizationFault.c)
 */

__int64 __fastcall MiValidFault(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        signed __int64 *a3,
        ULONG_PTR a4,
        unsigned __int8 a5,
        char a6)
{
  ULONG_PTR v6; // r10
  __int64 *v8; // rsi
  __int64 v11; // rbx
  _KPROCESS *Process; // rcx
  ULONG_PTR v13; // r14
  char v14; // al
  signed __int64 v16; // rax
  unsigned int v17; // r12d
  ULONG_PTR v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // edx
  unsigned __int64 Address; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned int v28; // eax
  _BYTE *v29; // rdi
  _KPROCESS *v30; // [rsp+78h] [rbp+10h]
  __int64 v31; // [rsp+88h] [rbp+20h] BYREF

  v6 = BugCheckParameter2;
  v8 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = *v8;
  Process = KeGetCurrentThread()->ApcState.Process;
  v30 = Process;
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
          goto LABEL_59;
LABEL_12:
        if ( (unsigned __int8)KeInvalidAccessAllowed(a4) != 1 )
LABEL_59:
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
      if ( !(unsigned int)MiCopyOnWriteEx(a2, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, -1LL, a5, 0) )
        return 3221225495LL;
      v17 = 274;
      goto LABEL_55;
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
      v19 = MI_READ_PTE_LOCK_FREE(a3);
      if ( !MI_IS_PFN((v19 >> 12) & 0xFFFFFFFFFLL) )
        return 3221225477LL;
      v20 = qword_140381310 | v11 & 0x7FFFFFFFFFFFFFFFLL;
      *v8 = v20;
      if ( (unsigned int)MiPteInShadowRange(v8) )
        MiWritePteShadow(v8, v20);
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        goto LABEL_55;
      v21 = 1;
      goto LABEL_54;
    }
    if ( !a6 )
      MI_CHECK_KERNEL_NOEXECUTE_FAULT(v6, a2, a4, v16, 5u);
  }
  if ( !v30[1].ActiveProcessors.Bitmap[3] || (Address = MiLocateAddress(a2)) == 0 || (*(_BYTE *)(Address + 48) & 7) != 3 )
  {
    if ( v18 )
    {
      v23 = MI_GET_PAGE_FRAME_FROM_PTE(a3);
      if ( MI_IS_PFN(v23) )
      {
        v25 = 48 * v24 - 0x58000000000LL;
        v31 = MI_READ_PTE_LOCK_FREE(v25 + 16);
        if ( (v31 & 0x400) == 0 && (MI_READ_PTE_LOCK_FREE(&v31) & 0x2000) != 0 )
          MiLockPageAndSetDirty(v25, 1LL);
      }
    }
    v26 = MI_READ_PTE_LOCK_FREE(v8);
    if ( !v18 || (v26 & 2) != 0 )
      goto LABEL_55;
    v27 = v26 | 0x62;
    *v8 = v26 | 0x62;
    if ( (unsigned int)MiPteInShadowRange(v8) )
      MiWritePteShadow(v8, v27);
    if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
      goto LABEL_55;
    v28 = 0;
    if ( v30 != (_KPROCESS *)-1280LL )
      v28 = MiTbFlushType(&v30[1].IdealNode[12]);
    v21 = v28;
LABEL_54:
    KeFlushSingleTb(a2, v21, 0);
LABEL_55:
    if ( v13 )
    {
      v29 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v29 == 5 )
        MiValidVirtualizationFault(v29, v8, a5);
    }
    return v17;
  }
  if ( v13 )
  {
    if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
      return 3221225793LL;
    goto LABEL_55;
  }
  return v17;
}
