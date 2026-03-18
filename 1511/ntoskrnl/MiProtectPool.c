/*
 * XREFs of MiProtectPool @ 0x140078150
 * Callers:
 *     ExProtectPool @ 0x140077FD0 (ExProtectPool.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     KiFlushTb @ 0x140007998 (KiFlushTb.c)
 *     KiFlushViaHypervisor @ 0x1400079D0 (KiFlushViaHypervisor.c)
 *     KiIsSecureProcessFlush @ 0x1400079EC (KiIsSecureProcessFlush.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     KeInitializeAffinityEx @ 0x1400755A0 (KeInitializeAffinityEx.c)
 *     MI_VA_IN_SESSION_SPECIAL_POOL @ 0x140079580 (MI_VA_IN_SESSION_SPECIAL_POOL.c)
 *     KeAddGroupAffinityEx @ 0x14009409C (KeAddGroupAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400B82C4 (MI_WSLE_LOG_ACCESS.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400B946C (MI_TIGHTER_PERMISSIONS.c)
 *     MiLockNonPagedPoolPte @ 0x1400DCB30 (MiLockNonPagedPoolPte.c)
 *     KxFlushMultipleTb @ 0x140102D90 (KxFlushMultipleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14011F758 (KeFlushMultipleRangeCurrentTb.c)
 *     KiFlushRangeTb @ 0x14011F814 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeFlushCurrentTbOnly @ 0x1401C6F54 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeTb @ 0x1401C70D4 (KeFlushMultipleRangeTb.c)
 *     KiFlushAddressSpaceTb @ 0x1401C7210 (KiFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x1401C7288 (KiPrepareFlushParameters.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     VmFlushTb @ 0x14020C224 (VmFlushTb.c)
 *     VmpFlushTb @ 0x14020C4C4 (VmpFlushTb.c)
 *     ExFlushTb @ 0x140214D10 (ExFlushTb.c)
 *     HvlFlushRangeListTb @ 0x1402214A4 (HvlFlushRangeListTb.c)
 */

__int64 __fastcall MiProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned int ProtectionMask; // eax
  unsigned __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // r12
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  LONG *v11; // r13
  int v12; // r15d
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  int v15; // r10d
  __int64 v16; // r11
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned int v19; // esi
  __int64 v20; // rax
  __int64 v21; // r8
  signed __int64 v22; // rdi
  ULONG_PTR *v23; // rax
  unsigned __int64 v24; // r8
  _KPROCESS *Process; // rcx
  __int64 v26; // rdx
  unsigned __int64 Wsle; // rbx
  unsigned __int64 v28; // r8
  _KPROCESS *v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rdi
  __int64 v37; // rsi
  unsigned __int64 v38; // rbx
  bool v39; // zf
  signed __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rsi
  signed __int64 ValidKernelPte; // rbx
  __int64 v45; // rax
  signed __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // r15
  signed __int64 v51; // rbx
  char v52; // di
  __int64 v53; // rbx
  __int64 v54; // r15
  unsigned __int64 v55; // r8
  _KPROCESS *v56; // rcx
  __int64 v57; // rdx
  bool IsSecureProcessFlush; // di
  _QWORD *v59; // rbx
  __int64 v60; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 CurrentIrql; // bl
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // r15
  unsigned __int64 v66; // rdx
  _KPROCESS *v67; // rcx
  unsigned int v68; // ebx
  unsigned __int8 v69; // r12
  unsigned __int64 v70; // rdi
  unsigned __int8 v71; // r14
  struct _KPRCB *v72; // rbx
  _QWORD *v73; // rbx
  __int64 v74; // rdi
  unsigned __int8 v75; // di
  unsigned __int64 v76; // rcx
  volatile _KAFFINITY_EX *p_ActiveProcessors; // rdx
  unsigned __int8 v78; // bl
  bool v79; // di
  unsigned __int64 v80; // rcx
  char v81; // dl
  volatile LONG *v82; // rcx
  unsigned __int8 v83; // bl
  unsigned __int8 v85; // [rsp+30h] [rbp-D0h] BYREF
  KIRQL v86; // [rsp+31h] [rbp-CFh]
  signed __int64 v87; // [rsp+38h] [rbp-C8h] BYREF
  char v88[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v89; // [rsp+44h] [rbp-BCh]
  __int64 v90; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v91; // [rsp+50h] [rbp-B0h]
  __int64 v92; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v93; // [rsp+60h] [rbp-A0h]
  unsigned int v94; // [rsp+70h] [rbp-90h] BYREF
  __int16 v95; // [rsp+74h] [rbp-8Ch]
  __int64 v96; // [rsp+78h] [rbp-88h]
  unsigned __int64 v97; // [rsp+80h] [rbp-80h]
  _QWORD v98[21]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v99[22]; // [rsp+130h] [rbp+30h] BYREF
  unsigned int v100; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v101; // [rsp+1E8h] [rbp+E8h]
  _QWORD v102[22]; // [rsp+280h] [rbp+180h] BYREF

  v3 = a3;
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    v3 = a3 & 0xFFFFFFEF;
  ProtectionMask = MiMakeProtectionMask(v3);
  v7 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v8 = 0LL;
  v9 = v5 + v6 - 1;
  v89 = 0;
  v10 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = 0LL;
  v12 = 0;
  LODWORD(v13) = 0;
  if ( v5 + 0x400000000000LL <= 0xF7FFFFFFFFFLL )
  {
    v11 = &dword_1402FF980;
    goto LABEL_23;
  }
  if ( !qword_1402FE8F0 || v5 < qword_1402FE8F0 || v5 >= qword_1402FE8F0 + (qword_1402FE8D0 << 21) )
  {
    if ( (unsigned int)MI_VA_IN_SESSION_SPECIAL_POOL(v5) )
    {
      v5 = v9 ^ v14;
      if ( (v5 & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        LODWORD(v13) = 2;
        v11 = (LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
        goto LABEL_23;
      }
    }
    else if ( v14 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
    {
      v5 = ((v14 >> 18) & 0x3FFFFFF8) - v16;
      v17 = ((v9 >> 18) & 0x3FFFFFF8) - v16;
      if ( v5 > v17 )
      {
LABEL_22:
        v12 = v15;
        v89 = v15;
        goto LABEL_23;
      }
      while ( *(char *)v5 >= 0 )
      {
        v5 += 8LL;
        if ( v5 > v17 )
          goto LABEL_22;
      }
    }
    return 0LL;
  }
  if ( ((v9 ^ v5) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    return 0LL;
  v5 = ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( (*(_BYTE *)(48 * ((*(_QWORD *)v5 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    v11 = &dword_1402FF980;
LABEL_23:
  v96 = 20LL;
  v18 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v94 = v13;
  v93 = v18;
  v19 = v13;
  v95 = v8;
  v97 = v8;
  v98[0] = v8;
  if ( v11 )
  {
    v91 = *((_QWORD *)v11 + 23);
    v19 = v94;
    v86 = ExAcquireSpinLockExclusive(v11);
  }
  else
  {
    v91 = v8;
    v86 = 17;
  }
  v13 = (int)v13;
  v90 = (int)v13;
  if ( v10 <= v18 )
  {
    do
    {
      v20 = MI_READ_PTE_LOCK_FREE(v10);
      v87 = v20;
      v22 = v20;
      if ( (_DWORD)v7 == 24 )
      {
        if ( !v11 )
        {
          if ( v12 == 1 )
          {
            v37 = MiLockNonPagedPoolPte(v10, &v85);
            v22 = MI_READ_PTE_LOCK_FREE(v10);
            v87 = v22;
          }
          else
          {
            v37 = MI_GET_PFN_FROM_PTE(&v87);
            v85 = MiLockPageInline(v37);
          }
          v38 = v22 & 0xFFFFFFFFFFFFF01EuLL | 0xB00;
          *(_QWORD *)(v37 + 16) = *(_QWORD *)(v37 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          if ( v12 == 1 )
          {
            while ( 1 )
            {
              v40 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v38, v22);
              v39 = v22 == v40;
              v22 = v40;
              if ( v39 )
                break;
              v87 = v40;
              v38 = v40 & 0xFFFFFFFFFFFFF01EuLL | 0xB00;
            }
            if ( (v87 & 0x200) != 0 )
              *(_QWORD *)(v37 + 24) = *(_QWORD *)(v37 + 24) & 0xC000000000000000uLL | 0x10000;
          }
          else
          {
            *(_QWORD *)v10 = v38;
            if ( (unsigned int)MiPteInShadowRange(v10) )
              MiWritePteShadow(v10, v22 & 0xFFFFFFFFFFFFF01EuLL | 0xB00);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v85);
LABEL_97:
          MiInsertTbFlushEntry((__int64)&v94, (__int64)(v10 << 25) >> 16, 1LL, 0);
          goto LABEL_199;
        }
        if ( (v20 & 1) != 0 )
        {
          v23 = (ULONG_PTR *)MI_GET_PFN_FROM_PTE(&v87);
          if ( (v23[5] & 0x200000000000000LL) == 0 )
          {
            Wsle = MiLocateWsle((__int64)(v10 << 25) >> 16, (__int64)v11, *v23);
            if ( dword_1402FED88 )
              MI_WSLE_LOG_ACCESS(v11, *(_QWORD *)(v91 + 496) + Wsle * *(unsigned int *)(v91 + 64), v10);
            v100 = 1;
            v101 = Wsle;
            if ( Wsle >= *(_QWORD *)(v91 + 8) && !MiFreeWsleList((ULONG_PTR)v11, &v100, 0) )
              v10 -= 8LL;
            goto LABEL_199;
          }
LABEL_31:
          if ( HIDWORD(v96) )
          {
            v24 = qword_1402FE720;
            if ( (v95 & 2) != 0 )
              goto LABEL_37;
            v19 = v94;
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process[2].ActiveProcessors.Bitmap[12] )
              goto LABEL_36;
            if ( !Process->SecurePid )
            {
LABEL_37:
              if ( v19 != 1 )
                goto LABEL_39;
              v26 = 0LL;
            }
            else
            {
              if ( v94 == 1 )
              {
LABEL_36:
                v24 = -1LL;
                goto LABEL_37;
              }
LABEL_39:
              v26 = 1LL;
            }
            if ( HIBYTE(v95) || v97 > v24 )
            {
              if ( (v95 & 1) != 0 )
                KeFlushCurrentTbOnly(v19, v26, v24);
              else
                KeFlushTb(v19, v26);
              HIBYTE(v95) = 0;
            }
            else if ( (v95 & 1) != 0 )
            {
              KeFlushMultipleRangeCurrentTb(HIDWORD(v96), v98, v19);
            }
            else
            {
              KeFlushMultipleRangeTb(HIDWORD(v96), v98, v19, (unsigned int)v26);
            }
            HIDWORD(v96) = 0;
            v97 = 0LL;
          }
          MiCopyOnWriteEx((__int64)(v10 << 25) >> 16, v10, -1LL, v86, 0);
          v10 -= 8LL;
          goto LABEL_199;
        }
        if ( (v20 & 0x400) != 0 )
        {
          if ( !HIDWORD(v96) )
            goto LABEL_76;
          v28 = qword_1402FE720;
          if ( (v95 & 2) != 0 )
            goto LABEL_63;
          v19 = v94;
          v29 = KeGetCurrentThread()->ApcState.Process;
          if ( v29[2].ActiveProcessors.Bitmap[12] )
            goto LABEL_62;
          if ( !v29->SecurePid )
          {
LABEL_63:
            if ( v19 != 1 )
              goto LABEL_65;
            v30 = 0LL;
          }
          else
          {
            if ( v94 == 1 )
            {
LABEL_62:
              v28 = -1LL;
              goto LABEL_63;
            }
LABEL_65:
            v30 = 1LL;
          }
          if ( HIBYTE(v95) || v97 > v28 )
          {
            if ( (v95 & 1) != 0 )
              KeFlushCurrentTbOnly(v19, v30, v28);
            else
              KeFlushTb(v19, v30);
            HIBYTE(v95) = 0;
          }
          else if ( (v95 & 1) != 0 )
          {
            KeFlushMultipleRangeCurrentTb(HIDWORD(v96), v98, v19);
          }
          else
          {
            KeFlushMultipleRangeTb(HIDWORD(v96), v98, v19, (unsigned int)v30);
          }
          HIDWORD(v96) = 0;
          v97 = 0LL;
          goto LABEL_76;
        }
        v31 = v10;
        if ( (v20 & 0x800) != 0 )
        {
          v32 = MiLockTransitionLeafPage(v10, 0LL);
          if ( v32 )
          {
            v33 = MI_READ_PTE_LOCK_FREE(v10);
            v34 = *(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            v35 = v33 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            goto LABEL_82;
          }
          v10 -= 8LL;
LABEL_199:
          v19 = v94;
          goto LABEL_200;
        }
        v36 = v20 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
      }
      else
      {
        if ( !v11 )
        {
          while ( 1 )
          {
            v41 = MI_GET_PAGE_FRAME_FROM_PTE(&v87);
            v43 = 48 * v41 - 0x58000000000LL;
            if ( v13 )
            {
              ValidKernelPte = MmProtectToPteMask[v7] ^ (v22 ^ MmProtectToPteMask[v7]) & 0xFFFFFFFFF000LL | 0x21;
              if ( v10 + 0x904C0000000LL <= 0x3FFFFFFF )
                ValidKernelPte &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
              if ( v10 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                && v10 >= 0xFFFFF68000000000uLL
                || v10 >= 0xFFFFF6FB40000000uLL
                && v10 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
                || v10 >= 0xFFFFF6FB7DA00000uLL
                && v10 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
                || v10 >= 0xFFFFF6FB7DBED000uLL
                && v10 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
              {
                ValidKernelPte |= 4uLL;
              }
              if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v10) )
                ValidKernelPte |= 0x100uLL;
            }
            else
            {
              ValidKernelPte = MiMakeValidKernelPte(v41, v7, v10, v42);
            }
            if ( (v7 & 4) != 0 )
              ValidKernelPte |= 0x42uLL;
            if ( (v22 & 1) == 0 )
            {
              if ( (*(_QWORD *)(v43 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
              {
                v85 = MiLockPageInline(v43);
                *(_QWORD *)(v43 + 24) = *(_QWORD *)(v43 + 24) & 0xC000000000000000uLL | 1;
                _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v85);
                ValidKernelPte |= 0x200uLL;
              }
              *(_QWORD *)(v43 + 16) ^= (*(_DWORD *)(v43 + 16) ^ (32 * (_DWORD)v7)) & 0x3E0;
              *(_QWORD *)v10 = ValidKernelPte;
              if ( (unsigned int)MiPteInShadowRange(v10) )
              {
                v47 = ValidKernelPte;
                goto LABEL_198;
              }
              goto LABEL_199;
            }
            if ( v89 != 1 )
              break;
            v43 = MiLockNonPagedPoolPte(v10, &v85);
            v45 = MI_READ_PTE_LOCK_FREE(v10);
            if ( v45 == v22 )
            {
              if ( (v22 & 0x200) != 0 )
                ValidKernelPte |= 0x200uLL;
              v46 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, ValidKernelPte, v22);
              v39 = v22 == v46;
              v22 = v46;
              if ( v39 )
              {
                v22 = v87;
                goto LABEL_127;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v85);
              v13 = v90;
              v87 = v46;
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v85);
              v13 = v90;
              v22 = v45;
              v87 = v45;
            }
          }
          v85 = 17;
          *(_QWORD *)v10 = ValidKernelPte;
          if ( (unsigned int)MiPteInShadowRange(v10) )
            MiWritePteShadow(v10, ValidKernelPte);
LABEL_127:
          *(_QWORD *)(v43 + 16) ^= (*(_DWORD *)(v43 + 16) ^ (32 * (_DWORD)v7)) & 0x3E0;
          if ( v89 == 1 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v85);
            v22 = v87;
          }
          if ( (MiFlags & 0x100) != 0 && !(unsigned int)MI_TIGHTER_PERMISSIONS(v22, ValidKernelPte) )
            goto LABEL_199;
          goto LABEL_97;
        }
        if ( (v20 & 1) != 0 )
        {
          v48 = MI_GET_PAGE_FRAME_FROM_PTE(&v87);
          v50 = 48 * v48 - 0x58000000000LL;
          if ( (*(_QWORD *)(v50 + 40) & 0x200000000000000LL) == 0 )
          {
            if ( v13 )
            {
              v51 = MmProtectToPteMask[v7] ^ (v22 ^ MmProtectToPteMask[v7]) & 0xFFFFFFFFF000LL | 0x21;
              if ( v10 + 0x904C0000000LL <= 0x3FFFFFFF )
                v51 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
              if ( v10 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                && v10 >= 0xFFFFF68000000000uLL
                || v10 >= 0xFFFFF6FB40000000uLL
                && v10 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
                || v10 >= 0xFFFFF6FB7DA00000uLL
                && v10 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
                || v10 >= 0xFFFFF6FB7DBED000uLL
                && v10 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
              {
                v51 |= 4uLL;
              }
              if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v10) )
                v51 |= 0x100uLL;
            }
            else
            {
              v51 = MiMakeValidKernelPte(v48, v7, v10, v49);
            }
            if ( v22 == _InterlockedCompareExchange64((volatile signed __int64 *)v10, v51, v22) )
            {
              v52 = v87;
              if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v87, v51) )
                MiInsertTbFlushEntry((__int64)&v94, (__int64)(v10 << 25) >> 16, 1LL, 0);
              v53 = 0LL;
              MiLockPageAtDpcInline(v50);
              *(_QWORD *)(v50 + 16) ^= (*(_DWORD *)(v50 + 16) ^ (32 * (_DWORD)v7)) & 0x3E0;
              if ( (v52 & 0x42) != 0 )
                v53 = MiCaptureDirtyBitToPfn(v50);
              _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v53 )
                MiReleasePageFileInfo(&MiSystemPartition, v53, 1LL);
            }
            else
            {
              v10 -= 8LL;
            }
            goto LABEL_199;
          }
          goto LABEL_31;
        }
        if ( (v20 & 0x400) != 0 )
        {
          v54 = HIDWORD(v96);
          if ( HIDWORD(v96) )
          {
            v55 = qword_1402FE720;
            if ( (v95 & 2) != 0 )
              goto LABEL_169;
            v19 = v94;
            v56 = KeGetCurrentThread()->ApcState.Process;
            if ( v56[2].ActiveProcessors.Bitmap[12] )
              goto LABEL_168;
            if ( !v56->SecurePid )
            {
LABEL_169:
              if ( v19 != 1 )
                goto LABEL_171;
              v57 = 0LL;
            }
            else
            {
              if ( v94 == 1 )
              {
LABEL_168:
                v55 = -1LL;
                goto LABEL_169;
              }
LABEL_171:
              v57 = 1LL;
            }
            if ( HIBYTE(v95) || v97 > v55 )
            {
              if ( (v95 & 1) != 0 )
                KeFlushCurrentTbOnly(v19, v57, v55);
              else
                KeFlushTb(v19, v57);
              HIBYTE(v95) = 0;
            }
            else
            {
              if ( (v95 & 1) == 0 )
              {
                KeFlushMultipleRangeTb(HIDWORD(v96), v98, v19, (unsigned int)v57);
                HIDWORD(v96) = 0;
                v97 = 0LL;
                goto LABEL_76;
              }
              IsSecureProcessFlush = KiIsSecureProcessFlush(0LL, v19);
              if ( IsSecureProcessFlush || KiFlushViaHypervisor() )
              {
                KiPrepareFlushParameters(v19, &v92, v88);
                CurrentPrcb = KeGetCurrentPrcb();
                KeInitializeAffinityEx(v102);
                KeAddGroupAffinityEx(v102, CurrentPrcb->Group, CurrentPrcb->GroupSetMember);
                HvlFlushRangeListTb(v92, v102, (unsigned __int8)v88[0], IsSecureProcessFlush, v54, v98);
              }
              else if ( (_DWORD)v54 )
              {
                v59 = v98;
                v60 = v54;
                do
                {
                  KiFlushRangeTb(*v59++, v19);
                  --v60;
                }
                while ( v60 );
              }
              if ( VmTbFlushEnabled )
                VmFlushTb((unsigned int)v54, v98);
              if ( ExTbFlushActive )
              {
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(0xFuLL);
                ExFlushTb((unsigned int)v54, v98, v19);
                __writecr8(CurrentIrql);
                HIDWORD(v96) = 0;
                v97 = 0LL;
                goto LABEL_76;
              }
            }
            HIDWORD(v96) = 0;
            v97 = 0LL;
          }
LABEL_76:
          MiUnlockWorkingSetExclusive((__int64)v11, v86, v21);
          MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0, 0LL);
          v86 = ExAcquireSpinLockExclusive(v11);
          goto LABEL_77;
        }
        v31 = v10;
        if ( (v20 & 0x800) != 0 )
        {
          v32 = MiLockTransitionLeafPage(v10, 0LL);
          if ( v32 )
          {
            v63 = MI_READ_PTE_LOCK_FREE(v10);
            v64 = 32 * (v7 & 0x1F);
            v34 = v64 | *(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
            v35 = v64 | v63 & 0xFFFFFFFFFFFFFC1FuLL;
LABEL_82:
            *(_QWORD *)(v32 + 16) = v34;
            v87 = v35;
            *(_QWORD *)v10 = v35;
            if ( (unsigned int)MiPteInShadowRange(v10) )
              MiWritePteShadow(v10, v35);
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_199;
          }
LABEL_77:
          v10 -= 8LL;
          goto LABEL_199;
        }
        v36 = ((unsigned __int16)v20 ^ (unsigned __int16)(32 * v7)) & 0x3E0 ^ (unsigned __int64)v20;
      }
      v87 = v36;
      *(_QWORD *)v10 = v36;
      if ( (unsigned int)MiPteInShadowRange(v31) )
      {
        v47 = v36;
LABEL_198:
        MiWritePteShadow(v10, v47);
        goto LABEL_199;
      }
LABEL_200:
      v12 = v89;
      v10 += 8LL;
      v13 = v90;
    }
    while ( v10 <= v93 );
  }
  v65 = HIDWORD(v96);
  if ( !HIDWORD(v96) )
    goto LABEL_289;
  v66 = qword_1402FE720;
  if ( (v95 & 2) == 0 )
  {
    v19 = v94;
    v67 = KeGetCurrentThread()->ApcState.Process;
    if ( !v67[2].ActiveProcessors.Bitmap[12] )
    {
      if ( !v67->SecurePid )
        goto LABEL_207;
      if ( v94 != 1 )
      {
LABEL_209:
        v68 = 1;
        goto LABEL_210;
      }
    }
    v66 = -1LL;
  }
LABEL_207:
  if ( v19 != 1 )
    goto LABEL_209;
  v68 = 0;
LABEL_210:
  if ( !HIBYTE(v95) && v97 <= v66 )
  {
    if ( (v95 & 1) != 0 )
    {
      if ( v19 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
      {
        v69 = 1;
      }
      else
      {
        v69 = 0;
        if ( (HvlEnlightenments & 6) == 0 || (HvlEnlightenments & 2) == 0 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 1 )
        {
          if ( (_DWORD)v65 )
          {
            v73 = v98;
            v74 = v65;
            do
            {
              KiFlushRangeTb(*v73++, v19);
              --v74;
            }
            while ( v74 );
          }
          goto LABEL_255;
        }
      }
      if ( KiKvaShadow )
      {
        if ( !v19 || v19 == 2 )
        {
          v70 = 0LL;
          v71 = 0;
LABEL_229:
          v72 = KeGetCurrentPrcb();
          v99[0] = 1310721LL;
          memset(&v99[1], 0, 0xA0uLL);
          KeAddGroupAffinityEx(v99, v72->Group, v72->GroupSetMember);
          HvlFlushRangeListTb(v70, v99, v71, v69, v65, v98);
LABEL_255:
          if ( VmTbFlushEnabled )
            VmFlushTb((unsigned int)v65, v98);
          if ( ExTbFlushActive )
          {
            v78 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            ExFlushTb((unsigned int)v65, v98, v19);
            __writecr8(v78);
          }
          goto LABEL_288;
        }
      }
      else if ( v19 )
      {
        if ( v19 == 1 )
        {
          v70 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
          v71 = 0;
          goto LABEL_229;
        }
        if ( v19 == 2 )
        {
          v70 = 0LL;
          v71 = 0;
          goto LABEL_229;
        }
      }
      v71 = 1;
      v70 = 0LL;
      goto LABEL_229;
    }
    if ( v19 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
    {
      v75 = 1;
    }
    else
    {
      v75 = 0;
      if ( (HvlEnlightenments & 6) == 0 || (HvlEnlightenments & 2) == 0 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 1 )
      {
        KxFlushMultipleTb((unsigned int)v65, v98, v19, v68);
        goto LABEL_255;
      }
    }
    if ( KiKvaShadow )
    {
      if ( !v19 || v19 == 2 )
      {
        v76 = 0LL;
        LOBYTE(v5) = 0;
LABEL_250:
        if ( v68 )
          p_ActiveProcessors = 0LL;
        else
          p_ActiveProcessors = &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
        HvlFlushRangeListTb(v76, p_ActiveProcessors, v5, v75, v65, v98);
        goto LABEL_255;
      }
    }
    else if ( v19 )
    {
      if ( v19 == 1 )
      {
        v76 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
        LOBYTE(v5) = 0;
        goto LABEL_250;
      }
      if ( v19 == 2 )
      {
        v76 = 0LL;
        LOBYTE(v5) = 0;
        goto LABEL_250;
      }
    }
    LOBYTE(v5) = 1;
    v76 = 0LL;
    goto LABEL_250;
  }
  if ( (v95 & 1) == 0 )
  {
    v79 = v19 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid;
    if ( (HvlEnlightenments & 6) == 0 || (HvlEnlightenments & 2) == 0 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 1 )
    {
      KiFlushTb(v19, v68);
LABEL_282:
      if ( VmTbFlushEnabled )
      {
        v82 = (volatile LONG *)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[12];
        if ( v82 )
          VmpFlushTb(v82);
      }
      if ( ExTbFlushActive )
      {
        v83 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ExFlushTb(0LL, 0LL, v19);
        __writecr8(v83);
      }
      goto LABEL_287;
    }
    if ( KiKvaShadow )
    {
      if ( !v19 || v19 == 2 )
      {
        LODWORD(v80) = 0;
        LOBYTE(v5) = 0;
        goto LABEL_278;
      }
    }
    else if ( v19 )
    {
      if ( v19 == 1 )
      {
        v80 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
        LOBYTE(v5) = 0;
        goto LABEL_279;
      }
      if ( v19 == 2 )
      {
        LODWORD(v80) = 0;
        LOBYTE(v5) = 0;
        goto LABEL_279;
      }
    }
    LOBYTE(v5) = 1;
    LODWORD(v80) = 0;
LABEL_278:
    v81 = 1;
    if ( v19 - 1 > 1 )
    {
LABEL_280:
      KiFlushAddressSpaceTb(v80, 0, v5, v79, v81);
      goto LABEL_282;
    }
LABEL_279:
    v81 = 0;
    goto LABEL_280;
  }
  KeFlushCurrentTbOnly(v19, v66, v5);
LABEL_287:
  HIBYTE(v95) = 0;
LABEL_288:
  HIDWORD(v96) = 0;
  v97 = 0LL;
LABEL_289:
  if ( v11 )
    MiUnlockWorkingSetExclusive((__int64)v11, v86, v5);
  return 1LL;
}
