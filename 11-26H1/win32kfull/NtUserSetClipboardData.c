/*
 * XREFs of NtUserSetClipboardData @ 0x1402BC050
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1401B03C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     UserGetLastError @ 0x1401B0B24 (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1401B0F10 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _SetClipboardData @ 0x1401B1CEC (_SetClipboardData.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x14020DF40 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14025C788 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, char *a2, ULONG64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  const wchar_t *v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  bool HasUILimit; // al
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void **v28; // rax
  unsigned __int8 *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rax
  __int64 v33; // rcx
  int v34; // edi
  __int64 v35; // r8
  int LastError; // eax
  int v37; // eax
  bool v38; // sf
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  const wchar_t **v46; // [rsp+30h] [rbp-78h]
  LONGLONG TimeQuadPart; // [rsp+50h] [rbp-58h] BYREF
  __int64 v48; // [rsp+58h] [rbp-50h] BYREF
  const char *v49; // [rsp+60h] [rbp-48h] BYREF
  __int64 v50; // [rsp+68h] [rbp-40h] BYREF
  const wchar_t *v51[2]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v53; // [rsp+C8h] [rbp+20h] BYREF

  v5 = EnterCrit(0LL, 0LL);
  v7 = (const wchar_t *)(*((_QWORD *)PtiCurrent(v6) + 57) + 976LL);
  v48 = (__int64)v7;
  v9 = *(_DWORD *)(*((_QWORD *)PtiCurrent(v8) + 57) + 56LL);
  v11 = PtiCurrent(v10);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(**((PEPROCESS **)v11 + 57));
  EtwTraceUiAuditWriteClipboard(v9, &TimeQuadPart);
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v5 + 456), 4u);
  }
  else
  {
    v15 = PtiCurrent(v12);
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v15 + 130, 0, 0) & 0x20000000) != 0 )
      v14 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent((__int64)v15) + 57) + 752LL) + 32LL) & 4;
    else
      v14 = 0LL;
    if ( (_DWORD)v14 )
      goto LABEL_49;
    HasUILimit = 0;
  }
  if ( HasUILimit )
  {
LABEL_49:
    EtwTraceUiLimitWriteClipboard(v9, &TimeQuadPart);
    if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
    {
      v51[0] = v7;
      LODWORD(v53) = -2147024891;
      v50 = (__int64)"RestrictedThread";
      v49 = (const char *)1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v43,
        (int)&unk_140376685,
        v44,
        (__int64)&v49,
        (void **)&v50,
        (__int64)&v53,
        v51);
    }
    if ( (unsigned int)dword_1403AAA30 <= 5 || !tlgKeywordOn((__int64)&dword_1403AAA30, 1LL) )
      goto LABEL_56;
    v51[0] = v7;
    v50 = (__int64)"RestrictedThread";
    v46 = v51;
    v28 = (void **)&v50;
    v29 = (unsigned __int8 *)&unk_1403765C7;
    goto LABEL_55;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  if ( CurrentProcessWin32Process )
  {
    v17 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  if ( *(_DWORD *)(CurrentProcessWin32Process + 868) )
  {
    v18 = PtiCurrent(v17);
    v19 = *((_QWORD *)v18 + 61);
    v20 = *(_QWORD *)(v19 + 40);
    if ( (!*(_QWORD *)(W32GetUserSessionState(v19, v21) + 18928) || !(unsigned int)ForegroundInputOwnerMatch(v18, 1LL))
      && v18 != *(struct tagTHREADINFO **)(v20 + 48) )
    {
      v22 = *(_QWORD *)(v20 + 80);
      if ( !v22 || *(struct tagTHREADINFO **)(v22 + 16) != v18 )
      {
        if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
        {
          v48 = (__int64)v7;
          LODWORD(v53) = -2147024891;
          v49 = "NoForeground";
          v50 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v23,
            (int)&unk_14037657B,
            v24,
            (__int64)&v50,
            (void **)&v49,
            (__int64)&v53,
            (const wchar_t **)&v48);
        }
        if ( (unsigned int)dword_1403AAA30 <= 5 || !tlgKeywordOn((__int64)&dword_1403AAA30, 1LL) )
          goto LABEL_56;
        v50 = (__int64)v7;
        v49 = "NoForeground";
        v46 = (const wchar_t **)&v50;
        v28 = (void **)&v49;
        v29 = (unsigned __int8 *)&unk_140376607;
LABEL_55:
        LODWORD(v53) = -2147024891;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v25,
          v29,
          v26,
          v27,
          v28,
          (__int64)&v53,
          v46);
LABEL_56:
        v34 = 0;
        UserSetLastError(5);
        goto LABEL_57;
      }
    }
    if ( a1 != 1 && a1 != 13 )
    {
      if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
      {
        v50 = (__int64)v7;
        LODWORD(v53) = -2147024891;
        v49 = "UnsupportedFormatForLowBoxApp";
        v48 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v30,
          (int)&unk_1403764A3,
          v31,
          (__int64)&v48,
          (void **)&v49,
          (__int64)&v53,
          (const wchar_t **)&v50);
      }
      if ( (unsigned int)dword_1403AAA30 <= 5 || !tlgKeywordOn((__int64)&dword_1403AAA30, 1LL) )
        goto LABEL_56;
      v50 = (__int64)v7;
      v49 = "UnsupportedFormatForLowBoxApp";
      v46 = (const wchar_t **)&v50;
      v28 = (void **)&v49;
      v29 = (unsigned __int8 *)&unk_140376463;
      goto LABEL_55;
    }
  }
  v32 = (__int64 *)MmUserProbeAddress;
  if ( a3 < MmUserProbeAddress )
    v32 = (__int64 *)a3;
  v53 = *v32;
  v34 = SetClipboardData(a1, a2, v53 != 0, HIDWORD(v53) != 0);
  if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
  {
    v50 = (__int64)v7;
    if ( v34 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    LODWORD(v53) = LastError;
    v49 = "FunctionExit";
    v48 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v33,
      (int)&unk_1403763D7,
      v35,
      (__int64)&v48,
      (void **)&v49,
      (__int64)&v53,
      (const wchar_t **)&v50);
  }
  if ( !v34 )
  {
    v37 = UserGetLastError();
    v38 = v37 < 0;
    if ( v37 > 0 )
      v38 = 1;
    if ( v38 && (unsigned int)dword_1403AAA30 > 5 && tlgKeywordOn((__int64)&dword_1403AAA30, 1LL) )
    {
      v50 = (__int64)v7;
      v39 = UserGetLastError();
      if ( v39 > 0 )
        v39 = (unsigned __int16)v39 | 0x80070000;
      LODWORD(v53) = v39;
      v49 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v40,
        byte_140376423,
        v41,
        v42,
        (void **)&v49,
        (__int64)&v53,
        (const wchar_t **)&v50);
    }
  }
LABEL_57:
  UserSessionSwitchLeaveCrit(v33);
  return v34;
}
