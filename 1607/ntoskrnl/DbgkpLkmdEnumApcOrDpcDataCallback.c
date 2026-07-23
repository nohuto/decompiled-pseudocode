/*
 * XREFs of DbgkpLkmdEnumApcOrDpcDataCallback @ 0x1401B74A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpLkmdEnumApcOrDpcDataCallback(__int64 a1, unsigned int a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(a3 + 5184))(
           a3 + 5120,
           a1,
           a2,
           0LL,
           0LL,
           0LL);
}
