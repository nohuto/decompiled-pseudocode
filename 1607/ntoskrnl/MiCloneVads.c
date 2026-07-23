/*
 * XREFs of MiCloneVads @ 0x1400BA3F0
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     MiReturnFullProcessCharges @ 0x140027160 (MiReturnFullProcessCharges.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140028040 (PsReturnProcessNonPagedPoolQuota.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140029750 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiVadMapsLargeImage @ 0x14002BF90 (MiVadMapsLargeImage.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002E580 (MiLockWorkingSetExclusive.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiUpdateForkMaps @ 0x140107B8C (MiUpdateForkMaps.c)
 *     MiFreeForkMaps @ 0x14010A2AC (MiFreeForkMaps.c)
 *     MiInitializeForkMaps @ 0x14010A2F4 (MiInitializeForkMaps.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x1404A8A18 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x14050A7A4 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x140663320 (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5)
{
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v6; // r13
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  int v12; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // r12
  KIRQL v15; // al
  ULONG_PTR v16; // rsi
  _QWORD *v17; // r15
  __int64 v18; // rbx
  int v19; // edi
  __int64 v20; // r14
  bool v21; // r8
  unsigned __int64 *v22; // rbx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rdi
  _QWORD *v26; // rax
  unsigned __int8 v27; // r15
  _QWORD **v28; // rcx
  __int64 v29; // rsi
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // r10
  __int64 v34; // r11
  unsigned __int64 updated; // rbx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // r12
  __int64 v38; // r13
  unsigned __int64 v39; // rsi
  _QWORD *v40; // r12
  __int64 v41; // r15
  int v42; // edx
  __int64 *VadEvent; // rax
  __int64 v44; // r9
  size_t v45; // r8
  __int64 v46; // r14
  __int64 *v47; // rcx
  _QWORD *v48; // rax
  unsigned __int64 k; // rbx
  unsigned __int64 v50; // r15
  unsigned __int64 v51; // r13
  bool v52; // r8
  _QWORD *v53; // rdi
  _QWORD *v54; // rdx
  _QWORD *v55; // rax
  _QWORD **v56; // rcx
  unsigned __int64 v57; // rax
  _QWORD *v58; // rax
  unsigned __int64 v59; // r15
  _QWORD *v60; // rbx
  int v62; // [rsp+60h] [rbp-A0h]
  KIRQL v63; // [rsp+70h] [rbp-90h]
  _QWORD *v64; // [rsp+78h] [rbp-88h]
  unsigned __int64 v66; // [rsp+88h] [rbp-78h]
  _QWORD *j; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h] BYREF
  _QWORD *v69; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v70; // [rsp+A8h] [rbp-58h]
  _QWORD *v71; // [rsp+B0h] [rbp-50h]
  unsigned __int64 Address; // [rsp+B8h] [rbp-48h]
  __int64 v73; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v74; // [rsp+C8h] [rbp-38h]
  __int64 v75; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v76; // [rsp+D8h] [rbp-28h]
  _QWORD *v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  _BYTE v79[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+118h] [rbp+18h]
  __int64 v81; // [rsp+130h] [rbp+30h]
  int i; // [rsp+140h] [rbp+40h] BYREF
  __int16 v83; // [rsp+144h] [rbp+44h]
  __int64 v84; // [rsp+148h] [rbp+48h]
  __int64 v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]

  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  v69 = a1;
  v75 = a4;
  v74 = 0LL;
  v8 = a2;
  v73 = 0LL;
  v9 = 0LL;
  v70 = 0LL;
  v66 = 0LL;
  v68 = 0LL;
  while ( 1 )
  {
    v10 = v6[115];
    if ( !v10 )
      v10 = 1LL;
    v64 = (_QWORD *)MiBuildNewCloneDescriptor(v6, v10, *(_QWORD *)(qword_140327FD0 + 276840632));
    if ( !v64 )
      return 3221225626LL;
    v11 = 32 * v10 + 24;
    v12 = PsChargeProcessNonPagedPoolQuota(v8, v11);
    if ( v12 < 0 )
    {
      MiFreeCloneDescriptor(v6, v64);
      return (unsigned int)v12;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x64436D4Du);
    v77 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      PsReturnProcessNonPagedPoolQuota(a2, v11);
      MiFreeCloneDescriptor(v6, v64);
      return 3221225626LL;
    }
    PoolWithTag[8] = v11;
    v15 = MiLockWorkingSetExclusive((__int64)(v6 + 160));
    v63 = v15;
    if ( v6[115] <= v64[5] )
      break;
    MiUnlockWorkingSetExclusive((__int64)(v6 + 160), v15);
    MiFreeCloneDescriptor(v6, v64);
    v8 = a2;
    PsReturnProcessNonPagedPoolQuota(a2, v11);
    ExFreePoolWithTag(v14, 0);
  }
  *v14 = a3;
  v16 = a2;
  v6[112] = CurrentThread;
  v17 = v64;
  v18 = v64[3];
  v78 = v18;
  if ( !(unsigned int)MiInitializeForkMaps(a2, v79) )
  {
    MiFreeForkMaps(v79);
    v19 = -1073741670;
    goto LABEL_76;
  }
  v20 = v18;
  v21 = 0;
  v22 = v6 + 114;
  v23 = (_QWORD *)v6[114];
  if ( !v23 )
    goto LABEL_19;
  while ( 2 )
  {
    if ( v64[3] <= v23[4] && v64[4] < v23[3] )
    {
      v24 = (_QWORD *)*v23;
      if ( !*v23 )
      {
        v21 = 0;
        goto LABEL_19;
      }
      goto LABEL_17;
    }
    v24 = (_QWORD *)v23[1];
    if ( v24 )
    {
LABEL_17:
      v23 = v24;
      continue;
    }
    break;
  }
  v21 = 1;
LABEL_19:
  RtlAvlInsertNodeEx(v6 + 114, (unsigned __int64)v23, v21, (unsigned __int64)v64);
  v84 = 20LL;
  v83 = 0;
  v25 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v26 = *(_QWORD **)(a2 + 1568);
  for ( i = 1; v26; v26 = (_QWORD *)*v26 )
    v25 = v26;
  if ( v25 )
  {
    v27 = v63;
    do
    {
      v28 = (_QWORD **)v25[1];
      v29 = (__int64)v25;
      v71 = v25;
      v30 = v25;
      if ( v28 )
      {
        v31 = *v28;
        v25 = v28;
        for ( j = v28; v31; v31 = (_QWORD *)*v31 )
        {
          v25 = v31;
          j = v31;
        }
      }
      else
      {
        v25 = (_QWORD *)(v25[2] & 0xFFFFFFFFFFFFFFFCuLL);
        j = v25;
        if ( v25 )
        {
          do
          {
            if ( (_QWORD *)*v25 == v30 )
              break;
            v30 = v25;
            v25 = (_QWORD *)(v25[2] & 0xFFFFFFFFFFFFFFFCuLL);
          }
          while ( v25 );
          j = v25;
        }
      }
      v32 = (*(unsigned int *)(v29 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 32) << 32)) << 12;
      Address = MiLocateAddress(v32);
      if ( !MiVadMapsLargeImage(v29) && (*(_BYTE *)(v29 + 48) & 7) != 5 )
      {
        updated = v33 + (v34 & (v32 >> 9));
        v36 = Address;
        v37 = v33
            + 8
            * ((*(unsigned int *)(v29 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 33) << 32)) & 0xFFFFFFFFFLL);
        v76 = v37;
        do
        {
          MiFlushTbList(&i);
          if ( MiWorkingSetIsContended((__int64)(v6 + 160)) || KeShouldYieldProcessor() )
            MiRelockWorkingSetExclusive(v6 + 160, v27);
          updated = MiUpdateForkMaps((unsigned int)v79, updated, v37, (unsigned int)&v68, (__int64)v6, v27);
          if ( (*(_BYTE *)(v29 + 48) & 7) != 7 )
          {
            if ( updated > v37 )
              break;
            v38 = v81;
            v39 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
            if ( v39 > v37 )
              v39 = v37;
            v40 = v71;
            v41 = v80 - updated;
            do
            {
              LOBYTE(v62) = v63;
              if ( (unsigned int)MiBuildForkPte(
                                   v69,
                                   a2,
                                   updated,
                                   v41 + updated,
                                   v75,
                                   v20,
                                   &v68,
                                   v38,
                                   &i,
                                   v36,
                                   v40,
                                   a5,
                                   v62,
                                   &v73) )
                v20 += 32LL;
              updated += 8LL;
            }
            while ( updated <= v39 );
            v37 = v76;
            v29 = (__int64)v71;
            v6 = v69;
            v27 = v63;
          }
        }
        while ( updated <= v37 );
        v25 = j;
        if ( (*(_DWORD *)(v29 + 48) & 7) == 4 )
        {
          MiLocateVadEvent(v29, 4);
          VadEvent = MiLocateVadEvent(Address, v42);
          memmove(*(void **)(v44 + 24), (const void *)VadEvent[3], v45);
        }
      }
    }
    while ( v25 );
    v14 = v77;
    v22 = v6 + 114;
    v16 = a2;
    v17 = v64;
  }
  MiFlushTbList(&i);
  MiFreeForkMaps(v79);
  v46 = v20 - v78;
  v47 = (__int64 *)v17[7];
  *(_QWORD *)(v16 + 920) += v68;
  v9 = v46 >> 5;
  v68 = *(_QWORD *)(v16 + 920);
  if ( v9 )
  {
    *v47 = v9;
    v17[6] = v9;
    v17[5] = v9;
  }
  else
  {
    RtlAvlRemoveNode(v22, (__int64)v17);
  }
  v48 = (_QWORD *)v6[114];
  for ( k = 0LL; v48; v48 = (_QWORD *)*v48 )
    k = (unsigned __int64)v48;
  if ( k )
  {
    v50 = 0LL;
    v51 = 0LL;
    while ( 1 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(k + 56) + 8LL));
      v50 += v14[8];
      v52 = 0;
      v51 += *(_QWORD *)(k + 64);
      v53 = (_QWORD *)*v14;
      *(_OWORD *)v14 = *(_OWORD *)k;
      *((_OWORD *)v14 + 1) = *(_OWORD *)(k + 16);
      *((_OWORD *)v14 + 2) = *(_OWORD *)(k + 32);
      *((_OWORD *)v14 + 3) = *(_OWORD *)(k + 48);
      *((_OWORD *)v14 + 4) = *(_OWORD *)(k + 64);
      v54 = *(_QWORD **)(v16 + 912);
      if ( !v54 )
        goto LABEL_66;
      while ( v14[3] <= v54[4] && v14[4] < v54[3] )
      {
        v55 = (_QWORD *)*v54;
        if ( !*v54 )
        {
          v52 = 0;
          goto LABEL_66;
        }
LABEL_64:
        v54 = v55;
      }
      v55 = (_QWORD *)v54[1];
      if ( v55 )
        goto LABEL_64;
      v52 = 1;
LABEL_66:
      RtlAvlInsertNodeEx((unsigned __int64 *)(v16 + 912), (unsigned __int64)v54, v52, (unsigned __int64)v14);
      v56 = *(_QWORD ***)(k + 8);
      v14 = v53;
      v57 = k;
      if ( v56 )
      {
        v58 = *v56;
        for ( k = *(_QWORD *)(k + 8); v58; v58 = (_QWORD *)*v58 )
          k = (unsigned __int64)v58;
      }
      else
      {
        for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)k == v57 )
            break;
          v57 = k;
        }
      }
      if ( !k )
      {
        v16 = a2;
        v70 = v51;
        v6 = v69;
        v66 = v50;
        v17 = v64;
        break;
      }
    }
  }
  v19 = 0;
LABEL_76:
  v6[112] = 0LL;
  MiUnlockWorkingSetExclusive((__int64)(v6 + 160), v63);
  if ( v14 )
  {
    v59 = v66;
    do
    {
      v59 += v14[8];
      v60 = (_QWORD *)*v14;
      ExFreePoolWithTag(v14, 0);
      v14 = v60;
    }
    while ( v60 );
    v66 = v59;
    v17 = v64;
  }
  if ( v66 > v70 )
    PsReturnProcessNonPagedPoolQuota(v16, v66 - v70);
  if ( v73 )
    MiReturnFullProcessCommitment(v16, v73);
  if ( v74 )
    MiReturnFullProcessCharges(v16, v74);
  if ( !v9 || v19 < 0 )
    MiFreeCloneDescriptor(v6, v17);
  return (unsigned int)v19;
}
