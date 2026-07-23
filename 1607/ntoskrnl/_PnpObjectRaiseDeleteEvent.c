/*
 * XREFs of _PnpObjectRaiseDeleteEvent @ 0x1406DC310
 * Callers:
 *     _PnpDeleteObjectDispatch @ 0x1406DB0D0 (_PnpDeleteObjectDispatch.c)
 *     _CmRaiseDeleteEvent @ 0x1406DC09C (_CmRaiseDeleteEvent.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall PnpObjectRaiseDeleteEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3))(__int64, __int64, __int64, __int64, _QWORD *)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, _QWORD *); // rax
  _QWORD v4[5]; // [rsp+30h] [rbp-28h] BYREF

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 320);
  if ( result )
  {
    v4[0] = 0LL;
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD *))result(a1, a2, a3, 3LL, v4);
  }
  return result;
}
