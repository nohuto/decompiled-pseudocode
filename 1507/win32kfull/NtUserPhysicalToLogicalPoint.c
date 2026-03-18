/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C0085400
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     DCEPtInRect @ 0x1C0085628 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 CurrentProcessWin32Process; // rax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h]

  v19 = 0LL;
  EnterCrit(1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v8 = (__int64 *)W32UserProbeAddress;
    v18 = *v8;
    v9 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440);
    if ( (*(_BYTE *)(v9 + 224) & 1) == 0 )
    {
      v10 = *(_QWORD *)(v7 + 16);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      v12 = SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v10 + 384));
      v13 = v19;
      if ( !v12 )
        v13 = v18;
      v19 = v13;
    }
    TransformPointBetweenCoordinateSpaces(&v18, &v18, v7, 0LL);
    if ( (unsigned int)DCEPtInRect(v7 + 112, v18) )
    {
      v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440);
      if ( (*(_BYTE *)(v6 + 224) & 1) == 0 )
      {
        v14 = *(_QWORD *)(v7 + 16);
        v15 = PsGetCurrentProcessWin32Process(v6);
        v6 = (unsigned int)SameCoordinateSpace(v15, *(_QWORD *)(v14 + 384));
        v16 = v18;
        if ( !(_DWORD)v6 )
          v16 = v19;
        v18 = v16;
      }
      v5 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v5 = (__int64 *)W32UserProbeAddress;
      *v5 = *v5;
      *a2 = v18;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
