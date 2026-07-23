/*
 * XREFs of MiValidFault @ 0x1400E40F0
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     MiLockPageAndSetDirty @ 0x1400150F8 (MiLockPageAndSetDirty.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiCheckAndUpdateIoAttribution @ 0x14006E5B0 (MiCheckAndUpdateIoAttribution.c)
 *     KeInvalidAccessAllowed @ 0x1400A39A4 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x1400AEE78 (MiCheckSystemNxFault.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiUpdatePrefetchPriority @ 0x1400E4510 (MiUpdatePrefetchPriority.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiCanGrantExecute @ 0x1401EF4E0 (MiCanGrantExecute.c)
 *     MiValidVirtualizationFault @ 0x1401EFB2C (MiValidVirtualizationFault.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiValidFault(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        signed __int64 *a3,
        ULONG_PTR a4,
        char a5,
        char a6)
{
  ULONG_PTR v9; // r10
  __int64 *v10; // rsi
  _KPROCESS *Process; // rcx
  ULONG_PTR v12; // rbp
  char v13; // al
  __int64 v15; // rax
  unsigned int v16; // r12d
  unsigned __int8 v17; // r13
  ULONG_PTR v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // rdx
  __int64 v22; // r11
  __int16 v23; // dx
  __int64 v24; // rcx
  __int64 v25; // r11
  __int64 v26; // rdx
  unsigned __int64 Address; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r14
  __int16 v30; // cx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  unsigned int v35; // eax
  _BYTE *v36; // rbx
  _KPROCESS *v37; // [rsp+78h] [rbp+10h]
  __int64 v38; // [rsp+88h] [rbp+20h] BYREF

  v9 = BugCheckParameter2;
  v10 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v37 = Process;
  v12 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v13 = *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v13 == 1 )
    {
      MiUpdatePrefetchPriority(a4 & 0xFFFFFFFFFFFFFFFEuLL, a2, 0LL);
      return 0LL;
    }
    if ( v13 == 3 )
      return 0LL;
  }
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL && *(char *)a3 < 0 )
  {
    if ( (a4 & 1) == 0 )
      goto LABEL_14;
    if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      if ( (a4 & 1) == 0 )
        goto LABEL_14;
      if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
      {
        if ( (a4 & 1) != 0 )
          goto LABEL_71;
LABEL_14:
        if ( !KeInvalidAccessAllowed(a4) )
LABEL_71:
          KeBugCheckEx(0x50u, a2, v9, a4, 8uLL);
      }
    }
    return 3221225477LL;
  }
  v15 = *a3;
  v16 = 0;
  if ( (*a3 & 4) == 0 && a2 <= 0x7FFFFFFEFFFFLL )
    return 3221225477LL;
  v17 = a5;
  v18 = v9 & 2;
  if ( (v9 & 2) != 0 )
  {
    if ( (v15 & 0x200) != 0 )
    {
      if ( !(unsigned int)MiCopyOnWriteEx(a2, (__int64)v10, -1LL, a5, 0) )
        return 3221225495LL;
      v16 = 274;
      goto LABEL_67;
    }
    if ( (v15 & 0x800) == 0 )
      return 3221225477LL;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    if ( v15 < 0 )
    {
      if ( (unsigned int)MiCanGrantExecute(Process, a2) != 1 )
        return 3221225477LL;
      v19 = MI_GET_PAGE_FRAME_FROM_PTE(a3);
      if ( !MiIsPfnInline(v19) )
        return 3221225477LL;
      v21 = (unsigned int)MiFlags;
      v22 = qword_1403A9350 | v20 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        v22 |= 0x20uLL;
      *v10 = v22;
      if ( (unsigned int)MiPteInShadowRange(v10, v21) )
      {
        MiWritePteShadow(v24, v25);
        v23 = MiFlags;
      }
      if ( (v23 & 0x100) != 0 || (v23 & 0x200) != 0 )
        goto LABEL_67;
      v26 = 1LL;
      goto LABEL_66;
    }
    if ( !a6 )
      MiCheckSystemNxFault(v9, a2, a4, *a3, 5u);
  }
  if ( !v37[1].ActiveProcessors.Bitmap[3] || (Address = MiLocateAddress(a2)) == 0 || (*(_BYTE *)(Address + 48) & 7) != 3 )
  {
    if ( v18 )
    {
      v28 = MI_GET_PAGE_FRAME_FROM_PTE(a3);
      if ( v28 <= qword_140326AD0
        && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v28 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
      {
        v29 = 48 * v28 - 0x58000000000LL;
        v38 = MI_READ_PTE_LOCK_FREE(v29 + 16);
        if ( (unsigned int)MiInvalidPteConforms(v38) && (v30 & 0x400) == 0 && (MI_READ_PTE_LOCK_FREE(&v38) & 4) != 0 )
          MiLockPageAndSetDirty(v29, 1);
        if ( (*(_QWORD *)(v29 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v29 + 16) & 0x400LL) != 0 )
          MiCheckAndUpdateIoAttribution(v29);
        v17 = a5;
      }
    }
    v31 = MI_READ_PTE_LOCK_FREE(v10);
    if ( !v18 || (v31 & 2) != 0 )
      goto LABEL_67;
    *v10 = v31 | 0x62;
    if ( (unsigned int)MiPteInShadowRange(v10, v31 | 0x62) )
      MiWritePteShadow(v33, v32);
    if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
      goto LABEL_67;
    v35 = 0;
    if ( v34 )
      v35 = MiTbFlushType(v34);
    v26 = v35;
LABEL_66:
    KeFlushSingleTb(a2, v26, 0LL);
LABEL_67:
    if ( v12 )
    {
      v36 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v36 == 5 )
        MiValidVirtualizationFault(v36, v10, v17);
    }
    return v16;
  }
  if ( v12 )
  {
    if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
      return 3221225793LL;
    goto LABEL_67;
  }
  return v16;
}
