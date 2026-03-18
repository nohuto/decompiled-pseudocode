/*
 * XREFs of NtUserMagSetContextInformation @ 0x1402B7E60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     MagSetLensContextInformation @ 0x1401EB08C (MagSetLensContextInformation.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, char *a3, unsigned int a4)
{
  NTSTATUS v7; // ebx
  char *v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rsi
  ULONG v12; // eax
  char *v13; // rcx
  int v15; // r13d
  struct tagTHREADINFO *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  UIPrivilegeIsolation *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  unsigned __int64 v23; // rcx
  char *v24; // rax
  __int64 j; // r14
  __int64 v26; // xmm0_8
  unsigned int v27; // r12d
  unsigned __int64 v28; // rax
  char *v29; // rax
  __int64 i; // r14
  struct tagTHREADINFO *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 UserSessionState; // rax
  int v35; // [rsp+38h] [rbp-1A0h] BYREF
  char *v36; // [rsp+40h] [rbp-198h]
  _DWORD v37[8]; // [rsp+48h] [rbp-190h] BYREF
  __int64 v38; // [rsp+68h] [rbp-170h]
  char *v39; // [rsp+70h] [rbp-168h]
  char *v40; // [rsp+78h] [rbp-160h]
  __int128 v41; // [rsp+80h] [rbp-158h] BYREF
  __int128 v42; // [rsp+90h] [rbp-148h]
  int v43; // [rsp+A0h] [rbp-138h]
  __int64 v44; // [rsp+A8h] [rbp-130h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-128h] BYREF
  unsigned __int64 v46; // [rsp+C0h] [rbp-118h]
  _OWORD v47[6]; // [rsp+C8h] [rbp-110h] BYREF
  int v48; // [rsp+128h] [rbp-B0h]
  __int128 v49; // [rsp+130h] [rbp-A8h] BYREF
  __int128 v50; // [rsp+140h] [rbp-98h]
  __int128 v51; // [rsp+150h] [rbp-88h]
  __int128 v52; // [rsp+160h] [rbp-78h]
  __int128 v53; // [rsp+170h] [rbp-68h]
  __int128 v54; // [rsp+180h] [rbp-58h]
  int v55; // [rsp+190h] [rbp-48h]

  v35 = a2;
  v7 = -1073741811;
  v8 = 0LL;
  memset_0(&v49, 0, 0x68uLL);
  v40 = 0LL;
  v39 = 0LL;
  EnterCrit(1LL, 0LL);
  if ( a1 == -3 )
  {
    v38 = -1LL;
  }
  else if ( a1 )
  {
    v38 = ValidateHwnd(a1);
    if ( !v38 )
    {
LABEL_5:
      v10 = 0;
      v11 = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    v38 = 0LL;
  }
  v15 = v35;
  if ( v35 >= 11 )
  {
    v7 = -1073741821;
    goto LABEL_5;
  }
  if ( v35 == 4 )
  {
    v16 = PtiCurrent(v9);
    if ( *((_QWORD *)v16 + 61) != *(_QWORD *)(W32GetUserSessionState(v18, v17) + 19176) )
    {
      UserSetLastError(5);
LABEL_19:
      v10 = 1;
      goto LABEL_116;
    }
    if ( (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() )
    {
      v20 = *((_QWORD *)v16 + 57);
      if ( *(int *)(v20 + 12) >= 0 )
        goto LABEL_25;
    }
    else if ( UIPrivilegeIsolation::Enforced(v19) && *(int *)(*((_QWORD *)v16 + 57) + 12LL) >= 0 )
    {
      UserSetLastError(5);
      v20 = *((_QWORD *)v16 + 57);
LABEL_25:
      EtwTraceUIPISystemError(v20, 0LL, 7LL);
      v7 = -1073741790;
      goto LABEL_5;
    }
    v15 = v35;
  }
  if ( v15 > 5 )
  {
    switch ( v15 )
    {
      case 6:
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            RtlCopyFromUser(&v49, a3, 0x10uLL);
            if ( DWORD1(v49) <= 0x19 )
            {
              if ( (unsigned int)v49 <= 0x19 )
              {
                v27 = v49 + DWORD1(v49);
                if ( (int)v49 + DWORD1(v49) < (unsigned int)v49 )
                {
                  v10 = 1;
                }
                else if ( v27 <= 0x19 )
                {
                  v28 = 8LL * v27;
                  *(_QWORD *)&v45 = v28;
                  if ( v28 > 0xFFFFFFFF )
                  {
                    v10 = 1;
                  }
                  else if ( (int)v28 + 8 >= (unsigned int)v28 )
                  {
                    v29 = (char *)Win32AllocPoolZInit((unsigned int)(v28 + 8), 1735226197LL);
                    v8 = v29;
                    v36 = v29;
                    if ( v29 )
                    {
                      v40 = v29;
                      *(_QWORD *)v29 = v49;
                      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                      {
                        v37[2] = i;
                        if ( (unsigned int)i >= v27 )
                          break;
                        v44 = 0LL;
                        RtlCopyFromUser(&v44, &a3[8 * i + 8], 8uLL);
                        v21 = (__int64)v40;
                        *(_QWORD *)&v40[8 * i + 8] = v44;
                      }
                      v15 = v35;
                      goto LABEL_113;
                    }
                    v7 = -1073741801;
                    v10 = 1;
                  }
                  else
                  {
                    v10 = 1;
                  }
                }
                else
                {
                  v7 = -1073741306;
                  v10 = 1;
                }
              }
              else
              {
                v7 = -1073741306;
                v10 = 1;
              }
            }
            else
            {
              v7 = -1073741306;
              v10 = 1;
            }
          }
          else
          {
            v7 = -1073741306;
            v10 = 1;
          }
        }
        else
        {
          v10 = 1;
        }
        break;
      case 7:
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            RtlCopyFromUser(&v49, a3, 0x10uLL);
            if ( (unsigned int)v49 <= 6 )
            {
              v23 = 24LL * (unsigned int)v49;
              v46 = v23;
              if ( v23 > 0xFFFFFFFF )
              {
                v10 = 1;
              }
              else if ( (int)v23 + 16 < (unsigned int)v23 )
              {
                v10 = 1;
              }
              else
              {
                v24 = (char *)Win32AllocPoolZInit((unsigned int)(v23 + 16), 1735226197LL);
                v8 = v24;
                v36 = v24;
                if ( v24 )
                {
                  v21 = (__int64)v24;
                  v39 = v24;
                  *(_OWORD *)v24 = v49;
                  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
                  {
                    v37[1] = j;
                    if ( (unsigned int)j >= *(_DWORD *)v21 )
                      break;
                    v41 = 0LL;
                    *(_QWORD *)&v42 = 0LL;
                    RtlCopyFromUser(&v41, &a3[24 * j + 16], 0x18uLL);
                    v26 = v42;
                    v21 = (__int64)v39;
                    *(_OWORD *)&v39[24 * j + 16] = v41;
                    *(_QWORD *)(v21 + 24 * j + 32) = v26;
                  }
                  goto LABEL_113;
                }
                v7 = -1073741801;
                v10 = 1;
              }
            }
            else
            {
              v7 = -1073741306;
              v10 = 1;
            }
          }
          else
          {
            v7 = -1073741306;
            v10 = 1;
          }
        }
        else
        {
          v10 = 1;
        }
        break;
      case 8:
        v10 = 1;
        break;
      default:
        v21 = (unsigned int)(v15 - 9);
        if ( v15 == 9 )
        {
          if ( !a3 )
          {
            v10 = 1;
            break;
          }
          if ( a4 < 4 )
          {
            v7 = -1073741306;
            v10 = 1;
            break;
          }
          v37[0] = 0;
          RtlCopyFromUser(v37, a3, 4uLL);
          v22 = v37[0];
        }
        else
        {
          if ( v15 != 10 )
            goto LABEL_113;
          if ( !a3 )
          {
            v10 = 1;
            break;
          }
          if ( a4 < 4 )
          {
            v7 = -1073741306;
            v10 = 1;
            break;
          }
          v35 = 0;
          RtlCopyFromUser(&v35, a3, 4uLL);
          v22 = v35;
        }
        LODWORD(v49) = v22;
        v8 = (char *)&v49;
        goto LABEL_54;
    }
  }
  else if ( v15 == 5 )
  {
    if ( a3 )
    {
      if ( a4 >= 0x64 )
      {
        memset_0(v47, 0, 0x64uLL);
        RtlCopyFromUser(v47, a3, 0x64uLL);
        v49 = v47[0];
        v50 = v47[1];
        v51 = v47[2];
        v52 = v47[3];
        v53 = v47[4];
        v54 = v47[5];
        v55 = v48;
        goto LABEL_40;
      }
      v7 = -1073741306;
      v10 = 1;
    }
    else
    {
      v10 = 1;
    }
  }
  else
  {
    v21 = (unsigned int)v15;
    if ( !v15 || (v21 = (unsigned int)(v15 - 1), v15 == 1) )
    {
      if ( !a3 )
      {
        v8 = 0LL;
        goto LABEL_54;
      }
      v10 = 1;
    }
    else if ( v15 == 2 )
    {
      if ( a3 )
      {
        if ( a4 >= 0x10 )
        {
          v45 = 0LL;
          RtlCopyFromUser(&v45, a3, 0x10uLL);
          v49 = v45;
          v8 = (char *)&v49;
          goto LABEL_54;
        }
        v7 = -1073741306;
        v10 = 1;
      }
      else
      {
        v10 = 1;
      }
    }
    else
    {
      v21 = (unsigned int)(v15 - 3);
      if ( v15 != 3 )
      {
        if ( v15 != 4 )
        {
LABEL_113:
          v31 = PtiCurrent(v21);
          UserSessionState = W32GetUserSessionState(v33, v32);
          v7 = MagSetLensContextInformation(
                 UserSessionState + 66032,
                 (__int64)v31,
                 (struct tagWND *)v38,
                 (unsigned int)v15,
                 v8);
          goto LABEL_19;
        }
        if ( !a3 )
        {
          v10 = 1;
          goto LABEL_116;
        }
        if ( a4 < 0x24 )
        {
          v7 = -1073741306;
          v10 = 1;
          goto LABEL_116;
        }
        v41 = 0LL;
        v42 = 0LL;
        v43 = 0;
        RtlCopyFromUser(&v41, a3, 0x24uLL);
        LODWORD(v51) = v43;
        goto LABEL_39;
      }
      if ( a3 )
      {
        if ( a4 >= 0x20 )
        {
          v41 = 0LL;
          v42 = 0LL;
          RtlCopyFromUser(&v41, a3, 0x20uLL);
LABEL_39:
          v50 = v42;
          v49 = v41;
LABEL_40:
          v8 = (char *)&v49;
LABEL_54:
          v36 = v8;
          goto LABEL_113;
        }
        v7 = -1073741306;
        v10 = 1;
      }
      else
      {
        v10 = 1;
      }
    }
  }
LABEL_116:
  if ( v7 < 0 )
    goto LABEL_5;
  v11 = 1LL;
LABEL_6:
  if ( !v10 )
  {
    v12 = RtlNtStatusToDosError(v7);
    UserSetLastError(v12);
  }
  v13 = v39;
  if ( v39 )
    Win32FreePool(v39);
  if ( v40 )
    Win32FreePool(v40);
  UserSessionSwitchLeaveCrit(v13);
  return v11;
}
