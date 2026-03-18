/*
 * XREFs of UsbhSsh_CheckHubIdle @ 0x1C0022384
 * Callers:
 *     UsbhBusPause_Action @ 0x1C00157E0 (UsbhBusPause_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C0022400 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 */

__int64 __fastcall UsbhSsh_CheckHubIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 result; // rax

  v5 = FdoExt(a1, a2, a3, a4);
  v6 = v5;
  if ( *((_BYTE *)v5 + 3408)
    || *((_DWORD **)v5 + 388) != v5 + 776
    || v5[780]
    || *((_DWORD **)v5 + 603) != v5 + 1206
    || (v5[640] & 0x10) != 0
    || (int)v5[685] > 1
    || (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) < 0 )
  {
    result = 3221225473LL;
  }
  else
  {
    result = 0LL;
  }
  *((_BYTE *)v6 + 3408) = 0;
  return result;
}
