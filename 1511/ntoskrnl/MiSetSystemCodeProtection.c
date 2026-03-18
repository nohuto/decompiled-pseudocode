/*
 * XREFs of MiSetSystemCodeProtection @ 0x1400B8D54
 * Callers:
 *     MiSetImageProtection @ 0x14001A37C (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x140520C80 (MiProtectSystemImage.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400B946C (MI_TIGHTER_PERMISSIONS.c)
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14011F758 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x1401C6F54 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeTb @ 0x1401C70D4 (KeFlushMultipleRangeTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  int v4; // r10d
  int v5; // r12d
  unsigned __int64 v6; // r14
  int v8; // r13d
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rbx
  volatile LONG *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r13
  KIRQL v20; // al
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r12
  __int64 v28; // rbx
  signed __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v32; // rbx
  int *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  __int64 v37; // rbx
  unsigned __int64 v38; // rdi
  unsigned int v39; // ebx
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  _KPROCESS *Process; // rdx
  __int64 v43; // rdx
  KIRQL v44; // [rsp+30h] [rbp-D0h]
  unsigned __int64 ValidKernelPte; // [rsp+38h] [rbp-C8h] BYREF
  int v46; // [rsp+40h] [rbp-C0h]
  int v47; // [rsp+44h] [rbp-BCh]
  __int64 v48; // [rsp+48h] [rbp-B8h]
  __int64 v49; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v50; // [rsp+58h] [rbp-A8h] BYREF
  __int64 i; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v52; // [rsp+68h] [rbp-98h]
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp-90h]
  _DWORD *v54; // [rsp+78h] [rbp-88h]
  unsigned __int64 v55; // [rsp+80h] [rbp-80h]
  unsigned __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h]
  unsigned int v58; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v59; // [rsp+A4h] [rbp-5Ch]
  int v60; // [rsp+A8h] [rbp-58h]
  unsigned int v61; // [rsp+ACh] [rbp-54h]
  unsigned __int64 v62; // [rsp+B0h] [rbp-50h]
  _QWORD v63[21]; // [rsp+B8h] [rbp-48h] BYREF

  v4 = a1;
  v57 = a1;
  v46 = a4;
  v55 = a3;
  v5 = a4;
  v6 = a2;
  if ( *(char *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) < 0 )
    return 1LL;
  v47 = 1;
  v8 = a4;
  if ( a4 == 256 )
  {
    v54 = (_DWORD *)MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v52 = 0LL;
    v48 = 0LL;
  }
  else
  {
    v54 = 0LL;
    v48 = 0LL;
    v52 = a3;
    if ( (a4 & 5) == 5 )
      v8 = a4 & 0xFFFFFFFE;
    v10 = 0;
    LOBYTE(a4) = 17;
    if ( (v8 & 4) != 0 )
      v10 = 2;
    if ( (int)MiMakeDriverPagesPrivate(v4, a2, a3, a4, v10) < 0 )
      return 0LL;
    v9 = 2;
  }
  v11 = (__int64)(v6 << 25) >> 16;
  v49 = v11;
  if ( (unsigned __int64)(v11 + 0x70000000000LL) > 0x7FFFFFFFFFLL )
  {
    LODWORD(v12) = 0;
    v13 = &dword_1402FFA80;
  }
  else
  {
    LODWORD(v12) = v9;
    v13 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
  }
  v61 = 0;
  v62 = 0LL;
  v63[0] = 0LL;
  SpinLock = v13;
  v58 = v12;
  v59 = 0;
  v60 = 20;
  v44 = ExAcquireSpinLockExclusive(v13);
  if ( v6 <= v55 )
  {
    v12 = (int)v12;
    for ( i = (int)v12; ; v12 = i )
    {
      if ( v6 > v52 )
      {
        v16 = v11 - *(_QWORD *)(v57 + 48);
        if ( v48 )
        {
          v19 = *(_QWORD *)(v48 + 16);
          v21 = 0LL;
          v48 = v19;
          v56 = 0LL;
        }
        else
        {
          MiFlushTbList((__int64)&v58, (_KPROCESS *)v14);
          LOBYTE(v17) = v44;
          MiUnlockWorkingSetExclusive((__int64)SpinLock, v17, v18);
          v19 = MiOffsetToProtos(v54, v16, &v56);
          v48 = v19;
          v20 = ExAcquireSpinLockExclusive(SpinLock);
          v21 = v56;
          v44 = v20;
        }
        v22 = *(unsigned int *)(v19 + 44);
        v12 = i;
        v8 = (*(unsigned __int16 *)(v19 + 32) >> 1) & 0x1F;
        v52 = v6 + 8 * (v22 - v21 - 1);
        if ( (v8 & 5) == 5 )
          v8 &= ~1u;
      }
      v23 = MI_READ_PTE_LOCK_FREE(v6);
      v50 = v23;
      v24 = v23;
      if ( (v23 & 1) != 0 )
      {
        v25 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v50) >> 12) & 0xFFFFFFFFFLL;
        v27 = 48 * v25 - 0x58000000000LL;
        v14 = *(_QWORD *)(v27 + 40);
        if ( (v14 & 0x200000000000000LL) == 0 )
        {
          if ( (MiFlags & 0x10000) != 0 && (v46 & 4) != 0 )
          {
            v14 >>= 54;
            if ( (v14 & 7) == 3 )
            {
              v39 = 0;
              goto LABEL_75;
            }
          }
          if ( v12 )
          {
            v28 = MmProtectToPteMask[v8] ^ ((v25 << 12) ^ MmProtectToPteMask[v8]) & 0xFFFFFFFFF000LL | 0x21;
            ValidKernelPte = v28;
            if ( v6 + 0x904C0000000LL <= 0x3FFFFFFF )
            {
              v28 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
              ValidKernelPte = v28;
            }
            if ( v6 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
              && v6 >= 0xFFFFF68000000000uLL
              || v6 >= 0xFFFFF6FB40000000uLL
              && v6 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
              || v6 >= 0xFFFFF6FB7DA00000uLL
              && v6 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
              || v6 >= 0xFFFFF6FB7DBED000uLL
              && v6 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
            {
              v28 |= 4uLL;
              ValidKernelPte = v28;
            }
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v6) )
              ValidKernelPte = v28 | 0x100;
          }
          else
          {
            ValidKernelPte = MiMakeValidKernelPte(v25, v8, v6, v26);
          }
          MI_WRITE_VALID_PTE_VOLATILE((volatile signed __int64 *)&ValidKernelPte, (v24 >> 52) & 0x7FF | 0x80000000);
          if ( ((v8 - 4) & 0xFFFFFFFD) != 0 || (v24 & 0x42) == 0 )
          {
            v29 = ValidKernelPte;
          }
          else
          {
            v29 = ValidKernelPte | 0x42;
            ValidKernelPte |= 0x42uLL;
          }
          if ( (v24 & 0x20) != 0 )
          {
            v29 |= 0x20uLL;
            ValidKernelPte = v29;
          }
          *(_QWORD *)v6 = v29;
          if ( (unsigned int)MiPteInShadowRange(v6) )
          {
            MiWritePteShadow(v6, v29);
            v29 = ValidKernelPte;
          }
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v24, v29) )
            MiInsertTbFlushEntry((__int64)&v58, v49, 1LL, 0);
          v32 = 0LL;
          MiLockPageAtDpcInline(v27, v30, v31);
          *(_QWORD *)(v27 + 16) ^= (*(_DWORD *)(v27 + 16) ^ (32 * v8)) & 0x3E0;
          if ( (v24 & 0x42) != 0 )
            v32 = MiCaptureDirtyBitToPfn(v27);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v32 )
          {
            v33 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v27 + 40)) >> 8) & 0x3FF);
            MiReleasePageFileInfo((__int64)v33, v32, 1);
          }
        }
        v5 = v46;
        goto LABEL_60;
      }
      if ( (v23 & 0x400) != 0 )
        goto LABEL_60;
      if ( (v23 & 0x800) == 0 )
        break;
      if ( MiLockTransitionLeafPage(v6, 0LL) )
      {
        v34 = (v24 >> 12) & 0xFFFFFFFFFLL;
        v35 = 32LL * (v8 & 0x1F);
        v36 = v35 | v24 & 0xFFFFFFFFFFFFFC1FuLL;
        v37 = 48 * v34 - 0x58000000000LL;
        v50 = v36;
        *(_QWORD *)(v37 + 16) = v35 | *(_QWORD *)(v37 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
        *(_QWORD *)v6 = v36;
        if ( (unsigned int)MiPteInShadowRange(v6) )
          MiWritePteShadow(v6, v36);
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_60:
        v6 += 8LL;
        v11 = v49 + 4096;
        v49 += 4096LL;
        goto LABEL_71;
      }
      v11 = v49;
LABEL_71:
      if ( v6 > v55 )
        goto LABEL_74;
    }
    if ( v5 != 256 )
    {
      v38 = ((unsigned __int16)v23 ^ (unsigned __int16)(32 * v8)) & 0x3E0 ^ (unsigned __int64)v23;
      v50 = v38;
      *(_QWORD *)v6 = v38;
      if ( (unsigned int)MiPteInShadowRange(v6) )
        MiWritePteShadow(v6, v38);
    }
    goto LABEL_60;
  }
LABEL_74:
  v39 = v47;
LABEL_75:
  if ( v61 )
  {
    v40 = qword_1402FE720;
    if ( (v59 & 2) != 0 )
    {
      v41 = v58;
    }
    else
    {
      v41 = v58;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !Process[2].ActiveProcessors.Bitmap[12] )
      {
        if ( !Process->SecurePid )
          goto LABEL_82;
        if ( v58 != 1 )
          goto LABEL_84;
      }
      v40 = -1LL;
    }
LABEL_82:
    if ( (_DWORD)v41 == 1 )
    {
      v43 = 0LL;
      goto LABEL_85;
    }
LABEL_84:
    v43 = 1LL;
LABEL_85:
    if ( HIBYTE(v59) || v62 > v40 )
    {
      if ( (v59 & 1) != 0 )
        KeFlushCurrentTbOnly(v41, v43, v40);
      else
        KeFlushTb(v41, v43);
      HIBYTE(v59) = 0;
    }
    else if ( (v59 & 1) != 0 )
    {
      KeFlushMultipleRangeCurrentTb(v61, v63, (unsigned int)v41);
    }
    else
    {
      KeFlushMultipleRangeTb(v61, v63, (unsigned int)v41, (unsigned int)v43);
    }
    v61 = 0;
    v62 = 0LL;
  }
  LOBYTE(v14) = v44;
  MiUnlockWorkingSetExclusive((__int64)SpinLock, v14, v15);
  return v39;
}
