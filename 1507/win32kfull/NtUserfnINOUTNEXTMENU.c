/*
 * XREFs of NtUserfnINOUTNEXTMENU @ 0x1C0222B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTNEXTMENU(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int64 v7; // xmm1_8
  __int64 result; // rax
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h]

  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    *W32UserProbeAddress = 0;
  *a4 = *a4;
  v7 = *((_QWORD *)a4 + 2);
  *((_QWORD *)a4 + 2) = v7;
  v9 = *a4;
  v10 = v7;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v9,
             a5);
  *a4 = v9;
  *((_QWORD *)a4 + 2) = v10;
  return result;
}
