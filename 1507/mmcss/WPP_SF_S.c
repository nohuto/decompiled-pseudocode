/*
 * XREFs of WPP_SF_S @ 0x1C00040D0
 * Callers:
 *     CiTaskDump @ 0x1C000D8A0 (CiTaskDump.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  const wchar_t *v8; // rcx

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
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_e1de190dcddd688b0bae7d2e89c8ef5d_Traceguids,
           11LL,
           v8,
           v5,
           0LL);
}
