/*
 * XREFs of NtUserMagGetContextInformation @ 0x1401EA3F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     MagGetLensContextInformation @ 0x1401EA86C (MagGetLensContextInformation.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, void *a3, __int64 a4)
{
  _BYTE *v7; // rsi
  void *v8; // r12
  void *v9; // r13
  _OWORD *v10; // r15
  __int64 v11; // rcx
  NTSTATUS LensContextInformation; // edi
  int v13; // eax
  __int64 v14; // rbx
  unsigned int ULongFromUser; // eax
  unsigned int v16; // edi
  struct tagTHREADINFO *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  ULONG v22; // eax
  __int64 v23; // rax
  unsigned int Size; // [rsp+30h] [rbp-138h] BYREF
  int Size_4; // [rsp+34h] [rbp-134h]
  __int64 v26; // [rsp+38h] [rbp-130h]
  __int64 v27; // [rsp+40h] [rbp-128h]
  _OWORD *v28; // [rsp+48h] [rbp-120h]
  __int64 v29; // [rsp+70h] [rbp-F8h]
  __int128 v30; // [rsp+78h] [rbp-F0h] BYREF
  __int128 v31; // [rsp+88h] [rbp-E0h]
  __int128 v32; // [rsp+98h] [rbp-D0h]
  _BYTE v33[112]; // [rsp+B0h] [rbp-B8h] BYREF

  Size_4 = a2;
  v7 = 0LL;
  memset_0(v33, 0, 0x68uLL);
  v8 = 0LL;
  v26 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  EnterCrit(1LL, 0LL);
  if ( a1 == -3 )
  {
    v29 = -1LL;
  }
  else if ( a1 )
  {
    v29 = ValidateHwnd(a1);
    if ( !v29 )
    {
LABEL_4:
      LensContextInformation = -1073741811;
LABEL_5:
      v13 = 0;
      v14 = 0LL;
      goto LABEL_21;
    }
  }
  else
  {
    v29 = 0LL;
  }
  if ( Size_4 >= 11 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_5;
  }
  ULongFromUser = RtlReadULongFromUser(a4);
  Size = ULongFromUser;
  if ( Size_4 > 5 )
  {
    v11 = (unsigned int)(Size_4 - 6);
    if ( Size_4 == 6 )
    {
      if ( !a3 )
        goto LABEL_4;
      if ( ULongFromUser < 8 )
        goto LABEL_46;
      v16 = 208;
      if ( ULongFromUser <= 0xD0 )
        v16 = ULongFromUser;
      v23 = Win32AllocPoolZInit(v16, 1735226197LL);
      v8 = (void *)v23;
      v26 = v23;
    }
    else
    {
      v11 = (unsigned int)(Size_4 - 7);
      if ( Size_4 != 7 )
      {
        v11 = (unsigned int)(Size_4 - 8);
        if ( Size_4 == 8 )
        {
          if ( !a3 )
            goto LABEL_4;
          v16 = 48;
          if ( ULongFromUser >= 0x30 )
          {
            v10 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
            v28 = v10;
            if ( v10 )
            {
              v30 = 0LL;
              v31 = 0LL;
              v32 = 0LL;
              RtlCopyFromUser(&v30, a3, 0x30uLL);
              *v10 = v30;
              v10[1] = v31;
              v10[2] = v32;
              v7 = v10;
LABEL_16:
              Size = v16;
              goto LABEL_17;
            }
            goto LABEL_56;
          }
LABEL_46:
          LensContextInformation = -1073741306;
          goto LABEL_5;
        }
        v11 = (unsigned int)(Size_4 - 9);
        if ( (unsigned int)v11 <= 1 )
        {
          if ( !a3 )
            goto LABEL_4;
          if ( ULongFromUser < 4 )
            goto LABEL_46;
          v7 = v33;
          Size = 4;
        }
        goto LABEL_17;
      }
      if ( !a3 )
        goto LABEL_4;
      if ( ULongFromUser < 0x10 )
        goto LABEL_46;
      v16 = 160;
      if ( ULongFromUser <= 0xA0 )
        v16 = ULongFromUser;
      v23 = Win32AllocPoolZInit(v16, 1735226197LL);
      v9 = (void *)v23;
      v27 = v23;
    }
    if ( v23 )
    {
      v7 = (_BYTE *)v23;
      goto LABEL_16;
    }
LABEL_56:
    LensContextInformation = -1073741801;
    goto LABEL_5;
  }
  if ( Size_4 == 5 )
  {
    if ( !a3 )
      goto LABEL_4;
    if ( ULongFromUser < 0x64 )
      goto LABEL_46;
    v7 = v33;
    Size = 100;
  }
  else
  {
    v11 = (unsigned int)Size_4;
    if ( !Size_4 )
      goto LABEL_4;
    v11 = (unsigned int)(Size_4 - 1);
    if ( Size_4 == 1 )
      goto LABEL_4;
    v11 = (unsigned int)(Size_4 - 2);
    if ( Size_4 == 2 )
    {
      if ( !a3 )
        goto LABEL_4;
      if ( ULongFromUser < 0x10 )
        goto LABEL_46;
      v7 = v33;
      Size = 16;
    }
    else
    {
      v11 = (unsigned int)(Size_4 - 3);
      if ( Size_4 == 3 )
      {
        if ( !a3 )
          goto LABEL_4;
        if ( ULongFromUser < 0x20 )
          goto LABEL_46;
        v7 = v33;
        Size = 32;
      }
      else if ( Size_4 == 4 )
      {
        if ( !a3 )
          goto LABEL_4;
        if ( ULongFromUser < 0x24 )
          goto LABEL_46;
        v7 = v33;
        Size = 36;
      }
    }
  }
LABEL_17:
  v17 = PtiCurrent(v11);
  UserSessionState = W32GetUserSessionState(v19, v18);
  LensContextInformation = MagGetLensContextInformation(
                             UserSessionState + 66032,
                             v17,
                             v29,
                             (unsigned int)Size_4,
                             v7,
                             &Size);
  if ( LensContextInformation >= 0 )
  {
    RtlCopyToUser(a3, v7, Size);
    RtlWriteULongToUser(a4, Size);
  }
  v13 = 1;
  if ( LensContextInformation < 0 )
    goto LABEL_5;
  v14 = 1LL;
LABEL_21:
  if ( !v13 )
  {
    v22 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v22);
  }
  if ( v10 )
    Win32FreePool(v10);
  if ( v9 )
    Win32FreePool(v9);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v11);
  return v14;
}
