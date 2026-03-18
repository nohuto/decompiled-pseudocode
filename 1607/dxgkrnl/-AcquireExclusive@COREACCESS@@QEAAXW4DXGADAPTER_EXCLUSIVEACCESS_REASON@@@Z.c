/*
 * XREFs of ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008620
 * Callers:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00082DC (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C000838C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 * Callees:
 *     ?IsWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEBAEXZ @ 0x1C00094D0 (-IsWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEBAEXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C009F9A0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 */

unsigned __int8 __fastcall COREACCESS::AcquireExclusive(__int64 a1, unsigned int a2)
{
  unsigned __int8 result; // al
  struct _KEVENT *v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v7[3] = 275LL;
    v7[4] = 4LL;
    v7[5] = a1;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  result = DXGADAPTER::IsWorkerThreadOfExclusiveOwner(*(DXGADAPTER **)(a1 + 16));
  if ( !result )
  {
    if ( !KeReadStateEvent(v5 + 2) )
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 16) + 48LL), Executive, 0, 0, 0LL);
    LOBYTE(v6) = 1;
    result = DXGADAPTER::AcquireCoreResourceExclusive(*(_QWORD *)(a1 + 16), a2, v6);
  }
  *(_BYTE *)(a1 + 24) = 1;
  return result;
}
