/*
 * XREFs of NtUserfnINLPUAHDRAWMENU @ 0x1C00FF000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPUAHDRAWMENU(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h]

  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (__int128 *)W32UserProbeAddress;
  v7 = *a4;
  v8 = *((_QWORD *)a4 + 2);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           &v7,
           a5);
}
