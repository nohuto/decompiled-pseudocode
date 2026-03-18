/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C021D490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     MagGetLensContextInformation @ 0x1C01FD97C (MagGetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, unsigned int *a4)
{
  _BYTE *v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  _OWORD *v9; // r15
  NTSTATUS LensContextInformation; // edi
  unsigned int *v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  char *v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  unsigned int *v22; // rax
  unsigned int v23; // ebx
  ULONG v24; // eax
  size_t Size; // [rsp+40h] [rbp-148h] BYREF
  __int64 v27; // [rsp+48h] [rbp-140h]
  _OWORD *v28; // [rsp+50h] [rbp-138h]
  __int64 v29; // [rsp+58h] [rbp-130h]
  __int64 v30; // [rsp+60h] [rbp-128h]
  unsigned int *v31; // [rsp+78h] [rbp-110h]
  __int128 v32; // [rsp+A0h] [rbp-E8h]
  __int128 v33; // [rsp+B0h] [rbp-D8h]
  __int128 v34; // [rsp+C0h] [rbp-C8h]
  _BYTE v35[112]; // [rsp+D0h] [rbp-B8h] BYREF

  v31 = a4;
  v27 = a1;
  v6 = 0LL;
  LODWORD(Size) = 0;
  memset(v35, 0, 0x68uLL);
  v7 = 0LL;
  v30 = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( v27 == -3 )
  {
    v27 = -1LL;
  }
  else if ( v27 )
  {
    v27 = ValidateHwnd(v27);
    if ( !v27 )
      goto LABEL_5;
  }
  else
  {
    v27 = 0LL;
  }
  if ( a2 >= 10 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_65;
  }
  v11 = v31;
  if ( (unsigned __int64)v31 >= W32UserProbeAddress )
    v11 = (unsigned int *)W32UserProbeAddress;
  v12 = *v11;
  LODWORD(Size) = *v11;
  if ( a2 > 5 )
  {
    switch ( a2 )
    {
      case 6:
        if ( !a3 )
          goto LABEL_5;
        if ( v12 < 8 )
          goto LABEL_19;
        v13 = 208;
        if ( v12 <= 0xD0 )
          v13 = v12;
        v17 = Win32AllocPoolZInit(v13, 1735226197LL);
        v7 = v17;
        v30 = v17;
        break;
      case 7:
        if ( !a3 )
          goto LABEL_5;
        if ( v12 < 0x10 )
          goto LABEL_19;
        v13 = 160;
        if ( v12 <= 0xA0 )
          v13 = v12;
        v17 = Win32AllocPoolZInit(v13, 1735226197LL);
        v8 = v17;
        v29 = v17;
        break;
      case 8:
        if ( !a3 )
          goto LABEL_5;
        v13 = 48;
        if ( v12 < 0x30 )
          goto LABEL_19;
        v9 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
        v28 = v9;
        if ( !v9 )
        {
LABEL_39:
          LensContextInformation = -1073741801;
          goto LABEL_65;
        }
        v14 = a3;
        if ( a3 + 48 < a3 || (unsigned __int64)(a3 + 48) > W32UserProbeAddress )
          v14 = (char *)W32UserProbeAddress;
        v32 = *(_OWORD *)v14;
        v33 = *((_OWORD *)v14 + 1);
        v15 = v33;
        v34 = *((_OWORD *)v14 + 2);
        v16 = v34;
        *v9 = v32;
        v9[1] = v15;
        v9[2] = v16;
        v6 = v9;
LABEL_56:
        LODWORD(Size) = v13;
        goto LABEL_57;
      default:
        if ( a3 )
        {
          if ( v12 < 4 )
            goto LABEL_19;
          v6 = v35;
          LODWORD(Size) = 4;
          goto LABEL_57;
        }
        goto LABEL_5;
    }
    if ( !v17 )
      goto LABEL_39;
    v6 = (_BYTE *)v17;
    goto LABEL_56;
  }
  if ( a2 == 5 )
  {
    if ( a3 )
    {
      if ( v12 < 0x64 )
        goto LABEL_19;
      v6 = v35;
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
      if ( v12 < 0x10 )
        goto LABEL_19;
      v6 = v35;
      LODWORD(Size) = 16;
      goto LABEL_57;
    }
    goto LABEL_5;
  }
  if ( a2 == 3 )
  {
    if ( a3 )
    {
      if ( v12 < 0x20 )
        goto LABEL_19;
      v6 = v35;
      LODWORD(Size) = 32;
      goto LABEL_57;
    }
LABEL_5:
    LensContextInformation = -1073741811;
LABEL_65:
    v23 = 0;
    v24 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v24);
    goto LABEL_66;
  }
  if ( !a3 )
    goto LABEL_5;
  if ( v12 < 0x24 )
  {
LABEL_19:
    LensContextInformation = -1073741306;
    goto LABEL_65;
  }
  v6 = v35;
  LODWORD(Size) = 36;
LABEL_57:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  LensContextInformation = MagGetLensContextInformation(
                             *(_QWORD **)&gMagnContext,
                             ThreadWin32Thread,
                             v27,
                             0LL,
                             a2,
                             (__int64)v6,
                             (int *)&Size);
  if ( LensContextInformation < 0 )
  {
    v23 = 1;
  }
  else
  {
    v21 = Size;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (char *)W32UserProbeAddress;
    memmove(a3, v6, (unsigned int)Size);
    v20 = W32UserProbeAddress;
    v22 = v31;
    if ( (unsigned __int64)v31 >= W32UserProbeAddress )
      v22 = (unsigned int *)W32UserProbeAddress;
    *v22 = v21;
    v23 = 1;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_65;
LABEL_66:
  if ( v9 )
    Win32FreePool(v9);
  if ( v8 )
    Win32FreePool(v8);
  if ( v7 )
    Win32FreePool(v7);
  UserSessionSwitchLeaveCrit(v20, v19);
  return v23;
}
