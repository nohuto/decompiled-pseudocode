/*
 * XREFs of MiProbeLeafFrame @ 0x1400A7660
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1400A70B0 (MmProbeAndLockSelectedPages.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MmStoreProbeAndLockPages @ 0x140113844 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiCanPageMove @ 0x1400712E0 (MiCanPageMove.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400E86F4 (MiUnlockProbePacketWorkingSet.c)
 *     MiLockProbePacketWorkingSet @ 0x1400E87A0 (MiLockProbePacketWorkingSet.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSplitDriverPage @ 0x1401CEF98 (MiSplitDriverPage.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x1401D2C0C (MiDeliverPicoExceptionForProbedPage.c)
 *     MiSplitReducedCommitClonePage @ 0x1401D2E94 (MiSplitReducedCommitClonePage.c)
 */

__int64 __fastcall MiProbeLeafFrame(__int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned int v2; // r13d
  __int64 v4; // rsi
  unsigned int v5; // edx
  _BYTE *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int16 v9; // bx
  int v10; // r12d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 result; // rax
  unsigned __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rcx
  _QWORD *CloneAddress; // rax
  ULONG_PTR v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+38h] [rbp-79h] BYREF
  __int64 v24; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-69h] BYREF
  __int16 v26; // [rsp+58h] [rbp-59h] BYREF
  _QWORD *v27; // [rsp+60h] [rbp-51h]
  __int64 v28; // [rsp+68h] [rbp-49h]
  __int64 v29; // [rsp+70h] [rbp-41h]
  __int64 v30; // [rsp+78h] [rbp-39h]
  unsigned __int64 v31; // [rsp+B8h] [rbp+7h] BYREF
  unsigned __int64 v32; // [rsp+C0h] [rbp+Fh]
  unsigned __int64 v33; // [rsp+C8h] [rbp+17h]
  __int64 v34; // [rsp+D0h] [rbp+1Fh]

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 40);
  v31 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v34 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_2:
  v4 = 0LL;
  while ( 1 )
  {
    v5 = 3;
    do
    {
      v6 = (_BYTE *)*(&v31 + v5);
      if ( (*v6 & 1) == 0 )
        goto LABEL_61;
      --v5;
    }
    while ( v5 );
    v7 = MI_READ_PTE_LOCK_FREE(v6);
    v24 = v7;
    if ( (v7 & 0x80u) != 0LL )
      break;
    v8 = *(_QWORD *)v31;
    v9 = v8;
    v23 = *(_QWORD *)v31;
    if ( (v8 & 1) == 0 )
      goto LABEL_61;
    v10 = *(_DWORD *)(a1 + 56);
    if ( (v8 & 4) == 0 && v10 == 1 )
    {
      ++dword_1402FED08;
      return 3221225477LL;
    }
    v11 = MI_GET_PAGE_FRAME_FROM_PTE(&v23);
    v12 = v11;
    if ( v11 <= qword_1402FE758
      && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
    {
      v4 = 48 * v11 - 0x58000000000LL;
    }
    v13 = (_QWORD *)MiEnclaveRegions;
    if ( MiEnclaveRegions )
    {
      if ( ((*(_QWORD *)(v4 + 40) >> 54) & 7) == 1 )
      {
        v14 = (v4 + 0x58000000000LL) / 48;
        if ( MiEnclaveRegions )
        {
          do
          {
            v15 = v13[3];
            if ( v14 < v15 )
            {
              v13 = (_QWORD *)*v13;
            }
            else
            {
              if ( v14 - v15 < v13[4] )
              {
                ++dword_1402FED34;
                return 3221225477LL;
              }
              v13 = (_QWORD *)v13[1];
            }
          }
          while ( v13 );
        }
      }
    }
    if ( !v2 )
    {
      if ( v10 == 5 && v1 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
      {
        if ( !v4 )
          goto LABEL_81;
        if ( (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) != 0
          && (MiCanPageMove(v4) || (unsigned int)MI_IS_PFN_FILE_ONLY(v4) == 1) )
        {
          if ( !*(_BYTE *)(a1 + 60) )
            goto LABEL_30;
          result = MiSplitDriverPage(v31, *(unsigned __int8 *)(a1 + 80));
          if ( (int)result >= 0 )
            goto LABEL_2;
          if ( (_DWORD)result != -1073741799 )
          {
            ++dword_1402FED30;
            return result;
          }
        }
      }
LABEL_49:
      if ( !v4 )
        goto LABEL_81;
      if ( ((*(_QWORD *)(v4 + 40) >> 54) & 7) != 1 && (*(_QWORD *)(v4 + 8) & 0x8000000000000000uLL) == 0 )
        goto LABEL_39;
      if ( v2 )
        goto LABEL_81;
      if ( (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) == 0 )
        goto LABEL_81;
      v19 = *(_QWORD *)(a1 + 72);
      if ( !v19 )
        goto LABEL_81;
      if ( !*(_QWORD *)(v19 + 912) )
        goto LABEL_81;
      CloneAddress = MiLocateCloneAddress(v19, *(_QWORD *)(v4 + 8) | 0x8000000000000000uLL);
      if ( !CloneAddress )
        goto LABEL_81;
      if ( MEMORY[0xFFFFF580108042B0] <= CloneAddress[9] )
        goto LABEL_39;
      result = MiSplitReducedCommitClonePage(a1, &v31);
      if ( (int)result < 0 )
      {
        ++dword_1402FED2C;
        return result;
      }
      goto LABEL_2;
    }
    if ( (v9 & 0x800) != 0 )
    {
      if ( (v9 & 0x42) != 0 || v10 != 1 || (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 772LL) & 0x8000) == 0 )
        goto LABEL_49;
      MiUnlockProbePacketWorkingSet(a1);
      v18 = MmAccessFault(2uLL, v1, 0, 0LL);
      MiLockProbePacketWorkingSet(a1);
      if ( v18 >= 0 )
        goto LABEL_2;
      ++dword_1402FED00;
      return (unsigned int)v18;
    }
    if ( v10 == 5 && v1 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
    {
      if ( v4 )
      {
        v17 = *(_QWORD *)(v4 + 40);
        if ( (v17 & 0x200000000000000LL) == 0 )
        {
          if ( (MiFlags & 0x80000) != 0 && ((v17 >> 54) & 7) == 3 )
          {
            MiClearPfnImageVerified(v4, 8LL);
            result = 0LL;
            *(_QWORD *)(a1 + 96) = v12;
            return result;
          }
          goto LABEL_81;
        }
      }
LABEL_39:
      if ( *(_BYTE *)(a1 + 60) != 1 )
      {
LABEL_30:
        MiUnlockProbePacketWorkingSet(a1);
        *(_BYTE *)(a1 + 60) = 1;
        MiLockProbePacketWorkingSet(a1);
        goto LABEL_2;
      }
      v4 = 0LL;
      if ( !(unsigned int)MiCopyOnWriteEx(v1, v31, -1LL, *(_BYTE *)(a1 + 80), 0)
        && (*(_BYTE *)(a1 + 80) == 2 || (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 1728LL) & 4) != 0) )
      {
        ++dword_1402FED30;
        return 3221225495LL;
      }
    }
    else
    {
      v4 = 0LL;
LABEL_61:
      MiUnlockProbePacketWorkingSet(a1);
      v21 = 0LL;
      v1 = (__int64)(v31 << 25) >> 16;
      v22 = *(_QWORD *)(a1 + 8) - v1;
      v25[0] = v1;
      v25[1] = v22;
      v27 = v25;
      v26 = 2;
      v28 = 1LL;
      v29 = 0LL;
      v30 = 0LL;
      if ( v2 )
      {
        v21 = 2LL;
        if ( *(_DWORD *)(a1 + 56) == 5 && v1 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
          v21 = 0LL;
      }
      v18 = MmAccessFault(v21, (__int64)(v31 << 25) >> 16, 0, (ULONG_PTR)&v26 + 1);
      if ( v18 < 0 && *(_DWORD *)(a1 + 56) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 72) + 1792LL) )
        v18 = MiDeliverPicoExceptionForProbedPage(v1, v2);
      MiLockProbePacketWorkingSet(a1);
      if ( v18 < 0 )
      {
        ++dword_1402FECFC;
        return (unsigned int)v18;
      }
    }
  }
  if ( v2 && (v7 & 0x800) == 0 )
  {
    ++dword_1402FED04;
    return 3221225477LL;
  }
  v12 = ((v1 >> 12) & 0x1FF) + (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v24) >> 12) & 0xFFFFFFFFFLL);
LABEL_81:
  *(_QWORD *)(a1 + 96) = v12;
  return 0LL;
}
