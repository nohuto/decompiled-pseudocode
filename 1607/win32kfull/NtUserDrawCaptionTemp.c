/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C0211E10
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        unsigned int a7)
{
  HDC v8; // r15
  int *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned int v16; // edi
  __int64 v17; // rdi
  int v18; // ecx
  void *v19; // r12
  void *v20; // r14
  size_t v21; // r15
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v32; // [rsp+40h] [rbp-D8h]
  int v33; // [rsp+48h] [rbp-D0h]
  __int16 v34; // [rsp+48h] [rbp-D0h]
  int v35; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-C0h]
  HDC v37; // [rsp+60h] [rbp-B8h]
  __int64 v38; // [rsp+68h] [rbp-B0h]
  _QWORD v39[3]; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v40[3]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v41[3]; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-58h]

  v38 = a4;
  v8 = a2;
  v37 = a2;
  v10 = a6;
  v32 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v15 = ValidateHwnd(a1);
    if ( !v15 )
    {
LABEL_3:
      v16 = 0;
      goto LABEL_30;
    }
  }
  else
  {
    v15 = 0LL;
  }
  if ( a5 )
  {
    LOBYTE(v11) = 3;
    v17 = HMValidateHandle(a5, v11, v12, v13);
    if ( !v17 )
      goto LABEL_3;
  }
  else
  {
    v17 = 0LL;
  }
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (__int128 *)W32UserProbeAddress;
  v42 = *a3;
  if ( (unsigned __int64)a6 >= W32UserProbeAddress )
    v10 = (int *)W32UserProbeAddress;
  v18 = *v10;
  v33 = *v10;
  v35 = *v10;
  v19 = (void *)*((_QWORD *)v10 + 1);
  v20 = v19;
  v36 = (__int64)v19;
  if ( v19 )
  {
    if ( ((unsigned __int8)v19 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (unsigned __int16)v18;
    v22 = (unsigned __int64)v19 + (unsigned __int16)v18 + 2;
    if ( v22 >= W32UserProbeAddress
      || (unsigned __int16)v18 > HIWORD(v33)
      || (v18 & 1) != 0
      || v22 <= (unsigned __int64)v19 )
    {
      *W32UserProbeAddress = 0;
    }
    v34 = v18 + 2;
    v23 = Win32AllocPoolWithQuota((unsigned __int16)v18 + 2LL, 2020897621LL);
    v20 = (void *)v23;
    v36 = v23;
    if ( !v23 )
      ExRaiseStatus(-1073741801);
    v32 = 1;
    PushW32ThreadLock(v23, v41, (__int64)Win32FreePool, v24);
    memmove(v20, v19, v21);
    *((_WORD *)v20 + (v21 >> 1)) = 0;
    HIWORD(v35) = v34;
    v8 = v37;
  }
  v39[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v39;
  v39[1] = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v40;
  v40[1] = v17;
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  v16 = xxxDrawCaptionTemp(
          (struct tagWND *)v15,
          v8,
          (struct tagCURSOR *)v17,
          (unsigned __int64)&v35 & -(__int64)(v20 != 0LL),
          a7);
  ThreadUnlock1(v26, v25);
  ThreadUnlock1(v28, v27);
  if ( v32 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v41, v11, v29, v30);
LABEL_30:
  UserSessionSwitchLeaveCrit(v14, v11);
  return v16;
}
