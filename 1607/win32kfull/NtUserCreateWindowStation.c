/*
 * XREFs of NtUserCreateWindowStation @ 0x1C00E9E50
 * Callers:
 *     <none>
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00E514C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     xxxCreateWindowStation @ 0x1C00EA280 (xxxCreateWindowStation.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C01E0EE0 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 */

__int64 __fastcall NtUserCreateWindowStation(
        struct _OBJECT_ATTRIBUTES *a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  int v9; // r12d
  __int64 v12; // rdi
  int v13; // ecx
  char *v14; // r8
  unsigned __int64 v15; // rdx
  _DWORD *v16; // rsi
  __int64 v17; // rdx
  void *v18; // rcx
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int16 *v27; // rdi
  NTSTATUS v28; // eax
  __int64 v29; // r9
  ULONG v30; // eax
  int v31; // edx
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  NTSTATUS WindowStation; // r14d
  __int64 v37; // r9
  ULONG v38; // eax
  __int64 v39; // r8
  void *v41; // [rsp+58h] [rbp-670h] BYREF
  __int64 v42; // [rsp+60h] [rbp-668h] BYREF
  NTSTATUS v43; // [rsp+68h] [rbp-660h]
  unsigned __int16 *v44; // [rsp+70h] [rbp-658h] BYREF
  int v45; // [rsp+78h] [rbp-650h]
  int v46; // [rsp+80h] [rbp-648h]
  int v47; // [rsp+88h] [rbp-640h]
  _DWORD *v48; // [rsp+90h] [rbp-638h]
  __int64 v49; // [rsp+98h] [rbp-630h]
  int v50; // [rsp+A8h] [rbp-620h]
  char *v51; // [rsp+B0h] [rbp-618h]
  _QWORD v52[3]; // [rsp+B8h] [rbp-610h] BYREF
  _QWORD v53[3]; // [rsp+D0h] [rbp-5F8h] BYREF
  _QWORD v54[3]; // [rsp+E8h] [rbp-5E0h] BYREF
  struct _UNICODE_STRING v55; // [rsp+100h] [rbp-5C8h] BYREF
  struct _OBJECT_ATTRIBUTES v56; // [rsp+110h] [rbp-5B8h] BYREF
  _BYTE v57[784]; // [rsp+140h] [rbp-588h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v58; // [rsp+450h] [rbp-278h] BYREF
  unsigned __int16 v59[272]; // [rsp+460h] [rbp-268h] BYREF

  v9 = a3;
  v46 = a2;
  v49 = a3;
  v47 = a4;
  v12 = a7;
  v41 = 0LL;
  v48 = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  EnterCrit(0LL, 1LL);
  v43 = 0;
  if ( a7 >= W32UserProbeAddress )
    v12 = W32UserProbeAddress;
  v13 = *(_DWORD *)v12;
  v45 = v13;
  v50 = v13;
  v14 = *(char **)(v12 + 8);
  v51 = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned __int64)&v14[(unsigned __int16)v13 + 2];
  if ( v15 >= W32UserProbeAddress
    || (unsigned __int16)v13 > HIWORD(v45)
    || (v13 & 1) != 0
    || v15 <= (unsigned __int64)v14 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyNW((char *)v59, 9LL, v14, (unsigned __int64)(unsigned __int16)v13 >> 1);
  v16 = (_DWORD *)Win32AllocPoolWithQuota(784LL, 1702064981LL);
  v48 = v16;
  if ( v16 )
  {
    v19 = (_OWORD *)a6;
    if ( a6 + 784 < a6 || a6 + 784 > W32UserProbeAddress )
      v19 = (_OWORD *)W32UserProbeAddress;
    v20 = v57;
    v21 = 6LL;
    v22 = 6LL;
    do
    {
      *v20 = *v19;
      v20[1] = v19[1];
      v20[2] = v19[2];
      v20[3] = v19[3];
      v20[4] = v19[4];
      v20[5] = v19[5];
      v20[6] = v19[6];
      v20 += 8;
      *(v20 - 1) = v19[7];
      v19 += 8;
      --v22;
    }
    while ( v22 );
    *v20 = *v19;
    v23 = v16;
    v24 = v57;
    do
    {
      *v23 = *v24;
      v23[1] = v24[1];
      v23[2] = v24[2];
      v23[3] = v24[3];
      v23[4] = v24[4];
      v23[5] = v24[5];
      v23[6] = v24[6];
      v23 += 8;
      *(v23 - 1) = v24[7];
      v24 += 8;
      --v21;
    }
    while ( v21 );
    *v23 = *v24;
    if ( *v16 < 8u )
    {
      v28 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
              1,
              a1,
              (unsigned __int16 (*)[256])&v59[16],
              &v56,
              &v58,
              &v41,
              &v55,
              &v44);
      v43 = v28;
      if ( v28 >= 0 )
      {
        if ( v41 )
          PushW32ThreadLock((__int64)v41, v54, (__int64)CleanupSecurityDescriptor, v29);
        PushW32ThreadLock((__int64)v16, v53, (__int64)Win32FreePool, v29);
        v27 = v44;
        if ( v44 )
          PushW32ThreadLock((__int64)v44, v52, (__int64)Win32FreePool, v32);
        LOBYTE(v31) = 0;
        WindowStation = xxxCreateWindowStation(
                          (unsigned int)&v56,
                          v31,
                          a2,
                          v9,
                          a4,
                          a5,
                          (__int64)v16,
                          (__int64)v59,
                          a8,
                          (__int64)&v42);
        if ( v27 )
        {
          PopAndFreeAlwaysW32ThreadLock((__int64)v52, v33, v34, v35);
          v27 = 0LL;
        }
        PopW32ThreadLock(v53, v33, v34, v35);
        if ( v41 )
        {
          PopAndFreeAlwaysW32ThreadLock((__int64)v54, v25, v26, v37);
          v41 = 0LL;
        }
        if ( WindowStation < 0 )
        {
          v42 = 0LL;
          v38 = RtlNtStatusToDosError(WindowStation);
          UserSetLastError(v38);
        }
      }
      else
      {
        v42 = 0LL;
        v30 = RtlNtStatusToDosError(v28);
        UserSetLastError(v30);
        v27 = v44;
      }
    }
    else
    {
      v42 = 0LL;
      UserSetLastError(87LL);
      v27 = v44;
    }
    Win32FreePool(v16, v25, v26);
    if ( v27 )
      Win32FreePool(v27, v17, v39);
    v18 = v41;
    if ( v41 )
    {
      LOBYTE(v17) = 1;
      SeReleaseSecurityDescriptor(v41, v17, 0LL);
      v41 = 0LL;
    }
  }
  else
  {
    v42 = 0LL;
    UserSetLastError(8LL);
  }
  UserSessionSwitchLeaveCrit(v18, v17);
  return v42;
}
