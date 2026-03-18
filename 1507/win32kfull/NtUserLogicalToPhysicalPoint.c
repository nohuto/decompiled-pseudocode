/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C0084200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     DCEPtInRect @ 0x1C0085628 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // r14
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  int v14; // edx
  int v15; // ecx
  int v17; // ebx
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  int v19; // [rsp+98h] [rbp+20h] BYREF
  int v20; // [rsp+9Ch] [rbp+24h]

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
    v9 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 440) + 224LL) & 1) != 0 )
      goto LABEL_22;
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 384LL);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
    if ( !CurrentProcessWin32Process )
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
    if ( !v11 )
      v11 = PsGetCurrentProcessWin32Process(v12);
    v14 = *(_DWORD *)(CurrentProcessWin32Process + 776);
    v15 = *(_DWORD *)(v11 + 776);
    if ( ((v14 ^ v15) & 0x4000) != 0 || (((unsigned __int16)v14 ^ (unsigned __int16)v15) & 0x2000) != 0 )
    {
      TransformPointBetweenCoordinateSpaces(&v19, &v18, v7, 0LL);
      v6 = (_DWORD *)(v7 + 112);
      if ( v7 == -112
        || v19 < *v6
        || v19 > *(_DWORD *)(v7 + 120)
        || v20 < *(_DWORD *)(v7 + 116)
        || v20 > *(_DWORD *)(v7 + 124) )
      {
        goto LABEL_21;
      }
    }
    else
    {
LABEL_22:
      v17 = DCEPtInRect(v7 + 112, v18);
      TransformPointBetweenCoordinateSpaces(&v18, &v18, 0LL, v7);
      if ( !v17 )
        goto LABEL_21;
    }
    v5 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v5 = (__int64 *)W32UserProbeAddress;
    *v5 = *v5;
    *a2 = v18;
    v4 = 1;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
