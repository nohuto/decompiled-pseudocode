/*
 * XREFs of NtUserCreateWindowStation @ 0x1C0138AC0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C013AC8C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C01E9E50 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
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
  const unsigned __int16 *v14; // r8
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
  unsigned __int16 *v25; // rdi
  NTSTATUS v26; // eax
  ULONG v27; // eax
  int v28; // edx
  NTSTATUS WindowStation; // r14d
  ULONG v30; // eax
  void *v32; // [rsp+58h] [rbp-670h] BYREF
  __int64 v33; // [rsp+60h] [rbp-668h] BYREF
  NTSTATUS v34; // [rsp+68h] [rbp-660h]
  unsigned __int16 *v35; // [rsp+70h] [rbp-658h] BYREF
  int v36; // [rsp+78h] [rbp-650h]
  int v37; // [rsp+80h] [rbp-648h]
  int v38; // [rsp+88h] [rbp-640h]
  _DWORD *v39; // [rsp+90h] [rbp-638h]
  __int64 v40; // [rsp+98h] [rbp-630h]
  int v41; // [rsp+A8h] [rbp-620h]
  const unsigned __int16 *v42; // [rsp+B0h] [rbp-618h]
  _QWORD v43[3]; // [rsp+B8h] [rbp-610h] BYREF
  _QWORD v44[3]; // [rsp+D0h] [rbp-5F8h] BYREF
  _QWORD v45[3]; // [rsp+E8h] [rbp-5E0h] BYREF
  struct _UNICODE_STRING v46; // [rsp+100h] [rbp-5C8h] BYREF
  struct _OBJECT_ATTRIBUTES v47; // [rsp+110h] [rbp-5B8h] BYREF
  _BYTE v48[784]; // [rsp+140h] [rbp-588h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v49; // [rsp+450h] [rbp-278h] BYREF
  unsigned __int16 v50[272]; // [rsp+460h] [rbp-268h] BYREF

  v9 = a3;
  v37 = a2;
  v40 = a3;
  v36 = a4;
  v12 = a7;
  v32 = 0LL;
  v39 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  EnterCrit(1LL);
  v34 = 0;
  if ( a7 >= W32UserProbeAddress )
    v12 = W32UserProbeAddress;
  v13 = *(_DWORD *)v12;
  v38 = v13;
  v41 = v13;
  v14 = *(const unsigned __int16 **)(v12 + 8);
  v42 = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned __int64)v14 + (unsigned __int16)v13 + 2;
  if ( v15 >= W32UserProbeAddress
    || (unsigned __int16)v13 > HIWORD(v38)
    || (v13 & 1) != 0
    || v15 <= (unsigned __int64)v14 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyNW(v50, 9uLL, v14, (unsigned __int64)(unsigned __int16)v13 >> 1);
  v16 = (_DWORD *)Win32AllocPoolWithQuota(784LL, 1702064981LL);
  v39 = v16;
  if ( v16 )
  {
    v19 = (_OWORD *)a6;
    if ( a6 + 784 < a6 || a6 + 784 > W32UserProbeAddress )
      v19 = (_OWORD *)W32UserProbeAddress;
    v20 = v48;
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
    v24 = v48;
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
      v26 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
              1,
              a1,
              (unsigned __int16 (*)[256])&v50[16],
              &v47,
              &v49,
              &v32,
              &v46,
              &v35);
      v34 = v26;
      if ( v26 >= 0 )
      {
        if ( v32 )
          PushW32ThreadLock((__int64)v32, v45, (__int64)CleanupSecurityDescriptor);
        PushW32ThreadLock((__int64)v16, v44, (__int64)Win32FreePool);
        v25 = v35;
        if ( v35 )
          PushW32ThreadLock((__int64)v35, v43, (__int64)Win32FreePool);
        LOBYTE(v28) = 0;
        WindowStation = xxxCreateWindowStation(
                          (unsigned int)&v47,
                          v28,
                          a2,
                          v9,
                          a4,
                          a5,
                          (__int64)v16,
                          (__int64)v50,
                          a8,
                          (__int64)&v33);
        if ( v25 )
        {
          PopAndFreeAlwaysW32ThreadLock((__int64)v43);
          v25 = 0LL;
        }
        PopW32ThreadLock(v44);
        if ( v32 )
        {
          PopAndFreeAlwaysW32ThreadLock((__int64)v45);
          v32 = 0LL;
        }
        if ( WindowStation < 0 )
        {
          v33 = 0LL;
          v30 = RtlNtStatusToDosError(WindowStation);
          UserSetLastError(v30);
        }
      }
      else
      {
        v33 = 0LL;
        v27 = RtlNtStatusToDosError(v26);
        UserSetLastError(v27);
        v25 = v35;
      }
    }
    else
    {
      v33 = 0LL;
      UserSetLastError(87);
      v25 = v35;
    }
    Win32FreePool(v16);
    if ( v25 )
      Win32FreePool(v25);
    v18 = v32;
    if ( v32 )
    {
      LOBYTE(v17) = 1;
      SeReleaseSecurityDescriptor(v32, v17, 0LL);
      v32 = 0LL;
    }
  }
  else
  {
    v33 = 0LL;
    UserSetLastError(8);
  }
  UserSessionSwitchLeaveCrit(v18, v17);
  return v33;
}
