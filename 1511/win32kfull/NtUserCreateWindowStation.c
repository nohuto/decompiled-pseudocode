/*
 * XREFs of NtUserCreateWindowStation @ 0x1C00D5C80
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0094D8C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     xxxCreateWindowStation @ 0x1C00D6334 (xxxCreateWindowStation.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C011FF84 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowStation(
        unsigned __int64 a1,
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
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // r8
  int v24; // edx
  WCHAR *v25; // rcx
  unsigned __int64 v26; // r9
  USHORT Length; // ax
  int v28; // eax
  NTSTATUS WindowStation; // edi
  unsigned __int64 v30; // rdx
  char v31; // r14
  __int64 *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // edx
  ULONG v38; // eax
  int v39; // [rsp+60h] [rbp-688h]
  int v40; // [rsp+60h] [rbp-688h]
  __int64 v41; // [rsp+68h] [rbp-680h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-678h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-670h] BYREF
  _DWORD *v44; // [rsp+88h] [rbp-660h]
  int v45; // [rsp+90h] [rbp-658h]
  int v46; // [rsp+98h] [rbp-650h]
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-648h] BYREF
  _DWORD v48[2]; // [rsp+A8h] [rbp-640h] BYREF
  __int128 v49; // [rsp+B0h] [rbp-638h] BYREF
  __m128i v50; // [rsp+C0h] [rbp-628h]
  __int128 v51; // [rsp+D0h] [rbp-618h]
  __int64 v52; // [rsp+E0h] [rbp-608h]
  int v53; // [rsp+F0h] [rbp-5F8h]
  char *v54; // [rsp+F8h] [rbp-5F0h]
  _QWORD v55[3]; // [rsp+118h] [rbp-5D0h] BYREF
  __int128 v56; // [rsp+130h] [rbp-5B8h]
  __m128i v57; // [rsp+140h] [rbp-5A8h]
  __int128 v58; // [rsp+150h] [rbp-598h]
  _BYTE v59[784]; // [rsp+160h] [rbp-588h] BYREF
  __int64 v60; // [rsp+470h] [rbp-278h] BYREF
  int v61; // [rsp+478h] [rbp-270h]
  char v62[32]; // [rsp+480h] [rbp-268h] BYREF
  WCHAR SourceString[256]; // [rsp+4A0h] [rbp-248h] BYREF

  v9 = a3;
  v46 = a2;
  v52 = a3;
  v45 = a4;
  v12 = a7;
  v44 = 0LL;
  BaseAddress = 0LL;
  v41 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a7 >= W32UserProbeAddress )
    v12 = W32UserProbeAddress;
  v13 = *(_DWORD *)v12;
  v39 = *(_DWORD *)v12;
  v53 = *(_DWORD *)v12;
  v14 = *(char **)(v12 + 8);
  v54 = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned __int64)&v14[(unsigned __int16)v13 + 2];
  if ( v15 >= W32UserProbeAddress || (unsigned __int16)v13 > HIWORD(v39) || v15 <= (unsigned __int64)v14 )
    *W32UserProbeAddress = 0;
  RtlStringCchCopyNW(v62, 9LL, v14, (unsigned __int64)(unsigned __int16)v13 >> 1);
  v16 = (_DWORD *)Win32AllocPoolWithQuota(784LL, 1702064981LL);
  v44 = v16;
  if ( v16 )
  {
    v17 = (_OWORD *)a6;
    if ( a6 + 784 < a6 || a6 + 784 > W32UserProbeAddress )
      v17 = (_OWORD *)W32UserProbeAddress;
    v18 = v59;
    v19 = 6LL;
    v20 = 6LL;
    do
    {
      *v18 = *v17;
      v18[1] = v17[1];
      v18[2] = v17[2];
      v18[3] = v17[3];
      v18[4] = v17[4];
      v18[5] = v17[5];
      v18[6] = v17[6];
      v18 += 8;
      *(v18 - 1) = v17[7];
      v17 += 8;
      --v20;
    }
    while ( v20 );
    *v18 = *v17;
    v21 = v16;
    v22 = v59;
    do
    {
      *v21 = *v22;
      v21[1] = v22[1];
      v21[2] = v22[2];
      v21[3] = v22[3];
      v21[4] = v22[4];
      v21[5] = v22[5];
      v21[6] = v22[6];
      v21 += 8;
      *(v21 - 1) = v22[7];
      v22 += 8;
      --v19;
    }
    while ( v19 );
    *v21 = *v22;
    if ( *v16 >= 8u )
    {
      v41 = 0LL;
      UserSetLastError(87);
    }
    else
    {
      if ( a1 + 48 < a1 || a1 + 48 > W32UserProbeAddress )
        a1 = W32UserProbeAddress;
      v56 = *(_OWORD *)a1;
      v57 = *(__m128i *)(a1 + 16);
      v58 = *(_OWORD *)(a1 + 32);
      v49 = v56;
      v50 = v57;
      v51 = v58;
      v50.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v57, 8)) & 0xFFFFFDFF;
      v23 = v57.m128i_i64[0];
      if ( __PAIR128__(v57.m128i_u64[0], *((unsigned __int64 *)&v56 + 1)) == 0 )
      {
        GetProcessLuid(0LL, v48);
        RtlStringCchPrintfW(SourceString, 0x100uLL, L"%ws\\Service-0x%x-%x$", szWindowStationDirectory, v48[1], v48[0]);
        RtlInitUnicodeString(&DestinationString, SourceString);
        v50.m128i_i64[0] = (__int64)&DestinationString;
        v31 = 0;
        WindowStation = 0;
      }
      else
      {
        if ( v57.m128i_i64[0] >= W32UserProbeAddress )
          v23 = W32UserProbeAddress;
        v24 = *(_DWORD *)v23;
        v40 = *(_DWORD *)v23;
        *(_DWORD *)&DestinationString.Length = *(_DWORD *)v23;
        v25 = *(WCHAR **)(v23 + 8);
        DestinationString.Buffer = v25;
        if ( ((unsigned __int8)v25 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v26 = (unsigned __int64)v25 + (unsigned __int16)v24 + 2;
        if ( v26 >= W32UserProbeAddress || (unsigned __int16)v24 > HIWORD(v40) || v26 <= (unsigned __int64)v25 )
          *W32UserProbeAddress = 0;
        Length = 522;
        if ( DestinationString.Length < 0x20Au )
          Length = DestinationString.Length;
        DestinationString.Length = Length;
        RegionSize = Length;
        v28 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
        WindowStation = v28;
        if ( v28 < 0 )
          ExRaiseStatus(v28);
        memmove(BaseAddress, DestinationString.Buffer, DestinationString.Length);
        DestinationString.Buffer = (PWSTR)BaseAddress;
        v50.m128i_i64[0] = (__int64)&DestinationString;
        v31 = 1;
        v16 = v44;
      }
      v32 = (__int64 *)*((_QWORD *)&v51 + 1);
      if ( *((_QWORD *)&v51 + 1) )
      {
        v30 = *((_QWORD *)&v51 + 1) + 12LL;
        if ( (unsigned __int64)(*((_QWORD *)&v51 + 1) + 12LL) < *((_QWORD *)&v51 + 1) || v30 > W32UserProbeAddress )
          v32 = (__int64 *)W32UserProbeAddress;
        v35 = *((_DWORD *)v32 + 2);
        v60 = *v32;
        v61 = v35;
        *((_QWORD *)&v51 + 1) = &v60;
      }
      if ( WindowStation >= 0 && (_QWORD)v51 )
      {
        LOBYTE(v30) = 1;
        WindowStation = SeCaptureSecurityDescriptor(v51, v30);
        *(_QWORD *)&v51 = 0LL;
      }
      if ( WindowStation < 0
        || (PushW32ThreadLock((__int64)v16, v55, (__int64)Win32FreePool),
            LOBYTE(v36) = v31,
            WindowStation = xxxCreateWindowStation(
                              (unsigned int)&v49,
                              v36,
                              a2,
                              v9,
                              a4,
                              a5,
                              (__int64)v16,
                              (__int64)v62,
                              a8,
                              (__int64)&v41),
            PopW32ThreadLock(v55),
            WindowStation < 0) )
      {
        v41 = 0LL;
        v38 = RtlNtStatusToDosError(WindowStation);
        UserSetLastError(v38);
      }
    }
    if ( v16 )
      Win32FreePool(v16);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v34 = 0LL;
  }
  else
  {
    v41 = 0LL;
    UserSetLastError(8);
  }
  UserSessionSwitchLeaveCrit(v34, v33);
  return v41;
}
