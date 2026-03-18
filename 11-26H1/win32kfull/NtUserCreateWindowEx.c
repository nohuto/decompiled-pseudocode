/*
 * XREFs of NtUserCreateWindowEx @ 0x14004D200
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x1400365F0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x14004D0E8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14004D19C (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004D1E0 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG64 a2,
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
  __int64 v21; // rcx
  __int64 v22; // rbx
  struct tagTHREADINFO *v23; // rax
  struct tagTHREADINFO *v24; // rsi
  __int64 **v25; // rax
  __int64 v26; // rsi
  __int16 AppCompatFlags2; // ax
  unsigned int v28; // ecx
  unsigned int v29; // r12d
  __m128i **v30; // rcx
  unsigned __int64 v31; // xmm0_8
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // xmm0_8
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // xmm0_8
  ULONG64 v38; // r8
  __int64 v39; // rcx
  ULONG_PTR v40; // r12
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v42; // rax
  ULONG64 v43; // r8
  struct tagWND *v44; // rsi
  __int64 *Window; // rax
  __int64 v46; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  size_t Size[2]; // [rsp+90h] [rbp-E8h] BYREF
  struct tagWND *v51; // [rsp+A0h] [rbp-D8h]
  __int64 v52[2]; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-C0h]
  __m128i v54; // [rsp+D0h] [rbp-A8h] BYREF
  __m128i v55; // [rsp+E0h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+F0h] [rbp-88h] BYREF
  void (*v57)(void *); // [rsp+100h] [rbp-78h]
  ULONG_PTR v58[2]; // [rsp+108h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+118h] [rbp-60h] BYREF
  __int64 v60[10]; // [rsp+128h] [rbp-50h] BYREF
  unsigned int v61; // [rsp+1C8h] [rbp+50h]

  *(_OWORD *)Size = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  EnterCrit(0LL, 0LL);
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v52);
  v21 = a10;
  v22 = 0LL;
  if ( a10 == -3 )
  {
    v51 = 0LL;
    v23 = PtiCurrent(-3LL);
    if ( v23 )
    {
      v21 = *((_QWORD *)v23 + 61);
      if ( v21 )
        v51 = *(struct tagWND **)(v21 + 112);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_86;
  }
  else if ( a10 )
  {
    v51 = (struct tagWND *)ValidateHwnd(a10);
    if ( !v51 )
      goto LABEL_75;
  }
  else
  {
    v51 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) != 0 )
  {
LABEL_86:
    UserSetLastError(87);
    goto LABEL_75;
  }
  v24 = PtiCurrent(v21);
  v58[0] = (ULONG_PTR)v24;
  if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
  {
    v25 = (__int64 **)SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v60, a11);
    v53 = (__int64)v25[2];
    v26 = **v25;
    if ( v26 != *(_QWORD *)v52[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v52);
      if ( v26 )
      {
        v52[0] = *(_QWORD *)(v26 + 152);
        ++*(_DWORD *)(v52[0] + 8);
      }
      else
      {
        v52[0] = gSmartObjNullRef;
      }
    }
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v60);
  }
  else
  {
    v48 = ValidateHmenu(a11, 1LL);
    v53 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v52, v48);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v52) )
      goto LABEL_75;
    v49 = v53;
    if ( !v53 )
      v49 = *(_QWORD *)v52[0];
    Win32HM_LockIntoThread<0>((__int64)v24, v49, BugCheckParameter3);
  }
  AppCompatFlags2 = GetAppCompatFlags2(1024LL);
  v28 = a1 & 0x800777FF;
  if ( (AppCompatFlags2 & 0x800) == 0 )
    v28 = a1;
  v29 = v28 & 0x8A7F77FF;
  if ( (v28 & 0x8A7F77FF) == v28 )
    v29 = v28;
  v61 = v29;
  v30 = (__m128i **)MmUserProbeAddress;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)Size = *(_OWORD *)a2;
    v37 = _mm_srli_si128(*(__m128i *)Size, 8).m128i_u64[0];
    if ( v37 )
    {
      if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
      {
        v43 = v37 + LODWORD(Size[0]) + 1LL;
        if ( v43 < v37 || v43 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v37 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v38 = v37 + LODWORD(Size[0]) + 2LL;
        if ( v38 < v37 || v38 > MmUserProbeAddress )
          ExRaiseAccessViolation();
      }
      v40 = Win32AllocPoolWithQuotaZInit(LODWORD(Size[0]) + 2LL, 2020897621LL);
      Size[1] = v40;
      if ( !v40 )
        ExRaiseStatus(-1073741801);
      if ( v57 != (void (*)(void *))-1LL )
      {
        BugCheckParameter4 = PtiCurrent(v39);
        KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v40, (ULONG_PTR)BugCheckParameter4);
      }
      v42 = PtiCurrent(v39);
      BugCheckParameter2[0] = *((_QWORD *)v42 + 47);
      *((_QWORD *)v42 + 47) = BugCheckParameter2;
      BugCheckParameter2[1] = v40;
      v57 = Win32FreePool;
      memmove((void *)Size[1], (const void *)v37, LODWORD(Size[0]));
      *(_WORD *)((Size[0] & 0xFFFFFFFE) + Size[1]) = 0;
      HIDWORD(Size[0]) = HIDWORD(Size[0]) & 0x80000000 | (LODWORD(Size[0]) + 2) & 0x7FFFFFFF;
      v30 = (__m128i **)MmUserProbeAddress;
      v29 = v61;
    }
    else
    {
      LODWORD(Size[0]) = 0;
    }
    a2 = (ULONG64)Size;
  }
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( a3 >= *v30 )
      a3 = *v30;
    v54 = *a3;
    v33 = _mm_srli_si128(v54, 8).m128i_u64[0];
    if ( v33 )
    {
      if ( v54.m128i_i32[0] > (v54.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v54.m128i_i32[1] < 0 )
      {
        v36 = v33 + v54.m128i_u32[0] + 1LL;
        if ( v36 < v33 || v36 > (unsigned __int64)*v30 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v33 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v34 = v33 + v54.m128i_u32[0] + 2LL;
        if ( v34 < v33 || v34 > (unsigned __int64)*v30 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v54.m128i_i32[0] = 0;
    }
    a3 = &v54;
  }
  if ( a4 )
  {
    if ( a4 >= *v30 )
      a4 = *v30;
    v55 = *a4;
    v31 = _mm_srli_si128(v55, 8).m128i_u64[0];
    if ( v31 )
    {
      if ( v55.m128i_i32[0] > (v55.m128i_i32[1] & 0x7FFFFFFFu) )
        ExRaiseAccessViolation();
      if ( v55.m128i_i32[1] < 0 )
      {
        v35 = v31 + v55.m128i_u32[0] + 1LL;
        if ( v35 < v31 || v35 > (unsigned __int64)*v30 )
          ExRaiseAccessViolation();
      }
      else
      {
        if ( (v31 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v32 = v31 + v55.m128i_u32[0] + 2LL;
        if ( v32 < v31 || v32 > (unsigned __int64)*v30 )
          ExRaiseAccessViolation();
      }
    }
    else
    {
      v55.m128i_i32[0] = 0;
    }
    a4 = &v55;
  }
  v44 = v51;
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v58, v58[0], (__int64)v51);
  Window = (__int64 *)xxxCreateWindowEx(
                        v29,
                        a2,
                        (int)a3,
                        (int)a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        v44,
                        (__int64)v52,
                        a12,
                        a13,
                        a14,
                        a15,
                        a16,
                        a17);
  if ( Window )
    v22 = *Window;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v58);
LABEL_75:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v52);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  UserSessionSwitchLeaveCrit(v46);
  return v22;
}
