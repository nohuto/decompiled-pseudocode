/*
 * XREFs of RtlInitializeNtUserPfn @ 0x1800968C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 */

__int64 __fastcall RtlInitializeNtUserPfn(_OWORD *a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  ULONG_PTR v6; // rbp
  __int64 v9; // rsi
  __int128 v10; // xmm0
  _OWORD *v11; // rdi
  __int128 v12; // xmm1
  _OWORD *v13; // rbx

  v6 = LdrSystemDllInitBlock.Wow64SharedInformation[9];
  v9 = *(_QWORD *)_guard_check_icall_fptr;
  if ( byte_1801631C8 || a2 != 184 || a4 != 184 || a6 != 88 )
    return 3221225485LL;
  LdrProtectMrdata(0);
  *(_OWORD *)NtUserPfn = *a1;
  *(_OWORD *)&NtUserPfn[2] = a1[1];
  *(_OWORD *)&NtUserPfn[4] = a1[2];
  *(_OWORD *)&NtUserPfn[6] = a1[3];
  *(_OWORD *)&NtUserPfn[8] = a1[4];
  *(_OWORD *)&NtUserPfn[10] = a1[5];
  *(_OWORD *)&NtUserPfn[12] = a1[6];
  v10 = a1[7];
  v11 = a1 + 8;
  *(_OWORD *)&NtUserPfn[14] = v10;
  *(_OWORD *)&NtUserPfn[16] = *v11;
  *(_OWORD *)&NtUserPfn[18] = v11[1];
  *(_OWORD *)&NtUserPfn[20] = v11[2];
  NtUserPfn[22] = (void (__fastcall __noreturn *)())*((_QWORD *)v11 + 6);
  *(_OWORD *)&NtUserPfn[23] = *a3;
  *(_OWORD *)&NtUserPfn[25] = a3[1];
  *(_OWORD *)&NtUserPfn[27] = a3[2];
  *(_OWORD *)&NtUserPfn[29] = a3[3];
  *(_OWORD *)&NtUserPfn[31] = a3[4];
  *(_OWORD *)&NtUserPfn[33] = a3[5];
  *(_OWORD *)&NtUserPfn[35] = a3[6];
  v12 = a3[7];
  v13 = a3 + 8;
  *(_OWORD *)&NtUserPfn[37] = v12;
  *(_OWORD *)&NtUserPfn[39] = *v13;
  *(_OWORD *)&NtUserPfn[41] = v13[1];
  *(_OWORD *)&NtUserPfn[43] = v13[2];
  NtUserPfn[45] = (void (__fastcall __noreturn *)())*((_QWORD *)v13 + 6);
  *(_OWORD *)off_180163170 = *(_OWORD *)a5;
  *(_OWORD *)off_180163180 = *(_OWORD *)(a5 + 16);
  *(_OWORD *)off_180163190 = *(_OWORD *)(a5 + 32);
  *(_OWORD *)off_1801631A0 = *(_OWORD *)(a5 + 48);
  *(_OWORD *)off_1801631B0 = *(_OWORD *)(a5 + 64);
  off_1801631C0 = *(void (__fastcall __noreturn **)())(a5 + 80);
  byte_1801631C8 = 1;
  LdrProtectMrdata(1);
  if ( v6 != LdrSystemDllInitBlock.Wow64SharedInformation[9] || v9 != *(_QWORD *)_guard_check_icall_fptr )
    __fastfail(0x13u);
  return 0LL;
}
