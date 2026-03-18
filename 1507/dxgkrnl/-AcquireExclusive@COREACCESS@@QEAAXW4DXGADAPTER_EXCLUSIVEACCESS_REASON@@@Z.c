/*
 * XREFs of ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001F44
 * Callers:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001B68 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001BC4 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 * Callees:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0078920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 */

struct _KTHREAD *__fastcall COREACCESS::AcquireExclusive(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  struct _KTHREAD *result; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v7[3] = 275LL;
    v7[4] = 4LL;
    v7[5] = a1;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  v4 = *(_QWORD *)(a1 + 8);
  result = KeGetCurrentThread();
  if ( result != *(struct _KTHREAD **)(v4 + 144) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v4 + 32)) )
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 32LL), Executive, 0, 0, 0LL);
    LOBYTE(v6) = 1;
    result = (struct _KTHREAD *)DXGADAPTER::AcquireCoreResourceExclusive(*(_QWORD *)(a1 + 8), a2, v6);
  }
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
