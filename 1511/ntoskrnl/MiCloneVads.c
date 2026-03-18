/*
 * XREFs of MiCloneVads @ 0x14001D7C8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14046100C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiReturnFullProcessCharges @ 0x14001EBE4 (MiReturnFullProcessCharges.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400612C0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiFreeForkMaps @ 0x1400EC940 (MiFreeForkMaps.c)
 *     MiInitializeForkMaps @ 0x1400F4304 (MiInitializeForkMaps.c)
 *     MiUpdateForkMaps @ 0x1400FE6FC (MiUpdateForkMaps.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x140460EE0 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x14062CD38 (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneVads(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  __int64 v7; // r15
  __int64 v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rbx
  int v11; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rsi
  KIRQL v14; // al
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  _QWORD **v17; // rdi
  _QWORD *v18; // rdx
  bool v19; // r8
  __int64 v20; // r12
  __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rbx
  __int64 v25; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // r12
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rdi
  volatile LONG *v30; // rbx
  unsigned __int64 updated; // rdi
  unsigned __int64 v32; // r14
  __int64 v33; // rdx
  KIRQL v34; // al
  unsigned __int64 v35; // r12
  int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // r12
  __int64 *v39; // rcx
  _QWORD *v40; // rax
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // r14
  _QWORD **v43; // rdi
  unsigned __int64 v44; // r15
  _QWORD *v45; // rax
  bool v46; // r8
  _QWORD *v47; // rdx
  _QWORD **v48; // rcx
  unsigned __int64 v49; // rax
  int v50; // edi
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 VadEvent; // rax
  __int64 v57; // r9
  size_t v58; // r8
  unsigned __int64 v59; // r14
  _QWORD *v60; // rbx
  char v61; // [rsp+70h] [rbp-90h]
  unsigned __int64 v62; // [rsp+78h] [rbp-88h]
  __int64 Address; // [rsp+80h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+88h] [rbp-78h]
  unsigned __int64 v67; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v68; // [rsp+98h] [rbp-68h]
  unsigned __int64 v69; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  _QWORD *v71; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  __int64 v73; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v74; // [rsp+C8h] [rbp-38h]
  __int64 v75; // [rsp+D0h] [rbp-30h]
  _QWORD *v76; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  _BYTE v79[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+118h] [rbp+18h]
  __int64 v81; // [rsp+130h] [rbp+30h]
  int v82; // [rsp+140h] [rbp+40h] BYREF
  __int16 v83; // [rsp+144h] [rbp+44h]
  __int64 v84; // [rsp+148h] [rbp+48h]
  __int64 v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]

  v73 = 0LL;
  v5 = 0LL;
  v74 = 0LL;
  v69 = 0LL;
  v7 = a1;
  v62 = 0LL;
  v67 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v75 = a4;
  v78 = a1;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v7 + 920);
    if ( !v8 )
      v8 = 1LL;
    v70 = MiBuildNewCloneDescriptor(v7, v8, MEMORY[0xFFFFF580108042B0]);
    v9 = (_QWORD *)v70;
    if ( !v70 )
      return 3221225626LL;
    v10 = 32 * v8 + 24;
    v11 = PsChargeProcessNonPagedPoolQuota(a2, v10);
    if ( v11 < 0 )
    {
      v50 = v11;
      goto LABEL_93;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x64436D4Du);
    v76 = PoolWithTag;
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      PsReturnProcessNonPagedPoolQuota(a2, v10);
      v50 = -1073741670;
LABEL_93:
      MiFreeCloneDescriptor(v7, v9);
      return (unsigned int)v50;
    }
    PoolWithTag[8] = v10;
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 1280));
    v61 = v14;
    if ( *(_QWORD *)(v7 + 920) <= v9[5] )
    {
      *v13 = a3;
      *(_QWORD *)(v7 + 896) = CurrentThread;
      v16 = (_QWORD *)v9[3];
      v71 = v16;
      if ( (unsigned int)MiInitializeForkMaps(a2, v79) )
      {
        v17 = (_QWORD **)(v7 + 912);
        v72 = (__int64)v16;
        v18 = *(_QWORD **)(v7 + 912);
        v19 = 0;
        v20 = (__int64)v16;
        if ( v18 )
        {
          while ( 1 )
          {
            if ( v9[3] <= v18[4] && v9[4] < v18[3] )
            {
              v52 = (_QWORD *)*v18;
              if ( !*v18 )
              {
                v19 = 0;
                break;
              }
            }
            else
            {
              v52 = (_QWORD *)v18[1];
              if ( !v52 )
              {
                v19 = 1;
                break;
              }
            }
            v18 = v52;
          }
        }
        RtlAvlInsertNodeEx((unsigned __int64 *)(v7 + 912), (unsigned __int64)v18, v19, (unsigned __int64)v9);
        v22 = (_QWORD *)a2[194];
        v23 = 0LL;
        v83 = 0;
        v24 = 0LL;
        v85 = 0LL;
        v86 = 0LL;
        v84 = 20LL;
        v82 = 1;
        while ( v22 )
        {
          v24 = v22;
          v22 = (_QWORD *)*v22;
        }
        if ( v24 )
        {
          v25 = v20;
          do
          {
            v26 = (_QWORD *)v24[1];
            v27 = v24;
            v66 = (__int64)v24;
            v28 = v24;
            if ( v26 )
            {
              do
              {
                v24 = v26;
                v68 = v26;
                v26 = (_QWORD *)*v26;
              }
              while ( v26 );
            }
            else
            {
              v24 = (_QWORD *)(v24[2] & 0xFFFFFFFFFFFFFFFCuLL);
              v68 = v24;
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
                v68 = v24;
              }
            }
            v29 = (*((unsigned int *)v27 + 6) | ((unsigned __int64)*((unsigned __int8 *)v27 + 32) << 32)) << 12;
            Address = MiLocateAddress(v29, v23);
            if ( (unsigned int)MiVadMapsLargeImage(v27) != 1 && (v27[6] & 7) != 5 )
            {
              v30 = (volatile LONG *)(v7 + 1280);
              updated = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v32 = 8
                  * ((*((unsigned int *)v27 + 7) | ((unsigned __int64)*((unsigned __int8 *)v27 + 33) << 32)) & 0xFFFFFFFFFLL)
                  - 0x98000000000LL;
              v77 = v32;
              do
              {
                MiFlushTbList(&v82, v23, v21);
                if ( (*v30 & 0x40000000) != 0 || KeShouldYieldProcessor() )
                {
                  LOBYTE(v33) = v61;
                  MiUnlockWorkingSetExclusive(v30, v33);
                  v34 = ExAcquireSpinLockExclusive(v30);
                  v61 = v34;
                }
                else
                {
                  v34 = v61;
                }
                updated = MiUpdateForkMaps((unsigned int)v79, updated, v32, (unsigned int)&v67, v7, v34);
                if ( (v27[6] & 7) != 7 )
                {
                  if ( updated > v32 )
                    break;
                  v35 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  if ( v35 > v32 )
                    v35 = v32;
                  v36 = v80 - updated;
                  do
                  {
                    if ( (unsigned int)MiBuildForkPte(
                                         v7,
                                         (_DWORD)a2,
                                         updated,
                                         v36 + (int)updated,
                                         v75,
                                         v25,
                                         (__int64)&v67,
                                         v81,
                                         (__int64)&v82,
                                         Address,
                                         v66,
                                         a5,
                                         v61,
                                         (__int64)&v73) )
                      v25 += 32LL;
                    updated += 8LL;
                  }
                  while ( updated <= v35 );
                  v27 = (_QWORD *)v66;
                  v72 = v25;
                  v32 = v77;
                  v30 = (volatile LONG *)(v7 + 1280);
                }
              }
              while ( updated <= v32 );
              v24 = v68;
              if ( (v27[6] & 7) == 4 )
              {
                MiLocateVadEvent(v27, 4LL);
                VadEvent = MiLocateVadEvent(Address, v55);
                memmove(*(void **)(v57 + 24), *(const void **)(VadEvent + 24), v58);
              }
            }
          }
          while ( v24 );
          v13 = v76;
          v17 = (_QWORD **)(v7 + 912);
          v9 = (_QWORD *)v70;
          v20 = v72;
        }
        MiFlushTbList(&v82, v23, v21);
        MiFreeForkMaps(v79);
        v38 = v20 - (_QWORD)v71;
        v39 = (__int64 *)v9[7];
        a2[115] += v67;
        v5 = v38 >> 5;
        v67 = a2[115];
        if ( v5 )
        {
          *v39 = v5;
          v9[6] = v5;
          v9[5] = v5;
        }
        else
        {
          RtlAvlRemoveNode(v17, v9);
        }
        v40 = *v17;
        v41 = 0LL;
        while ( v40 )
        {
          v41 = (unsigned __int64)v40;
          v40 = (_QWORD *)*v40;
        }
        if ( v41 )
        {
          v42 = 0LL;
          v43 = (_QWORD **)(a2 + 114);
          v44 = 0LL;
          while ( 1 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v41 + 56) + 8LL));
            v45 = (_QWORD *)*v13;
            v46 = 0;
            v42 += v13[8];
            v44 += *(_QWORD *)(v41 + 64);
            *(_OWORD *)v13 = *(_OWORD *)v41;
            v71 = v45;
            *((_OWORD *)v13 + 1) = *(_OWORD *)(v41 + 16);
            *((_OWORD *)v13 + 2) = *(_OWORD *)(v41 + 32);
            *((_OWORD *)v13 + 3) = *(_OWORD *)(v41 + 48);
            *((_OWORD *)v13 + 4) = *(_OWORD *)(v41 + 64);
            v47 = *v43;
            if ( !*v43 )
              goto LABEL_47;
            while ( v13[3] > v47[4] || v13[4] >= v47[3] )
            {
              v53 = (_QWORD *)v47[1];
              if ( !v53 )
              {
                v46 = 1;
                goto LABEL_47;
              }
LABEL_80:
              v47 = v53;
            }
            v53 = (_QWORD *)*v47;
            if ( *v47 )
              goto LABEL_80;
            v46 = 0;
LABEL_47:
            RtlAvlInsertNodeEx(a2 + 114, (unsigned __int64)v47, v46, (unsigned __int64)v13);
            v48 = *(_QWORD ***)(v41 + 8);
            v49 = v41;
            v13 = v71;
            if ( v48 )
            {
              v54 = *v48;
              v41 = *(_QWORD *)(v41 + 8);
              while ( v54 )
              {
                v41 = (unsigned __int64)v54;
                v54 = (_QWORD *)*v54;
              }
            }
            else
            {
              while ( 1 )
              {
                v41 = *(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v41 || *(_QWORD *)v41 == v49 )
                  break;
                v49 = v41;
              }
            }
            if ( !v41 )
            {
              v69 = v44;
              v7 = v78;
              v62 = v42;
              v9 = (_QWORD *)v70;
              break;
            }
          }
        }
        v50 = 0;
      }
      else
      {
        MiFreeForkMaps(v79);
        v50 = -1073741670;
      }
      LOBYTE(v37) = v61;
      *(_QWORD *)(v7 + 896) = 0LL;
      MiUnlockWorkingSetExclusive(v7 + 1280, v37);
      if ( v13 )
      {
        v59 = v62;
        do
        {
          v59 += v13[8];
          v60 = (_QWORD *)*v13;
          ExFreePoolWithTag(v13, 0);
          v13 = v60;
        }
        while ( v60 );
        v62 = v59;
        v9 = (_QWORD *)v70;
      }
      if ( v62 > v69 )
        PsReturnProcessNonPagedPoolQuota(a2, v62 - v69);
      if ( v73 )
        MiReturnFullProcessCommitment(a2);
      if ( v74 )
        MiReturnFullProcessCharges(a2, v74);
      if ( v5 && v50 >= 0 )
        return (unsigned int)v50;
      goto LABEL_93;
    }
    LOBYTE(v15) = v14;
    MiUnlockWorkingSetExclusive(v7 + 1280, v15);
    MiFreeCloneDescriptor(v7, v9);
    PsReturnProcessNonPagedPoolQuota(a2, v10);
    ExFreePoolWithTag(v13, 0);
  }
}
