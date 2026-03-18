/*
 * XREFs of Endpoint_UcxEvtEndpointReset @ 0x1C001B410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C001C868 (WPP_RECORDER_SF_ddqL.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 *v5; // rsi
  int v6; // r8d
  signed __int32 v7; // eax
  signed __int32 v8; // ett

  v4 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a2,
         off_1C0040108);
  v5 = (__int64 *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                    a3,
                    off_1C0040068);
  memset(v5, 0, 0x60uLL);
  _m_prefetchw((const void *)(v4 + 32));
  v7 = *(_DWORD *)(v4 + 32);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 32), v7 ^ 0x100, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 0x100) != 0 )
  {
    WPP_RECORDER_SF_ddqL(*(_QWORD *)(v4 + 80), 256, v6, 55);
    return (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             a3,
             0LL);
  }
  else
  {
    *v5 = v4;
    *(_QWORD *)(v4 + 256) = a3;
    *(_DWORD *)(v4 + 264) = 259;
    return ESM_AddEvent((PVOID)(v4 + 272));
  }
}
