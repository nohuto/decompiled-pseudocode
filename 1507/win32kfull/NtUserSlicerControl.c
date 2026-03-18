/*
 * XREFs of NtUserSlicerControl @ 0x1C0221180
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UIntAdd @ 0x1C005D488 (UIntAdd.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     MagSlicerControl @ 0x1C01FE734 (MagSlicerControl.c)
 */

__int64 __fastcall NtUserSlicerControl(__int64 a1, int a2, char *a3, unsigned int a4)
{
  NTSTATUS v8; // edi
  unsigned int v9; // r12d
  char *v10; // rdx
  __int64 v11; // r13
  char *v12; // rcx
  char *v13; // rcx
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  UINT v16; // ebx
  _OWORD *v17; // rax
  unsigned int i; // edx
  __int64 v19; // r9
  char *v20; // r8
  __int128 v21; // xmm1
  __int64 ThreadWin32Thread; // rax
  void *v23; // rbx
  int v24; // eax
  ULONG v25; // eax
  _OWORD *v26; // rcx
  unsigned int Size; // [rsp+34h] [rbp-154h]
  UINT Size_4; // [rsp+38h] [rbp-150h] BYREF
  void *Src; // [rsp+40h] [rbp-148h]
  unsigned int v31; // [rsp+48h] [rbp-140h]
  _OWORD *v32; // [rsp+58h] [rbp-130h]
  char *v33; // [rsp+60h] [rbp-128h]
  unsigned __int64 v34; // [rsp+70h] [rbp-118h]
  __int128 v35; // [rsp+88h] [rbp-100h]
  __int64 v36; // [rsp+98h] [rbp-F0h]
  __int128 v37; // [rsp+A0h] [rbp-E8h]
  __int128 v38; // [rsp+B0h] [rbp-D8h]
  __m128i v39; // [rsp+C0h] [rbp-C8h]
  __int128 v40; // [rsp+D0h] [rbp-B8h]
  __int128 v41; // [rsp+E0h] [rbp-A8h]
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
  EnterCrit(1LL);
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
        v10 = a3;
        if ( a3 + 48 < a3 || (unsigned __int64)(a3 + 48) > W32UserProbeAddress )
          v10 = (char *)W32UserProbeAddress;
        v39 = *(__m128i *)v10;
        v40 = *((_OWORD *)v10 + 1);
        v41 = *((_OWORD *)v10 + 2);
        v44[0] = v39;
        v44[1] = v40;
        v44[2] = v41;
        v14 = _mm_cvtsi128_si32(v39);
        if ( v14 > 6 )
        {
          v8 = -1073741306;
          goto LABEL_50;
        }
        v15 = 32LL * v14;
        v34 = v15;
        if ( v15 > 0xFFFFFFFF )
        {
          Size_4 = -1;
          goto LABEL_50;
        }
        Size_4 = v15;
        if ( UIntAdd(v15, 0x10u, &Size_4) < 0 )
          goto LABEL_50;
        v16 = Size_4;
        v17 = (_OWORD *)Win32AllocPool(Size_4, 1735226197LL);
        Src = v17;
        if ( !v17 )
        {
          v8 = -1073741801;
          goto LABEL_50;
        }
        v33 = a3;
        v32 = v17;
        *v17 = v44[0];
        for ( i = 0; ; ++i )
        {
          v31 = i;
          if ( i >= *(_DWORD *)v17 )
            break;
          v19 = 2LL * i;
          v20 = &a3[v19 * 16 + 16];
          if ( v20 + 32 < v20 || (unsigned __int64)(v20 + 32) > W32UserProbeAddress )
            v20 = (char *)W32UserProbeAddress;
          v37 = *(_OWORD *)v20;
          v38 = *((_OWORD *)v20 + 1);
          v21 = v38;
          v17[v19 + 1] = v37;
          v17[v19 + 2] = v21;
        }
        Size = v16;
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
        v35 = *(_OWORD *)v13;
        v36 = *((_QWORD *)v13 + 2);
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
        v12 = a3;
        if ( a3 + 32 < a3 || (unsigned __int64)(a3 + 32) > W32UserProbeAddress )
          v12 = (char *)W32UserProbeAddress;
        v42 = *(_OWORD *)v12;
        v43 = *((_OWORD *)v12 + 1);
        v44[0] = v42;
        v44[1] = v43;
        Src = v44;
        Size = 32;
      }
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v23 = Src;
    v24 = MagSlicerControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v11, a2, (unsigned int *)Src);
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
    Win32FreePool(v32);
  UserSessionSwitchLeaveCrit(v26, v10);
  return v9;
}
