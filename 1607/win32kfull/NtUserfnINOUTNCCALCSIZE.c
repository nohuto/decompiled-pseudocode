/*
 * XREFs of NtUserfnINOUTNCCALCSIZE @ 0x1C0100160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserfnINOUTNCCALCSIZE(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int64 v10; // rdi
  _OWORD *v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  _OWORD v14[7]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+B8h] [rbp-50h]

  memset((char *)&v14[3] + 8, 0, 0x38uLL);
  memset(v14, 0, 0x28uLL);
  v10 = 0LL;
  v15 = 0uLL;
  if ( a3 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    *a4 = *a4;
    a4[1] = a4[1];
    a4[2] = a4[2];
    *((_QWORD *)a4 + 6) = *((_QWORD *)a4 + 6);
    *(_OWORD *)((char *)&v14[3] + 8) = *a4;
    *(_OWORD *)((char *)&v14[4] + 8) = a4[1];
    *(_OWORD *)((char *)&v14[5] + 8) = a4[2];
    *((_QWORD *)&v14[6] + 1) = *((_QWORD *)a4 + 6);
    v12 = *((_QWORD *)&v14[6] + 1);
    if ( *((_QWORD *)&v14[6] + 1) >= W32UserProbeAddress )
    {
      *W32UserProbeAddress = 0;
      v12 = *((_QWORD *)&v14[6] + 1);
    }
    *(_OWORD *)v12 = *(_OWORD *)v12;
    *(_OWORD *)(v12 + 16) = *(_OWORD *)(v12 + 16);
    *(_QWORD *)(v12 + 32) = *(_QWORD *)(v12 + 32);
    v10 = *((_QWORD *)&v14[6] + 1);
    v14[0] = **((_OWORD **)&v14[6] + 1);
    v14[1] = *(_OWORD *)(*((_QWORD *)&v14[6] + 1) + 16LL);
    *(_QWORD *)&v14[2] = *(_QWORD *)(*((_QWORD *)&v14[6] + 1) + 32LL);
    *((_QWORD *)&v14[6] + 1) = v14;
  }
  else
  {
    v11 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v11 = (_OWORD *)W32UserProbeAddress;
    *v11 = *v11;
    v15 = *a4;
  }
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3);
  if ( a3 )
  {
    *a4 = *(_OWORD *)((char *)&v14[3] + 8);
    a4[1] = *(_OWORD *)((char *)&v14[4] + 8);
    a4[2] = *(_OWORD *)((char *)&v14[5] + 8);
    *((_QWORD *)a4 + 6) = v10;
    *(_OWORD *)v10 = v14[0];
    *(_OWORD *)(v10 + 16) = v14[1];
    *(_QWORD *)(v10 + 32) = *(_QWORD *)&v14[2];
  }
  else
  {
    *a4 = v15;
  }
  return result;
}
