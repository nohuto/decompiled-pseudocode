/*
 * XREFs of MiQueryAddressState @ 0x140042B80
 * Callers:
 *     MiQueryAddressSpan @ 0x140042840 (MiQueryAddressSpan.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiAllowProtectionChange @ 0x1400B5348 (MiAllowProtectionChange.c)
 *     MiComparePteProtections @ 0x1401E8F90 (MiComparePteProtections.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiVadPureReserve @ 0x14002B610 (MiVadPureReserve.c)
 *     MiLocatePagefileSubsection @ 0x14002CBC0 (MiLocatePagefileSubsection.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089320 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DC08 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14022DCE8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        KIRQL a2,
        ULONG_PTR a3,
        __int64 a4,
        int a5,
        unsigned __int64 *a6,
        int *a7,
        __int64 *a8,
        __int64 *a9)
{
  __int64 v9; // r13
  int v10; // r9d
  int v13; // ebp
  ULONG_PTR v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 NextPageTable; // rax
  __int64 v17; // r14
  int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 result; // rax
  __int16 v24; // bx
  __int64 v25; // rax
  int v26; // ebp
  int v27; // eax
  int PageProtection; // eax
  int v29; // ecx
  __int64 v30; // rdi
  _QWORD *v31; // rdx
  unsigned __int64 *v32; // r15
  __int64 *v33; // rbx
  __int64 v34; // r14
  LONG *SharedVm; // rax
  __int64 v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // r9
  LONG *v39; // rdi
  __int64 v40; // r12
  unsigned __int64 ProtoPteAddress; // rbx
  __int64 *v42; // rbx
  unsigned __int64 v43; // rcx
  ULONG_PTR v44; // rdi
  ULONG_PTR v45; // rax
  ULONG_PTR v46; // rcx
  int v47; // ecx
  _QWORD *v48; // rdx
  int v49; // ecx
  unsigned __int64 v50; // rdx
  __int64 *i; // rdi
  __int64 v52; // rbp
  unsigned int SessionId; // eax
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r9
  unsigned __int64 v58; // r10
  __int64 v59; // r11
  int v60; // r12d
  LONG *v61; // rdi
  volatile signed __int32 *v62; // rcx
  char v63; // al
  __int64 CurrentIrql; // rdx
  signed __int32 v65; // ett
  __int64 v66; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int64 v69; // [rsp+90h] [rbp+8h] BYREF
  KIRQL v70; // [rsp+98h] [rbp+10h]
  unsigned int v71; // [rsp+A0h] [rbp+18h] BYREF

  v70 = a2;
  v9 = a4 + 1280;
  v10 = a5;
  *(_DWORD *)a9 = 1;
  v13 = 0;
  LODWORD(v69) = ((unsigned __int8)v10 >> 2) & 1;
  a5 = 0x2000;
  v14 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = 8 * ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v67 = v15;
  NextPageTable = MiGetNextPageTable((unsigned int)(a1 >> 9) & 0xFFFFFFF8, v15, 0, a2, v10, (__int64)&v71);
  v17 = NextPageTable;
  if ( !NextPageTable )
  {
    v17 = v15 + 8;
    goto LABEL_3;
  }
  if ( !v71 )
  {
    if ( v14 != NextPageTable || (v66 = MI_READ_PTE_LOCK_FREE(v14), v24 = v66, v17 = 0LL, !v66) )
    {
LABEL_3:
      v18 = *(_DWORD *)(a3 + 48);
      *(_DWORD *)a9 = 0;
      if ( (((v18 & 7) - 1) & 0xFFFFFFFD) == 0 )
        goto LABEL_133;
      if ( (v18 & 0x8000) != 0 )
      {
        if ( *(int *)(a3 + 52) < 0 )
        {
          v19 = 4096;
          v13 = (unsigned __int8)v18 >> 3;
          goto LABEL_134;
        }
        goto LABEL_133;
      }
      v40 = a1 >> 12;
      ProtoPteAddress = MiGetProtoPteAddress(a3, v40, 9, &a9);
      if ( !ProtoPteAddress )
      {
        if ( !(unsigned int)MiVadPureReserve(a3) )
          goto LABEL_77;
        v42 = a9;
        if ( !a9 )
          goto LABEL_77;
        if ( a9[1] )
          goto LABEL_77;
        if ( !v17 )
          goto LABEL_77;
        v43 = *(_QWORD *)(a3 + 72);
        v44 = v17 - v14;
        v69 = v40
            + ((__int64)(*(_QWORD *)(a3 + 80) - *(_QWORD *)(v43 + 8)) >> 3)
            - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32));
        MiLocatePagefileSubsection(v43, &v69);
        v17 = v14;
        v45 = *((unsigned int *)v42 + 11);
        v46 = v44 + v69;
        if ( v44 + v69 < v45 )
          goto LABEL_77;
        while ( !v42[1] )
        {
          if ( v45 >= v44 )
          {
            v17 += 8 * v44;
            break;
          }
          v42 = (__int64 *)v42[2];
          v17 += 8 * v45;
          v44 -= v45;
          v46 -= v45;
          if ( !v42 )
          {
            v17 = v67 + 8;
            break;
          }
          v45 = *((unsigned int *)v42 + 11);
          if ( v46 < v45 )
            break;
        }
        if ( v17 == v14 )
LABEL_77:
          v17 = v14 + 8;
        goto LABEL_133;
      }
      if ( v17 )
      {
        v47 = *(_DWORD *)(a3 + 48);
        if ( (v47 & 0x8000) != 0 )
        {
          if ( *(int *)(a3 + 52) < 0 || (v47 & 7) != 0 )
            goto LABEL_82;
          do
          {
LABEL_96:
            v56 = MI_READ_PTE_LOCK_FREE(((ProtoPteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v66 = v56;
            if ( (v56 & 1) != 0 )
              break;
            if ( (v56 & 0x3E0) != 0 )
              break;
            ProtoPteAddress = ((v57 << 25) + 0x10000000) >> 16;
          }
          while ( ProtoPteAddress < v58 );
          v13 = 0;
          if ( ProtoPteAddress != v59 )
          {
            if ( ProtoPteAddress > v58 )
              ProtoPteAddress = v58;
            v17 = v14 + 8 * ((__int64)(ProtoPteAddress - v59) >> 3);
            goto LABEL_133;
          }
          goto LABEL_82;
        }
        if ( (v47 & 0xF8) == 0xC0 )
        {
          v54 = *(__int64 **)(a3 + 72);
          if ( v54 )
          {
            if ( (v47 & 7) != 1 )
            {
              v55 = *v54;
              if ( !*(_QWORD *)(v55 + 64) && (*(_DWORD *)(v55 + 56) & 0x1000) != 0 )
                goto LABEL_96;
            }
          }
        }
      }
LABEL_82:
      v17 = v14 + 8;
      if ( ProtoPteAddress )
      {
        v48 = *(_QWORD **)(a3 + 120);
        if ( (__int64)v48 >= 0
          || v40 - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) <= (unsigned __int64)(*v48 - 1LL) >> 12 )
        {
          v49 = *(_DWORD *)(a3 + 48);
          if ( (v49 & 7) == 2 && (v49 & 0xF8) == 0x38 )
          {
            v50 = 0LL;
            for ( i = *(__int64 **)(a3 + 72); i; i = (__int64 *)i[2] )
            {
              if ( (*((_BYTE *)i + 34) & 2) != 0 && (v52 = *i, (*(_DWORD *)(*i + 56) & 0x4000000) != 0) )
              {
                SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                v50 = *(_QWORD *)(MiGetSharedProtos(v52, SessionId, i) + 32);
              }
              else
              {
                v50 = i[1];
              }
              if ( ProtoPteAddress >= v50 && ProtoPteAddress < v50 + 8LL * *((unsigned int *)i + 11) )
                break;
            }
            if ( (__int64)(ProtoPteAddress - v50) >> 3 < (unsigned __int64)(*((_DWORD *)i + 11)
                                                                          - (*((_DWORD *)i + 13) & 0x7FFFFFFFu)) )
            {
              v13 = (*((unsigned __int16 *)i + 16) >> 1) & 0x1F;
              if ( v13 )
              {
                v19 = 4096;
                goto LABEL_134;
              }
            }
            else
            {
              v13 = 0;
            }
          }
          else
          {
            v60 = v69;
            v61 = &dword_140327CC0;
            if ( (_DWORD)v69 )
            {
              MiUnlockWorkingSetExclusive(v9, v70);
            }
            else
            {
              v62 = &dword_140327CC0;
              if ( (*(_BYTE *)(v9 + 184) & 7) != 2 )
                v62 = (volatile signed __int32 *)(v9 + 192);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              {
                ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v62, retaddr);
              }
              else
              {
                _InterlockedAnd(v62, 0xBFFFFFFF);
                _InterlockedDecrement(v62);
              }
              __writecr8(v70);
            }
            if ( MI_READ_PTE_LOCK_FREE(ProtoPteAddress) )
            {
              v13 = (*(_DWORD *)(a3 + 48) >> 3) & 0x1F;
              a5 = 4096;
            }
            v63 = *(_BYTE *)(v9 + 184) & 7;
            if ( v60 )
            {
              if ( v63 != 2 )
                v61 = (LONG *)(v9 + 192);
              ExAcquireSpinLockExclusive(v61);
              v61[1] = 0;
            }
            else
            {
              if ( v63 != 2 )
                v61 = (LONG *)(v9 + 192);
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v61, CurrentIrql);
              }
              else
              {
                _m_prefetchw(v61);
                v65 = *v61 & 0x7FFFFFFF;
                if ( v65 != _InterlockedCompareExchange(v61, v65 + 1, v65) )
                  ExpWaitForSpinLockSharedAndAcquire(v61, CurrentIrql);
              }
              if ( v61[1] )
                _InterlockedExchange(v61 + 1, 0);
            }
          }
        }
      }
LABEL_133:
      v19 = a5;
LABEL_134:
      if ( v17 )
        goto LABEL_60;
      goto LABEL_59;
    }
    v25 = MI_READ_PTE_LOCK_FREE(&v66);
    if ( (v25 & 0x3E0) == 0x200
      && (v25 & 1) == 0
      && ((v25 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v25)) )
    {
      goto LABEL_58;
    }
    v26 = *(_DWORD *)(a3 + 48);
    v19 = 4096;
    a5 = 4096;
    v27 = v26 & 7;
    if ( v27 == 1 )
    {
      v13 = (unsigned __int8)v26 >> 3;
LABEL_59:
      v17 = v14 + 8;
LABEL_60:
      result = v19;
      *a8 = v17 << 25 >> 16;
      *a7 = v13;
      return result;
    }
    if ( v27 == 3 && (v26 & 0x40000) == 0 )
    {
      if ( (v24 & 4) != 0 )
      {
        v13 = 1;
        if ( (v24 & 0x800) != 0 )
          v13 = 4;
      }
      else
      {
        v13 = 24;
      }
      goto LABEL_59;
    }
    PageProtection = MiGetPageProtection(a3, v14);
    v29 = *(_DWORD *)(a3 + 48);
    v13 = PageProtection;
    if ( (v29 & 7) == 2 && (v29 & 0xF8) == 0x38 )
    {
      if ( !PageProtection )
      {
        v19 = 0x2000;
        goto LABEL_59;
      }
    }
    else if ( (v24 & 1) == 0 && (v24 & 0x400) != 0 && (v29 & 0x8000) == 0 )
    {
      v30 = MiGetProtoPteAddress(a3, a1 >> 12, 9, &a9);
      if ( v30
        && ((v31 = *(_QWORD **)(a3 + 120), (__int64)v31 >= 0)
         || (a1 >> 12) - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) <= (unsigned __int64)(*v31 - 1LL) >> 12) )
      {
        v32 = a6;
        if ( a6 && *a6 && a1 <= *a6 )
          goto LABEL_58;
        v33 = a9;
        v34 = a9[1] + 8LL * *((unsigned int *)a9 + 11);
        if ( (_DWORD)v69 )
        {
          MiUnlockWorkingSetExclusive(v9, v70);
        }
        else
        {
          SharedVm = MiGetSharedVm(v9);
          ExReleaseSpinLockShared(SharedVm, v70);
        }
        if ( (*((_BYTE *)v33 + 34) & 2) != 0 )
          v34 = v30 + 8;
        v36 = MI_READ_PTE_LOCK_FREE(v30);
        if ( v32 )
        {
          LODWORD(v32) = 0;
          v37 = v30 + 8;
          v38 = 0LL;
          while ( v37 != v34 )
          {
            v66 = MI_READ_PTE_LOCK_FREE(v37);
            if ( !v66 )
              break;
            ++v38;
            v37 += 8LL;
            if ( (v37 & 0xFFF) == 0 )
              break;
          }
          *a6 = (a1 & 0xFFFFFFFFFFFFF000uLL) + (v38 << 12);
        }
        v39 = MiGetSharedVm(v9);
        if ( (_DWORD)v69 )
        {
          ExAcquireSpinLockExclusive(v39);
          v39[1] = (int)v32;
        }
        else
        {
          ExAcquireSpinLockShared(v39);
          if ( v39[1] )
            _InterlockedExchange(v39 + 1, (__int32)v32);
        }
        if ( v36 )
          goto LABEL_58;
      }
      else
      {
        LODWORD(v32) = 0;
      }
      v19 = 0x2000;
      v13 = (int)v32;
      goto LABEL_59;
    }
LABEL_58:
    v19 = a5;
    goto LABEL_59;
  }
  v20 = v71;
  do
  {
    v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v20;
  }
  while ( v20 );
  v21 = (__int64)((v14 + 8) << 25) >> 16;
  if ( v71 )
  {
    v22 = v71;
    do
    {
      v21 = v21 << 25 >> 16;
      --v22;
    }
    while ( v22 );
  }
  *a8 = v21;
  *a7 = (*(_DWORD *)(a3 + 48) >> 3) & 0x1F;
  return 4096LL;
}
