/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C02192C0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  __int64 v8; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // edi
  __int64 v15; // rdi
  int v16; // ecx
  void *v17; // r12
  void *v18; // r14
  size_t v19; // r15
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v27; // [rsp+40h] [rbp-D8h]
  int v28; // [rsp+48h] [rbp-D0h]
  __int16 v29; // [rsp+48h] [rbp-D0h]
  int v30; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-C0h]
  __int64 v32; // [rsp+60h] [rbp-B8h]
  __int64 v33; // [rsp+68h] [rbp-B0h]
  _QWORD v34[3]; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v35[3]; // [rsp+90h] [rbp-88h] BYREF
  _QWORD v36[3]; // [rsp+A8h] [rbp-70h] BYREF
  __int128 v37; // [rsp+C0h] [rbp-58h] BYREF

  v33 = a4;
  v8 = a2;
  v32 = a2;
  v10 = a6;
  v27 = 0;
  EnterCrit(1LL);
  if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
LABEL_3:
      v14 = 0;
      goto LABEL_30;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( a5 )
  {
    v15 = HMValidateHandle(a5, 3);
    if ( !v15 )
      goto LABEL_3;
  }
  else
  {
    v15 = 0LL;
  }
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (__int128 *)W32UserProbeAddress;
  v37 = *a3;
  if ( a6 >= W32UserProbeAddress )
    v10 = W32UserProbeAddress;
  v16 = *(_DWORD *)v10;
  v28 = *(_DWORD *)v10;
  v30 = *(_DWORD *)v10;
  v17 = *(void **)(v10 + 8);
  v18 = v17;
  v31 = (__int64)v17;
  if ( v17 )
  {
    if ( ((unsigned __int8)v17 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = (unsigned __int16)v16;
    v20 = (unsigned __int64)v17 + (unsigned __int16)v16 + 2;
    if ( v20 >= W32UserProbeAddress
      || (unsigned __int16)v16 > HIWORD(v28)
      || (v16 & 1) != 0
      || v20 <= (unsigned __int64)v17 )
    {
      *W32UserProbeAddress = 0;
    }
    v29 = v16 + 2;
    v21 = Win32AllocPoolWithQuota((unsigned __int16)v16 + 2LL, 2020897621LL);
    v18 = (void *)v21;
    v31 = v21;
    if ( !v21 )
      ExRaiseStatus(-1073741801);
    v27 = 1;
    PushW32ThreadLock(v21, v36, (__int64)Win32FreePool);
    memmove(v18, v17, v19);
    *((_WORD *)v18 + (v19 >> 1)) = 0;
    HIWORD(v30) = v29;
    v8 = v32;
  }
  v34[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v34;
  v34[1] = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v35[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v35;
  v35[1] = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v14 = xxxDrawCaptionTemp(v13, v8, &v37, v33, v15, (unsigned __int64)&v30 & -(__int64)(v18 != 0LL), a7);
  ThreadUnlock1(v23, v22);
  ThreadUnlock1(v25, v24);
  if ( v27 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v36);
LABEL_30:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v14;
}
