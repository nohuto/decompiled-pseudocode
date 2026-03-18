/*
 * XREFs of NtUserTranslateAccelerator @ 0x1C00412F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxTranslateAccelerator @ 0x1C00414D0 (xxxTranslateAccelerator.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[3]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v17; // [rsp+58h] [rbp-40h]
  __int128 v18; // [rsp+68h] [rbp-30h]
  __int128 v19; // [rsp+78h] [rbp-20h]

  EnterCrit(1LL);
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (__int128 *)W32UserProbeAddress;
  v17 = *a3;
  v18 = a3[1];
  v19 = a3[2];
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    LOBYTE(v6) = 8;
    v6 = HMValidateHandle(a2, v6);
    if ( v6 )
    {
      v15[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v15;
      v15[1] = v8;
      ++*(_DWORD *)(v8 + 8);
      v16[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v16;
      v16[1] = v6;
      ++*(_DWORD *)(v6 + 8);
      v9 = xxxTranslateAccelerator((struct tagWND *)v8);
      ThreadUnlock1(v11, v10);
      ThreadUnlock1(v13, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v9;
}
