/*
 * XREFs of Endpoint_WdfEvtAbortComplete @ 0x1C001C0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDX @ 0x1C001C5D8 (WPP_RECORDER_SF_DDX.c)
 */

__int64 __fastcall Endpoint_WdfEvtAbortComplete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // r9d
  char v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+38h] [rbp-10h]

  result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             a2,
             off_1C0040108);
  if ( *(_BYTE *)(result + 37) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(result + 136) + 16LL), 0xFFFFFFFF) != 1 )
      return result;
    v5 = 35;
    v8 = a2;
    v7 = *(_DWORD *)(result + 144);
    v4 = *(unsigned __int8 *)(*(_QWORD *)(result + 16) + 135LL);
    v6 = *(_BYTE *)(*(_QWORD *)(result + 16) + 135LL);
  }
  else
  {
    v5 = 36;
    v8 = a2;
    v7 = *(_DWORD *)(result + 144);
    v6 = *(_BYTE *)(*(_QWORD *)(result + 16) + 135LL);
  }
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_DDX(
    *(_QWORD *)(result + 80),
    v4,
    12,
    v5,
    (__int64)&WPP_abc35e7fa23aea6eb35de0ce9b7cef50_Traceguids,
    v6,
    v7,
    v8);
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0041588)(UcxGlobals, a2);
}
