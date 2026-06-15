/*
 * XREFs of __scrt_initialize_onexit_tables @ 0x180036244
 * Callers:
 *     __scrt_dllmain_before_initialize_c @ 0x1800360D0 (__scrt_dllmain_before_initialize_c.c)
 * Callees:
 *     __scrt_fastfail @ 0x180036850 (__scrt_fastfail.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180036C1C (__scrt_is_ucrt_dll_in_use.c)
 *     _initialize_onexit_table @ 0x180036CAE (_initialize_onexit_table.c)
 */

bool __fastcall _scrt_initialize_onexit_tables(unsigned int a1)
{
  bool result; // al
  _PVFV *v3; // r8
  __int128 v4; // [rsp+20h] [rbp-20h]

  if ( a1 > 1 )
  {
    _scrt_fastfail(5LL);
    JUMPOUT(0x18003630CLL);
  }
  if ( !(unsigned int)_scrt_is_ucrt_dll_in_use() || a1 )
  {
    result = 1;
    v3 = (_PVFV *)(_security_cookie ^ __ROR8__(-1LL, 64 - ((unsigned __int8)_security_cookie & 0x3Fu)));
    *(_QWORD *)&v4 = v3;
    *((_QWORD *)&v4 + 1) = v3;
    *(_OWORD *)&Table._first = v4;
    *(_QWORD *)&v4 = v3;
    *((_QWORD *)&v4 + 1) = v3;
    Table._end = v3;
    *(_OWORD *)&stru_1800CA6D8._first = v4;
    stru_1800CA6D8._end = v3;
  }
  else
  {
    return !initialize_onexit_table(&Table) && initialize_onexit_table(&stru_1800CA6D8) == 0;
  }
  return result;
}
