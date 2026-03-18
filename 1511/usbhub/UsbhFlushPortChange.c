/*
 * XREFs of UsbhFlushPortChange @ 0x1C003BDA0
 * Callers:
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045DA0 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C001A080 (UsbhSyncSendCommand.c)
 */

__int64 __fastcall UsbhFlushPortChange(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rdi
  int v7; // eax
  unsigned int v8; // r10d
  int v10; // [rsp+20h] [rbp-28h]
  __int16 v11; // [rsp+58h] [rbp+10h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF
  __int16 v13; // [rsp+6Ch] [rbp+24h]
  __int16 v14; // [rsp+6Eh] [rbp+26h]

  v4 = (unsigned __int16)a2;
  v11 = 0;
  FdoExt(a1, a2, (__int64)a3, a4);
  v12 = 1048867;
  v13 = v4;
  v14 = 0;
  v7 = UsbhSyncSendCommand(a1, (__int64)&v12, 0LL, &v11, v10, a3);
  Log(a1, 8, 1718382659, v7, v4);
  return v8;
}
