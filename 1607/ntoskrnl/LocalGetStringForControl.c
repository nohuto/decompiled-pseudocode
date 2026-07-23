/*
 * XREFs of LocalGetStringForControl @ 0x1406CB830
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAFA0 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     wcsncpy_s @ 0x1401537E4 (wcsncpy_s.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 */

__int64 __fastcall LocalGetStringForControl(unsigned __int16 a1, int a2, wchar_t **a3)
{
  unsigned int v6; // edi
  _DWORD *v8; // rbx
  unsigned int i; // esi
  unsigned int v10; // ecx
  wchar_t *v11; // rax
  wchar_t Src[256]; // [rsp+20h] [rbp-238h] BYREF

  v6 = 0;
  if ( !a3 )
    return 87LL;
  *a3 = 0LL;
  v8 = &unk_14025D3FC;
  for ( i = 0; i < 6; ++i )
  {
    if ( (a2 & v8[1]) == a2 )
    {
      v10 = *(v8 - 1);
      if ( v10 + v6 >= 0x100 )
        return 87LL;
      if ( (a1 & *v8) != 0 )
      {
        wcsncpy_s(&Src[v6], 256LL - v6, *(const wchar_t **)(v8 - 3), v10);
        v6 += *(v8 - 1);
      }
    }
    v8 += 6;
  }
  if ( 2 * (unsigned __int64)v6 >= 0x200 )
    _report_rangecheckfailure();
  Src[v6] = 0;
  if ( !v6 )
    return 0LL;
  v11 = (wchar_t *)SddlpAlloc(2LL * (v6 + 1));
  *a3 = v11;
  if ( v11 )
  {
    wcscpy_s(v11, (2 * (unsigned __int64)(v6 + 1)) >> 1, Src);
    return 0LL;
  }
  return 8LL;
}
