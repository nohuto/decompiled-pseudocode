/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180025BA4
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x180025B60 (__scrt_dllmain_before_initialize_c.c)
 * Callees:
 *     __scrt_fastfail @ 0x1800261EC (__scrt_fastfail.c)
 *     _initialize_onexit_table @ 0x180026822 (_initialize_onexit_table.c)
 */

bool __fastcall _scrt_initialize_onexit_tables(int a1)
{
  bool result; // al
  _PVFV *v2; // r8
  __int128 v3; // [rsp+20h] [rbp-20h]

  if ( a1 )
  {
    if ( a1 != 1 )
    {
      _scrt_fastfail(5LL);
      JUMPOUT(0x180025C57LL);
    }
    result = 1;
    v2 = (_PVFV *)(_security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)));
    *(_QWORD *)&v3 = v2;
    *((_QWORD *)&v3 + 1) = v2;
    *(_OWORD *)&Table._first = v3;
    *(_QWORD *)&v3 = v2;
    *((_QWORD *)&v3 + 1) = v2;
    Table._end = v2;
    *(_OWORD *)&stru_180037250._first = v3;
    stru_180037250._end = v2;
  }
  else
  {
    return !initialize_onexit_table(&Table) && initialize_onexit_table(&stru_180037250) == 0;
  }
  return result;
}
