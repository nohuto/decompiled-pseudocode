/*
 * XREFs of NtUserSetClassLongPtr @ 0x1C0103B10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSetClassLongPtr @ 0x1C0103BE0 (xxxSetClassLongPtr.c)
 */

__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, unsigned int a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v15; // rdx
  int *v16; // rdx
  int v17; // r9d
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  int v20; // [rsp+28h] [rbp-A0h]
  __int128 v21; // [rsp+40h] [rbp-88h] BYREF
  int *v22; // [rsp+50h] [rbp-78h]
  int v23; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-60h]
  unsigned __int64 v25; // [rsp+70h] [rbp-58h]
  _QWORD v26[4]; // [rsp+80h] [rbp-48h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-28h]
  int *v28; // [rsp+B0h] [rbp-18h]

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v11 = 0LL;
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
        UserSetLastError(13);
        goto LABEL_5;
      }
    }
    else if ( a2 == -8 )
    {
      v25 = a3;
      v15 = a3;
      if ( a3 + 24 < a3 || a3 + 24 > W32UserProbeAddress )
        v15 = W32UserProbeAddress;
      v27 = *(_OWORD *)v15;
      v28 = *(int **)(v15 + 16);
      v21 = v27;
      v22 = v28;
      v16 = v28;
      if ( (unsigned __int64)v28 >= W32UserProbeAddress )
        v16 = (int *)W32UserProbeAddress;
      v17 = *v16;
      v20 = *v16;
      v23 = *v16;
      v18 = *((_QWORD *)v16 + 1);
      v24 = v18;
      if ( (v18 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (v18 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = (unsigned __int16)v17 + v18 + 2;
        if ( v19 >= W32UserProbeAddress || (unsigned __int16)v17 > HIWORD(v20) || v19 <= v18 )
          *W32UserProbeAddress = 0;
      }
      v22 = &v23;
      v11 = xxxSetClassLongPtr(v10, 4294967288LL, &v21, a4);
      v13 = W32UserProbeAddress;
      if ( a3 >= W32UserProbeAddress )
        a3 = W32UserProbeAddress;
      *(_OWORD *)a3 = v21;
      *(_QWORD *)(a3 + 16) = v22;
      goto LABEL_5;
    }
    v11 = xxxSetClassLongPtr(v10, a2, a3, a4);
LABEL_5:
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v11;
}
