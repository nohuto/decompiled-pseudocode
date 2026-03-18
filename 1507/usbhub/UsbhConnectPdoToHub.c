/*
 * XREFs of UsbhConnectPdoToHub @ 0x1C00078E0
 * Callers:
 *     UsbhCreatePdo @ 0x1C0007C50 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 */

__int64 __fastcall UsbhConnectPdoToHub(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  *(_QWORD *)(PdoExt(a1) + 1176) = 0LL;
  Log(a2, 8, 1346653995, a1, 0LL);
  v4 = PdoExt(a1);
  *(_DWORD *)(v4 + 1416) |= 2u;
  *(_QWORD *)(PdoExt(a1) + 1176) = a2;
  return 0LL;
}
