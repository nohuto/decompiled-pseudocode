/*
 * XREFs of ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x1800650E4
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z @ 0x180065344 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x180001DB8 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::GetFailureLogString(wil *this, wchar_t *a2, __int64 a3, const struct wil::FailureInfo *a4)
{
  void (__fastcall *v6)(__int64, wil *, __int64, const struct wil::FailureInfo *); // rax
  const char *v7; // rbp
  DWORD v8; // r8d
  const unsigned __int16 *v9; // r9
  char *v10; // rdi
  __int64 v11; // rax
  char *v12; // rdx
  unsigned __int16 *v13; // rax
  const unsigned __int16 *v14; // r9
  unsigned __int16 *v15; // rsi
  DWORD CurrentThreadId; // eax
  unsigned __int16 *v17; // rax
  const unsigned __int16 *v18; // r9
  unsigned __int16 *v19; // rax
  const unsigned __int16 *v20; // r9
  const unsigned __int16 *v21; // r9
  const unsigned __int16 *v22; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-248h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-248h]
  DWORD nSize[2]; // [rsp+28h] [rbp-240h]
  va_list *Arguments; // [rsp+30h] [rbp-238h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-228h] BYREF

  if ( this )
  {
    v6 = (void (__fastcall *)(__int64, wil *, __int64, const struct wil::FailureInfo *))g_pfnResultLoggingCallback;
    *(_WORD *)this = 0;
    if ( !v6 || !wil::details::g_resultMessageCallbackSet || (v6(a3, this, 2048LL, a4), !*(_WORD *)this) )
    {
      v7 = (const char *)&word_1800ACD3A;
      if ( *(_DWORD *)a3 )
      {
        switch ( *(_DWORD *)a3 )
        {
          case 1:
            v7 = "ReturnHr";
            break;
          case 2:
            v7 = "LogHr";
            break;
          case 3:
            v7 = "FailFast";
            break;
        }
      }
      else
      {
        v7 = "Exception";
      }
      v8 = *(_DWORD *)(a3 + 4);
      Buffer[0] = 0;
      FormatMessageW(0x1200u, 0LL, v8, 0x400u, Buffer, 0x100u, 0LL);
      v9 = *(const unsigned __int16 **)(a3 + 48);
      v10 = (char *)this + 4096;
      v11 = *(_QWORD *)(a3 + 128);
      v12 = (char *)this + 4096;
      if ( v9 )
      {
        LODWORD(lpBuffer) = *(_DWORD *)(a3 + 56);
        v13 = wil::details::LogStringPrintf(this, v12, L"%hs(%d)\\%hs!%p: ", v9, lpBuffer, *(_QWORD *)(a3 + 120), v11);
      }
      else
      {
        v13 = wil::details::LogStringPrintf(this, v12, L"%hs!%p: ", *(const unsigned __int16 **)(a3 + 120), v11);
      }
      v14 = *(const unsigned __int16 **)(a3 + 136);
      v15 = v13;
      if ( v14 )
        v15 = wil::details::LogStringPrintf((wil::details *)v13, v10, L"(caller: %p) ", v14);
      CurrentThreadId = GetCurrentThreadId();
      LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
      nSize[0] = CurrentThreadId;
      LODWORD(lpBuffera) = *(_DWORD *)(a3 + 60);
      v17 = wil::details::LogStringPrintf(
              (wil::details *)v15,
              v10,
              L"%hs(%d) tid(%x) %08X %ws",
              (const unsigned __int16 *)v7,
              lpBuffera,
              *(_QWORD *)nSize,
              Arguments,
              Buffer);
      if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
      {
        v19 = wil::details::LogStringPrintf((wil::details *)v17, v10, L"    ", v18);
        v20 = *(const unsigned __int16 **)(a3 + 16);
        if ( v20 )
          v19 = wil::details::LogStringPrintf((wil::details *)v19, v10, L"Msg:[%ws] ", v20);
        v21 = *(const unsigned __int16 **)(a3 + 64);
        if ( v21 )
          v19 = wil::details::LogStringPrintf((wil::details *)v19, v10, L"CallContext:[%hs] ", v21);
        v22 = *(const unsigned __int16 **)(a3 + 40);
        if ( *(_QWORD *)(a3 + 32) )
        {
          wil::details::LogStringPrintf((wil::details *)v19, v10, L"[%hs(%hs)]\n", v22, *(_QWORD *)(a3 + 32));
        }
        else if ( v22 )
        {
          wil::details::LogStringPrintf((wil::details *)v19, v10, L"[%hs]\n", v22);
        }
        else
        {
          wil::details::LogStringPrintf((wil::details *)v19, v10, L"\n", 0LL);
        }
      }
    }
  }
  return 0LL;
}
