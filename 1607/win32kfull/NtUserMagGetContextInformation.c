/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C02170A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     MagGetLensContextInformation @ 0x1C01F4FAC (MagGetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, unsigned int *a4)
{
  _BYTE *v7; // r14
  __int64 v8; // r12
  __int64 v9; // r13
  _OWORD *v10; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  NTSTATUS LensContextInformation; // edi
  unsigned int *v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  char *v18; // rcx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // ebx
  unsigned int *v27; // rax
  int v28; // ebx
  ULONG v29; // eax
  size_t Size; // [rsp+40h] [rbp-148h] BYREF
  __int64 v32; // [rsp+48h] [rbp-140h]
  __int64 v33; // [rsp+50h] [rbp-138h]
  _OWORD *v34; // [rsp+58h] [rbp-130h]
  __int64 v35; // [rsp+70h] [rbp-118h]
  unsigned int *v36; // [rsp+78h] [rbp-110h]
  __int128 v37; // [rsp+A0h] [rbp-E8h]
  __int128 v38; // [rsp+B0h] [rbp-D8h]
  __int128 v39; // [rsp+C0h] [rbp-C8h]
  _BYTE v40[112]; // [rsp+D0h] [rbp-B8h] BYREF

  v36 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset(v40, 0, 0x68uLL);
  v8 = 0LL;
  v32 = 0LL;
  v9 = 0LL;
  v33 = 0LL;
  v10 = 0LL;
  v34 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v35 = -1LL;
  }
  else if ( a1 )
  {
    v35 = ValidateHwnd(a1);
    if ( !v35 )
      goto LABEL_5;
  }
  else
  {
    v35 = 0LL;
  }
  if ( a2 >= 10 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_65;
  }
  v15 = v36;
  if ( (unsigned __int64)v36 >= W32UserProbeAddress )
    v15 = (unsigned int *)W32UserProbeAddress;
  v16 = *v15;
  LODWORD(Size) = *v15;
  if ( a2 > 5 )
  {
    if ( a2 == 6 )
    {
      if ( !a3 )
        goto LABEL_5;
      if ( v16 < 8 )
        goto LABEL_19;
      v17 = 208;
      if ( v16 <= 0xD0 )
        v17 = v16;
      v21 = Win32AllocPoolZInit(v17, 1735226197LL);
      v8 = v21;
      v32 = v21;
    }
    else
    {
      if ( a2 != 7 )
      {
        v11 = (unsigned int)(a2 - 8);
        if ( a2 != 8 )
        {
          if ( a3 )
          {
            if ( v16 < 4 )
              goto LABEL_19;
            v7 = v40;
            LODWORD(Size) = 4;
            goto LABEL_57;
          }
          goto LABEL_5;
        }
        if ( !a3 )
          goto LABEL_5;
        v17 = 48;
        if ( v16 < 0x30 )
          goto LABEL_19;
        v10 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
        v34 = v10;
        if ( !v10 )
        {
LABEL_39:
          LensContextInformation = -1073741801;
          goto LABEL_65;
        }
        v18 = a3;
        v11 = (unsigned __int64)(a3 + 48);
        if ( a3 + 48 < a3 || v11 > W32UserProbeAddress )
          v18 = (char *)W32UserProbeAddress;
        v37 = *(_OWORD *)v18;
        v38 = *((_OWORD *)v18 + 1);
        v19 = v38;
        v39 = *((_OWORD *)v18 + 2);
        v20 = v39;
        *v10 = v37;
        v10[1] = v19;
        v10[2] = v20;
        v7 = v10;
LABEL_56:
        LODWORD(Size) = v17;
        goto LABEL_57;
      }
      if ( !a3 )
        goto LABEL_5;
      if ( v16 < 0x10 )
        goto LABEL_19;
      v17 = 160;
      if ( v16 <= 0xA0 )
        v17 = v16;
      v21 = Win32AllocPoolZInit(v17, 1735226197LL);
      v9 = v21;
      v33 = v21;
    }
    if ( !v21 )
      goto LABEL_39;
    v7 = (_BYTE *)v21;
    goto LABEL_56;
  }
  if ( a2 == 5 )
  {
    if ( a3 )
    {
      if ( v16 < 0x64 )
        goto LABEL_19;
      v7 = v40;
      LODWORD(Size) = 100;
      goto LABEL_57;
    }
    goto LABEL_5;
  }
  if ( a2 < 0 )
    goto LABEL_57;
  if ( a2 <= 1 )
    goto LABEL_5;
  if ( a2 == 2 )
  {
    if ( a3 )
    {
      if ( v16 < 0x10 )
        goto LABEL_19;
      v7 = v40;
      LODWORD(Size) = 16;
      goto LABEL_57;
    }
    goto LABEL_5;
  }
  if ( a2 == 3 )
  {
    if ( a3 )
    {
      if ( v16 < 0x20 )
        goto LABEL_19;
      v7 = v40;
      LODWORD(Size) = 32;
      goto LABEL_57;
    }
LABEL_5:
    LensContextInformation = -1073741811;
LABEL_65:
    v28 = 0;
    v29 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v29);
    goto LABEL_66;
  }
  if ( !a3 )
    goto LABEL_5;
  if ( v16 < 0x24 )
  {
LABEL_19:
    LensContextInformation = -1073741306;
    goto LABEL_65;
  }
  v7 = v40;
  LODWORD(Size) = 36;
LABEL_57:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  LensContextInformation = MagGetLensContextInformation(
                             *(_QWORD **)&gMagnContext,
                             ThreadWin32Thread,
                             v35,
                             0LL,
                             a2,
                             (__int64)v7,
                             (int *)&Size);
  if ( LensContextInformation < 0 )
  {
    v28 = 1;
  }
  else
  {
    v26 = Size;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (char *)W32UserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    v24 = W32UserProbeAddress;
    v27 = v36;
    if ( (unsigned __int64)v36 >= W32UserProbeAddress )
      v27 = (unsigned int *)W32UserProbeAddress;
    *v27 = v26;
    v28 = 1;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_65;
LABEL_66:
  if ( v10 )
    Win32FreePool(v10, v23, v25);
  if ( v9 )
    Win32FreePool(v9, v23, v25);
  if ( v8 )
    Win32FreePool(v8, v23, v25);
  UserSessionSwitchLeaveCrit(v24, v23);
  return v28;
}
