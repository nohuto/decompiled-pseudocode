/*
 * XREFs of _SysCtxInternalEnumSubkeyCallback @ 0x1401373A0
 * Callers:
 *     _RegRtlEnumKeyWithCallback @ 0x140531990 (_RegRtlEnumKeyWithCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SysCtxInternalEnumSubkeyCallback(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(a3 + 8))(
           *(_QWORD *)a3,
           a1,
           a2,
           *(_QWORD *)(a3 + 16));
}
