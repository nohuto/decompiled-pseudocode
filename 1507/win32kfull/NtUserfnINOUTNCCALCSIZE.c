/*
 * XREFs of NtUserfnINOUTNCCALCSIZE @ 0x1C00DE430
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall NtUserfnINOUTNCCALCSIZE(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  _QWORD *v10; // rdi
  _OWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 result; // rax
  _QWORD v14[13]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v15; // [rsp+B0h] [rbp-58h]
  __int128 v16; // [rsp+B8h] [rbp-50h]

  memset(&v14[7], 0, 0x30uLL);
  v15 = 0LL;
  memset(v14, 0, 0x28uLL);
  v10 = 0LL;
  v16 = 0uLL;
  if ( a3 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    *a4 = *a4;
    a4[1] = a4[1];
    a4[2] = a4[2];
    *((_QWORD *)a4 + 6) = *((_QWORD *)a4 + 6);
    *(_OWORD *)&v14[7] = *a4;
    *(_OWORD *)&v14[9] = a4[1];
    *(_OWORD *)&v14[11] = a4[2];
    v15 = (_QWORD *)*((_QWORD *)a4 + 6);
    v12 = v15;
    if ( (unsigned __int64)v15 >= W32UserProbeAddress )
    {
      *W32UserProbeAddress = 0;
      v12 = v15;
    }
    *(_OWORD *)v12 = *(_OWORD *)v12;
    *((_OWORD *)v12 + 1) = *((_OWORD *)v12 + 1);
    v12[4] = v12[4];
    v10 = v15;
    *(_OWORD *)v14 = *(_OWORD *)v15;
    *(_OWORD *)&v14[2] = *((_OWORD *)v15 + 1);
    v14[4] = v15[4];
    v15 = v14;
  }
  else
  {
    v11 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v11 = (_OWORD *)W32UserProbeAddress;
    *v11 = *v11;
    v16 = *a4;
  }
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3);
  if ( a3 )
  {
    *a4 = *(_OWORD *)&v14[7];
    a4[1] = *(_OWORD *)&v14[9];
    a4[2] = *(_OWORD *)&v14[11];
    *((_QWORD *)a4 + 6) = v10;
    *(_OWORD *)v10 = *(_OWORD *)v14;
    *((_OWORD *)v10 + 1) = *(_OWORD *)&v14[2];
    v10[4] = v14[4];
  }
  else
  {
    *a4 = v16;
  }
  return result;
}
