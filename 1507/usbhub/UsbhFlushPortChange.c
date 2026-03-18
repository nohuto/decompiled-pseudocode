/*
 * XREFs of UsbhFlushPortChange @ 0x1C0003D18
 * Callers:
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C70 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

__int64 __fastcall UsbhFlushPortChange(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  int v3; // esi
  int v4; // eax
  unsigned int v5; // r10d
  __int16 v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF
  __int16 v9; // [rsp+6Ch] [rbp+24h]
  __int16 v10; // [rsp+6Eh] [rbp+26h]

  v2 = a2;
  v7 = 0;
  v3 = a1;
  FdoExt(a1);
  v8 = 1048867;
  v9 = v2;
  v10 = 0;
  v4 = UsbhSyncSendCommand(v3, (unsigned int)&v8, 0, (unsigned int)&v7);
  Log(v3, 8, 1718382659, v4, v2);
  return v5;
}
