/*
 * XREFs of SdbpCheckDll @ 0x140237C10
 * Callers:
 *     KiSwInterruptDispatch @ 0x14014DF2C (KiSwInterruptDispatch.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140228000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14023706C @ 0x14023706C (sub_14023706C.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckDll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64),
        _QWORD *a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  do
    *a7-- = 0LL;
  while ( a7 >= &retaddr );
  return a6(a1);
}
