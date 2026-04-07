/*
 * XREFs of ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180076334
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180076B28 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x180076DC0 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 */

__int64 __fastcall wil::GetFailureLogString(
        wil *this,
        unsigned __int16 *a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  const char *v5; // rsi
  DWORD v8; // r8d
  const unsigned __int16 *v9; // r9
  unsigned __int16 *v10; // rdi
  __int64 v11; // rax
  unsigned __int16 *v12; // rax
  const unsigned __int16 *v13; // r9
  wil::details *v14; // rbp
  DWORD CurrentThreadId; // eax
  wil::details *v16; // rax
  const unsigned __int16 *v17; // r9
  unsigned __int16 *v18; // rax
  const unsigned __int16 *v19; // r9
  const unsigned __int16 *v20; // r9
  const unsigned __int16 *v21; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  v5 = (const char *)&word_1800A54C4;
  if ( *(_DWORD *)a3 )
  {
    switch ( *(_DWORD *)a3 )
    {
      case 1:
        v5 = "ReturnHr";
        break;
      case 2:
        v5 = "ReturnHr[PreRelease]";
        break;
      case 3:
        v5 = "LogHr";
        break;
      case 4:
        v5 = "FailFast";
        break;
    }
  }
  else
  {
    v5 = "Exception";
  }
  v8 = *(_DWORD *)(a3 + 4);
  Buffer[0] = 0;
  FormatMessageW(0x1200u, 0LL, v8, 0x400u, Buffer, 0x100u, 0LL);
  v9 = *(const unsigned __int16 **)(a3 + 48);
  v10 = (unsigned __int16 *)((char *)this + 2 * (_QWORD)a2);
  v11 = *(_QWORD *)(a3 + 128);
  if ( v9 )
  {
    LODWORD(lpBuffer) = *(_DWORD *)(a3 + 56);
    v12 = wil::details::LogStringPrintf(this, v10, L"%hs(%d)\\%hs!%p: ", v9, lpBuffer, *(_QWORD *)(a3 + 120), v11);
  }
  else
  {
    v12 = wil::details::LogStringPrintf(this, v10, L"%hs!%p: ", *(const unsigned __int16 **)(a3 + 120), v11);
  }
  v13 = *(const unsigned __int16 **)(a3 + 136);
  v14 = (wil::details *)v12;
  if ( v13 )
    v14 = (wil::details *)wil::details::LogStringPrintf((wil::details *)v12, v10, L"(caller: %p) ", v13);
  CurrentThreadId = GetCurrentThreadId();
  LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
  nSize[0] = CurrentThreadId;
  LODWORD(lpBuffera) = *(_DWORD *)(a3 + 60);
  v16 = (wil::details *)wil::details::LogStringPrintf(
                          v14,
                          v10,
                          L"%hs(%d) tid(%x) %08X %ws",
                          (const unsigned __int16 *)v5,
                          lpBuffera,
                          *(_QWORD *)nSize,
                          Arguments,
                          Buffer);
  if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
  {
    v18 = wil::details::LogStringPrintf(v16, v10, L"    ", v17);
    v19 = *(const unsigned __int16 **)(a3 + 16);
    if ( v19 )
      v18 = wil::details::LogStringPrintf((wil::details *)v18, v10, L"Msg:[%ws] ", v19);
    v20 = *(const unsigned __int16 **)(a3 + 64);
    if ( v20 )
      v18 = wil::details::LogStringPrintf((wil::details *)v18, v10, L"CallContext:[%hs] ", v20);
    v21 = *(const unsigned __int16 **)(a3 + 40);
    if ( *(_QWORD *)(a3 + 32) )
    {
      wil::details::LogStringPrintf((wil::details *)v18, v10, L"[%hs(%hs)]\n", v21, *(_QWORD *)(a3 + 32));
    }
    else if ( v21 )
    {
      wil::details::LogStringPrintf((wil::details *)v18, v10, L"[%hs]\n", v21);
    }
    else
    {
      wil::details::LogStringPrintf((wil::details *)v18, v10, L"\n", 0LL);
    }
  }
  return 0LL;
}
