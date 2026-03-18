/*
 * XREFs of NtUserfnINLPWINDOWPOS @ 0x1C00EC030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPWINDOWPOS(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, char a6)
{
  _OWORD v7[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h]

  if ( a4 >= W32UserProbeAddress )
    a4 = W32UserProbeAddress;
  v7[0] = *(_OWORD *)a4;
  v7[1] = *(_OWORD *)(a4 + 16);
  v8 = *(_QWORD *)(a4 + 32);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v7,
           a5);
}
