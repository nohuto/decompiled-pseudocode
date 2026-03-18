/*
 * XREFs of Template_xxxn @ 0x180106C8C
 * Callers:
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180105820 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180105A04 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x180105F14 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG Template_xxxn(_DWORD a1, const EVENT_DESCRIPTOR *a2, __int64 a3, __int64 a4, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-40h]
  __int64 v7; // [rsp+38h] [rbp-38h]
  va_list v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+30h] BYREF
  va_list va; // [rsp+A0h] [rbp+30h]
  __int64 v16; // [rsp+A8h] [rbp+38h]
  __int64 v17; // [rsp+B0h] [rbp+40h]
  va_list va1; // [rsp+B8h] [rbp+48h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v13 = a4;
  v12 = a3;
  UserData.Ptr = (ULONGLONG)&v12;
  *(_QWORD *)&UserData.Size = 8LL;
  v6 = &v13;
  v7 = 8LL;
  va_copy(v8, va);
  v10 = v17;
  v9 = 8LL;
  v11 = 16LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 4u, &UserData);
}
