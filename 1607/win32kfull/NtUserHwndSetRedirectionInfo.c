/*
 * XREFs of NtUserHwndSetRedirectionInfo @ 0x1C02161B0
 * Callers:
 *     <none>
 * Callees:
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     GreHintDxUpdate @ 0x1C025EE58 (GreHintDxUpdate.c)
 *     GreSetHwndPresentFlags @ 0x1C025F2C0 (GreSetHwndPresentFlags.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserHwndSetRedirectionInfo(__int64 a1, int a2, int *a3, unsigned int a4)
{
  NTSTATUS v8; // esi
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 StyleWindow; // rax
  _QWORD *v15; // rbx
  int v16; // r8d
  _OWORD *v17; // r14
  int v18; // edx
  int v19; // ecx
  __int64 DC; // rdi
  __int64 v21; // rcx
  int v22; // ebx
  ULONG v23; // eax
  _OWORD v25[2]; // [rsp+50h] [rbp-58h] BYREF

  v8 = -1073741811;
  memset(v25, 0, sizeof(v25));
  v9 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v10 = ValidateHwnd(a1);
  v13 = v10;
  if ( v10 )
  {
    StyleWindow = GetStyleWindow(v10, 2568);
    v15 = (_QWORD *)StyleWindow;
    if ( StyleWindow )
    {
      if ( (*(_WORD *)(StyleWindow + 66) & 0x3FFF) != 0x29D )
      {
        if ( a2 == 2 )
        {
          if ( a3 )
          {
            if ( a4 >= 4 )
            {
              if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > W32UserProbeAddress )
                a3 = (int *)W32UserProbeAddress;
              v16 = *a3;
              LODWORD(v25[0]) = *a3;
              goto LABEL_21;
            }
            v8 = -1073741306;
          }
        }
        else
        {
          if ( a2 != 4 )
          {
            v8 = -1073741821;
            goto LABEL_33;
          }
          if ( a3 )
          {
            if ( a4 < 0x10 )
            {
              v8 = -1073741306;
              goto LABEL_33;
            }
            if ( a3 + 4 < a3 || (unsigned __int64)(a3 + 4) > W32UserProbeAddress )
              a3 = (int *)W32UserProbeAddress;
            v25[0] = *(_OWORD *)a3;
            v16 = v25[0];
LABEL_21:
            if ( a2 == 2 )
            {
              v8 = GreSetHwndPresentFlags(*(HWND *)StyleWindow);
            }
            else
            {
              if ( v16 || *(_QWORD *)((char *)v25 + 4) || HIDWORD(v25[0]) )
              {
                v17 = v25;
                if ( SDWORD2(v25[0]) < v16 || SHIDWORD(v25[0]) < SDWORD1(v25[0]) )
                  goto LABEL_34;
                if ( v13 != StyleWindow )
                {
                  v18 = *(_DWORD *)(v13 + 116) - *(_DWORD *)(StyleWindow + 116);
                  v19 = *(_DWORD *)(v13 + 112) - *(_DWORD *)(StyleWindow + 112);
                  LODWORD(v25[0]) = v19 + v16;
                  DWORD2(v25[0]) += v19;
                  HIDWORD(v25[0]) += v18;
                  DWORD1(v25[0]) += v18;
                }
              }
              else
              {
                v17 = 0LL;
              }
              DC = _GetDC(v13);
              v22 = GreHintDxUpdate(v21, *v15, DC, v17, -1073741811);
              _ReleaseDC(DC);
              if ( v22 )
                v8 = 0;
            }
          }
        }
      }
    }
  }
LABEL_33:
  if ( v8 < 0 )
  {
LABEL_34:
    v9 = 0;
    v23 = RtlNtStatusToDosError(v8);
    UserSetLastError(v23);
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v9;
}
