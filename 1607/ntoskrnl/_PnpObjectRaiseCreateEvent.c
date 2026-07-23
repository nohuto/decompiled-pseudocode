/*
 * XREFs of _PnpObjectRaiseCreateEvent @ 0x1406DC2E4
 * Callers:
 *     _PnpCreateObjectDispatch @ 0x1406DAEB8 (_PnpCreateObjectDispatch.c)
 *     _CmRaiseCreateEvent @ 0x1406DC028 (_CmRaiseCreateEvent.c)
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

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 320);
  if ( result )
  {
    v5[0] = a4;
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD *))result(a1, a2, a3, 2LL, v5);
  }
  return result;
}
