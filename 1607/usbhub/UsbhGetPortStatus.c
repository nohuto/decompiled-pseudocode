/*
 * XREFs of UsbhGetPortStatus @ 0x1C003C914
 * Callers:
 *     UsbhSuspendPort @ 0x1C0025F18 (UsbhSuspendPort.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C0015A50 (UsbhSyncSendCommand.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhGetPortStatus(__int64 a1, __int16 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-40h]
  int v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+38h] [rbp-28h] BYREF
  __int16 v9; // [rsp+3Ch] [rbp-24h]
  __int16 v10; // [rsp+3Eh] [rbp-22h]
  __int16 v11; // [rsp+40h] [rbp-20h] BYREF
  int v12; // [rsp+42h] [rbp-1Eh] BYREF
  __int16 v13; // [rsp+46h] [rbp-1Ah]
  char v14; // [rsp+48h] [rbp-18h]

  v13 = a2;
  *a3 = 0;
  v9 = a2;
  v7 = 0;
  v12 = 0x40000;
  v10 = 4;
  v11 = 0;
  v8 = 163;
  v14 = 0;
  result = UsbhSyncSendCommand(a1, (__int64)&v8, (__int64)&v11, (_WORD *)&v12 + 1, v6, &v7);
  if ( a4 )
    *a4 = v7;
  return result;
}
