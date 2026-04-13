/*
 * XREFs of sub_18000150C @ 0x18000150C
 * Callers:
 *     sub_180001EA4 @ 0x180001EA4 (sub_180001EA4.c)
 * Callees:
 *     sub_180001488 @ 0x180001488 (sub_180001488.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000150C(wchar_t *a1, __int64 a2, __int64 a3)
{
  const char *v4; // rsi
  DWORD v7; // r8d
  wchar_t *v8; // rdi
  wchar_t *v9; // rax
  wchar_t *v10; // rbp
  DWORD CurrentThreadId; // eax
  wchar_t *v12; // rax
  wchar_t *v13; // rax
  __int64 v14; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  v4 = (const char *)&unk_18002B658;
  if ( *(_DWORD *)a3 )
  {
    switch ( *(_DWORD *)a3 )
    {
      case 1:
        v4 = "ReturnHr";
        break;
      case 2:
        v4 = "ReturnHr[PreRelease]";
        break;
      case 3:
        v4 = "LogHr";
        break;
      case 4:
        v4 = "FailFast";
        break;
    }
  }
  else
  {
    v4 = "Exception";
  }
  v7 = *(_DWORD *)(a3 + 4);
  Buffer[0] = 0;
  FormatMessageW(0x1200u, 0LL, v7, 0x400u, Buffer, 0x100u, 0LL);
  v8 = &a1[a2];
  if ( *(_QWORD *)(a3 + 48) )
  {
    HIDWORD(Arguments) = HIDWORD(*(_QWORD *)(a3 + 128));
    *(_QWORD *)nSize = *(_QWORD *)(a3 + 120);
    v9 = sub_180001488(a1, v8, L"%hs(%d)\\%hs!%p: ");
  }
  else
  {
    v9 = sub_180001488(a1, v8, L"%hs!%p: ", *(_QWORD *)(a3 + 120), *(_QWORD *)(a3 + 128));
  }
  v10 = v9;
  if ( *(_QWORD *)(a3 + 136) )
    v10 = sub_180001488(v9, v8, L"(caller: %p) ");
  CurrentThreadId = GetCurrentThreadId();
  LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
  nSize[0] = CurrentThreadId;
  LODWORD(lpBuffer) = *(_DWORD *)(a3 + 60);
  v12 = sub_180001488(v10, v8, L"%hs(%d) tid(%x) %08X %ws", v4, lpBuffer, *(_QWORD *)nSize, Arguments, Buffer);
  if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
  {
    v13 = sub_180001488(v12, v8, L"    ");
    if ( *(_QWORD *)(a3 + 16) )
      v13 = sub_180001488(v13, v8, L"Msg:[%ws] ");
    if ( *(_QWORD *)(a3 + 64) )
      v13 = sub_180001488(v13, v8, L"CallContext:[%hs] ");
    v14 = *(_QWORD *)(a3 + 40);
    if ( *(_QWORD *)(a3 + 32) )
    {
      sub_180001488(v13, v8, L"[%hs(%hs)]\n", v14, *(_QWORD *)(a3 + 32));
    }
    else if ( v14 )
    {
      sub_180001488(v13, v8, L"[%hs]\n");
    }
    else
    {
      sub_180001488(v13, v8, L"\n");
    }
  }
  return 0LL;
}
