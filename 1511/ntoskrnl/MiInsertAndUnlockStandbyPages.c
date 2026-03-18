/*
 * XREFs of MiInsertAndUnlockStandbyPages @ 0x14000FE50
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14000FBD0 (MiDecrementAndInsertStandbyPages.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x140010160 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiInsertAndUnlockStandbyPages(__int64 a1, _QWORD *a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 result; // rax
  __int64 v5; // rbp
  unsigned int v6; // r13d
  unsigned __int8 v7; // bl
  __int64 v8; // r8
  int *v10; // r15
  int v11; // r12d
  unsigned int v12; // esi
  _QWORD *v13; // r14
  __int64 v14; // r9
  __int64 v15; // rdi
  volatile __int64 *v16; // r8
  ULONG_PTR v17; // rdx
  char v18; // cl
  __int64 v19; // rcx
  char v20; // al
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned __int16 v23; // cx
  int *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // ax
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  volatile __int64 *v33; // [rsp+38h] [rbp-50h]
  __int64 v34; // [rsp+40h] [rbp-48h]

  result = 0LL;
  v5 = a3;
  v6 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v7 = a4;
  v34 = 0LL;
  v8 = (__int64)a2;
  v10 = 0LL;
  if ( !a1 )
  {
    v11 = 0xFFFFFF;
    v12 = 0;
    if ( !(_DWORD)v5 )
      goto LABEL_22;
    v13 = a2;
    v14 = 1023LL;
    while ( 1 )
    {
      v15 = *v13;
      v16 = *(volatile __int64 **)(*v13 + 24LL);
      v17 = (*v13 + 0x58000000000LL) / 48;
      if ( ((unsigned __int64)v16 & 0x3FFFFFFFFFFFFFFFLL) != 0
        || (v18 = *(_BYTE *)(v15 + 34), (v18 & 7) == 6)
        || (v18 & 0x10) != 0 )
      {
        KeBugCheckEx(0x4Eu, 6uLL, v17, *(_QWORD *)(*v13 + 24LL) & 0x3FFFFFFFFFFFFFFFLL, *(unsigned __int16 *)(v15 + 34));
      }
      v19 = *(_QWORD *)(v15 + 40);
      if ( ((unsigned __int64)v16 & 0x4000000000000000LL) != 0 )
      {
        if ( (v19 & 0x10000000000000LL) != 0 )
        {
LABEL_45:
          if ( v11 != 0xFFFFFF )
          {
            KxReleaseQueuedSpinLock(&v32, v17, v16, 1023LL);
            v11 = 0xFFFFFF;
          }
          MiInsertPageInList(v15, 4LL, v16, v14);
          goto LABEL_18;
        }
      }
      else if ( (v19 & 0x10000000000000LL) != 0 )
      {
        goto LABEL_45;
      }
      v20 = *(_BYTE *)(v15 + 35);
      if ( (v20 & 0x40) != 0 )
        goto LABEL_45;
      if ( (v20 & 8) != 0 )
        v21 = 5;
      else
        v21 = v20 & 7;
      v22 = qword_1402FEC28;
      if ( !v10 )
      {
        v29 = (HIDWORD(v19) >> 8) & 0x3FF;
        if ( v29 == 1023 )
          v10 = &MiSystemPartition;
        else
          v10 = *(int **)(qword_1402FEC28 + 8LL * v29);
      }
      if ( v21 != v11
        || ((v23 = (HIDWORD(v19) >> 8) & 0x3FF, v23 == 1023)
          ? (v24 = &MiSystemPartition)
          : (v24 = *(int **)(qword_1402FEC28 + 8LL * v23)),
            v10 != v24) )
      {
        if ( v11 != 0xFFFFFF )
        {
          KxReleaseQueuedSpinLock(&v32, qword_1402FEC28, v16, 1023LL);
          v22 = qword_1402FEC28;
          v14 = 1023LL;
        }
        v11 = v21;
        v28 = ((unsigned int)HIDWORD(*(_QWORD *)(v15 + 40)) >> 8) & 0x3FF;
        if ( v28 == 1023 )
          v10 = &MiSystemPartition;
        else
          v10 = *(int **)(v22 + 8LL * v28);
        v32 = 0LL;
        v16 = (volatile __int64 *)&v10[8 * v21 + 472 + 2 * v21];
        v33 = v16;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v32);
        }
        else if ( _InterlockedExchange64(v16, (__int64)&v32) )
        {
          KxWaitForLockOwnerShip(&v32);
        }
      }
      MiInsertPageInList(v15, 132LL, v16, v14);
LABEL_18:
      ++v12;
      ++v13;
      result = 0x2AAAAAAAAAAAAAABLL;
      v14 = 1023LL;
      if ( v12 >= (unsigned int)v5 )
      {
        if ( v11 != 0xFFFFFF )
          result = KxReleaseQueuedSpinLock(&v32, v25, v26, 1023LL);
LABEL_21:
        v8 = (__int64)a2;
        v7 = a4;
        goto LABEL_22;
      }
    }
  }
  if ( (_DWORD)v5 )
  {
    v30 = a2;
    v31 = v5;
    do
    {
      result = MiInsertProtectedStandbyPage(a1, *v30++, v8);
      --v31;
    }
    while ( v31 );
    goto LABEL_21;
  }
LABEL_22:
  if ( v7 != 17 )
    LODWORD(v5) = v5 - 1;
  if ( (_DWORD)v5 )
  {
    result = v8;
    v27 = (unsigned int)v5;
    v6 = v5;
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)result + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      result += 8LL;
      --v27;
    }
    while ( v27 );
  }
  if ( v7 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v8 + 8LL * v6) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    result = v7;
    __writecr8(v7);
  }
  return result;
}
