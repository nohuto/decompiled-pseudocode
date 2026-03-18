/*
 * XREFs of fnHkINLPMSG @ 0x14003B750
 * Callers:
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxCallCtfHook @ 0x14003CF78 (xxxCallCtfHook.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x14003CF24 (-THREAD_CODEPAGE@@YAGXZ.c)
 *     RtlMBMessageWParamCharToWCS @ 0x14003E354 (RtlMBMessageWParamCharToWCS.c)
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14018462C (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 *     _FreeGestureInfo @ 0x1401EDD90 (_FreeGestureInfo.c)
 *     _FreeTouchInputInfo @ 0x1401EE500 (_FreeTouchInputInfo.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall fnHkINLPMSG(
        unsigned __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  __int64 v9; // r15
  int v10; // r14d
  int v11; // r12d
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  ULONG BytesInUnicodeString; // edx
  __int64 v22; // rdx
  int v23; // eax
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rcx
  unsigned __int64 *v30; // rax
  _DWORD *v31; // r13
  __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rcx
  int v35; // edi
  __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  _OWORD *v40; // rdi
  __int64 v41; // rcx
  unsigned int v42; // eax
  _QWORD *v43; // rdx
  __int64 v44; // rdi
  _QWORD *v45; // rax
  __int64 v46[3]; // [rsp+30h] [rbp-108h] BYREF
  int v47; // [rsp+48h] [rbp-F0h] BYREF
  BOOL v48; // [rsp+4Ch] [rbp-ECh]
  void *Src; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-E0h]
  _QWORD v51[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v52; // [rsp+70h] [rbp-C8h]
  __int128 v53; // [rsp+80h] [rbp-B8h]
  WCHAR UnicodeString[8]; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-98h]
  __int64 v56; // [rsp+B0h] [rbp-88h]
  __int128 v57; // [rsp+C0h] [rbp-78h] BYREF
  volatile void *Address; // [rsp+D0h] [rbp-68h]
  __int64 v59; // [rsp+D8h] [rbp-60h]
  __int128 v60; // [rsp+E8h] [rbp-50h]
  volatile void *v61; // [rsp+F8h] [rbp-40h]
  unsigned int MultiByteString; // [rsp+140h] [rbp+8h] BYREF
  int v63; // [rsp+148h] [rbp+10h] BYREF
  __int64 v64; // [rsp+150h] [rbp+18h]

  Src = 0LL;
  v63 = 0;
  v9 = 0LL;
  v64 = 0LL;
  v50 = 0LL;
  v46[0] = 0LL;
  v52 = 0LL;
  v56 = 0LL;
  v51[0] = (unsigned int)a1;
  v51[1] = a2;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 11) = 0;
  v53 = *a3;
  *(_OWORD *)UnicodeString = a3[1];
  v55 = a3[2];
  v10 = *((_DWORD *)a3 + 2);
  if ( v10 != 258 && v10 != 262 )
  {
    v11 = a6;
LABEL_4:
    if ( v10 == 283 || v10 == 576 || v10 == 281 )
    {
      v9 = *((_QWORD *)a3 + 2);
      v12 = *((_QWORD *)a3 + 3);
      v64 = v12;
      v13 = HMValidateHandleWithDescriptor(v12, 0xFFu);
      v15 = v13;
      if ( !v13 || *((_DWORD *)a3 + 2) == 576 && *(_BYTE *)(_HMPheFromObject(v13) + 24) != 20 )
        return 0LL;
      v23 = *((_DWORD *)a3 + 2);
      if ( (v23 == 283 || v23 == 281) && *(_BYTE *)(_HMPheFromObject(v15) + 24) != 21 )
        return 0LL;
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v14);
      if ( CurrentThreadWin32Thread )
        v25 = *CurrentThreadWin32Thread;
      else
        v25 = 0LL;
      v50 = *(_QWORD *)(v25 + 728);
      v26 = (__int64 *)PsGetCurrentThreadWin32Thread(v25);
      if ( v26 )
        v27 = *v26;
      else
        v27 = 0LL;
      v46[0] = *(_QWORD *)(v27 + 736);
      v28 = (__int64 *)PsGetCurrentThreadWin32Thread(v27);
      if ( v28 )
        v29 = *v28;
      else
        v29 = 0LL;
      *(_QWORD *)(v29 + 728) = v12;
      v30 = (unsigned __int64 *)PsGetCurrentThreadWin32Thread(v29);
      if ( v30 )
        a1 = *v30;
      else
        a1 = 0LL;
      *(_QWORD *)(a1 + 736) = v9;
    }
    goto LABEL_27;
  }
  v11 = a6;
  if ( !a6 )
    goto LABEL_4;
  v9 = *((_QWORD *)a3 + 2);
  MultiByteString = 0;
  if ( v10 == 262 || (unsigned int)(v10 - 258) <= 1 )
  {
    v17 = THREAD_CODEPAGE();
    UserSessionState = W32GetUserSessionState(v19, v18);
    BytesInUnicodeString = 2;
    if ( (**(_DWORD **)(UserSessionState + 19904) & 2) == 0 )
      BytesInUnicodeString = 4;
    if ( (_WORD)v17 == NlsAnsiCodePage || !(_WORD)v17 )
    {
      if ( RtlUnicodeToMultiByteN((PCHAR)&MultiByteString, 4u, 0LL, UnicodeString, BytesInUnicodeString) < 0 )
      {
        *(_QWORD *)UnicodeString = 0LL;
        goto LABEL_27;
      }
    }
    else if ( !ConvertToAndFromWideChar(v17, UnicodeString, BytesInUnicodeString, (char *)&MultiByteString, 4, 0) )
    {
      *(_QWORD *)UnicodeString = 0LL;
      goto LABEL_27;
    }
    a1 = *(_QWORD *)(W32GetUserSessionState(a1, v22) + 19904);
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      a1 = 65280LL;
      if ( (MultiByteString & 0xFF00) != 0 )
      {
        a1 = ((unsigned __int64)(unsigned __int16)MultiByteString >> 8) | (((unsigned __int8)MultiByteString | ((unsigned __int64)UnicodeString[1] << 8)) << 8);
        *(_QWORD *)UnicodeString = a1;
      }
      else
      {
        *(_QWORD *)UnicodeString = (unsigned __int8)MultiByteString;
      }
    }
    else
    {
      *(_QWORD *)UnicodeString = MultiByteString;
    }
  }
LABEL_27:
  *(_QWORD *)&v52 = a4;
  *((_QWORD *)&v52 + 1) = a5;
  v31 = a7;
  LODWORD(v56) = *a7;
  v47 = GET_USERCRIT_DISPOSITION(a1);
  v48 = 1;
  if ( v47 )
  {
    v33 = (__int64 *)PsGetCurrentThreadWin32Thread(v32);
    if ( v33 )
      v34 = *v33;
    else
      v34 = 0LL;
    v48 = *(_BYTE *)(v34 + 1708) != 1;
    UserSessionSwitchLeaveCrit(v34);
  }
  EtwTraceBeginCallback(47LL);
  v35 = KeUserModeCallback(47LL, v51, 88LL, &Src, &v63);
  EtwTraceEndCallback(47LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v47);
  if ( v10 == 283 || v10 == 576 || v10 == 281 )
  {
    v37 = (__int64 *)PsGetCurrentThreadWin32Thread(v36);
    if ( v37 )
      v38 = *v37;
    else
      v38 = 0LL;
    *(_QWORD *)(v38 + 728) = v50;
    v45 = (_QWORD *)PsGetCurrentThreadWin32Thread(v38);
    if ( v45 )
      v45 = (_QWORD *)*v45;
    v45[92] = v46[0];
  }
  if ( v35 < 0 || v63 != 24 )
    return 0LL;
  v46[0] = 0LL;
  RtlCopyFromUser(v46, Src, 8uLL);
  v39 = v46[0];
  v59 = v46[0];
  v57 = 0LL;
  Address = 0LL;
  RtlCopyFromUser(&v57, Src, 0x18uLL);
  v60 = v57;
  v61 = Address;
  v40 = Address;
  ProbeForRead(Address, 0x38uLL, 4u);
  *a3 = *v40;
  a3[1] = v40[1];
  a3[2] = v40[2];
  *v31 ^= (*((_DWORD *)v40 + 12) ^ *v31) & 0x10;
  v41 = *((unsigned int *)a3 + 2);
  if ( ((_DWORD)v41 == 258 || (_DWORD)v41 == 262) && v11 )
  {
    v43 = a3 + 1;
    if ( *(_QWORD *)UnicodeString == *((_QWORD *)a3 + 2) )
      *v43 = v9;
    else
      RtlMBMessageWParamCharToWCS(v41, v43);
  }
  v42 = *((_DWORD *)a3 + 2);
  if ( (v42 < 0x240 || v42 > 0x240) && ((v42 - 281) & 0xFFFFFFFD) != 0 )
  {
    if ( v9 == 1 )
    {
      v44 = v64;
      if ( v10 == 576 )
        FreeTouchInputInfo(v64, 1LL);
      if ( ((v10 - 281) & 0xFFFFFFFD) == 0 )
        FreeGestureInfo(v44, 1LL);
    }
  }
  else
  {
    *((_DWORD *)a3 + 2) = v10;
    *((_QWORD *)a3 + 2) = v9;
    *((_QWORD *)a3 + 3) = v64;
  }
  return v39;
}
