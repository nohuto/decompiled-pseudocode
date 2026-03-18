/*
 * XREFs of NtUserfnCOPYDATA @ 0x1C00F9260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnCOPYDATA(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int64 v7; // r10
  unsigned __int64 v8; // rdx
  __int128 v10; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-10h]

  v7 = 0LL;
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (__int128 *)W32UserProbeAddress;
    v10 = *a4;
    v11 = *((_QWORD *)a4 + 2);
    if ( v11 )
    {
      if ( DWORD2(v10) )
      {
        v8 = v11 + DWORD2(v10);
        if ( v8 > W32UserProbeAddress || v8 < v11 )
          *W32UserProbeAddress = 0;
      }
    }
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v10,
             a5);
  }
  return v7;
}
