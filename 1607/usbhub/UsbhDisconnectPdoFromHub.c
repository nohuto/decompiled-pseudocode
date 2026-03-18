/*
 * XREFs of UsbhDisconnectPdoFromHub @ 0x1C003B9F0
 * Callers:
 *     UsbhDeletePdo @ 0x1C0053F84 (UsbhDeletePdo.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

_DWORD *__fastcall UsbhDisconnectPdoFromHub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *result; // rax

  v5 = *((_QWORD *)PdoExt(a1, a2, a3, a4) + 147);
  FdoExt(v5, v6, v7, v8);
  Log(v5, 8, 1346653997, a1, v5);
  result = PdoExt(a1, v9, v10, v11);
  *((_QWORD *)result + 147) = 0LL;
  return result;
}
