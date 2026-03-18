/*
 * XREFs of ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E74E8
 * Callers:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01E7690 (FlushWEFCOMPOSITEDDCEBounds.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall PostCOMPOSITEDInvalidateAPC(struct tagWND *const a1, const struct tagRECT *a2)
{
  __int128 v2; // xmm0
  _BYTE v4[16]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-38h]
  __int128 v6; // [rsp+48h] [rbp-30h]

  v2 = (__int128)*a2;
  v5 = *(_QWORD *)a1;
  v6 = v2;
  return UserPostNKAPCBuffer(KeGetCurrentThread(), Scale_None, SpbApcRundown, NormalAPCInvalidateCOMPOSITEDWnd, v4, 48);
}
