/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C00FB810
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     DCEPtInRect @ 0x1C00FB9D8 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // edi
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // al
  __int64 v30; // [rsp+80h] [rbp+18h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v31 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v10 = (__int64 *)W32UserProbeAddress;
    v30 = *v10;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v5, v8, v9) + 432)
                   + 224LL) & 1) == 0 )
    {
      v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 432);
      if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v17);
        v19 = v31;
        if ( (CurrentThreadDpiAwarenessContext & 0xF) != (*(_DWORD *)(v7 + 352) & 0xF) )
          v19 = v30;
        v31 = v19;
      }
    }
    TransformPointBetweenCoordinateSpaces(&v30, &v30, v7, 0LL);
    if ( (unsigned int)DCEPtInRect(v7 + 112, v30) )
    {
      v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v5, v20, v21) + 432);
      if ( (*(_BYTE *)(v6 + 224) & 1) == 0 )
      {
        v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 432);
        if ( (*(_BYTE *)(v6 + 224) & 0x20) == 0 )
        {
          v28 = W32GetCurrentThreadDpiAwarenessContext(v6, v25, v26, v27);
          v6 = v30;
          if ( (v28 & 0xF) != (*(_DWORD *)(v7 + 352) & 0xF) )
            v6 = v31;
          v30 = v6;
        }
      }
      v5 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v5 = (__int64 *)W32UserProbeAddress;
      *v5 = *v5;
      *a2 = v30;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
