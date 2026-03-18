/*
 * XREFs of DestroyThreadHidObjects @ 0x140171050
 * Callers:
 *     <none>
 * Callees:
 *     EditionUpdateRawMouseMode @ 0x1400548C0 (EditionUpdateRawMouseMode.c)
 *     ValidatePtiMouse @ 0x140170ED4 (ValidatePtiMouse.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x140170EF4 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     FreeHidProcessRequest @ 0x140171304 (FreeHidProcessRequest.c)
 *     ??0?$ObjectLockRecursive@V?$SGLOCKgHidCountersLock@UtagObjLock@@@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAV?$SGLOCKgHidCountersLock@UtagObjLock@@@@@Z @ 0x140171FE8 (--0-$ObjectLockRecursive@V-$SGLOCKgHidCountersLock@UtagObjLock@@@@@-$DomainExclusiveRecursive@$$.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x14029A994 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

char __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  struct tagPROCESS_HID_REQUEST *v7; // rsi
  struct tagPROCESS_HID_REQUEST *v8; // rcx
  __int64 v9; // rdx
  struct tagPROCESS_HID_REQUEST *v10; // rsi
  struct tagPROCESS_HID_REQUEST *v11; // rsi
  struct tagPROCESS_HID_REQUEST *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  tagObjLock *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  const struct tagPROCESSINFO *v27; // rcx
  struct tagPROCESSINFO *v28; // rcx
  struct tagPROCESS_HID_REQUEST *v29; // rax
  struct tagPROCESS_HID_REQUEST *v30; // rcx
  __int64 v31; // rdx
  unsigned int v33; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v34[16]; // [rsp+28h] [rbp-50h] BYREF
  tagObjLock *v35; // [rsp+38h] [rbp-40h]
  char v36; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 824LL);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) == a1 )
    {
      HMAssignmentUnlock(v2 + 72);
      *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      if ( (*(_DWORD *)(v2 + 100) & 0x40) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v34);
        UserSessionState = W32GetUserSessionState(v15, v14);
        --*(_DWORD *)(UserSessionState + 16840);
        if ( v36 && v35 )
          tagObjLock::UnLockExclusive(v35);
        *(_DWORD *)(v2 + 100) &= ~0x40u;
      }
    }
  }
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && *(_QWORD *)(v4 + 16) == a1 )
  {
    HMAssignmentUnlock(v2 + 64);
    *(_DWORD *)(v2 + 100) &= 0xFFFFF7FC;
    if ( (*(_DWORD *)(v2 + 100) & 4) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>::ObjectLockRecursive<SGLOCKgHidCountersLock<tagObjLock>>(v34);
      v26 = W32GetUserSessionState(v25, v24);
      --*(_DWORD *)(v26 + 16844);
      if ( v36 )
      {
        v18 = v35;
        if ( v35 )
          tagObjLock::UnLockExclusive(v35);
      }
      *(_DWORD *)(v2 + 100) &= ~4u;
    }
    v19 = W32GetUserSessionState(v18, v17);
    if ( ValidatePtiMouse(*(_QWORD *)(v19 + 18928)) == a1 )
    {
      v22 = W32GetUserSessionState(v21, v20);
      EditionUpdateRawMouseMode(*(_QWORD *)(v22 + 18928), v23);
    }
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  v5 = *(_QWORD *)(a1 + 1360);
  if ( (v5 & 0x200000) != 0 )
  {
    v27 = *(const struct tagPROCESSINFO **)(a1 + 456);
    *(_QWORD *)(a1 + 1360) = v5 & 0xFFFFFFFFFFDFFFFFuLL;
    if ( !(unsigned int)HasRawKeyboardPerThreadRegistration(v27) )
    {
      v33 = 0;
      v29 = SearchProcessHidRequest(v28, 1u, 6u, &v33);
      if ( v29 )
      {
        FreeHidProcessRequest(v29);
        *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      }
    }
  }
  LOBYTE(v6) = 0;
  v7 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 16);
  while ( v7 != (struct tagPROCESS_HID_REQUEST *)(v2 + 16) )
  {
    v8 = v7;
    v7 = *(struct tagPROCESS_HID_REQUEST **)v7;
    v9 = *((_QWORD *)v8 + 4);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 16) == a1 )
      {
        FreeHidProcessRequest(v8);
        LOBYTE(v6) = 1;
      }
    }
  }
  v10 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 32);
  while ( v10 != (struct tagPROCESS_HID_REQUEST *)(v2 + 32) )
  {
    v12 = v10;
    v10 = *(struct tagPROCESS_HID_REQUEST **)v10;
    v13 = *((_QWORD *)v12 + 4);
    if ( v13 && *(_QWORD *)(v13 + 16) == a1 )
    {
      FreeHidProcessRequest(v12);
      LOBYTE(v6) = 1;
    }
  }
  v11 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 48);
  while ( v11 != (struct tagPROCESS_HID_REQUEST *)(v2 + 48) )
  {
    v30 = v11;
    v11 = *(struct tagPROCESS_HID_REQUEST **)v11;
    v31 = *((_QWORD *)v30 + 4);
    if ( v31 && *(_QWORD *)(v31 + 16) == a1 )
    {
      FreeHidProcessRequest(v30);
      LOBYTE(v6) = 1;
    }
  }
  if ( (_BYTE)v6 )
  {
    v6 = *(_QWORD *)(a1 + 456);
    *(_QWORD *)(v6 + 808) |= 0x8000000uLL;
  }
  return v6;
}
