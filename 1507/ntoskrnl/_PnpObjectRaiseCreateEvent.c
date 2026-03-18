/*
 * XREFs of _PnpObjectRaiseCreateEvent @ 0x14058B7A8
 * Callers:
 *     _CmRaiseCreateEvent @ 0x14058B750 (_CmRaiseCreateEvent.c)
 *     _PnpCreateObjectDispatch @ 0x140715994 (_PnpCreateObjectDispatch.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall PnpObjectRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(__int64, __int64, __int64, __int64, _QWORD *)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, _QWORD *); // rax
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 312);
  if ( result )
  {
    v5[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD *))result(a1, a2, a3, 2LL, v5);
  }
  return result;
}
