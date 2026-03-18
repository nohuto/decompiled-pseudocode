/*
 * XREFs of CmpRundownUnitOfWork @ 0x1404482CC
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 */

_QWORD *__fastcall CmpRundownUnitOfWork(_QWORD *BugCheckParameter4, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rsi
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  signed __int32 v14; // eax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  _QWORD *result; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned int v20; // r8d
  unsigned int i; // edx
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rbx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rbx

  v4 = BugCheckParameter4[2];
  if ( v4 )
  {
    BugCheckParameter4[2] = 0LL;
    a4 = *(_DWORD *)v4 & 0x7FFFFFFF;
    if ( (_DWORD)a4 == 1 )
    {
      if ( *(_QWORD **)(v4 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v4, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v4 = 0;
      *(_QWORD *)(v4 + 8) = 0LL;
    }
    else
    {
      for ( i = 0; i < (unsigned int)a4; ++i )
      {
        if ( *(_QWORD **)(*(_QWORD *)(v4 + 8) + 8LL * i) == BugCheckParameter4 )
          break;
      }
      if ( i == (_DWORD)a4 )
        KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v4, (ULONG_PTR)BugCheckParameter4);
      a4 = (unsigned int)(a4 - 1);
      if ( i < (unsigned int)a4 )
      {
        v22 = 8LL * i;
        v23 = 8LL * (i + 1);
        a4 = (unsigned int)a4 - i;
        v24 = (unsigned int)a4;
        do
        {
          v25 = *(_QWORD *)(v4 + 8);
          v26 = *(_QWORD *)(v23 + v25);
          v23 += 8LL;
          *(_QWORD *)(v22 + v25) = v26;
          v22 += 8LL;
          --v24;
        }
        while ( v24 );
      }
      if ( --*(_DWORD *)v4 == 1 )
      {
        v27 = *(__int64 **)(v4 + 8);
        v28 = *v27;
        ExFreePoolWithTag(v27, 0x78494D43u);
        *(_QWORD *)(v4 + 8) = v28;
      }
    }
  }
  v6 = BugCheckParameter4[3];
  if ( v6 )
  {
    BugCheckParameter4[3] = 0LL;
    v20 = *(_DWORD *)v6 & 0x7FFFFFFF;
    if ( v20 == 1 )
    {
      if ( *(_QWORD **)(v6 + 8) != BugCheckParameter4 )
        KeBugCheckEx(0x51u, 0x12uLL, 1uLL, v6, (ULONG_PTR)BugCheckParameter4);
      *(_DWORD *)v6 = 0;
      *(_QWORD *)(v6 + 8) = 0LL;
    }
    else
    {
      v29 = 0;
      if ( v20 )
      {
        a4 = *(_QWORD *)(v6 + 8);
        do
        {
          if ( *(_QWORD **)(a4 + 8LL * v29) == BugCheckParameter4 )
            break;
          ++v29;
        }
        while ( v29 < v20 );
      }
      if ( v29 == v20 )
        KeBugCheckEx(0x51u, 0x12uLL, 2uLL, v6, (ULONG_PTR)BugCheckParameter4);
      v30 = v20 - 1;
      if ( v29 < v20 - 1 )
      {
        a4 = 8LL * v29;
        v31 = 8LL * (v29 + 1);
        v32 = v30 - v29;
        do
        {
          v33 = *(_QWORD *)(v6 + 8);
          v34 = *(_QWORD *)(v31 + v33);
          v31 += 8LL;
          *(_QWORD *)(a4 + v33) = v34;
          a4 += 8LL;
          --v32;
        }
        while ( v32 );
      }
      if ( --*(_DWORD *)v6 == 1 )
      {
        v35 = *(__int64 **)(v6 + 8);
        v36 = *v35;
        ExFreePoolWithTag(v35, 0x78494D43u);
        *(_QWORD *)(v6 + 8) = v36;
      }
    }
  }
  if ( (_QWORD *)*BugCheckParameter4 != BugCheckParameter4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeGetCurrentThread();
    v9 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, a4);
    v10 = _interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0);
    v11 = v9;
    if ( !v10 )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v9);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    qword_14034D768 = (__int64)v8;
    v12 = *BugCheckParameter4;
    v13 = (_QWORD *)BugCheckParameter4[1];
    if ( *(_QWORD **)(*BugCheckParameter4 + 8LL) != BugCheckParameter4 || (_QWORD *)*v13 != BugCheckParameter4 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    qword_14034D768 = 0LL;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
    if ( v14 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v14);
    KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    BugCheckParameter4[7] = 0LL;
  }
  result = BugCheckParameter4 + 4;
  if ( (_QWORD *)*result != result )
  {
    v18 = *result;
    v19 = (_QWORD *)BugCheckParameter4[5];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v19 != result )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    result = (_QWORD *)CmpDereferenceKeyControlBlockWithLock(BugCheckParameter4[6]);
    BugCheckParameter4[6] = 0LL;
  }
  return result;
}
