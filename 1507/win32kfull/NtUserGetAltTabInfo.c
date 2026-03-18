/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C0219AC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _GetAltTabInfo @ 0x1C0200E70 (_GetAltTabInfo.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, int a2, unsigned __int64 a3, volatile void *a4, ULONG a5, int a6)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  _BYTE *v13; // rdx
  SIZE_T v14; // rdx
  __int64 v15; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  INT v19; // ebx
  INT v20; // edi
  unsigned int AltTabInfo; // [rsp+30h] [rbp-A8h]
  _BYTE v23[40]; // [rsp+68h] [rbp-70h] BYREF

  memset(v23, 0, sizeof(v23));
  EnterSharedCrit(1LL);
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
    {
      AltTabInfo = 0;
      goto LABEL_25;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 || (struct tagWND *)v12 == gspwndAltTab )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (_BYTE *)a3;
    if ( a3 >= W32UserProbeAddress )
      v13 = (_BYTE *)W32UserProbeAddress;
    *v13 = *v13;
    v13[39] = v13[39];
    v14 = a5;
    if ( !a6 )
      v14 = 2LL * a5;
    ProbeForWrite(a4, v14, 2u);
    if ( *(_DWORD *)a3 == 40 )
    {
      *(_DWORD *)v23 = 40;
      AltTabInfo = GetAltTabInfo(a2, (__int64)v23, (CHAR *)a4, a5, a6);
      if ( v12 )
      {
        v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440);
        if ( (*(_BYTE *)(v10 + 224) & 1) == 0 )
        {
          v15 = *(_QWORD *)(v12 + 16);
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
          if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v15 + 384)) )
          {
            v17 = ValidateHmonitorNoRip(*(_QWORD *)(v12 + 352));
            v18 = v17;
            if ( v17 )
            {
              v19 = (unsigned __int16)MonitorDpiFromProcess(v17, 0LL);
              v20 = (unsigned __int16)MonitorDpiFromProcess(v18, *(_QWORD *)(*(_QWORD *)(v12 + 16) + 384LL));
              *(_DWORD *)&v23[24] = EngMulDiv(*(INT *)&v23[24], v19, v20);
              *(_DWORD *)&v23[28] = EngMulDiv(*(INT *)&v23[28], v19, v20);
            }
            TransformPointBetweenCoordinateSpaces(&v23[32], &v23[32], 0LL, v12);
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = *(_OWORD *)v23;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v23[16];
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v23[32];
      }
    }
    else
    {
      UserSetLastError(87);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400);
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v10, v11);
  return AltTabInfo;
}
