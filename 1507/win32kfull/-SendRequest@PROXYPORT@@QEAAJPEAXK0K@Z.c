/*
 * XREFs of ?SendRequest@PROXYPORT@@QEAAJPEAXK0K@Z @ 0x1C02A2D60
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall PROXYPORT::SendRequest(PROXYPORT *this, void *a2, int a3, void *a4, unsigned int a5)
{
  __int64 result; // rax
  _QWORD v10[10]; // [rsp+28h] [rbp-E0h] BYREF
  _WORD v11[28]; // [rsp+78h] [rbp-90h] BYREF
  int v12; // [rsp+B0h] [rbp-58h]
  void *v13; // [rsp+B8h] [rbp-50h]

  memset(v10, 0, 0x48uLL);
  v10[0] = 0x800000480020LL;
  LODWORD(v10[5]) = a3;
  v10[6] = a2;
  v10[8] = a4;
  LODWORD(v10[7]) = a4 != 0LL ? a5 : 0;
  result = LpcRequestWaitReplyPort(**(_QWORD **)this, v10, v11);
  if ( (_DWORD)result == -1073741769 )
    *(_DWORD *)(*(_QWORD *)this + 52LL) = 0;
  if ( (int)result >= 0 )
  {
    if ( (v11[2] & 0x7FFF) != 2 )
      return 3221225473LL;
    if ( v11[0] != 32 )
      return 3221225473LL;
    if ( a4 != v13 )
      return 3221225473LL;
    result = (unsigned int)result;
    if ( a5 != v12 )
      return 3221225473LL;
  }
  return result;
}
