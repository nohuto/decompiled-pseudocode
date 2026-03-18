/*
 * XREFs of NtUserCreateWindowEx @ 0x1C006C220
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
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
  __int64 v22; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r12
  __m128i *v27; // rdx
  __m128i **v28; // rcx
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
  __int64 v47; // rcx
  size_t Size[2]; // [rsp+90h] [rbp-C8h] BYREF
  int v50; // [rsp+A0h] [rbp-B8h]
  int v51; // [rsp+A4h] [rbp-B4h]
  __m128i v52; // [rsp+B0h] [rbp-A8h] BYREF
  __m128i v53; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v54[3]; // [rsp+E0h] [rbp-78h] BYREF
  _QWORD v55[3]; // [rsp+F8h] [rbp-60h] BYREF
  _BYTE v56[72]; // [rsp+110h] [rbp-48h] BYREF

  v18 = 0;
  v50 = 0;
  v51 = 0;
  EnterCrit(0LL, 1LL);
  if ( a10 == -3 )
  {
    v22 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21);
    if ( ThreadWin32Thread )
    {
      v24 = *(_QWORD *)(ThreadWin32Thread + 408);
      if ( v24 )
        v22 = *(_QWORD *)(v24 + 96);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_86;
  }
  else if ( a10 )
  {
    v22 = ValidateHwnd(a10);
    if ( !v22 )
      goto LABEL_85;
  }
  else
  {
    v22 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) == 0 )
  {
    v25 = gptiCurrent;
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v26 = a11;
LABEL_10:
      if ( (GetAppCompatFlags2(1024LL, v19, v20, v21) & 0x800) != 0 )
        a1 &= 0x800777FF;
      if ( (a1 & 0x8A7F77FF) != a1 )
        a1 &= 0x8A7F77FF;
      v27 = a2;
      v28 = (__m128i **)W32UserProbeAddress;
      if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
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
          v51 = 1;
          PushW32ThreadLock(v33, v56, Win32FreePool);
          memmove((void *)Size[1], (const void *)v30, LODWORD(Size[0]));
          *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
          HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
          v28 = (__m128i **)W32UserProbeAddress;
        }
        else
        {
          LODWORD(Size[0]) = 0;
        }
        a2 = (__m128i *)Size;
        v25 = gptiCurrent;
      }
      v34 = a3;
      if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a3 >= *v28 )
          v34 = *v28;
        v52 = *v34;
        v35 = _mm_srli_si128(v52, 8).m128i_u64[0];
        if ( v35 )
        {
          if ( v52.m128i_i32[0] > (v52.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v52.m128i_i32[1] < 0 )
          {
            v42 = v35 + v52.m128i_u32[0] + 1LL;
            if ( v42 < v35 || v42 > (unsigned __int64)*v28 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v52.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v36 = v35 + v52.m128i_u32[0] + 2LL;
            if ( v36 < v35 || v36 > (unsigned __int64)*v28 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v52.m128i_i32[0] = 0;
        }
        a3 = &v52;
      }
      v37 = a4;
      if ( a4 )
      {
        if ( a4 >= *v28 )
          v37 = *v28;
        v53 = *v37;
        v38 = _mm_srli_si128(v53, 8).m128i_u64[0];
        if ( v38 )
        {
          if ( v53.m128i_i32[0] > (v53.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v53.m128i_i32[1] < 0 )
          {
            v40 = v38 + v53.m128i_u32[0] + 1LL;
            if ( v40 < v38 || v40 > (unsigned __int64)*v28 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v53.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v39 = v38 + v53.m128i_u32[0] + 2LL;
            if ( v39 < v38 || v39 > (unsigned __int64)*v28 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v53.m128i_i32[0] = 0;
        }
        a4 = &v53;
      }
      v55[0] = *(_QWORD *)(v25 + 368);
      *(_QWORD *)(v25 + 368) = v55;
      v55[1] = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
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
                            v22,
                            v26,
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
      goto LABEL_74;
    }
    v26 = ValidateHmenu(a11);
    if ( v26 )
    {
      v54[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v54;
      v54[1] = v26;
      ++*(_DWORD *)(v26 + 8);
      v18 = 1;
      v50 = 1;
      goto LABEL_10;
    }
LABEL_85:
    v46 = 0LL;
    goto LABEL_78;
  }
LABEL_86:
  v46 = 0LL;
  UserSetLastError(87LL);
LABEL_74:
  if ( v51 )
    PopAndFreeAlwaysW32ThreadLock(v56);
  if ( v18 )
    ThreadUnlock1(v47, v19);
LABEL_78:
  UserSessionSwitchLeaveCrit(v47, v19);
  return v46;
}
