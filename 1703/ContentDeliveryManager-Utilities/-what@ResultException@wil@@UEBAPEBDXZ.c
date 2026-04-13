/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1800021E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800017AC (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x1800019F8 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x180001DD8 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180070240 (_alloca_probe.c)
 */

const char *__fastcall wil::ResultException::what(
        wil::ResultException *this,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  LPVOID *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r8
  char v8[1024]; // [rsp+20h] [rbp-1418h] BYREF
  wchar_t v9[2048]; // [rsp+420h] [rbp-1018h] BYREF

  v4 = (LPVOID *)((char *)this + 184);
  v5 = 0LL;
  if ( !*((_QWORD *)this + 23) )
  {
    wil::GetFailureLogString(v9, (unsigned __int16 *)0x800, (__int64)this + 24, a4);
    wil::details::StringCchPrintfA((wil::details *)v8, (char *)0x400, "%ws", (const char *)v9);
    v6 = -1LL;
    do
      ++v6;
    while ( v8[v6] );
    wil::details::shared_buffer::create(v4, v8, v6 + 1);
  }
  if ( *v4 )
    return (char *)*v4 + 4;
  return (const char *)v5;
}
