/*
 * XREFs of ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18001E69C
 * Callers:
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x18001E300 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z @ 0x18001E934 (-CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::DuplicateHandleAndVerifySend(
        DWMCursorBroker *this,
        struct DWMCursor *a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // [rsp+30h] [rbp-88h] BYREF
  __int128 v18; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v20; // [rsp+58h] [rbp-60h]
  __int128 v21; // [rsp+68h] [rbp-50h]

  v3 = a3;
  v6 = 0;
  v17 = 0LL;
  v7 = NtDCompositionDuplicateHandleToProcess(*((_QWORD *)a2 + 12), *((unsigned int *)this + 2 * a3 + 328), &v17);
  if ( v7 < 0 )
  {
    v6 = v7 | 0x10000000;
    v9 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 166, v6);
  }
  v9 = Microsoft_OneCore_MinInputEnableBits;
LABEL_5:
  if ( v6 >= 0 )
  {
    v10 = *(_QWORD *)a2;
    v19[0] = 0;
    v11 = *(_OWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, __int128 *))(v10 + 40))(a2, &v18);
    v12 = *(_QWORD *)a2;
    v20 = v11;
    v13 = (*(__int64 (__fastcall **)(struct DWMCursor *))(v12 + 48))(a2);
    v14 = *((_QWORD *)this + 159);
    v15 = *((unsigned int *)this + 2 * v3 + 329);
    LODWORD(v18) = v13;
    *((_QWORD *)&v18 + 1) = v17;
    v21 = v18;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *, int))(*(_QWORD *)v14 + 152LL))(
           v14,
           v15,
           4LL,
           v19,
           64);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 159) + 144LL))(
        *((_QWORD *)this + 159),
        *((unsigned int *)this + 2 * v3 + 329));
      *((_DWORD *)this + 2 * v3 + 329) = 0;
    }
  }
  else if ( (v9 & 2) != 0 )
  {
    Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 360, v6);
  }
  return (unsigned int)v6;
}
