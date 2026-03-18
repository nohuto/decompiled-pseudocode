/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C0125400
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C01255F0 (xxxSetClassLongPtr.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  int *v13; // rdx
  int v14; // r8d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v20; // [rsp+20h] [rbp-98h]
  __int128 v21; // [rsp+38h] [rbp-80h] BYREF
  int *v22; // [rsp+48h] [rbp-70h]
  int v23; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-58h]
  unsigned __int64 v25; // [rsp+68h] [rbp-50h]
  _QWORD v26[3]; // [rsp+80h] [rbp-38h] BYREF
  __int128 v27; // [rsp+98h] [rbp-20h]
  int *v28; // [rsp+A8h] [rbp-10h]

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v26[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v26;
    v26[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    if ( a2 == -26 )
    {
      if ( (a3 & 0x10000) != 0 )
      {
        UserSetLastError(13LL);
        v11 = 0LL;
LABEL_24:
        ThreadUnlock1(v18, v17);
        goto LABEL_25;
      }
    }
    else if ( a2 == -8 )
    {
      v25 = a3;
      v12 = a3;
      if ( a3 + 24 < a3 || a3 + 24 > W32UserProbeAddress )
        v12 = W32UserProbeAddress;
      v27 = *(_OWORD *)v12;
      v28 = *(int **)(v12 + 16);
      v21 = v27;
      v22 = v28;
      v13 = v28;
      if ( (unsigned __int64)v28 >= W32UserProbeAddress )
        v13 = (int *)W32UserProbeAddress;
      v14 = *v13;
      v20 = *v13;
      v23 = *v13;
      v15 = *((_QWORD *)v13 + 1);
      v24 = v15;
      if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (v15 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int16)v14 + v15 + 2;
        if ( v16 >= W32UserProbeAddress || (unsigned __int16)v14 > HIWORD(v20) || (v14 & 1) != 0 || v16 <= v15 )
          *W32UserProbeAddress = 0;
      }
      v22 = &v23;
      v11 = xxxSetClassLongPtr(v10, 4294967288LL, &v21, a4);
      v22 = 0LL;
      v18 = W32UserProbeAddress;
      if ( a3 >= W32UserProbeAddress )
        a3 = W32UserProbeAddress;
      *(_OWORD *)a3 = v21;
      *(_QWORD *)(a3 + 16) = v22;
      goto LABEL_24;
    }
    v11 = xxxSetClassLongPtr(v10, a2, a3, a4);
    goto LABEL_24;
  }
  v11 = 0LL;
LABEL_25:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v11;
}
