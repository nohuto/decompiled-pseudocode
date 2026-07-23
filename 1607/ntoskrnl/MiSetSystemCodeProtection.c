/*
 * XREFs of MiSetSystemCodeProtection @ 0x1400FBE74
 * Callers:
 *     MiSetImageProtection @ 0x140082DB8 (MiSetImageProtection.c)
 *     MiProtectSystemImage @ 0x140554204 (MiProtectSystemImage.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiOffsetToProtos @ 0x140032BF0 (MiOffsetToProtos.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400FC498 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSetSystemCodeProtection(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  _QWORD *v4; // rsi
  unsigned __int64 v6; // r15
  int v7; // r10d
  unsigned __int64 v8; // r11
  unsigned int v10; // r12d
  int v11; // r14d
  int v12; // edi
  __int64 v13; // rdx
  char *AnyMultiplexedVm; // r13
  char v15; // al
  int DriverPagesPrivate; // eax
  LONG *SharedVm; // rbx
  KIRQL v18; // al
  _KPROCESS *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdi
  LONG *v25; // rbx
  KIRQL v26; // al
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // r10
  __int64 v31; // r11
  __int64 v32; // r13
  unsigned __int64 v33; // rcx
  __int64 v34; // r11
  __int64 v35; // r11
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdi
  struct _KEVENT *v40; // rax
  __int64 v41; // r9
  __int64 v42; // rcx
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rdx
  KIRQL v49; // [rsp+30h] [rbp-D0h]
  unsigned __int64 ValidKernelPte; // [rsp+38h] [rbp-C8h] BYREF
  int v51; // [rsp+40h] [rbp-C0h]
  char *v52; // [rsp+48h] [rbp-B8h]
  __int64 v53; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v54; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v55; // [rsp+60h] [rbp-A0h]
  _DWORD *v56; // [rsp+68h] [rbp-98h]
  unsigned __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+88h] [rbp-78h]
  int v61; // [rsp+90h] [rbp-70h] BYREF
  __int16 v62; // [rsp+94h] [rbp-6Ch]
  __int64 v63; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]

  v51 = a4;
  v58 = a3;
  v4 = a2;
  v60 = a1;
  v6 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
    return 1LL;
  v10 = 1;
  v11 = v7;
  v12 = 2;
  if ( v7 == 256 )
  {
    v56 = (_DWORD *)MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v53 = v13;
    v55 = (_QWORD *)v13;
  }
  else
  {
    v55 = (_QWORD *)v8;
    v56 = 0LL;
    v53 = 0LL;
    if ( (v7 & 5) == 5 )
      v11 = v7 & 0xFFFFFFFE;
    v15 = 0;
    if ( (v11 & 4) != 0 )
      v15 = 2;
    DriverPagesPrivate = MiMakeDriverPagesPrivate(a1, (unsigned __int64)v4, v8, 0x11u, v15);
    v13 = 0LL;
    if ( DriverPagesPrivate < 0 )
      return 0LL;
  }
  if ( v6 < qword_140326950 || v6 >= qword_140326950 + 0x8000000000LL )
  {
    v12 = v13;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  }
  else
  {
    AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
  }
  v62 = 0;
  v52 = AnyMultiplexedVm;
  v63 = 20LL;
  v61 = v12;
  v64 = v13;
  v65 = v13;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v18 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v49 = v18;
  if ( (unsigned __int64)v4 <= v58 )
  {
    v59 = v12;
    do
    {
      if ( v4 > v55 )
      {
        v22 = v6 - *(_QWORD *)(v60 + 48);
        if ( v53 )
        {
          v24 = *(_QWORD *)(v53 + 16);
          v27 = 0LL;
          v53 = v24;
          v57 = 0LL;
        }
        else
        {
          MiFlushTbList((__int64)&v61, v19, v20, v21);
          LOBYTE(v23) = v49;
          MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v23);
          v53 = MiOffsetToProtos(v56, v22, &v57);
          v24 = v53;
          v25 = MiGetSharedVm((__int64)AnyMultiplexedVm);
          v26 = ExAcquireSpinLockExclusive(v25);
          v25[1] = 0;
          v27 = v57;
          v49 = v26;
        }
        v11 = (*(unsigned __int16 *)(v24 + 32) >> 1) & 0x1F;
        v55 = &v4[*(unsigned int *)(v24 + 44) - v27 - 1];
        if ( (v11 & 5) == 5 )
          v11 &= ~1u;
      }
      v28 = MI_READ_PTE_LOCK_FREE(v4);
      v54 = v28;
      v29 = v28;
      if ( (v28 & 1) != 0 )
      {
        v21 = MI_GET_PAGE_FRAME_FROM_PTE(&v54);
        v32 = v31 + 48 * v21;
        v33 = *(_QWORD *)(v32 + 40);
        if ( (v33 & 0x200000000000000LL) == 0 )
        {
          if ( (MiFlags & 0x4000) != 0 && (v51 & 4) != 0 && ((v33 >> 54) & 7) == 3 )
          {
            v10 = 0;
            break;
          }
          if ( v30 )
          {
            v34 = MmProtectToPteMask[v11] ^ ((v21 << 12) ^ MmProtectToPteMask[v11]) & 0xFFFFFFFFF000LL | 0x21;
            ValidKernelPte = v34;
            if ( (unsigned __int64)v4 >= 0xFFFFF6FB40000000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7FFFFFFFuLL )
            {
              v34 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
              ValidKernelPte = v34;
            }
            if ( (unsigned __int64)v4 <= 0xFFFFF6BFFFFFFF78uLL && (unsigned __int64)v4 >= 0xFFFFF68000000000uLL
              || (unsigned __int64)v4 >= 0xFFFFF6FB40000000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB5FFFFFF8uLL
              || (unsigned __int64)v4 >= 0xFFFFF6FB7DA00000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DAFFFF8uLL
              || (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              ValidKernelPte = v34 | 4;
            }
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v4) )
              ValidKernelPte = v35 | 0x100;
          }
          else
          {
            ValidKernelPte = MiMakeValidKernelPte(v21, v11, (unsigned __int64)v4);
          }
          MiWriteValidPteVolatile(&ValidKernelPte, (v29 >> 52) & 0x7FF | 0x80000000);
          if ( ((v11 - 4) & 0xFFFFFFFD) != 0 || (v29 & 0x42) == 0 )
          {
            v36 = ValidKernelPte;
          }
          else
          {
            v36 = ValidKernelPte | 0x42;
            ValidKernelPte |= 0x42uLL;
          }
          if ( (v29 & 0x20) != 0 )
          {
            v36 |= 0x20uLL;
            ValidKernelPte = v36;
          }
          *v4 = v36;
          if ( (unsigned int)MiPteInShadowRange(v4, v36) )
          {
            MiWritePteShadow(v38, v37);
            v37 = ValidKernelPte;
          }
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v29, v37) )
            MiInsertTbFlushEntry((__int64)&v61, v6, 1LL, 0);
          v39 = 0LL;
          MiLockPageAtDpcInline(v32);
          *(_QWORD *)(v32 + 16) ^= (*(_DWORD *)(v32 + 16) ^ (32 * v11)) & 0x3E0;
          if ( (v29 & 0x42) != 0 )
            v39 = MiCaptureDirtyBitToPfn(v32);
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v39 )
          {
            v40 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v32 + 40)) >> 8) & 0x3FF);
            MiReleasePageFileInfo(v40, v39, 1);
          }
        }
        AnyMultiplexedVm = v52;
      }
      else if ( (v28 & 0x400) == 0 )
      {
        if ( (v28 & 0x800) != 0 )
        {
          if ( !MiLockTransitionLeafPage((ULONG_PTR)v4, 0LL) )
            continue;
          v41 = 48 * MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v54) - 0x58000000000LL;
          v42 = 32LL * (v11 & 0x1F);
          v43 = v42 | v29 & 0xFFFFFFFFFFFFFC1FuLL;
          v44 = *(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
          v54 = v43;
          *(_QWORD *)(v41 + 16) = v42 | v44;
          *v4 = v43;
          if ( (unsigned int)MiPteInShadowRange(v4, -993LL) )
            MiWritePteShadow(v45, v43);
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( v51 != 256 )
        {
          v46 = ((unsigned __int16)v28 ^ (unsigned __int16)(32 * v11)) & 0x3E0 ^ (unsigned __int64)v28;
          v54 = v46;
          *v4 = v46;
          if ( (unsigned int)MiPteInShadowRange(v4, v19) )
            MiWritePteShadow(v47, v46);
        }
      }
      ++v4;
      v6 += 4096LL;
    }
    while ( (unsigned __int64)v4 <= v58 );
  }
  MiFlushTbList((__int64)&v61, v19, v20, v21);
  LOBYTE(v48) = v49;
  MiUnlockWorkingSetExclusive((__int64)v52, v48);
  return v10;
}
