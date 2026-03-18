/*
 * XREFs of MiQueryAddressState @ 0x14005EA30
 * Callers:
 *     MiQueryAddressSpan @ 0x14005E760 (MiQueryAddressSpan.c)
 *     MiAllowProtectionChange @ 0x1400F5AE4 (MiAllowProtectionChange.c)
 *     MiComparePteProtections @ 0x1401D74D0 (MiComparePteProtections.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiVadPureReserve @ 0x140061050 (MiVadPureReserve.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLocatePagefileSubsection @ 0x1400D5B70 (MiLocatePagefileSubsection.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400E2010 (MiCaptureProtectionFromLockedProto.c)
 *     MiMakeProtoAddressValid @ 0x1400E20DC (MiMakeProtoAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 MiQueryAddressState(
        unsigned __int64 a1,
        KIRQL a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int64 *a5,
        int *a6,
        __int64 *a7,
        ...)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // rcx
  KIRQL v11; // r13
  __int64 ProtoAddressValid; // rdi
  unsigned int v13; // r12d
  ULONG_PTR v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 NextPageTable; // rax
  __int64 v18; // rsi
  __int16 v19; // bx
  int v20; // ecx
  __int64 result; // rax
  unsigned __int64 v22; // rax
  int v23; // edi
  __int64 ProtoPteAddress; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // rbx
  volatile LONG *v32; // rcx
  __int64 v33; // r15
  ULONG_PTR v34; // rbx
  _QWORD *v35; // rdx
  volatile signed __int32 *v36; // r15
  int v37; // ecx
  __int64 CurrentIrql; // rdx
  signed __int32 v39; // ett
  unsigned __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rax
  int locked; // ebp
  unsigned __int64 v44; // rbx
  __int64 v45; // rbx
  __int64 v46; // rcx
  ULONG_PTR v47; // r13
  ULONG_PTR v48; // rax
  ULONG_PTR v49; // rcx
  __int64 v50; // [rsp+30h] [rbp-68h]
  unsigned __int64 v51; // [rsp+30h] [rbp-68h]
  __int64 v52; // [rsp+38h] [rbp-60h] BYREF
  ULONG_PTR v53; // [rsp+40h] [rbp-58h]
  __int64 v54; // [rsp+48h] [rbp-50h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v56; // [rsp+A0h] [rbp+8h] BYREF
  KIRQL v57; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v58; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v59; // [rsp+B8h] [rbp+20h]
  __int64 v60; // [rsp+D8h] [rbp+40h] BYREF
  va_list va; // [rsp+D8h] [rbp+40h]
  va_list va1; // [rsp+E0h] [rbp+48h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v60 = va_arg(va1, _QWORD);
  v59 = a4;
  v57 = a2;
  v8 = a1 >> 9;
  v10 = (unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32;
  v11 = a2;
  *(_DWORD *)v60 = 1;
  LODWORD(ProtoAddressValid) = 0;
  v54 = 0LL;
  v13 = 0x2000;
  v14 = (v8 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v58) = 0x2000;
  v15 = *(unsigned int *)(a3 + 28);
  v16 = 8 * ((v15 | v10) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v50 = v16;
  NextPageTable = MiGetNextPageTable(v14, 8 * ((unsigned int)v15 | (unsigned int)v10), 0, a2, 0, (__int64)&v56);
  v18 = NextPageTable;
  if ( !NextPageTable )
  {
    v18 = v16 + 8;
    goto LABEL_5;
  }
  if ( v56 != 1 )
  {
    if ( v14 == NextPageTable )
    {
      v18 = 0LL;
      v52 = MI_READ_PTE_LOCK_FREE(v14);
      v19 = v52;
      if ( v52 )
      {
        v22 = MI_READ_PTE_LOCK_FREE(&v52);
        if ( (v22 & 0x3E0) != 0x200 || (v22 & 1) != 0 || (v22 & 0x400) != 0 && HIDWORD(v22) != 0xFFFFFFFF )
        {
          v23 = *(_DWORD *)(a3 + 48);
          v13 = 4096;
          if ( (v23 & 7) == 1 )
          {
            LODWORD(ProtoAddressValid) = (unsigned __int8)v23 >> 3;
          }
          else if ( (v23 & 7) != 3 || (v23 & 0x40000) != 0 )
          {
            LODWORD(ProtoAddressValid) = MiGetPageProtection(a3, v14);
            if ( (v19 & 1) == 0 && (v19 & 0x400) != 0 && (*(_DWORD *)(a3 + 48) & 0x8000) == 0 )
            {
              ProtoPteAddress = MiGetProtoPteAddress(a3, a1 >> 12, 9u, (__int64 *)va);
              if ( !ProtoPteAddress )
                goto LABEL_29;
              v25 = *(_QWORD **)(a3 + 120);
              if ( (__int64)v25 < 0
                && (a1 >> 12) - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) > (unsigned __int64)(*v25 - 1LL) >> 12 )
              {
                goto LABEL_29;
              }
              if ( !*a5 || a1 > *a5 )
              {
                v26 = v60;
                v60 = *(_QWORD *)(v60 + 8) + 8LL * *(unsigned int *)(v60 + 44);
                ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v59 + 1280), v11);
                if ( (*(_BYTE *)(v26 + 34) & 2) != 0 )
                  v27 = ProtoPteAddress + 8;
                else
                  v27 = v60;
                v28 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
                v29 = 0LL;
                v30 = ProtoPteAddress + 8;
                v31 = v28;
                while ( v30 != v27 )
                {
                  if ( !MI_READ_PTE_LOCK_FREE(v30) )
                    break;
                  ++v29;
                  v30 += 8LL;
                  if ( (v30 & 0xFFF) == 0 )
                    break;
                }
                v32 = (volatile LONG *)(v59 + 1280);
                *a5 = (a1 & 0xFFFFFFFFFFFFF000uLL) + (v29 << 12);
                ExAcquireSpinLockShared(v32);
                if ( !v31 )
                {
LABEL_29:
                  LODWORD(ProtoAddressValid) = 0;
                  v13 = 0x2000;
                }
              }
            }
          }
          else if ( (v19 & 4) != 0 )
          {
            LODWORD(ProtoAddressValid) = 1;
            if ( (v19 & 0x800) != 0 )
              LODWORD(ProtoAddressValid) = 4;
          }
          else
          {
            LODWORD(ProtoAddressValid) = 24;
          }
        }
LABEL_10:
        v18 = v14 + 8;
LABEL_11:
        result = v13;
        *a7 = v18 << 25 >> 16;
        *a6 = ProtoAddressValid;
        return result;
      }
    }
LABEL_5:
    v20 = *(_DWORD *)(a3 + 48);
    *(_DWORD *)v60 = 0;
    if ( (((v20 & 7) - 1) & 0xFFFFFFFD) != 0 )
    {
      if ( (v20 & 0x8000) != 0 )
      {
        if ( *(int *)(a3 + 52) < 0 )
        {
          v13 = 4096;
          LODWORD(ProtoAddressValid) = (unsigned __int8)v20 >> 3;
        }
      }
      else
      {
        v33 = a1 >> 12;
        v34 = MiGetProtoPteAddress(a3, v33, 1u, (__int64 *)va);
        if ( v34 )
        {
          if ( !v18 || !(unsigned int)MiVadPureReserve(a3) )
            goto LABEL_32;
          v41 = (__int64)(v18 - v14) >> 3;
          v53 = v34;
          v51 = *(_QWORD *)(v60 + 8) + 8LL * *(unsigned int *)(v60 + 44);
          if ( v41 < (__int64)(v51 - v34) >> 3 )
            v51 = v34 + 8 * v41;
          do
          {
            v42 = MI_READ_PTE_LOCK_FREE(((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v52 = v42;
            if ( (v42 & 1) != 0 )
              break;
            if ( (v42 & 0x3E0) != 0 )
              break;
            v34 = (__int64)(((((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) + 0x10000000) >> 16;
          }
          while ( v34 < v51 );
          LODWORD(ProtoAddressValid) = v54;
          v13 = v58;
          v11 = v57;
          if ( v34 != v53 )
          {
            if ( v34 > v51 )
              v34 = v51;
            v18 = v14 + 8 * ((__int64)(v34 - v53) >> 3);
          }
          else
          {
LABEL_32:
            v18 = v14 + 8;
            if ( v34 )
            {
              v35 = *(_QWORD **)(a3 + 120);
              if ( (__int64)v35 >= 0
                || v33 - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) <= (unsigned __int64)(*v35 - 1LL) >> 12 )
              {
                v36 = (volatile signed __int32 *)(v59 + 1280);
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                {
                  ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v59 + 1280, retaddr);
                }
                else
                {
                  _InterlockedAnd(v36, 0xBFFFFFFF);
                  _InterlockedDecrement(v36);
                }
                __writecr8(v11);
                if ( MI_READ_PTE_LOCK_FREE(v34) )
                {
                  v37 = *(_DWORD *)(a3 + 48);
                  v13 = 4096;
                  if ( (v37 & 7) == 2 && (v37 & 0xF8) == 0x38 )
                  {
                    v40 = MI_READ_PTE_LOCK_FREE(v34);
                    if ( (v40 & 1) != 0 )
                    {
                      ProtoAddressValid = MiMakeProtoAddressValid(v34);
                      locked = MiCaptureProtectionFromLockedProto(v34);
                      v44 = (unsigned __int8)MiLockPageInline(ProtoAddressValid);
                      MiRemoveLockedPageChargeAndDecRef(ProtoAddressValid);
                      _InterlockedAnd64((volatile signed __int64 *)(ProtoAddressValid + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      __writecr8(v44);
                      LODWORD(ProtoAddressValid) = locked;
                    }
                    else
                    {
                      ProtoAddressValid = (v40 >> 5) & 0x1F;
                    }
                  }
                  else
                  {
                    LODWORD(ProtoAddressValid) = (unsigned __int8)v37 >> 3;
                  }
                }
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                {
                  ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v36, CurrentIrql);
                }
                else
                {
                  _m_prefetchw((const void *)v36);
                  v39 = *v36 & 0x7FFFFFFF;
                  if ( v39 != _InterlockedCompareExchange(v36, v39 + 1, v39) )
                    ExpWaitForSpinLockSharedAndAcquire(v36, CurrentIrql);
                }
              }
            }
          }
        }
        else
        {
          if ( !(unsigned int)MiVadPureReserve(a3) )
            goto LABEL_71;
          v45 = v60;
          if ( !v60 )
            goto LABEL_71;
          if ( *(_QWORD *)(v60 + 8) )
            goto LABEL_71;
          if ( !v18 )
            goto LABEL_71;
          v46 = *(_QWORD *)(a3 + 72);
          v47 = v18 - v14;
          v58 = v33
              + ((__int64)(*(_QWORD *)(a3 + 80) - *(_QWORD *)(v46 + 8)) >> 3)
              - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32));
          MiLocatePagefileSubsection(v46, &v58);
          v18 = v14;
          v48 = *(unsigned int *)(v45 + 44);
          v49 = v47 + v58;
          if ( v47 + v58 < v48 )
            goto LABEL_71;
          while ( !*(_QWORD *)(v45 + 8) )
          {
            if ( v48 >= v47 )
            {
              v18 += 8 * v47;
              break;
            }
            v45 = *(_QWORD *)(v45 + 16);
            v18 += 8 * v48;
            v47 -= v48;
            v49 -= v48;
            if ( !v45 )
            {
              v18 = v50 + 8;
              break;
            }
            v48 = *(unsigned int *)(v45 + 44);
            if ( v49 < v48 )
              break;
          }
          if ( v18 == v14 )
LABEL_71:
            v18 = v14 + 8;
        }
      }
    }
    if ( v18 )
      goto LABEL_11;
    goto LABEL_10;
  }
  *a6 = (*(_DWORD *)(a3 + 48) >> 3) & 0x1F;
  *a7 = (__int64)(((((a1 >> 18) & 0x3FFFFFF8) - 0x4C0000000LL) << 25) + 0x10000000) >> 16 << 25 >> 16;
  return 4096LL;
}
