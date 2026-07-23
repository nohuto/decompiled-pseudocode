/*
 * XREFs of PopConsoleLockPowerSettingCallback @ 0x14056DAD8
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopApplyPolicy @ 0x14056E518 (PopApplyPolicy.c)
 */

__int64 __fastcall PopConsoleLockPowerSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  _OWORD v21[5]; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v22; // [rsp+70h] [rbp-A8h]
  __int128 v23; // [rsp+80h] [rbp-98h]
  __int128 v24; // [rsp+90h] [rbp-88h]
  __int128 v25; // [rsp+A0h] [rbp-78h]
  __int128 v26; // [rsp+B0h] [rbp-68h]
  __int128 v27; // [rsp+C0h] [rbp-58h]
  __int128 v28; // [rsp+D0h] [rbp-48h]
  __int128 v29; // [rsp+E0h] [rbp-38h]
  __int128 v30; // [rsp+F0h] [rbp-28h]
  __int64 v31; // [rsp+100h] [rbp-18h]

  PopAcquirePolicyLock();
  v6 = *((_OWORD *)PopPolicy + 1);
  v21[0] = *(_OWORD *)PopPolicy;
  v7 = *((_OWORD *)PopPolicy + 2);
  v21[1] = v6;
  v8 = *((_OWORD *)PopPolicy + 3);
  v21[2] = v7;
  v9 = *((_OWORD *)PopPolicy + 4);
  v21[3] = v8;
  v10 = *((_OWORD *)PopPolicy + 5);
  v21[4] = v9;
  v11 = *((_OWORD *)PopPolicy + 6);
  v22 = v10;
  v23 = v11;
  v24 = *((_OWORD *)PopPolicy + 7);
  v12 = *((_OWORD *)PopPolicy + 9);
  v25 = *((_OWORD *)PopPolicy + 8);
  v13 = *((_OWORD *)PopPolicy + 10);
  v26 = v12;
  v14 = *((_OWORD *)PopPolicy + 11);
  v27 = v13;
  v15 = *((_OWORD *)PopPolicy + 12);
  v28 = v14;
  v16 = *((_OWORD *)PopPolicy + 13);
  v17 = *((_QWORD *)PopPolicy + 28);
  v29 = v15;
  v30 = v16;
  v31 = v17;
  v18 = *(_QWORD *)&GUID_LOCK_CONSOLE_ON_WAKE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LOCK_CONSOLE_ON_WAKE.Data1 == *a1 )
    v18 = *(_QWORD *)GUID_LOCK_CONSOLE_ON_WAKE.Data4 - a1[1];
  if ( !v18 && a3 == 4 && a2 )
  {
    LODWORD(v22) = *a2;
    LOBYTE(v18) = 1;
    v19 = PopApplyPolicy(v18, 0LL, v21, 232LL);
  }
  else
  {
    v19 = -1073741811;
  }
  PopReleasePolicyLock();
  return v19;
}
