/*
 * XREFs of IopIoRateStartRateControl @ 0x1400B4B80
 * Callers:
 *     IoStartIoRateControl @ 0x1400B4A9C (IoStartIoRateControl.c)
 * Callees:
 *     IoDiskIoAttributionQuery @ 0x1400B404C (IoDiskIoAttributionQuery.c)
 *     ExGetExtensionTable @ 0x1400B4CBC (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall IopIoRateStartRateControl(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 (__fastcall **ExtensionTable)(__int64, __int64, _QWORD, __int64, _QWORD *, _QWORD, __int64 *, __int64); // rbx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp-61h] BYREF
  __int128 v15; // [rsp+48h] [rbp-59h] BYREF
  __int64 v16; // [rsp+60h] [rbp-41h]
  __int128 v17; // [rsp+68h] [rbp-39h] BYREF
  __m128i v18; // [rsp+78h] [rbp-29h]
  _QWORD v19[4]; // [rsp+88h] [rbp-19h] BYREF

  v14 = 0LL;
  ExtensionTable = (__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *, _QWORD, __int64 *, __int64))ExGetExtensionTable(IopIoRateExtensionHost);
  if ( ExtensionTable )
  {
    IoDiskIoAttributionQuery(a5, &v17, &v15);
    v19[2] = v16 + v18.m128i_i64[0];
    v19[3] = v16 + _mm_srli_si128(v18, 8).m128i_u64[0];
    v19[0] = v15 + v17;
    v19[1] = *((_QWORD *)&v15 + 1) + *((_QWORD *)&v17 + 1);
    v11 = (*ExtensionTable)(a1, 15LL, a3, a4, v19, *(_QWORD *)(a5 + 24), &v14, a7);
    if ( v11 >= 0 )
    {
      v12 = v14;
      v14 = 0LL;
      v11 = 0;
      *a6 = v12;
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v11;
}
