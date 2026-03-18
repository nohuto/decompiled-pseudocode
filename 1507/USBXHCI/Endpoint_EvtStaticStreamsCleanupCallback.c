/*
 * XREFs of Endpoint_EvtStaticStreamsCleanupCallback @ 0x1C00185C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0013F64 (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_ddqqq @ 0x1C001CBB4 (WPP_RECORDER_SF_ddqqq.c)
 */

void __fastcall Endpoint_EvtStaticStreamsCleanupCallback(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rdx

  v1 = (_QWORD *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                   a1,
                   off_1C00402C0);
  v2 = *(_QWORD *)(*(_QWORD *)*v1 + 88LL);
  WPP_RECORDER_SF_ddqqq(
    *(_QWORD *)(*v1 + 80LL),
    *(_DWORD *)(*v1 + 144LL),
    *(unsigned __int8 *)(*(_QWORD *)(*v1 + 16LL) + 135LL),
    99);
  v3 = v1[4];
  if ( v3 )
  {
    CommonBuffer_ReleaseBuffer(v2, v3);
    v1[4] = 0LL;
  }
}
