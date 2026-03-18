/*
 * XREFs of MiProbeLeafFrame @ 0x140034440
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140033EA4 (MmProbeAndLockSelectedPages.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     MmStoreProbeAndLockPages @ 0x140145CAC (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x14005AC60 (MI_IS_PFN_FILE_ONLY.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     MiLockProbePacketWorkingSet @ 0x14011B678 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1401207B0 (MiUnlockProbePacketWorkingSet.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiSplitDriverPage @ 0x14020E560 (MiSplitDriverPage.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x140213F48 (MiDeliverPicoExceptionForProbedPage.c)
 *     MiSplitReducedCommitClonePage @ 0x1402141F4 (MiSplitReducedCommitClonePage.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

__int64 __fastcall MiProbeLeafFrame(__int64 a1)
{
  ULONG_PTR v1; // r14
  __int64 v2; // rdx
  unsigned int v3; // r15d
  __int64 v5; // r11
  __int64 v6; // r9
  unsigned __int64 i; // r10
  _KPROCESS *Process; // rcx
  unsigned __int64 v9; // r8
  bool v10; // zf
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 CloneAddress; // rax
  unsigned __int64 v23; // rax
  int v24; // eax
  int v25; // ebx
  ULONG_PTR v26; // rcx
  ULONG_PTR v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v31; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v32[2]; // [rsp+48h] [rbp-69h] BYREF
  __int16 v33; // [rsp+58h] [rbp-59h]
  _QWORD *v34; // [rsp+60h] [rbp-51h]
  __int64 v35; // [rsp+68h] [rbp-49h]
  __int64 v36; // [rsp+70h] [rbp-41h]
  __int64 v37; // [rsp+78h] [rbp-39h]
  unsigned __int64 v38; // [rsp+B8h] [rbp+7h] BYREF
  unsigned __int64 v39; // [rsp+C0h] [rbp+Fh]
  unsigned __int64 v40; // [rsp+C8h] [rbp+17h]
  __int64 v41; // [rsp+D0h] [rbp+1Fh]

  v1 = *(_QWORD *)a1;
  v2 = 0x7FFFFFFFF8LL;
  v3 = *(_DWORD *)(a1 + 40);
  v38 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_2:
  while ( 2 )
  {
    v5 = 0x12090482600LL;
    v6 = 0x80000000000LL;
    for ( i = 0x7FFFFFFFFFLL; ; i = 0x7FFFFFFFFFLL )
    {
      do
      {
        LODWORD(Process) = 3;
        do
        {
          v9 = *(&v38 + (unsigned int)Process);
          if ( (*(_BYTE *)v9 & 1) == 0 )
            goto LABEL_71;
          v10 = (_DWORD)Process == 1;
          Process = (_KPROCESS *)(unsigned int)((_DWORD)Process - 1);
        }
        while ( !v10 );
        v11 = *(_QWORD *)v9;
        if ( v9 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(Process, v11)
          && (v11 & 1) != 0
          && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v12 = *(_QWORD *)&Process[2].ProcessLock;
          if ( v12 )
          {
            v9 = (v9 >> 3) & 0x1FF;
            v13 = *(_QWORD *)(v12 + 8 * v9);
            if ( (v13 & 0x20) != 0 )
              v11 |= 0x20uLL;
            if ( (v13 & 0x42) != 0 )
              v11 |= 0x42uLL;
          }
        }
        v31 = v11;
        if ( (v11 & 0x80u) != 0LL )
        {
          if ( v3 && (v11 & 0x800) == 0 )
          {
            ++dword_14034F1BC;
            return 3221225477LL;
          }
          if ( (unsigned __int64)&v32[v5 - 1] <= 0x7F8
            && (unsigned int)MiPteHasShadow(Process, v11)
            && (v11 & 1) != 0
            && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
          {
            v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v28 )
            {
              v29 = *(_QWORD *)(v28 + 8 * (((unsigned __int64)&v31 >> 3) & 0x1FF));
              if ( (v29 & 0x20) != 0 )
                v11 |= 0x20uLL;
              if ( (v29 & 0x42) != 0 )
                v11 |= 0x42uLL;
            }
          }
          v18 = ((v11 >> 12) & 0xFFFFFFFFFLL) + ((v1 >> 12) & 0x1FF);
          goto LABEL_101;
        }
        v14 = *(_QWORD *)v38;
        v2 = v14;
        v30 = *(_QWORD *)v38;
        if ( (v14 & 1) == 0 )
          goto LABEL_71;
        v9 = *(unsigned int *)(a1 + 56);
        if ( (v14 & 4) == 0 && (_DWORD)v9 == 1 )
        {
          ++dword_14034F1C0;
          return 3221225477LL;
        }
        v15 = v14;
        if ( (unsigned __int64)&v30 + v5 * 8 <= 0x7F8
          && (unsigned int)MiPteHasShadow(v14, v14)
          && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
        {
          v16 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v16 )
          {
            v17 = *(_QWORD *)(v16 + 8 * (((unsigned __int64)&v30 >> 3) & 0x1FF));
            v2 = v30;
            if ( (v17 & 0x20) != 0 )
              v15 = v30 | 0x20;
            if ( (v17 & 0x42) != 0 )
              v15 |= 0x42uLL;
          }
          else
          {
            v2 = v30;
            v15 = v30;
          }
        }
        v18 = (v15 >> 12) & 0xFFFFFFFFFLL;
        if ( v18 > qword_14034EC10
          || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v18 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
        {
          v19 = 0LL;
        }
        else
        {
          v19 = 48 * v18 - 0x58000000000LL;
        }
        if ( v3 )
        {
          if ( (v2 & 0x800) != 0 )
          {
            if ( (v2 & 0x42) != 0 || (_DWORD)v9 != 1 || (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 772LL) & 0x8000) == 0 )
              goto LABEL_46;
            MiUnlockProbePacketWorkingSet(a1, v2, v9, v6);
            v25 = MmAccessFault(2uLL, v1);
            MiLockProbePacketWorkingSet(a1);
            if ( v25 >= 0 )
              goto LABEL_2;
            ++dword_14034F1B8;
            return (unsigned int)v25;
          }
          if ( (_DWORD)v9 == 5 && v1 + v6 <= i )
          {
            if ( !v19 )
              goto LABEL_62;
            v23 = *(_QWORD *)(v19 + 40);
            if ( (v23 & 0x200000000000000LL) != 0 )
              goto LABEL_62;
            if ( (MiFlags & 0x80000) != 0 && ((v23 >> 54) & 7) == 3 )
            {
              MiClearPfnImageVerified(v19, 8LL);
              result = 0LL;
              *(_QWORD *)(a1 + 96) = v18;
              return result;
            }
LABEL_101:
            *(_QWORD *)(a1 + 96) = v18;
            return 0LL;
          }
LABEL_71:
          MiUnlockProbePacketWorkingSet(a1, v2, v9, v6);
          v26 = 0LL;
          v1 = (__int64)(v38 << 25) >> 16;
          v27 = *(_QWORD *)(a1 + 8) - v1;
          v32[0] = v1;
          v32[1] = v27;
          v34 = v32;
          v33 = 2;
          v35 = 1LL;
          v36 = 0LL;
          v37 = 0LL;
          if ( v3 )
          {
            v26 = 2LL;
            if ( *(_DWORD *)(a1 + 56) == 5 && v1 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
              v26 = 0LL;
          }
          v25 = MmAccessFault(v26, (__int64)(v38 << 25) >> 16);
          if ( v25 < 0 && *(_DWORD *)(a1 + 56) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 72) + 1784LL) )
            v25 = MiDeliverPicoExceptionForProbedPage(v1, v3);
          MiLockProbePacketWorkingSet(a1);
          if ( v25 < 0 )
          {
            ++dword_14034F1B4;
            return (unsigned int)v25;
          }
          goto LABEL_2;
        }
        if ( (_DWORD)v9 != 5 || v1 + v6 > i )
          goto LABEL_46;
        if ( !v19 )
          goto LABEL_101;
        if ( (*(_QWORD *)(v19 + 40) & 0x200000000000000LL) == 0
          || (unsigned int)MiCanPageMove(v19) != 1 && (unsigned int)MI_IS_PFN_FILE_ONLY(v19) != 1 )
        {
          goto LABEL_46;
        }
        if ( !*(_BYTE *)(a1 + 60) )
          goto LABEL_43;
        result = MiSplitDriverPage(v38, *(unsigned __int8 *)(a1 + 80));
        v6 = 0x80000000000LL;
        i = 0x7FFFFFFFFFLL;
        v5 = 0x12090482600LL;
      }
      while ( (int)result >= 0 );
      if ( (_DWORD)result != -1073741799 )
      {
        ++dword_14034F1E8;
        return result;
      }
LABEL_46:
      if ( !v19 )
        goto LABEL_101;
      v9 = 0x8000000000000000uLL;
      if ( ((*(_QWORD *)(v19 + 40) >> 54) & 7) == 1 || (*(_QWORD *)(v19 + 8) & 0x8000000000000000uLL) != 0 )
      {
        if ( v3 )
          goto LABEL_101;
        if ( (*(_QWORD *)(v19 + 40) & 0x200000000000000LL) == 0 )
          goto LABEL_101;
        v21 = *(_QWORD *)(a1 + 72);
        if ( !v21 )
          goto LABEL_101;
        if ( !*(_QWORD *)(v21 + 912) )
          goto LABEL_101;
        CloneAddress = MiLocateCloneAddress(v21, *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL);
        if ( !CloneAddress )
          goto LABEL_101;
        if ( MEMORY[0xFFFFF58010804258] > *(_QWORD *)(CloneAddress + 72) )
          break;
      }
LABEL_62:
      if ( *(_BYTE *)(a1 + 60) != 1 )
      {
LABEL_43:
        MiUnlockProbePacketWorkingSet(a1, v2, v9, v6);
        *(_BYTE *)(a1 + 60) = 1;
        MiLockProbePacketWorkingSet(a1);
        goto LABEL_2;
      }
      v24 = MiCopyOnWriteEx(v1, 0);
      v6 = 0x80000000000LL;
      v5 = 0x12090482600LL;
      if ( !v24 && *(_BYTE *)(a1 + 80) == 2 )
      {
        ++dword_14034F1E8;
        return 3221225495LL;
      }
    }
    result = MiSplitReducedCommitClonePage(a1, &v38);
    if ( (int)result >= 0 )
      continue;
    break;
  }
  ++dword_14034F1E4;
  return result;
}
