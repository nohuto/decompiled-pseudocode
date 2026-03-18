/*
 * XREFs of NtUserCreateWindowEx @ 0x1C0057F00
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        int a1,
        __m128i *a2,
        __m128i *a3,
        __m128i *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r12
  __m128i *v29; // rdx
  __m128i **v30; // rcx
  __m128i v31; // xmm0
  unsigned __int64 v32; // xmm0_8
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __m128i *v36; // rdx
  unsigned __int64 v37; // xmm0_8
  unsigned __int64 v38; // r8
  __m128i *v39; // rdx
  unsigned __int64 v40; // xmm0_8
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r8
  __int64 *Window; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdi
  size_t Size[2]; // [rsp+90h] [rbp-C8h] BYREF
  int v51; // [rsp+A0h] [rbp-B8h]
  int v52; // [rsp+A4h] [rbp-B4h]
  __m128i v53; // [rsp+B0h] [rbp-A8h] BYREF
  __m128i v54; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v55[3]; // [rsp+D8h] [rbp-80h] BYREF
  _QWORD v56[4]; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v57[72]; // [rsp+110h] [rbp-48h] BYREF

  v18 = 0;
  v51 = 0;
  v52 = 0;
  EnterCrit(1LL);
  if ( a10 == -3 )
  {
    v23 = 0LL;
    v24 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v24 = *ThreadWin32Thread;
    if ( v24 )
    {
      v26 = *(_QWORD *)(v24 + 416);
      if ( v26 )
        v23 = *(_QWORD *)(v26 + 96);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_88;
  }
  else if ( a10 )
  {
    v23 = ValidateHwnd(a10);
    if ( !v23 )
      goto LABEL_87;
  }
  else
  {
    v23 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) == 0 )
  {
    v27 = gptiCurrent;
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v28 = a11;
LABEL_15:
      if ( (GetAppCompatFlags2(1024LL, v19, v20, v21) & 0x800) != 0 )
        a1 &= 0x800777FF;
      if ( (a1 & 0x8A7F77FF) != a1 )
        a1 &= 0x8A7F77FF;
      v29 = a2;
      v30 = (__m128i **)W32UserProbeAddress;
      if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          v29 = (__m128i *)W32UserProbeAddress;
        v31 = *v29;
        Size[0] = v29->m128i_i64[0];
        v32 = _mm_srli_si128(v31, 8).m128i_u64[0];
        Size[1] = v32;
        if ( v32 )
        {
          if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
          {
            v33 = LODWORD(Size[0]);
            v43 = v32 + LODWORD(Size[0]) + 1LL;
            if ( v43 < v32 || v43 > W32UserProbeAddress )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v32 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v33 = LODWORD(Size[0]);
            v34 = v32 + LODWORD(Size[0]) + 2LL;
            if ( v34 < v32 || v34 > W32UserProbeAddress )
              ExRaiseAccessViolation();
          }
          v35 = Win32AllocPoolWithQuota(v33 + 2, 2020897621LL);
          Size[1] = v35;
          if ( !v35 )
            ExRaiseStatus(-1073741801);
          v52 = 1;
          PushW32ThreadLock(v35, v57, Win32FreePool);
          memmove((void *)Size[1], (const void *)v32, LODWORD(Size[0]));
          *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
          HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
          v30 = (__m128i **)W32UserProbeAddress;
        }
        else
        {
          LODWORD(Size[0]) = 0;
        }
        a2 = (__m128i *)Size;
        v27 = gptiCurrent;
      }
      v36 = a3;
      if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a3 >= *v30 )
          v36 = *v30;
        v53 = *v36;
        v37 = _mm_srli_si128(v53, 8).m128i_u64[0];
        if ( v37 )
        {
          if ( v53.m128i_i32[0] > (v53.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v53.m128i_i32[1] < 0 )
          {
            v44 = v37 + v53.m128i_u32[0] + 1LL;
            if ( v44 < v37 || v44 > (unsigned __int64)*v30 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v53.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v38 = v37 + v53.m128i_u32[0] + 2LL;
            if ( v38 < v37 || v38 > (unsigned __int64)*v30 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v53.m128i_i32[0] = 0;
        }
        a3 = &v53;
      }
      v39 = a4;
      if ( a4 )
      {
        if ( a4 >= *v30 )
          v39 = *v30;
        v54 = *v39;
        v40 = _mm_srli_si128(v54, 8).m128i_u64[0];
        if ( v40 )
        {
          if ( v54.m128i_i32[0] > (v54.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v54.m128i_i32[1] < 0 )
          {
            v42 = v40 + v54.m128i_u32[0] + 1LL;
            if ( v42 < v40 || v42 > (unsigned __int64)*v30 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v54.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v41 = v40 + v54.m128i_u32[0] + 2LL;
            if ( v41 < v40 || v41 > (unsigned __int64)*v30 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v54.m128i_i32[0] = 0;
        }
        a4 = &v54;
      }
      v56[0] = *(_QWORD *)(v27 + 376);
      *(_QWORD *)(v27 + 376) = v56;
      v56[1] = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      Window = (__int64 *)xxxCreateWindowEx(
                            a1,
                            (_DWORD)a2,
                            (_DWORD)a3,
                            (_DWORD)a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            v23,
                            v28,
                            a12,
                            a13,
                            a14,
                            a15,
                            a16,
                            a17);
      v48 = 0LL;
      if ( Window )
        v48 = *Window;
      ThreadUnlock1(v47, v46);
      goto LABEL_79;
    }
    v28 = ValidateHmenu(a11);
    if ( v28 )
    {
      v55[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v55;
      v55[1] = v28;
      ++*(_DWORD *)(v28 + 8);
      v18 = 1;
      v51 = 1;
      goto LABEL_15;
    }
LABEL_87:
    v48 = 0LL;
    goto LABEL_83;
  }
LABEL_88:
  v48 = 0LL;
  UserSetLastError(87LL);
LABEL_79:
  if ( v52 )
    PopAndFreeAlwaysW32ThreadLock(v57);
  if ( v18 )
    ThreadUnlock1(v22, v19);
LABEL_83:
  UserSessionSwitchLeaveCrit(v22, v19);
  return v48;
}
