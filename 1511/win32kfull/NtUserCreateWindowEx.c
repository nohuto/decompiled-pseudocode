/*
 * XREFs of NtUserCreateWindowEx @ 0x1C0072500
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __m128i *a4,
        unsigned int a5,
        signed int a6,
        signed int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r12
  __m128i *v27; // rdx
  unsigned __int64 *v28; // rcx
  __m128i v29; // xmm0
  unsigned __int64 v30; // xmm0_8
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __m128i *v34; // rdx
  unsigned __int64 v35; // xmm0_8
  unsigned __int64 v36; // r8
  __m128i *v37; // rdx
  unsigned __int64 v38; // xmm0_8
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r8
  __int64 *Window; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  size_t Size[2]; // [rsp+90h] [rbp-C8h] BYREF
  int v49; // [rsp+A0h] [rbp-B8h]
  int v50; // [rsp+A4h] [rbp-B4h]
  __m128i v51; // [rsp+B0h] [rbp-A8h] BYREF
  __m128i v52; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v53[3]; // [rsp+D8h] [rbp-80h] BYREF
  _QWORD v54[4]; // [rsp+F0h] [rbp-68h] BYREF
  _QWORD v55[9]; // [rsp+110h] [rbp-48h] BYREF

  v18 = 0;
  v49 = 0;
  v50 = 0;
  EnterCrit(0LL, 1LL);
  if ( a10 == -3 )
  {
    v21 = 0LL;
    v22 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v22 = *ThreadWin32Thread;
    if ( v22 )
    {
      v24 = *(_QWORD *)(v22 + 408);
      if ( v24 )
        v21 = *(_QWORD *)(v24 + 96);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_88;
  }
  else if ( a10 )
  {
    v21 = ValidateHwnd(a10);
    if ( !v21 )
      goto LABEL_87;
  }
  else
  {
    v21 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) == 0 )
  {
    v25 = gptiCurrent;
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v26 = a11;
LABEL_15:
      if ( (GetAppCompatFlags2(0x400u) & 0x800) != 0 )
        a1 &= 0x800777FF;
      if ( (a1 & 0x8A7F77FF) != a1 )
        a1 &= 0x8A7F77FF;
      v27 = (__m128i *)a2;
      v28 = (unsigned __int64 *)W32UserProbeAddress;
      if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a2 >= W32UserProbeAddress )
          v27 = (__m128i *)W32UserProbeAddress;
        v29 = *v27;
        Size[0] = v27->m128i_i64[0];
        v30 = _mm_srli_si128(v29, 8).m128i_u64[0];
        Size[1] = v30;
        if ( v30 )
        {
          if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
          {
            v31 = LODWORD(Size[0]);
            v41 = v30 + LODWORD(Size[0]) + 1LL;
            if ( v41 < v30 || v41 > W32UserProbeAddress )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v30 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v31 = LODWORD(Size[0]);
            v32 = v30 + LODWORD(Size[0]) + 2LL;
            if ( v32 < v30 || v32 > W32UserProbeAddress )
              ExRaiseAccessViolation();
          }
          v33 = Win32AllocPoolWithQuota(v31 + 2, 2020897621LL);
          Size[1] = v33;
          if ( !v33 )
            ExRaiseStatus(-1073741801);
          v50 = 1;
          PushW32ThreadLock(v33, v55, (__int64)Win32FreePool);
          memmove((void *)Size[1], (const void *)v30, LODWORD(Size[0]));
          *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
          HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
          v28 = (unsigned __int64 *)W32UserProbeAddress;
        }
        else
        {
          LODWORD(Size[0]) = 0;
        }
        a2 = (unsigned __int64)Size;
        v25 = gptiCurrent;
      }
      v34 = (__m128i *)a3;
      if ( (a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a3 >= *v28 )
          v34 = (__m128i *)*v28;
        v51 = *v34;
        v35 = _mm_srli_si128(v51, 8).m128i_u64[0];
        if ( v35 )
        {
          if ( v51.m128i_i32[0] > (v51.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v51.m128i_i32[1] < 0 )
          {
            v42 = v35 + v51.m128i_u32[0] + 1LL;
            if ( v42 < v35 || v42 > *v28 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v51.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v36 = v35 + v51.m128i_u32[0] + 2LL;
            if ( v36 < v35 || v36 > *v28 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v51.m128i_i32[0] = 0;
        }
        a3 = (unsigned __int64)&v51;
      }
      v37 = a4;
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= *v28 )
          v37 = (__m128i *)*v28;
        v52 = *v37;
        v38 = _mm_srli_si128(v52, 8).m128i_u64[0];
        if ( v38 )
        {
          if ( v52.m128i_i32[0] > (v52.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v52.m128i_i32[1] < 0 )
          {
            v40 = v38 + v52.m128i_u32[0] + 1LL;
            if ( v40 < v38 || v40 > *v28 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v52.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v39 = v38 + v52.m128i_u32[0] + 2LL;
            if ( v39 < v38 || v39 > *v28 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v52.m128i_i32[0] = 0;
        }
        a4 = &v52;
      }
      v54[0] = *(_QWORD *)(v25 + 368);
      *(_QWORD *)(v25 + 368) = v54;
      v54[1] = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      Window = (__int64 *)xxxCreateWindowEx(
                            a1,
                            a2,
                            a3,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            v21,
                            (_QWORD *)v26,
                            a12,
                            a13,
                            a14,
                            a15,
                            a16,
                            a17);
      v46 = 0LL;
      if ( Window )
        v46 = *Window;
      ThreadUnlock1(v45, v44);
      goto LABEL_79;
    }
    v26 = ValidateHmenu(a11);
    if ( v26 )
    {
      v53[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v53;
      v53[1] = v26;
      ++*(_DWORD *)(v26 + 8);
      v18 = 1;
      v49 = 1;
      goto LABEL_15;
    }
LABEL_87:
    v46 = 0LL;
    goto LABEL_83;
  }
LABEL_88:
  v46 = 0LL;
  UserSetLastError(87);
LABEL_79:
  if ( v50 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v55);
  if ( v18 )
    ThreadUnlock1(v20, v19);
LABEL_83:
  UserSessionSwitchLeaveCrit(v20, v19);
  return v46;
}
