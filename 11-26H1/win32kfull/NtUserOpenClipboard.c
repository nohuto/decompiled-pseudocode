/*
 * XREFs of NtUserOpenClipboard @ 0x1401AF7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     _OpenClipboard @ 0x1401AFF98 (_OpenClipboard.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1401B03C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     UserGetLastError @ 0x1401B0B24 (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1401B0F10 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x14020DF40 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  struct tagTHREADINFO *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // r8
  signed int LastError; // eax
  const char *v23; // rbx
  int v24; // ecx
  int v25; // eax
  bool v26; // sf
  signed int v27; // eax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  void *v31; // rdx
  struct tagTHREADINFO *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // ecx
  int v45; // r8d
  int v46; // r9d
  __int64 v47; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v49; // [rsp+90h] [rbp+8h] BYREF
  __int64 v50; // [rsp+A0h] [rbp+18h] BYREF
  const char *v51; // [rsp+A8h] [rbp+20h] BYREF

  v49 = 0;
  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
    {
      v19 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *((_QWORD *)PtiCurrent(v4) + 57) + 976LL;
  v50 = v6;
  if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 66084)
    || (v12 = PtiCurrent(v9), v9 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 62968), *((_QWORD *)v12 + 61) == v9) )
  {
    if ( (unsigned int)dword_1403AA9F8 > 5
      && (qword_1403AAA08 & 0x400000000000LL) != 0
      && (qword_1403AAA10 & 0x400000000000LL) == qword_1403AAA10 )
    {
      v50 = v6;
      v49 = -2147024891;
      v23 = "OnLockscreen";
      v51 = "OnLockscreen";
      BugCheckParameter3[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v9,
        &unk_1403760D2,
        v10,
        BugCheckParameter3,
        &v51,
        &v49,
        &v50);
    }
    else
    {
      v23 = "OnLockscreen";
    }
    if ( (unsigned int)dword_1403AAA30 <= 5 || (qword_1403AAA40 & 1) == 0 || (qword_1403AAA48 & 1) != qword_1403AAA48 )
      goto LABEL_25;
    v31 = &unk_140376058;
    goto LABEL_42;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  if ( CurrentProcessWin32Process )
  {
    v16 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  if ( *(_DWORD *)(CurrentProcessWin32Process + 868) )
  {
    v32 = PtiCurrent(v16);
    v33 = *((_QWORD *)v32 + 61);
    v34 = *(_QWORD *)(v33 + 40);
    if ( !*(_QWORD *)(W32GetUserSessionState(v33, v35) + 18928) || !(unsigned int)ForegroundInputOwnerMatch(v32, 1) )
    {
      v36 = *(_QWORD *)(v34 + 80);
      if ( !v36 || *(struct tagTHREADINFO **)(v36 + 16) != v32 )
      {
        if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
        {
          v50 = v6;
          v49 = -2147024891;
          v23 = "NoForeground";
          v51 = "NoForeground";
          v47 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v37,
            &unk_14037600F,
            v38,
            &v47,
            &v51,
            &v49,
            &v50);
        }
        else
        {
          v23 = "NoForeground";
        }
        if ( (unsigned int)dword_1403AAA30 <= 5 || !tlgKeywordOn((__int64)&dword_1403AAA30, 1LL) )
          goto LABEL_25;
        v31 = &unk_140376095;
LABEL_42:
        v50 = v6;
        v49 = -2147024891;
        v51 = v23;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v9,
          (_DWORD)v31,
          v10,
          v11,
          (__int64)&v51,
          (__int64)&v49,
          (__int64)&v50);
LABEL_25:
        v24 = 5;
LABEL_26:
        v19 = 0;
        UserSetLastError(v24);
        goto LABEL_14;
      }
    }
  }
  if ( v5 )
  {
    v17 = PsGetCurrentProcessWin32Process(v16);
    if ( v17 )
      v17 &= -(__int64)(*(_QWORD *)v17 != 0LL);
    v18 = *(_QWORD *)(v5 + 16);
    if ( *(_QWORD *)(*(_QWORD *)(v18 + 456) + 656LL) != *(_QWORD *)(v17 + 656) )
    {
      v39 = PsGetCurrentProcessWin32Process(v18);
      if ( v39 )
        v39 &= -(__int64)(*(_QWORD *)v39 != 0LL);
      if ( *(_QWORD *)(v39 + 656) )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 456LL);
        if ( *(_QWORD *)(v40 + 656) )
          goto LABEL_61;
        v41 = PsGetCurrentProcessWin32Process(v40);
        if ( v41 )
          v41 &= -(__int64)(*(_QWORD *)v41 != 0LL);
        if ( (*(_DWORD *)(*(_QWORD *)(v41 + 656) + 32LL) & 4) != 0 )
        {
LABEL_61:
          UserSetLastError(87);
          if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
          {
            v50 = v6;
            v49 = -2147024809;
            v51 = "InvalidParameter";
            v47 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v42,
              &unk_140375F40,
              v43,
              &v47,
              &v51,
              &v49,
              &v50);
          }
          if ( (unsigned int)dword_1403AAA30 > 5 && tlgKeywordOn((__int64)&dword_1403AAA30, 1LL) )
          {
            v50 = v6;
            v49 = -2147024809;
            v51 = "InvalidParameter";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v44,
              (unsigned int)&unk_140375F03,
              v45,
              v46,
              (__int64)&v51,
              (__int64)&v49,
              (__int64)&v50);
          }
          v24 = 0;
          goto LABEL_26;
        }
      }
    }
  }
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v5);
  v19 = OpenClipboard(v5, &v49);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  RtlWriteULongToUser(a2, v49);
  if ( (unsigned int)dword_1403AA9F8 > 5
    && (qword_1403AAA08 & 0x400000000000LL) != 0
    && (qword_1403AAA10 & 0x400000000000LL) == qword_1403AAA10 )
  {
    v50 = v6;
    if ( v19 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v49 = LastError;
    v51 = "FunctionExit";
    v47 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v4,
      &unk_140375EBA,
      v20,
      &v47,
      &v51,
      &v49,
      &v50);
  }
  if ( !v19 )
  {
    v25 = UserGetLastError();
    v26 = v25 < 0;
    if ( v25 > 0 )
      v26 = 1;
    if ( v26
      && (unsigned int)dword_1403AAA30 > 5
      && (qword_1403AAA40 & 1) != 0
      && (qword_1403AAA48 & 1) == qword_1403AAA48 )
    {
      v50 = v6;
      v27 = UserGetLastError();
      if ( v27 > 0 )
        v27 = (unsigned __int16)v27 | 0x80070000;
      v49 = v27;
      v51 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v28,
        (unsigned int)&unk_140375E7D,
        v29,
        v30,
        (__int64)&v51,
        (__int64)&v49,
        (__int64)&v50);
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v4);
  return v19;
}
