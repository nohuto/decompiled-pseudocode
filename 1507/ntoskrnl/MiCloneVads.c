/*
 * XREFs of MiCloneVads @ 0x140001EE4
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiCloneCompare @ 0x140001A80 (MiCloneCompare.c)
 *     MiInitializeForkMaps @ 0x140001E10 (MiInitializeForkMaps.c)
 *     MiFreeForkMaps @ 0x140001E70 (MiFreeForkMaps.c)
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x14000336C (MiUpdateForkMaps.c)
 *     MiReturnFullProcessCharges @ 0x1400095C8 (MiReturnFullProcessCharges.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14008B6A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     MiVadMapsLargeImage @ 0x14008D1A0 (MiVadMapsLargeImage.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     MiLocateVadEvent @ 0x140122918 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiBuildNewCloneDescriptor @ 0x1404069E0 (MiBuildNewCloneDescriptor.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiFreeCloneDescriptor @ 0x1406AA7EC (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rbx
  _QWORD *v8; // r15
  __int64 v9; // rbx
  int v10; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  volatile signed __int32 *v14; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v16; // r14d
  signed __int32 v17; // eax
  __int64 v18; // rbx
  __int64 v19; // r8
  _QWORD **v20; // rdi
  __int64 v21; // r14
  _QWORD *v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  volatile signed __int32 *v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // r14
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rdi
  __int64 v30; // rbx
  unsigned __int64 updated; // rdi
  unsigned __int64 v32; // rsi
  __int64 v33; // rdx
  char v34; // al
  unsigned __int64 v35; // r14
  __int64 v36; // rsi
  int v37; // r15d
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r14
  __int64 *v41; // rcx
  __int64 v42; // r14
  _QWORD *v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // r12
  _QWORD **v46; // r14
  unsigned __int64 v47; // r13
  _QWORD *v48; // r15
  _QWORD *v49; // rdi
  _QWORD **v50; // rcx
  unsigned __int64 v51; // rax
  int v52; // edi
  unsigned __int64 v53; // r14
  __int64 v55; // rdx
  __int64 VadEvent; // rax
  __int64 v57; // r9
  size_t v58; // r8
  unsigned __int8 v59; // si
  unsigned int v60; // r14d
  signed __int32 v61; // eax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rbx
  char v66; // [rsp+70h] [rbp-90h]
  __int64 v67; // [rsp+78h] [rbp-88h]
  __int64 v68; // [rsp+78h] [rbp-88h]
  __int64 Address; // [rsp+80h] [rbp-80h]
  unsigned __int64 v71; // [rsp+88h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  unsigned __int64 v73; // [rsp+90h] [rbp-70h]
  __int64 v74; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v75; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v76; // [rsp+A8h] [rbp-58h]
  _QWORD *v77; // [rsp+B0h] [rbp-50h]
  __int64 v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-38h]
  __int64 v81; // [rsp+D0h] [rbp-30h]
  _QWORD *v82; // [rsp+D8h] [rbp-28h]
  _QWORD *v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+E8h] [rbp-18h]
  __int64 v85; // [rsp+F0h] [rbp-10h]
  _QWORD v86[5]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v87; // [rsp+128h] [rbp+28h]
  __int64 v88; // [rsp+140h] [rbp+40h]
  int v89; // [rsp+150h] [rbp+50h] BYREF
  __int16 v90; // [rsp+154h] [rbp+54h]
  __int64 v91; // [rsp+158h] [rbp+58h]
  __int64 v92; // [rsp+160h] [rbp+60h]
  __int64 v93; // [rsp+168h] [rbp+68h]

  v79 = 0LL;
  v5 = a2;
  v80 = 0LL;
  v6 = a1;
  v76 = 0LL;
  v71 = 0LL;
  v74 = 0LL;
  v67 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v81 = a4;
  v84 = a2;
  v82 = a1;
  while ( 1 )
  {
    v7 = v6[115];
    if ( !v7 )
      v7 = 1LL;
    v78 = MiBuildNewCloneDescriptor(v6, v7, MEMORY[0xFFFFF58010804258]);
    v8 = (_QWORD *)v78;
    if ( !v78 )
      return 3221225626LL;
    v9 = 32 * v7 + 24;
    v10 = PsChargeProcessNonPagedPoolQuota(v5, v9);
    if ( v10 < 0 )
    {
      v52 = v10;
      goto LABEL_115;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x64436D4Du);
    v83 = PoolWithTag;
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      PsReturnProcessNonPagedPoolQuota(v5, v9);
      v52 = -1073741670;
LABEL_115:
      MiFreeCloneDescriptor(v6, v8);
      return (unsigned int)v52;
    }
    PoolWithTag[8] = v9;
    v14 = (volatile signed __int32 *)(v6 + 159);
    CurrentIrql = KeGetCurrentIrql();
    v66 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6 + 159);
    }
    else
    {
      v16 = 0;
      if ( _interlockedbittestandset(v14, 0x1Fu) )
        v16 = ExpWaitForSpinLockExclusiveAndAcquire(v6 + 159);
      while ( 1 )
      {
        v17 = *v14;
        if ( (*v14 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v17 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v14, v17 | 0x40000000, v17);
        if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v16);
      }
      CurrentIrql = v66;
    }
    if ( v6[115] <= v8[5] )
    {
      *v13 = a3;
      v6[112] = CurrentThread;
      v18 = v8[3];
      v85 = v18;
      if ( MiInitializeForkMaps(v5, v86) )
      {
        v20 = (_QWORD **)(v6 + 114);
        v68 = v18;
        v21 = v18;
        LOBYTE(v19) = 0;
        v22 = (_QWORD *)v6[114];
        if ( v22 )
        {
          while ( 1 )
          {
            if ( (int)MiCloneCompare((__int64)v8, (__int64)v22) < 0 )
            {
              v62 = (_QWORD *)*v22;
              if ( !*v22 )
              {
                LOBYTE(v19) = 0;
                break;
              }
            }
            else
            {
              v62 = (_QWORD *)v22[1];
              if ( !v62 )
              {
                LOBYTE(v19) = 1;
                break;
              }
            }
            v22 = v62;
          }
        }
        RtlAvlInsertNodeEx(v6 + 114, v22, v19, v8);
        v23 = *(_QWORD **)(v5 + 1544);
        v90 = 0;
        v24 = 0LL;
        v92 = 0LL;
        v93 = 0LL;
        v91 = 20LL;
        v89 = 1;
        while ( v23 )
        {
          v24 = v23;
          v23 = (_QWORD *)*v23;
        }
        if ( v24 )
        {
          v25 = (volatile signed __int32 *)(v6 + 159);
          do
          {
            v26 = (_QWORD *)v24[1];
            v27 = (__int64)v24;
            v77 = v24;
            v28 = v24;
            if ( v26 )
            {
              do
              {
                v24 = v26;
                v75 = v26;
                v26 = (_QWORD *)*v26;
              }
              while ( v26 );
            }
            else
            {
              v24 = (_QWORD *)(v24[2] & 0xFFFFFFFFFFFFFFFCuLL);
              v75 = v24;
              if ( v24 )
              {
                do
                {
                  if ( (_QWORD *)*v24 == v28 )
                    break;
                  v28 = v24;
                  v24 = (_QWORD *)(v24[2] & 0xFFFFFFFFFFFFFFFCuLL);
                }
                while ( v24 );
                v75 = v24;
              }
            }
            v29 = (*(unsigned int *)(v27 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 32) << 32)) << 12;
            Address = MiLocateAddress(v29);
            if ( (unsigned int)MiVadMapsLargeImage(v27) != 1 && (*(_BYTE *)(v27 + 48) & 7) != 5 )
            {
              v30 = v68;
              updated = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v32 = 8
                  * ((*(unsigned int *)(v27 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 33) << 32)) & 0xFFFFFFFFFLL)
                  - 0x98000000000LL;
              v73 = v32;
              do
              {
                MiFlushTbList(&v89);
                if ( (*v25 & 0x40000000) != 0 || KeShouldYieldProcessor() )
                {
                  LOBYTE(v33) = v66;
                  MiUnlockWorkingSetExclusive(v25, v33);
                  v59 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                  {
                    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v25);
                  }
                  else
                  {
                    v60 = 0;
                    if ( _interlockedbittestandset(v25, 0x1Fu) )
                      v60 = ExpWaitForSpinLockExclusiveAndAcquire(v25);
                    while ( 1 )
                    {
                      v61 = *v25;
                      if ( (*v25 & 0xBFFFFFFF) == 0x80000000 )
                        break;
                      if ( (v61 & 0x40000000) == 0 )
                        _InterlockedCompareExchange(v25, v61 | 0x40000000, v61);
                      if ( (++v60 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                        _mm_pause();
                      else
                        HvlNotifyLongSpinWait(v60);
                    }
                    v27 = (__int64)v77;
                  }
                  v34 = v59;
                  v32 = v73;
                  v66 = v34;
                }
                else
                {
                  v34 = v66;
                }
                updated = MiUpdateForkMaps((unsigned int)v86, updated, v32, (unsigned int)&v74, (__int64)v6, v34);
                if ( (*(_BYTE *)(v27 + 48) & 7) != 7 )
                {
                  if ( updated > v32 )
                    break;
                  v35 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  if ( v35 > v32 )
                    v35 = v32;
                  v36 = v88;
                  v37 = v87 - updated;
                  do
                  {
                    if ( (unsigned int)MiBuildForkPte(
                                         (_DWORD)v6,
                                         v5,
                                         updated,
                                         v37 + (int)updated,
                                         v81,
                                         v30,
                                         (__int64)&v74,
                                         v36,
                                         (__int64)&v89,
                                         Address,
                                         (__int64)v77,
                                         a5,
                                         v66,
                                         (__int64)&v79) )
                      v30 += 32LL;
                    updated += 8LL;
                  }
                  while ( updated <= v35 );
                  v32 = v73;
                  v25 = (volatile signed __int32 *)(v6 + 159);
                  v27 = (__int64)v77;
                  v68 = v30;
                }
              }
              while ( updated <= v32 );
              v24 = v75;
              if ( (*(_DWORD *)(v27 + 48) & 7) == 4 )
              {
                MiLocateVadEvent(v27, 4LL);
                VadEvent = MiLocateVadEvent(Address, v55);
                memmove(*(void **)(v57 + 24), *(const void **)(VadEvent + 24), v58);
              }
            }
          }
          while ( v24 );
          v13 = v83;
          v20 = (_QWORD **)(v6 + 114);
          v8 = (_QWORD *)v78;
          v21 = v68;
        }
        MiFlushTbList(&v89);
        MiFreeForkMaps((__int64)v86);
        v40 = v21 - v85;
        v41 = (__int64 *)v8[7];
        *(_QWORD *)(v5 + 920) += v74;
        v42 = v40 >> 5;
        v74 = *(_QWORD *)(v5 + 920);
        v67 = v42;
        if ( v42 )
        {
          *v41 = v42;
          v8[6] = v42;
          v8[5] = v42;
        }
        else
        {
          RtlAvlRemoveNode(v20, v8);
        }
        v43 = *v20;
        v44 = 0LL;
        while ( v43 )
        {
          v44 = (unsigned __int64)v43;
          v43 = (_QWORD *)*v43;
        }
        if ( v44 )
        {
          v45 = 0LL;
          v46 = (_QWORD **)(v5 + 912);
          v47 = 0LL;
          while ( 1 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v44 + 56) + 8LL));
            v45 += v13[8];
            LOBYTE(v39) = 0;
            v47 += *(_QWORD *)(v44 + 64);
            v48 = (_QWORD *)*v13;
            *(_OWORD *)v13 = *(_OWORD *)v44;
            *((_OWORD *)v13 + 1) = *(_OWORD *)(v44 + 16);
            *((_OWORD *)v13 + 2) = *(_OWORD *)(v44 + 32);
            *((_OWORD *)v13 + 3) = *(_OWORD *)(v44 + 48);
            *((_OWORD *)v13 + 4) = *(_OWORD *)(v44 + 64);
            v49 = *v46;
            if ( !*v46 )
              goto LABEL_52;
            while ( (int)MiCloneCompare((__int64)v13, (__int64)v49) >= 0 )
            {
              v63 = (_QWORD *)v49[1];
              if ( !v63 )
              {
                LOBYTE(v39) = 1;
                goto LABEL_52;
              }
LABEL_104:
              v49 = v63;
            }
            v63 = (_QWORD *)*v49;
            if ( *v49 )
              goto LABEL_104;
            LOBYTE(v39) = 0;
LABEL_52:
            RtlAvlInsertNodeEx(v46, v49, v39, v13);
            v50 = *(_QWORD ***)(v44 + 8);
            v13 = v48;
            v51 = v44;
            if ( v50 )
            {
              v64 = *v50;
              v44 = *(_QWORD *)(v44 + 8);
              while ( v64 )
              {
                v44 = (unsigned __int64)v64;
                v64 = (_QWORD *)*v64;
              }
            }
            else
            {
              while ( 1 )
              {
                v44 = *(_QWORD *)(v44 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v44 || *(_QWORD *)v44 == v51 )
                  break;
                v51 = v44;
              }
            }
            if ( !v44 )
            {
              v8 = (_QWORD *)v78;
              v76 = v47;
              v5 = v84;
              v71 = v45;
              v6 = v82;
              break;
            }
          }
        }
        v52 = 0;
      }
      else
      {
        MiFreeForkMaps((__int64)v86);
        v52 = -1073741670;
      }
      LOBYTE(v38) = v66;
      v6[112] = 0LL;
      MiUnlockWorkingSetExclusive(v6 + 159, v38);
      v53 = v71;
      if ( v13 )
      {
        do
        {
          v53 += v13[8];
          v65 = (_QWORD *)*v13;
          ExFreePoolWithTag(v13, 0);
          v13 = v65;
        }
        while ( v65 );
      }
      if ( v53 > v76 )
        PsReturnProcessNonPagedPoolQuota(v5, v53 - v76);
      if ( v79 )
        MiReturnFullProcessCommitment(v5);
      if ( v80 )
        MiReturnFullProcessCharges(v5);
      if ( v67 && v52 >= 0 )
        return (unsigned int)v52;
      goto LABEL_115;
    }
    LOBYTE(v12) = CurrentIrql;
    MiUnlockWorkingSetExclusive(v6 + 159, v12);
    MiFreeCloneDescriptor(v6, v8);
    PsReturnProcessNonPagedPoolQuota(v5, v9);
    ExFreePoolWithTag(v13, 0);
  }
}
