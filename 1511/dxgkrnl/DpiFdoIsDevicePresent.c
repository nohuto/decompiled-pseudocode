/*
 * XREFs of DpiFdoIsDevicePresent @ 0x1C016C990
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C00CA970 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C016C620 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DpiFdoIsDevicePresent(__int64 a1, char *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  char v6; // di
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _WORD *v9; // rcx
  _WORD v11[32]; // [rsp+30h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  v4 = 0;
  *a2 = 0;
  v5 = *(_DWORD *)(a1 + 1056);
  v6 = 1;
  if ( v5 != 1 )
  {
    if ( (unsigned int)(v5 - 2) > 2 && !*(_BYTE *)(a1 + 1095) )
      return (unsigned int)-1073741637;
    goto LABEL_7;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _WORD *, _QWORD, int))(a1 + 616))(
         *(_QWORD *)(a1 + 568),
         0LL,
         v11,
         0LL,
         64) == 64 )
  {
    v9 = *(_WORD **)(a1 + 1048);
    if ( v11[0] != *v9 || v11[1] != v9[1] )
      v6 = 0;
LABEL_7:
    *a2 = v6;
    return v4;
  }
  v8 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v4 = -1073741823;
  v8[3] = DpiFdoIsDevicePresent;
  v8[4] = *(_QWORD *)(a1 + 616);
  v8[5] = -1073741823LL;
  WdLogEvent5_WdError(v8);
  return v4;
}
