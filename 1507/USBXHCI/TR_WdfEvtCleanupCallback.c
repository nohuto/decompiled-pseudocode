/*
 * XREFs of TR_WdfEvtCleanupCallback @ 0x1C0020BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0013F64 (CommonBuffer_ReleaseBuffer.c)
 */

__int64 __fastcall TR_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  struct _PCW_INSTANCE *v4; // rcx

  v1 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C0040310);
  v2 = (_QWORD *)v1;
  v3 = *(_QWORD *)(v1 + 168);
  if ( v3 )
  {
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 88LL), v3);
    v2[21] = 0LL;
  }
  v4 = (struct _PCW_INSTANCE *)v2[33];
  if ( v4 )
    PcwCloseInstance(v4);
  return (*(__int64 (__fastcall **)(_QWORD *))(v2[4] + 8LL))(v2);
}
