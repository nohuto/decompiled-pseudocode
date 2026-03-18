/*
 * XREFs of _PnpObjectRaiseDeleteEvent @ 0x140716C8C
 * Callers:
 *     _PnpDeleteObjectDispatch @ 0x140715BB0 (_PnpDeleteObjectDispatch.c)
 *     _CmRaiseDeleteEvent @ 0x140716AF4 (_CmRaiseDeleteEvent.c)
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

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(a1 + 312);
  if ( result )
  {
    v4[0] = 0LL;
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD *))result(a1, a2, a3, 3LL, v4);
  }
  return result;
}
