/*
 * XREFs of Endpoint_WdfEvtPurgeComplete @ 0x1C001C170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C001C5D8 (WPP_RECORDER_SF_DDX.c)
 */

__int64 __fastcall Endpoint_WdfEvtPurgeComplete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // r9d

  result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             a2,
             off_1C0040108);
  if ( *(_BYTE *)(result + 37) && (v4 = *(_QWORD *)(result + 136)) != 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 0xFFFFFFFF) != 1 )
      return result;
    v5 = 31;
  }
  else
  {
    v5 = 32;
  }
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_DDX(
    *(_QWORD *)(result + 80),
    v4,
    12,
    v5,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    *(_BYTE *)(*(_QWORD *)(result + 16) + 135LL),
    *(_DWORD *)(result + 144),
    a2);
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0041580)(UcxGlobals, a2);
}
