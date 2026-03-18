/*
 * XREFs of UsbhConnectPdoToHub @ 0x1C001A628
 * Callers:
 *     UsbhCreatePdo @ 0x1C0005B90 (UsbhCreatePdo.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

__int64 __fastcall UsbhConnectPdoToHub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  *((_QWORD *)PdoExt(a1, a2, a3, a4) + 147) = 0LL;
  Log(a2, 8, 1346653995, a1, 0LL);
  v9 = PdoExt(a1, v6, v7, v8);
  v9[354] |= 2u;
  *((_QWORD *)PdoExt(a1, v10, v11, v12) + 147) = a2;
  return 0LL;
}
