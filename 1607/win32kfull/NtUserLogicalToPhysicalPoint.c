/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C00FB600
 * Callers:
 *     <none>
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     DCEPtInRect @ 0x1C00FB9D8 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // edi
  __int64 *v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 *v10; // rax
  __int64 v11; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // esi
  __int64 v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v28; // ebx
  __int64 v29; // [rsp+90h] [rbp+18h] BYREF
  int v30; // [rsp+98h] [rbp+20h] BYREF
  int v31; // [rsp+9Ch] [rbp+24h]

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v10 = (__int64 *)W32UserProbeAddress;
    v29 = *v10;
    v11 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v5, v7, v8);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 432) + 224LL) & 1) != 0 )
      goto LABEL_29;
    v16 = 0LL;
    v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v13, v14, v15);
    if ( v17 )
      v16 = *v17;
    if ( (*(_BYTE *)(*(_QWORD *)(v16 + 432) + 224LL) & 0x20) != 0 )
      goto LABEL_29;
    LOBYTE(v21) = 18;
    v22 = 0LL;
    v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v18, v19, v20);
    if ( v23 )
      v22 = *v23;
    if ( v22 )
    {
      if ( *(_QWORD *)(v22 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(v22);
      if ( *(_DWORD *)(v22 + 340) )
      {
        v21 = *(_DWORD *)(v22 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25, v24);
        if ( CurrentProcessWin32Process )
          v21 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
    if ( (((unsigned __int8)v21 ^ *(_BYTE *)(v9 + 352)) & 0xF) == 0 )
    {
LABEL_29:
      v28 = DCEPtInRect(v9 + 112, v29);
      TransformPointBetweenCoordinateSpaces(&v29, &v29, 0LL, v9);
      if ( !v28 )
        goto LABEL_27;
    }
    else
    {
      TransformPointBetweenCoordinateSpaces(&v30, &v29, v9, 0LL);
      v6 = (_DWORD *)(v9 + 112);
      if ( v9 == -112
        || v30 < *v6
        || v30 > *(_DWORD *)(v9 + 120)
        || v31 < *(_DWORD *)(v9 + 116)
        || v31 > *(_DWORD *)(v9 + 124) )
      {
        goto LABEL_27;
      }
    }
    v5 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v5 = (__int64 *)W32UserProbeAddress;
    *v5 = *v5;
    *a2 = v29;
    v4 = 1;
  }
LABEL_27:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
