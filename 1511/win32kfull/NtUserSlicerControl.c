/*
 * XREFs of NtUserSlicerControl @ 0x1C02211D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     UIntAdd @ 0x1C00A93FC (UIntAdd.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     MagSlicerControl @ 0x1C01FEBB4 (MagSlicerControl.c)
 */

__int64 __fastcall NtUserSlicerControl(__int64 a1, int a2, char *a3, unsigned int a4)
{
  NTSTATUS v8; // edi
  unsigned int v9; // r12d
  char *v10; // rdx
  __int64 v11; // r13
  char *v12; // rcx
  char *v13; // rcx
  char *v14; // rcx
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  UINT v17; // ebx
  _OWORD *v18; // rax
  unsigned int i; // edx
  __int64 v20; // r9
  char *v21; // r8
  __int128 v22; // xmm1
  __int64 ThreadWin32Thread; // rax
  void *v24; // rbx
  int v25; // eax
  ULONG v26; // eax
  _OWORD *v27; // rcx
  unsigned int Size; // [rsp+34h] [rbp-154h]
  UINT Size_4; // [rsp+38h] [rbp-150h] BYREF
  void *Src; // [rsp+40h] [rbp-148h]
  unsigned int v32; // [rsp+48h] [rbp-140h]
  _OWORD *v33; // [rsp+58h] [rbp-130h]
  char *v34; // [rsp+60h] [rbp-128h]
  unsigned __int64 v35; // [rsp+70h] [rbp-118h]
  __int128 v36; // [rsp+88h] [rbp-100h]
  __int64 v37; // [rsp+98h] [rbp-F0h]
  __int128 v38; // [rsp+A0h] [rbp-E8h]
  __int128 v39; // [rsp+B0h] [rbp-D8h]
  __m128i v40; // [rsp+C0h] [rbp-C8h]
  __int128 v41; // [rsp+D0h] [rbp-B8h]
  __int128 v42; // [rsp+E0h] [rbp-A8h]
  __int128 v43; // [rsp+F0h] [rbp-98h]
  __int128 v44; // [rsp+100h] [rbp-88h]
  _OWORD v45[3]; // [rsp+110h] [rbp-78h] BYREF

  v8 = -1073741811;
  Src = 0LL;
  Size = 0;
  memset(v45, 0, sizeof(v45));
  v34 = 0LL;
  v33 = 0LL;
  v9 = 1;
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  if ( v11 && a2 < 5 )
  {
    if ( a2 >= 0 )
    {
      if ( a2 <= 1 )
      {
        if ( a3 )
          goto LABEL_50;
        if ( a4 )
        {
          v8 = -1073741306;
          goto LABEL_50;
        }
        Src = 0LL;
        Size = 0;
      }
      else if ( a2 == 2 )
      {
        if ( !a3 )
          goto LABEL_50;
        if ( a4 < 0x10 )
        {
          v8 = -1073741306;
          goto LABEL_50;
        }
        v14 = a3;
        v10 = a3 + 48;
        if ( a3 + 48 < a3 || (unsigned __int64)v10 > W32UserProbeAddress )
          v14 = (char *)W32UserProbeAddress;
        v40 = *(__m128i *)v14;
        v41 = *((_OWORD *)v14 + 1);
        v42 = *((_OWORD *)v14 + 2);
        v45[0] = v40;
        v45[1] = v41;
        v45[2] = v42;
        v15 = _mm_cvtsi128_si32(v40);
        if ( v15 > 6 )
        {
          v8 = -1073741306;
          goto LABEL_50;
        }
        v16 = 32LL * v15;
        v35 = v16;
        if ( v16 > 0xFFFFFFFF )
        {
          Size_4 = -1;
          goto LABEL_50;
        }
        Size_4 = v16;
        if ( UIntAdd(v16, 0x10u, &Size_4) < 0 )
          goto LABEL_50;
        v17 = Size_4;
        v18 = (_OWORD *)Win32AllocPool(Size_4);
        Src = v18;
        if ( !v18 )
        {
          v8 = -1073741801;
          goto LABEL_50;
        }
        v34 = a3;
        v33 = v18;
        *v18 = v45[0];
        for ( i = 0; ; ++i )
        {
          v32 = i;
          if ( i >= *(_DWORD *)v18 )
            break;
          v20 = 2LL * i;
          v21 = &a3[v20 * 16 + 16];
          if ( v21 + 32 < v21 || (unsigned __int64)(v21 + 32) > W32UserProbeAddress )
            v21 = (char *)W32UserProbeAddress;
          v38 = *(_OWORD *)v21;
          v39 = *((_OWORD *)v21 + 1);
          v22 = v39;
          v18[v20 + 1] = v38;
          v18[v20 + 2] = v22;
        }
        Size = v17;
      }
      else if ( a2 == 3 )
      {
        if ( !a3 )
          goto LABEL_50;
        if ( a4 < 0x18 )
        {
          v8 = -1073741306;
          goto LABEL_50;
        }
        v13 = a3;
        if ( a3 + 24 < a3 || (unsigned __int64)(a3 + 24) > W32UserProbeAddress )
          v13 = (char *)W32UserProbeAddress;
        v36 = *(_OWORD *)v13;
        v37 = *((_QWORD *)v13 + 2);
        v45[0] = v36;
        *(_QWORD *)&v45[1] = v37;
        Src = v45;
        Size = 24;
      }
      else
      {
        if ( !a3 )
          goto LABEL_50;
        if ( a4 < 0x20 )
        {
          v8 = -1073741306;
          goto LABEL_50;
        }
        v12 = a3;
        if ( a3 + 32 < a3 || (unsigned __int64)(a3 + 32) > W32UserProbeAddress )
          v12 = (char *)W32UserProbeAddress;
        v43 = *(_OWORD *)v12;
        v44 = *((_OWORD *)v12 + 1);
        v45[0] = v43;
        v45[1] = v44;
        Src = v45;
        Size = 32;
      }
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v24 = Src;
    v25 = MagSlicerControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v11, a2, (unsigned int *)Src);
    v8 = v25;
    if ( a2 == 4 && v25 >= 0 )
    {
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (char *)W32UserProbeAddress;
      memmove(a3, v24, Size);
    }
LABEL_50:
    if ( v8 >= 0 )
      goto LABEL_52;
  }
  v9 = 0;
  v26 = RtlNtStatusToDosError(v8);
  UserSetLastError(v26);
LABEL_52:
  v27 = v33;
  if ( v33 )
    Win32FreePool(v33);
  UserSessionSwitchLeaveCrit(v27, v10);
  return v9;
}
