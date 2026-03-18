/*
 * XREFs of RequestInputSinkInfoFromPoint @ 0x1401F7E04
 * Callers:
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x1401A0CE0 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x14025F020 (NtUserCompositionInputSinkLuidFromPoint.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall RequestInputSinkInfoFromPoint(_OWORD *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // bl
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  LONG v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  _OWORD v52[7]; // [rsp+30h] [rbp-78h] BYREF

  v2 = 0;
  while ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 18792) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v5, v4) + 18836) != 1 )
    {
      *(_BYTE *)(W32GetUserSessionState(v7, v6) + 18836) = 1;
      UserSessionState = W32GetUserSessionState(v9, v8);
      *(_OWORD *)(UserSessionState + 19000) = *a1;
      *(_OWORD *)(UserSessionState + 19016) = a1[1];
      *(_OWORD *)(UserSessionState + 19032) = a1[2];
      *(_OWORD *)(UserSessionState + 19048) = a1[3];
      *(_OWORD *)(UserSessionState + 19064) = a1[4];
      *(_OWORD *)(UserSessionState + 19080) = a1[5];
      *(_OWORD *)(UserSessionState + 19096) = a1[6];
      if ( *(_DWORD *)(W32GetUserSessionState(v12, v11) + 64184) )
      {
        *(_DWORD *)(W32GetUserSessionState(v14, v13) + 64188) = 1;
        v40 = W32GetUserSessionState(v39, v38);
        KeSetEvent(*(PRKEVENT *)(v40 + 18808), 1, 0);
      }
      else
      {
        WakeMIT(2LL);
      }
      v17 = 0;
      v18 = W32GetUserSessionState(v16, v15);
      if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v18 + 16)) == 1 )
      {
        v17 = 1;
        LeaveMitRitHazardCrit();
      }
      UserSessionSwitchLeaveCrit(v19);
      v22 = W32GetUserSessionState(v21, v20);
      KeWaitForSingleObject(*(PVOID *)(v22 + 18848), UserRequest, 1, 1u, 0LL);
      EnterCrit(1LL, 0LL);
      if ( v17 )
        EnterMitRitHazardCrit();
      *(_DWORD *)(W32GetUserSessionState(v24, v23) + 64188) = 0;
      v2 = *(_DWORD *)(UserSessionState + 19016);
      if ( v2 )
      {
        *a1 = *(_OWORD *)(UserSessionState + 19000);
        a1[1] = *(_OWORD *)(UserSessionState + 19016);
        a1[2] = *(_OWORD *)(UserSessionState + 19032);
        a1[3] = *(_OWORD *)(UserSessionState + 19048);
        a1[4] = *(_OWORD *)(UserSessionState + 19064);
        a1[5] = *(_OWORD *)(UserSessionState + 19080);
        v32 = *(_OWORD *)(UserSessionState + 19096);
      }
      else
      {
        memset_0(v52, 0, sizeof(v52));
        v27 = v52[1];
        *a1 = v52[0];
        v28 = v52[2];
        a1[1] = v27;
        v29 = v52[3];
        a1[2] = v28;
        v30 = v52[4];
        a1[3] = v29;
        v31 = v52[5];
        a1[4] = v30;
        v32 = v52[6];
        a1[5] = v31;
      }
      a1[6] = v32;
      *(_BYTE *)(W32GetUserSessionState(v26, v25) + 18836) = 0;
      if ( *(_DWORD *)(W32GetUserSessionState(v34, v33) + 18832) )
      {
        v46 = *(_DWORD *)(W32GetUserSessionState(v36, v35) + 18832);
        v49 = W32GetUserSessionState(v48, v47);
        KeReleaseSemaphore(*(PRKSEMAPHORE *)(v49 + 18824), 0, v46, 0);
        *(_DWORD *)(W32GetUserSessionState(v51, v50) + 18832) = 0;
      }
      return v2;
    }
    v41 = W32GetUserSessionState(v7, v6);
    ++*(_DWORD *)(v41 + 18832);
    UserSessionSwitchLeaveCrit(v42);
    v45 = W32GetUserSessionState(v44, v43);
    KeWaitForSingleObject(*(PVOID *)(v45 + 18824), UserRequest, 0, 0, 0LL);
    EnterCrit(1LL, 0LL);
  }
  return v2;
}
