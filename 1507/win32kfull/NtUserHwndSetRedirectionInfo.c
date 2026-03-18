/*
 * XREFs of NtUserHwndSetRedirectionInfo @ 0x1C0007C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     GreHintDxUpdate @ 0x1C0262D08 (GreHintDxUpdate.c)
 *     GreSetHwndPresentFlags @ 0x1C0263174 (GreSetHwndPresentFlags.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserHwndSetRedirectionInfo(__int64 a1, int a2, int *a3, unsigned int a4)
{
  NTSTATUS v8; // esi
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 StyleWindow; // rax
  _QWORD *v15; // rbx
  ULONG v16; // eax
  int v18; // r8d
  _OWORD *v19; // r14
  int v20; // edx
  int v21; // ecx
  __int64 DC; // rdi
  __int64 v23; // rcx
  int v24; // ebx
  _OWORD v25[2]; // [rsp+50h] [rbp-58h] BYREF

  v8 = -1073741811;
  memset(v25, 0, sizeof(v25));
  v9 = 1;
  EnterCrit(1LL);
  gbValidateHandleForIL = 0;
  v10 = ValidateHwnd(a1);
  v13 = v10;
  if ( v10 )
  {
    StyleWindow = GetStyleWindow(v10, 2568LL);
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
              v18 = *a3;
              LODWORD(v25[0]) = *a3;
              goto LABEL_24;
            }
            v8 = -1073741306;
          }
        }
        else
        {
          if ( a2 != 4 )
          {
            v8 = -1073741821;
            goto LABEL_3;
          }
          if ( a3 )
          {
            if ( a4 < 0x10 )
            {
              v8 = -1073741306;
              goto LABEL_3;
            }
            if ( a3 + 4 < a3 || (unsigned __int64)(a3 + 4) > W32UserProbeAddress )
              a3 = (int *)W32UserProbeAddress;
            v25[0] = *(_OWORD *)a3;
            v18 = v25[0];
LABEL_24:
            if ( a2 == 2 )
            {
              v8 = GreSetHwndPresentFlags(*(HWND *)StyleWindow);
            }
            else
            {
              if ( v18 || *(_QWORD *)((char *)v25 + 4) || HIDWORD(v25[0]) )
              {
                v19 = v25;
                if ( SDWORD2(v25[0]) < v18 || SHIDWORD(v25[0]) < SDWORD1(v25[0]) )
                  goto LABEL_4;
                if ( v13 != StyleWindow )
                {
                  v20 = *(_DWORD *)(v13 + 116) - *(_DWORD *)(StyleWindow + 116);
                  v21 = *(_DWORD *)(v13 + 112) - *(_DWORD *)(StyleWindow + 112);
                  LODWORD(v25[0]) = v21 + v18;
                  DWORD2(v25[0]) += v21;
                  HIDWORD(v25[0]) += v20;
                  DWORD1(v25[0]) += v20;
                }
              }
              else
              {
                v19 = 0LL;
              }
              DC = _GetDC(v13);
              v24 = GreHintDxUpdate(v23, *v15, DC, v19, -1073741811);
              _ReleaseDC(DC);
              if ( v24 )
                v8 = 0;
            }
          }
        }
      }
    }
  }
LABEL_3:
  if ( v8 < 0 )
  {
LABEL_4:
    v9 = 0;
    v16 = RtlNtStatusToDosError(v8);
    UserSetLastError(v16);
  }
  UserSessionSwitchLeaveCrit(v12, v11);
  return v9;
}
