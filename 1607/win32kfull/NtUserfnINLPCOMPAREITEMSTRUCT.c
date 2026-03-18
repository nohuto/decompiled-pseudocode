/*
 * XREFs of NtUserfnINLPCOMPAREITEMSTRUCT @ 0x1C021CAE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPCOMPAREITEMSTRUCT(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  _OWORD v7[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+68h] [rbp-10h]

  if ( a4 >= W32UserProbeAddress )
    a4 = W32UserProbeAddress;
  v7[0] = *(_OWORD *)a4;
  v7[1] = *(_OWORD *)(a4 + 16);
  v7[2] = *(_OWORD *)(a4 + 32);
  v8 = *(_QWORD *)(a4 + 48);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v7,
           a5);
}
