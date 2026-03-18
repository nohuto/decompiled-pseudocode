/*
 * XREFs of UsbhSsh_CheckHubIdle @ 0x1C001BE88
 * Callers:
 *     UsbhBusPause_Action @ 0x1C000F090 (UsbhBusPause_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C001BBD0 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 */

__int64 __fastcall UsbhSsh_CheckHubIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rbx
  _QWORD *v9; // rdx
  __int64 result; // rax

  v5 = FdoExt(a1, a2, a3, a4);
  v8 = v5;
  if ( *((_BYTE *)v5 + 3408)
    || (v9 = v5 + 776, (_QWORD *)*v9 != v9)
    || v5[780]
    || *((_DWORD **)v5 + 603) != v5 + 1206
    || (v5[640] & 0x10) != 0
    || (int)v5[685] > 1
    || (int)UsbhSsh_CheckPortChangeQueuesIdle(a1, (__int64)v9, v6, v7) < 0 )
  {
    result = 3221225473LL;
  }
  else
  {
    result = 0LL;
  }
  *((_BYTE *)v8 + 3408) = 0;
  return result;
}
