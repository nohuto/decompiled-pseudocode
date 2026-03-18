/*
 * XREFs of LinkNodepRestoreIrqRoutingWorker @ 0x1C004A620
 * Callers:
 *     LinkNodeRestoreHardwareState @ 0x1C004A554 (LinkNodeRestoreHardwareState.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     LinkNodepRunSrsAsync @ 0x1C004A76C (LinkNodepRunSrsAsync.c)
 */

__int64 __fastcall LinkNodepRestoreIrqRoutingWorker(__int64 a1, unsigned int a2, __int64 a3, char *a4)
{
  KSPIN_LOCK *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  bool v10; // zf
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbp
  __int64 v13; // rax
  KIRQL v14; // dl

  _InterlockedIncrement((volatile signed __int32 *)a4 + 7);
  v7 = (KSPIN_LOCK *)(a4 + 16);
  a4[24] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 2);
  while ( 1 )
  {
    if ( a4[25] )
      goto LABEL_8;
    v8 = *(_QWORD *)a4;
    if ( *(_DWORD *)(*(_QWORD *)a4 + 24LL) )
    {
      v9 = *(unsigned int *)(v8 + 32);
      *((_DWORD *)a4 + 2) = v9;
      a2 = LinkNodepRunSrsAsync(*(_QWORD *)(v8 + 552), v9, LinkNodepRestoreIrqRoutingWorker, a4);
      v10 = a2 == 259;
    }
    else
    {
      v11 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v8 + 552), 1397310559);
      v12 = (volatile signed __int32 *)v11;
      if ( !v11 )
        goto LABEL_8;
      a2 = AMLIAsyncEvalObject(v11, 0LL, 0, 0LL, LinkNodepRestoreIrqRoutingWorker, a4);
      AMLIDereferenceHandleEx(v12);
      v10 = a2 == 259;
    }
    if ( v10 )
    {
      v14 = a4[24];
      a4[25] = 1;
      KeReleaseSpinLock(v7, v14);
      return 259LL;
    }
LABEL_8:
    v13 = *(_QWORD *)a4;
    if ( *(__int64 **)(*(_QWORD *)a4 + 56LL) == &LinkNodeListHead )
      break;
    a4[25] = 0;
    *(_QWORD *)a4 = *(_QWORD *)(v13 + 56) - 56LL;
  }
  KeReleaseSpinLock(v7, a4[24]);
  (*(void (**)(void))(PmHalDispatchTable + 40))();
  if ( *((_DWORD *)a4 + 7) )
    (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a4 + 4))(a1, a2, 0LL, *((_QWORD *)a4 + 5));
  ExFreePoolWithTag(a4, 0);
  return a2;
}
