/*
 * XREFs of NtUserUpdateWindowTrackingInfo @ 0x1C0221A00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsShellParticipatesInSizing @ 0x1C00730E0 (IsShellParticipatesInSizing.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     TransformWindowTrackInfo @ 0x1C0092A70 (TransformWindowTrackInfo.c)
 *     UpdateSizeTrackingInfo @ 0x1C020BA90 (UpdateSizeTrackingInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserUpdateWindowTrackingInfo(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned int updated; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // rbx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  INT v17[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v18[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  updated = 0;
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v10 = (struct tagWND *)v7;
  if ( v7 && (((*(_WORD *)(v7 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    v18[1] = v7;
    ++*(_DWORD *)(v7 + 8);
    if ( (unsigned int)IsShellParticipatesInSizing(v7) )
    {
      if ( *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL)
                                                                                 + 320LL)
                                                                     + 16LL)
                                                         + 376LL)
        && IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (__int64 *)W32UserProbeAddress;
        v14 = *a2;
        *(_QWORD *)v17 = *a2;
        if ( (unsigned __int64)a3 >= W32UserProbeAddress )
          a3 = (__int64 *)W32UserProbeAddress;
        v15 = *a3;
        v19 = *a3;
        if ( (int)v14 > 0
          && SHIDWORD(v14) > 0
          && (int)v15 > 0
          && SHIDWORD(v15) > 0
          && (int)v14 >= (int)v15
          && v17[1] >= SHIDWORD(v19) )
        {
          TransformWindowTrackInfo((__int64)v10, v17, (INT *)&v19, 1);
          updated = UpdateSizeTrackingInfo(v10, v17, &v19);
          goto LABEL_21;
        }
        v11 = 87;
      }
      else
      {
        v11 = 5;
      }
    }
    else
    {
      v11 = 5023;
    }
    UserSetLastError(v11);
LABEL_21:
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return updated;
}
