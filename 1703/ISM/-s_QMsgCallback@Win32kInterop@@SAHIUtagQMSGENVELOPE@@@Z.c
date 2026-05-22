/*
 * XREFs of ?s_QMsgCallback@Win32kInterop@@SAHIUtagQMSGENVELOPE@@@Z @ 0x18000C890
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::s_QMsgCallback(unsigned int a1, __int128 *a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+38h] [rbp-C8h]
  __int128 v15; // [rsp+48h] [rbp-B8h]
  __int128 v16; // [rsp+58h] [rbp-A8h]
  __int128 v17; // [rsp+68h] [rbp-98h]
  __int128 v18; // [rsp+78h] [rbp-88h]
  __int128 v19; // [rsp+88h] [rbp-78h]
  __int128 v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-48h]
  __int128 v23; // [rsp+C8h] [rbp-38h]
  __int128 v24; // [rsp+D8h] [rbp-28h]
  __int128 v25; // [rsp+E8h] [rbp-18h]
  __int128 v26; // [rsp+F8h] [rbp-8h]
  __int128 v27; // [rsp+108h] [rbp+8h]
  __int128 v28; // [rsp+118h] [rbp+18h]

  v3 = a2[1];
  v14 = *a2;
  v4 = a2[2];
  v15 = v3;
  v5 = a2[3];
  v16 = v4;
  v6 = a2[4];
  v17 = v5;
  v7 = a2[5];
  v18 = v6;
  v8 = a2[6];
  v19 = v7;
  v20 = v8;
  if ( (gdwMitConfig & 4) == 0 )
    return 0LL;
  CoreUIOpenExisting(&v13);
  v10 = v13;
  if ( !v13 )
  {
    CoreUICreate(&v13);
    v10 = v13;
    if ( !v13 )
      return 0LL;
  }
  v21 = 0;
  v22 = v14;
  v23 = v15;
  v24 = v16;
  v25 = v17;
  v26 = v18;
  v27 = v19;
  v28 = v20;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *, int))(*(_QWORD *)v10 + 152LL))(
          v10,
          a1,
          4LL,
          &v21,
          120);
  if ( v11 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 1261, v11);
    return 0LL;
  }
  return 1LL;
}
