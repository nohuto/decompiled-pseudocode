/*
 * XREFs of MiProbeLeafFrame @ 0x14002F940
 * Callers:
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140099DD4 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x1401228E0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140099F9C (MiUnlockProbePacketWorkingSet.c)
 *     MiLockProbePacketWorkingSet @ 0x14009A2A8 (MiLockProbePacketWorkingSet.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiCanPageMove @ 0x1401051DC (MiCanPageMove.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiSplitDriverPage @ 0x1401E184C (MiSplitDriverPage.c)
 *     MiDeliverPicoExceptionForProbedPage @ 0x1401E2AFC (MiDeliverPicoExceptionForProbedPage.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2D84 (MiSplitReducedCommitClonePage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiProbeLeafFrame(__int64 a1)
{
  ULONG_PTR v1; // rbp
  unsigned int v2; // r12d
  unsigned __int64 v4; // r15
  unsigned int v5; // r9d
  __int16 v6; // ax
  unsigned __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  _QWORD *v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 result; // rax
  __int64 v20; // rcx
  __int64 CloneAddress; // rax
  unsigned __int64 v22; // rax
  int v23; // ebx
  ULONG_PTR v24; // rcx
  ULONG_PTR v25; // rax
  bool v26; // zf
  unsigned __int64 v27; // rbx
  unsigned __int64 i; // r10
  __int64 v29; // r11
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r10
  _QWORD *v33; // rcx
  __int64 v34; // r9
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v39[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v40; // [rsp+50h] [rbp-B8h]
  _QWORD *v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  unsigned __int64 v45; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v46; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v47; // [rsp+C0h] [rbp-48h]
  __int64 v48; // [rsp+C8h] [rbp-40h]

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 40);
  v4 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = v4;
  v46 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v47 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = 3;
          do
          {
            v6 = MI_READ_PTE_LOCK_FREE(*(&v45 + v5));
            if ( (v6 & 1) == 0 )
              goto LABEL_64;
            if ( (v6 & 0x80u) != 0 )
            {
              if ( v2 && (v6 & 0x800) == 0 )
              {
                ++dword_140327114;
                return 3221225477LL;
              }
              *(_QWORD *)(a1 + 96) = MiVaToPfn(v1);
              return 0LL;
            }
            v5 = v8 - 1;
          }
          while ( v5 );
          if ( *(_BYTE *)(a1 + 60) )
          {
            v9 = *(_QWORD *)v4;
            v4 = v45;
          }
          else
          {
            v9 = MI_READ_PTE_LOCK_FREE(v4);
          }
          v37 = v9;
          if ( (v9 & 1) != 0 )
            break;
LABEL_64:
          MiUnlockProbePacketWorkingSet(a1, v7);
          v40 = 2;
          v1 = (__int64)(v4 << 25) >> 16;
          v24 = 0LL;
          v25 = *(_QWORD *)(a1 + 8) - v1;
          v39[0] = v1;
          v39[1] = v25;
          v41 = v39;
          v42 = 1LL;
          v43 = 0LL;
          v44 = 0LL;
          if ( v2 )
          {
            v24 = 2LL;
            if ( *(_DWORD *)(a1 + 56) == 5 && v1 >= qword_140328030 && v1 < qword_140328030 + 0x8000000000LL )
              v24 = 0LL;
          }
          v23 = MmAccessFault(v24, (__int64)(v4 << 25) >> 16);
          if ( v23 < 0 && *(_DWORD *)(a1 + 56) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 72) + 1808LL) )
            v23 = MiDeliverPicoExceptionForProbedPage((__int64)(v4 << 25) >> 16, v2);
          MiLockProbePacketWorkingSet(a1);
          if ( v23 < 0 )
          {
            ++dword_14032710C;
            return (unsigned int)v23;
          }
        }
        if ( (v9 & 4) == 0 && *(_DWORD *)(a1 + 56) == 1 )
        {
          ++dword_140327118;
          return 3221225477LL;
        }
        v13 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v37) >> 12) & 0xFFFFFFFFFLL;
        if ( v13 > qword_140326AD0
          || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v13 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
        {
          v14 = 0LL;
        }
        else
        {
          v14 = 48 * v13 - 0x58000000000LL;
        }
        v15 = (_QWORD *)qword_140326AD8;
        if ( qword_140326AD8 )
        {
          if ( ((*(_QWORD *)(v14 + 40) >> 54) & 7) == 1 )
          {
            v7 = (v14 + 0x58000000000LL) / 48;
            if ( qword_140326AD8 )
            {
              do
              {
                v16 = v15[3];
                if ( v7 < v16 )
                {
                  v15 = (_QWORD *)*v15;
                }
                else
                {
                  if ( v7 - v16 < v15[4] )
                  {
                    ++dword_140327144;
                    return 3221225477LL;
                  }
                  v15 = (_QWORD *)v15[1];
                }
              }
              while ( v15 );
            }
          }
        }
        if ( !v2 )
          break;
        if ( (v9 & 0x800) == 0 )
        {
          if ( (_DWORD)v10 == 5 && v1 >= qword_140328030 && v1 < v11 + qword_140328030 )
          {
            if ( !v14 )
              goto LABEL_54;
            v22 = *(_QWORD *)(v14 + 40);
            if ( (v22 & v12) != 0 )
              goto LABEL_54;
            if ( (MiFlags & 0x20000) != 0 && ((v22 >> 54) & 7) == 3 )
              MiClearPfnImageVerified(v14, 8u);
LABEL_82:
            v26 = *(_DWORD *)(a1 + 56) == 1;
            *(_QWORD *)(a1 + 96) = v13;
            if ( v26 && !*(_BYTE *)(a1 + 60) && v14 )
            {
              *(_QWORD *)(a1 + 112) = 0LL;
              v27 = v9 & 0x800F000000000FFFuLL;
              for ( i = v4 + 8; (i & 0xFFF) != 0; i = v32 + 8 )
              {
                if ( i > *(_QWORD *)(a1 + 24) )
                  break;
                v38 = MI_READ_PTE_LOCK_FREE(i);
                if ( (v29 & v38) != v27 )
                  break;
                v30 = MI_GET_PAGE_FRAME_FROM_PTE(&v38);
                if ( !(unsigned int)MiIsPfnInline(v30) )
                  break;
                v33 = (_QWORD *)qword_140326AD8;
                v34 = 48 * v31 - 0x58000000000LL;
                if ( qword_140326AD8 )
                {
                  if ( ((*(_QWORD *)(v34 + 40) >> 54) & 7) == 1 )
                  {
                    v35 = (v34 + 0x58000000000LL) / 48;
                    if ( qword_140326AD8 )
                    {
                      do
                      {
                        v36 = v33[3];
                        if ( v35 < v36 )
                        {
                          v33 = (_QWORD *)*v33;
                        }
                        else
                        {
                          if ( v35 - v36 < v33[4] )
                            return 0LL;
                          v33 = (_QWORD *)v33[1];
                        }
                      }
                      while ( v33 );
                    }
                  }
                }
                if ( !v2
                  && (((*(_QWORD *)(v34 + 40) >> 54) & 7) != 1 && (*(_QWORD *)(v34 + 8) & 0x8000000000000000uLL) == 0
                   || (*(_QWORD *)(v34 + 40) & 0x200000000000000LL) != 0 && *(_BYTE *)(a1 + 61)) )
                {
                  break;
                }
                ++*(_QWORD *)(a1 + 112);
              }
            }
            return 0LL;
          }
          goto LABEL_64;
        }
        if ( (v9 & 0x42) != 0 || (_DWORD)v10 != 1 || (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 772LL) & 0x8000) == 0 )
          goto LABEL_37;
        MiUnlockProbePacketWorkingSet(a1, v7);
        v23 = MmAccessFault(2uLL, v1);
        MiLockProbePacketWorkingSet(a1);
        if ( v23 < 0 )
        {
          ++dword_140327110;
          return (unsigned int)v23;
        }
      }
      if ( (_DWORD)v10 == 5 && v1 >= qword_140328030 && v1 < v11 + qword_140328030 )
      {
        if ( !v14 )
          goto LABEL_82;
        if ( (v12 & *(_QWORD *)(v14 + 40)) != 0
          && ((unsigned int)MiCanPageMove(v14, v7, v15, v10) == 1
           || (unsigned int)MiIsPfnFileOnly(v14, v7, v17, v18) == 1) )
        {
          break;
        }
      }
LABEL_37:
      if ( !v14 )
        goto LABEL_82;
      if ( ((*(_QWORD *)(v14 + 40) >> 54) & 7) != 1 && (*(_QWORD *)(v14 + 8) & 0x8000000000000000uLL) == 0 )
        goto LABEL_54;
      if ( v2 )
        goto LABEL_82;
      if ( (*(_QWORD *)(v14 + 40) & v12) == 0 )
        goto LABEL_82;
      v20 = *(_QWORD *)(a1 + 72);
      if ( !v20 )
        goto LABEL_82;
      if ( !*(_BYTE *)(a1 + 61) )
        goto LABEL_82;
      CloneAddress = MiLocateCloneAddress(v20, *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL);
      if ( !CloneAddress )
        goto LABEL_82;
      if ( *(_QWORD *)(qword_140327FD0 + 276840632) > *(_QWORD *)(CloneAddress + 72) )
      {
        result = MiSplitReducedCommitClonePage(a1, &v45);
        if ( (int)result < 0 )
        {
          ++dword_14032713C;
          return result;
        }
        v4 = v45;
      }
      else
      {
LABEL_54:
        if ( *(_BYTE *)(a1 + 62) == 1 )
        {
          if ( !(unsigned int)MiCopyOnWriteEx(v1, 0)
            && (*(_BYTE *)(a1 + 80) == 2 || (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 1732LL) & 0xC) != 0) )
          {
            ++dword_140327140;
            return 3221225495LL;
          }
        }
        else
        {
LABEL_34:
          MiUnlockProbePacketWorkingSet(a1, v7);
          *(_BYTE *)(a1 + 62) = 1;
          MiLockProbePacketWorkingSet(a1);
        }
      }
    }
    if ( !*(_BYTE *)(a1 + 62) )
      goto LABEL_34;
    result = MiSplitDriverPage(v4, *(unsigned __int8 *)(a1 + 80));
    v12 = 0x200000000000000LL;
  }
  while ( (int)result >= 0 );
  if ( (_DWORD)result == -1073741799 )
    goto LABEL_37;
  ++dword_140327140;
  return result;
}
