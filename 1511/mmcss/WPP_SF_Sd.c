/*
 * XREFs of WPP_SF_Sd @ 0x1C0003E28
 * Callers:
 *     CiLookupTask @ 0x1C000AB40 (CiLookupTask.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D640 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_Sd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v5; // r10
  __int64 v6; // rax
  const wchar_t *v8; // rcx
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    if ( *a4 )
    {
      v6 = -1LL;
      while ( a4[++v6] != 0 )
        ;
      v5 = 2 * v6 + 2;
    }
    else
    {
      v5 = 14LL;
    }
    v8 = L"<NULL>";
    if ( *a4 )
      v8 = a4;
  }
  else
  {
    v5 = 10LL;
    v8 = L"NULL";
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           v8,
           v5,
           va,
           4LL,
           0LL);
}
