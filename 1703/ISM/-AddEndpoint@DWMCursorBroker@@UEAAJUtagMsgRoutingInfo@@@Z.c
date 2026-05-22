/*
 * XREFs of ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x18001E300
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18001E69C (-DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::AddEndpoint(__int64 a1, _DWORD *a2)
{
  DWMCursorBroker *v2; // rbp
  _DWORD *v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // r9d
  __int64 v14; // r8
  __int64 i; // rdi
  int v16; // eax
  __int64 v17; // rcx
  _BYTE v19[40]; // [rsp+38h] [rbp-1E0h] BYREF
  struct DWMCursor *v20[50]; // [rsp+60h] [rbp-1B8h]

  v2 = (DWMCursorBroker *)(a1 - 24);
  v4 = (_DWORD *)(a1 - 24 + 1316);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (unsigned int)*v4;
    if ( !(_DWORD)v7 )
      break;
    if ( (*(int (__fastcall **)(_QWORD *, __int64, _BYTE *))(**((_QWORD **)v2 + 159) + 112LL))(
           *((_QWORD **)v2 + 159),
           v7,
           v19) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)v2 + 159) + 144LL))(
        *((_QWORD **)v2 + 159),
        (unsigned int)*v4);
      *v4 = 0;
    }
    if ( !*v4 )
      break;
    v6 = (unsigned int)(v6 + 1);
    v4 += 2;
    if ( (unsigned int)v6 >= 0xA )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 207, 5);
      return 0LL;
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64))(**(_QWORD **)(a1 + 1248) + 96LL))(
         *(_QWORD *)(a1 + 1248),
         a2,
         a1 + 1292 + 8 * v6);
  if ( v9 >= 0 )
  {
    v11 = a1 + 32;
    v12 = 0LL;
    *(_DWORD *)(a1 + 8 * v6 + 1288) = *a2;
    v13 = *(_DWORD *)(a1 + 1232);
    v14 = 50LL;
    do
    {
      if ( *(_DWORD *)v11 != v13 )
      {
        v20[v12] = *(struct DWMCursor **)(v11 + 16);
        v12 = (unsigned int)(v12 + 1);
      }
      v11 += 24LL;
      --v14;
    }
    while ( v14 );
    for ( i = 0LL; (unsigned int)i < (unsigned int)v12; i = (unsigned int)(i + 1) )
    {
      v16 = DWMCursorBroker::DuplicateHandleAndVerifySend(v2, v20[i], v6);
      if ( v16 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 219, v16);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 211, v9);
  }
  return 0LL;
}
