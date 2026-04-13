/*
 * XREFs of sub_18000BCC0 @ 0x18000BCC0
 * Callers:
 *     sub_18000BC34 @ 0x18000BC34 (sub_18000BC34.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 *     atexit @ 0x1800261E4 (atexit.c)
 */

__int64 __fastcall sub_18000BCC0(__int64 *a1)
{
  GUID v2; // xmm0
  __int64 v3; // rax
  BOOL fPending; // [rsp+20h] [rbp-38h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-30h] BYREF
  GUID ProviderId; // [rsp+30h] [rbp-28h] BYREF

  if ( (dword_18003ACC8 & 1) == 0 )
  {
    dword_18003ACC8 |= 1u;
    atexit(sub_180028060);
  }
  InitOnceBeginInitialize(&stru_18003ACF0, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_18003ACF8;
    qword_18003ACF8 = (__int64)off_18002DEF8;
    qword_18003AD10 = (__int64)&unk_18003A0A0;
    qword_18003AD00 = (__int64)&unk_18003A0A0;
    byte_18003AD08 = 1;
    v2 = (GUID)*((_OWORD *)off_18003A0A8 - 1);
    qword_18003A0C8 = 0LL;
    qword_18003A0D0 = 0LL;
    ProviderId = v2;
    if ( !EventRegister(&ProviderId, (PENABLECALLBACK)EnableCallback, &unk_18003A0A0, &RegHandle) )
      EventSetInformation(RegHandle, 2LL, off_18003A0A8, *(unsigned __int16 *)off_18003A0A8);
    dword_18003AD0C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18003ACF8 + 8))(&qword_18003ACF8);
    InitOnceComplete(&stru_18003ACF0, 0, &qword_18003ACF8);
  }
  v3 = *a1;
  a1[1] = *((_QWORD *)Context + 1);
  *((_BYTE *)a1 + 16) = 0;
  *((_DWORD *)a1 + 5) = 1;
  return (*(__int64 (__fastcall **)(__int64 *))(v3 + 8))(a1);
}
