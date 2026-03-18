/*
 * XREFs of NtUserSlicerControl @ 0x1C021B160
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     UIntAdd @ 0x1C0070A70 (UIntAdd.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     MagSlicerControl @ 0x1C01F6210 (MagSlicerControl.c)
 */

__int64 __fastcall NtUserSlicerControl(__int64 a1, int a2, char *a3, unsigned int a4)
{
  NTSTATUS v8; // edi
  int v9; // r12d
  unsigned __int64 i; // rdx
  char *v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  char *v14; // rcx
  char *v15; // rcx
  char *v16; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  UINT v19; // ebx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int64 ThreadWin32Thread; // rax
  void *v23; // rbx
  int v24; // eax
  ULONG v25; // eax
  _OWORD *v26; // rcx
  unsigned int Size; // [rsp+34h] [rbp-154h]
  UINT Size_4; // [rsp+38h] [rbp-150h] BYREF
  void *Src; // [rsp+40h] [rbp-148h]
  int v31; // [rsp+48h] [rbp-140h]
  _OWORD *v32; // [rsp+58h] [rbp-130h]
  char *v33; // [rsp+68h] [rbp-120h]
  unsigned __int64 v34; // [rsp+70h] [rbp-118h]
  __int128 v35; // [rsp+88h] [rbp-100h]
  __int64 v36; // [rsp+98h] [rbp-F0h]
  __int128 v37; // [rsp+A0h] [rbp-E8h]
  __int128 v38; // [rsp+B0h] [rbp-D8h]
  __int128 v39; // [rsp+C0h] [rbp-C8h]
  __int128 v40; // [rsp+D0h] [rbp-B8h]
  __m128i v41; // [rsp+E0h] [rbp-A8h]
  __int128 v42; // [rsp+F0h] [rbp-98h]
  __int128 v43; // [rsp+100h] [rbp-88h]
  _OWORD v44[3]; // [rsp+110h] [rbp-78h] BYREF

  v8 = -1073741811;
  Src = 0LL;
  Size = 0;
  memset(v44, 0, sizeof(v44));
  v33 = 0LL;
  v32 = 0LL;
  v9 = 1;
  EnterCrit(0LL, 1LL);
  v13 = ValidateHwnd(a1);
  if ( v13 && a2 < 5 )
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
        v16 = a3;
        i = (unsigned __int64)(a3 + 48);
        if ( a3 + 48 < a3 || i > W32UserProbeAddress )
          v16 = (char *)W32UserProbeAddress;
        v41 = *(__m128i *)v16;
        v42 = *((_OWORD *)v16 + 1);
        v43 = *((_OWORD *)v16 + 2);
        v44[0] = v41;
        v44[1] = v42;
        v44[2] = v43;
        v17 = _mm_cvtsi128_si32(v41);
        if ( v17 > 6 )
        {
          v8 = -1073741306;
          goto LABEL_50;
        }
        v18 = 32LL * v17;
        v34 = v18;
        if ( v18 > 0xFFFFFFFF )
        {
          Size_4 = -1;
          goto LABEL_50;
        }
        Size_4 = v18;
        if ( UIntAdd(v18, 0x10u, &Size_4) < 0 )
          goto LABEL_50;
        v19 = Size_4;
        v20 = (_OWORD *)Win32AllocPool(Size_4, 1735226197LL);
        Src = v20;
        if ( !v20 )
        {
          v8 = -1073741801;
          goto LABEL_50;
        }
        v33 = a3;
        v32 = v20;
        *v20 = v44[0];
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          v31 = i;
          if ( (unsigned int)i >= *(_DWORD *)v20 )
            break;
          v12 = 2LL * (unsigned int)i;
          v11 = &a3[v12 * 16 + 16];
          if ( v11 + 32 < v11 || (unsigned __int64)(v11 + 32) > W32UserProbeAddress )
            v11 = (char *)W32UserProbeAddress;
          v39 = *(_OWORD *)v11;
          v40 = *((_OWORD *)v11 + 1);
          v21 = v40;
          v20[v12 + 1] = v39;
          v20[v12 + 2] = v21;
        }
        Size = v19;
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
        v15 = a3;
        i = (unsigned __int64)(a3 + 24);
        if ( a3 + 24 < a3 || i > W32UserProbeAddress )
          v15 = (char *)W32UserProbeAddress;
        v35 = *(_OWORD *)v15;
        v36 = *((_QWORD *)v15 + 2);
        v44[0] = v35;
        *(_QWORD *)&v44[1] = v36;
        Src = v44;
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
        v14 = a3;
        i = (unsigned __int64)(a3 + 32);
        if ( a3 + 32 < a3 || i > W32UserProbeAddress )
          v14 = (char *)W32UserProbeAddress;
        v37 = *(_OWORD *)v14;
        v38 = *((_OWORD *)v14 + 1);
        v44[0] = v37;
        v44[1] = v38;
        Src = v44;
        Size = 32;
      }
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i, (__int64)v11, v12 * 16);
    v23 = Src;
    v24 = MagSlicerControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v13, a2, (unsigned int *)Src);
    v8 = v24;
    if ( a2 == 4 && v24 >= 0 )
    {
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (char *)W32UserProbeAddress;
      memmove(a3, v23, Size);
    }
LABEL_50:
    if ( v8 >= 0 )
      goto LABEL_52;
  }
  v9 = 0;
  v25 = RtlNtStatusToDosError(v8);
  UserSetLastError(v25);
LABEL_52:
  v26 = v32;
  if ( v32 )
    Win32FreePool(v32, i, v11);
  UserSessionSwitchLeaveCrit(v26, i);
  return v9;
}
