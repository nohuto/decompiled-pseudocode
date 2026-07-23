/*
 * XREFs of MiInsertAndUnlockStandbyPages @ 0x14006FA70
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1400357F0 (MiDecrementAndInsertStandbyPages.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x14006FD40 (MiInsertProtectedStandbyPage.c)
 *     KxAcquireQueuedSpinLock @ 0x140070478 (KxAcquireQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiInsertAndUnlockStandbyPages(__int64 a1, _QWORD *a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // r8
  int *v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // r12d
  unsigned int v15; // esi
  __int64 *v16; // r14
  __int16 v17; // r10
  __int64 v18; // rbx
  __int64 v19; // rcx
  char v20; // dl
  __int64 v21; // r8
  char v22; // al
  unsigned int v23; // edi
  unsigned __int16 v24; // r8
  int *v25; // rax
  volatile signed __int64 *v26; // r9
  volatile signed __int64 *v27; // [rsp+30h] [rbp-48h] BYREF
  int *v28; // [rsp+38h] [rbp-40h]
  __int64 v29; // [rsp+40h] [rbp-38h]

  result = 0LL;
  v27 = 0LL;
  v7 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v8 = (__int64)a2;
  v10 = 0LL;
  if ( a1 )
  {
    if ( a3 )
    {
      v11 = a2;
      v12 = a3;
      do
      {
        result = MiInsertProtectedStandbyPage(a1, *v11++);
        --v12;
      }
      while ( v12 );
LABEL_5:
      v7 = 0;
      goto LABEL_6;
    }
    goto LABEL_7;
  }
  v14 = 0xFFFFFF;
  v15 = 0;
  if ( !a3 )
    goto LABEL_7;
  v16 = a2;
  v17 = 1023;
  do
  {
    v18 = *v16;
    v19 = *(_QWORD *)(*v16 + 24);
    if ( (v19 & 0x3FFFFFFFFFFFFFFFLL) != 0 || (v20 = *(_BYTE *)(v18 + 34), (v20 & 7) == 6) || (v20 & 0x10) != 0 )
      KeBugCheckEx(0x4Eu, 6uLL, (*v16 + 0x58000000000LL) / 48, v19 & 0x3FFFFFFFFFFFFFFFLL, *(unsigned int *)(v18 + 32));
    v21 = *(_QWORD *)(v18 + 40);
    if ( (v19 & 0x4000000000000000LL) != 0 )
    {
      if ( (v21 & 0x10000000000000LL) != 0 )
        goto LABEL_39;
    }
    else if ( (v21 & 0x10000000000000LL) != 0 )
    {
      goto LABEL_39;
    }
    v22 = *(_BYTE *)(v18 + 35);
    if ( (v22 & 0x40) == 0 )
    {
      if ( (v22 & 8) != 0 )
        v23 = 5;
      else
        v23 = v22 & 7;
      if ( !v10 )
        v10 = MiPartitionIdToPointer((HIDWORD(v21) >> 8) & 0x3FF);
      if ( v23 != v14
        || ((v24 = v17 & (HIDWORD(v21) >> 8), v24 == v17)
          ? (v25 = MiSystemPartition)
          : (v25 = *(int **)(qword_140327038 + 8LL * v24)),
            v10 != v25) )
      {
        if ( v14 != 0xFFFFFF )
        {
          KxReleaseQueuedSpinLock(&v27);
          v17 = 1023;
        }
        v14 = v23;
        v10 = MiPartitionIdToPointer(v17 & (unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(v18 + 40)) >> 8));
        v27 = v26;
        v28 = &v10[8 * v23 + 504 + 2 * v23];
        KxAcquireQueuedSpinLock(&v27, v28);
      }
      MiInsertPageInList(v18, 0x84u);
      goto LABEL_32;
    }
LABEL_39:
    if ( v14 != 0xFFFFFF )
    {
      KxReleaseQueuedSpinLock(&v27);
      v14 = 0xFFFFFF;
    }
    MiInsertPageInList(v18, 4u);
LABEL_32:
    ++v15;
    result = 0xFFFFFA8000000000uLL;
    ++v16;
    v7 = 0;
    v17 = 1023;
  }
  while ( v15 < a3 );
  if ( v14 != 0xFFFFFF )
  {
    result = KxReleaseQueuedSpinLock(&v27);
    goto LABEL_5;
  }
LABEL_6:
  v8 = (__int64)a2;
LABEL_7:
  if ( a4 != 17 )
    --a3;
  if ( a3 )
  {
    result = v8;
    v13 = a3;
    v7 = a3;
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)result + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      result += 8LL;
      --v13;
    }
    while ( v13 );
  }
  if ( a4 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v8 + 8LL * v7) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    result = a4;
    __writecr8(a4);
  }
  return result;
}
