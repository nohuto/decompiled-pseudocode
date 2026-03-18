/*
 * XREFs of MiInsertAndUnlockStandbyPages @ 0x1400553B0
 * Callers:
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140102820 (MiDecrementAndInsertStandbyPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     MiInsertProtectedStandbyPage @ 0x140055700 (MiInsertProtectedStandbyPage.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall MiInsertAndUnlockStandbyPages(__int64 a1, _QWORD *a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v4; // r10
  __int64 v5; // r14
  unsigned __int8 v6; // bl
  signed __int64 v7; // r9
  _QWORD *v8; // r8
  __int64 v10; // r12
  int v11; // r13d
  unsigned int v12; // esi
  _QWORD *v13; // r15
  __int64 v14; // rdi
  __int16 v15; // r11
  __int64 v16; // r8
  char v17; // cl
  bool v18; // zf
  unsigned __int64 v19; // r8
  char v20; // al
  unsigned int v21; // ebx
  unsigned __int16 v22; // r8
  __int16 *v23; // rax
  __int64 v24; // rcx
  signed __int64 v25; // r9
  _QWORD *v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  signed __int64 v33; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int64 *v34; // [rsp+38h] [rbp-18h]
  __int64 v35; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+38h]

  v4 = 0LL;
  v5 = a3;
  v6 = a4;
  v33 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v8 = a2;
  v10 = 0LL;
  if ( a1 )
  {
    if ( !(_DWORD)v5 )
      goto LABEL_30;
    v31 = a2;
    v32 = v5;
    do
    {
      MiInsertProtectedStandbyPage(a1, *v31++, v8);
      --v32;
    }
    while ( v32 );
LABEL_41:
    LODWORD(v7) = 0;
    goto LABEL_29;
  }
  v11 = 0xFFFFFF;
  v12 = 0;
  if ( !(_DWORD)v5 )
    goto LABEL_30;
  v13 = a2;
  while ( 1 )
  {
    v14 = *v13;
    v15 = 1023;
    v16 = *(_QWORD *)(*v13 + 24LL);
    if ( (v16 & 0x3FFFFFFFFFFFFFFFLL) != 0 || (v17 = *(_BYTE *)(v14 + 34), (v17 & 7) == 6) || (v17 & 0x10) != 0 )
      KeBugCheckEx(
        0x4Eu,
        6uLL,
        (*v13 + 0x58000000000LL) / 48,
        *(_QWORD *)(*v13 + 24LL) & 0x3FFFFFFFFFFFFFFFLL,
        *(unsigned __int16 *)(v14 + 34));
    v18 = (v16 & 0x4000000000000000LL) == 0;
    v19 = *(_QWORD *)(v14 + 40);
    if ( v18 )
    {
      if ( (v19 & 0x10000000000000LL) != 0 )
        goto LABEL_50;
    }
    else if ( (v19 & 0x10000000000000LL) != 0 )
    {
      goto LABEL_50;
    }
    v20 = *(_BYTE *)(v14 + 35);
    if ( (v20 & 0x40) == 0 )
    {
      if ( (v20 & 8) != 0 )
        v21 = 5;
      else
        v21 = v20 & 7;
      if ( !v10 )
      {
        v30 = v19 >> 40;
        LOWORD(v30) = (HIDWORD(v19) >> 8) & 0x3FF;
        v10 = MiPartitionIdToPointer(v30);
      }
      if ( v21 == v11 )
      {
        v22 = v15 & (HIDWORD(v19) >> 8);
        v23 = v22 == v15 ? MiSystemPartition : *(__int16 **)(qword_14034F0E8 + 8LL * v22);
        if ( (__int16 *)v10 == v23 )
          goto LABEL_18;
      }
      if ( v11 != 0xFFFFFF )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&v33, retaddr);
          v15 = 1023;
        }
        else
        {
          _m_prefetchw(&v33);
          if ( !v4 )
          {
            if ( (signed __int64 *)_InterlockedCompareExchange64(v34, v7, (signed __int64)&v33) == &v33 )
              goto LABEL_22;
            v4 = KxWaitForLockChainValid(&v33);
            v7 = 0LL;
            v15 = 1023;
          }
          v33 = v7;
          _InterlockedXor64((volatile signed __int64 *)(v4 + 8), 1uLL);
        }
      }
LABEL_22:
      v11 = v21;
      v24 = *(_QWORD *)(v14 + 40) >> 40;
      LOWORD(v24) = v15 & v24;
      v10 = MiPartitionIdToPointer(v24);
      v33 = v25;
      v34 = (volatile signed __int64 *)(v10 + 40 * (v21 + 44LL));
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v33, v10 + 40 * (v21 + 44LL));
      }
      else
      {
        v26 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v10 + 40 * (v21 + 44LL)), (__int64)&v33);
        if ( v26 )
          KxWaitForLockOwnerShip((__int64)&v33, v26);
      }
LABEL_18:
      MiInsertPageInList(v14, 132LL);
      goto LABEL_19;
    }
LABEL_50:
    if ( v11 != 0xFFFFFF )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v33, retaddr);
LABEL_61:
        v11 = 0xFFFFFF;
        goto LABEL_62;
      }
      _m_prefetchw(&v33);
      if ( !v4 )
      {
        if ( (signed __int64 *)_InterlockedCompareExchange64(v34, 0LL, (signed __int64)&v33) == &v33 )
          goto LABEL_61;
        v4 = KxWaitForLockChainValid(&v33);
      }
      v33 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v4 + 8), 1uLL);
      goto LABEL_61;
    }
LABEL_62:
    MiInsertPageInList(v14, 4LL);
LABEL_19:
    ++v12;
    ++v13;
    if ( v12 >= (unsigned int)v5 )
      break;
    v4 = v33;
    v7 = 0LL;
  }
  if ( v11 == 0xFFFFFF )
    goto LABEL_41;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v33, retaddr);
    goto LABEL_41;
  }
  _m_prefetchw(&v33);
  v27 = v33;
  if ( !v33 )
  {
    LODWORD(v7) = 0;
    if ( (signed __int64 *)_InterlockedCompareExchange64(v34, 0LL, (signed __int64)&v33) == &v33 )
      goto LABEL_29;
    v27 = KxWaitForLockChainValid(&v33);
  }
  LODWORD(v7) = 0;
  v33 = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(v27 + 8), 1uLL);
LABEL_29:
  v8 = a2;
  v6 = a4;
LABEL_30:
  if ( v6 != 17 )
    LODWORD(v5) = v5 - 1;
  if ( (_DWORD)v5 )
  {
    v28 = v8;
    v29 = (unsigned int)v5;
    LODWORD(v7) = v5;
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(*v28++ + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      --v29;
    }
    while ( v29 );
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8[(unsigned int)v7] + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
  }
}
