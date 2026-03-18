/*
 * XREFs of NtUserGetClipboardData @ 0x1402B27A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140149244 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401492EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1401B03C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     UserGetLastError @ 0x1401B0B24 (UserGetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1401B0F10 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     xxxGetClipboardData @ 0x1401F7070 (xxxGetClipboardData.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14025C788 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1402942C4 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

void *__fastcall NtUserGetClipboardData(unsigned int a1, void *a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // r13
  const char *v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct tagWINDOWSTATION *v9; // r12
  __int64 v10; // r8
  const char *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 *v14; // rdx
  bool HasUILimit; // al
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *ClipboardData; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // r8
  int LastError; // eax
  int v27; // eax
  bool v28; // sf
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  LONGLONG v35; // [rsp+50h] [rbp-68h] BYREF
  const char *v36; // [rsp+58h] [rbp-60h] BYREF
  __int128 Src; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v38[9]; // [rsp+70h] [rbp-48h] BYREF
  LONGLONG TimeQuadPart; // [rsp+D0h] [rbp+18h] BYREF
  const wchar_t *ThreadProcessId; // [rsp+D8h] [rbp+20h] BYREF

  Src = 0LL;
  EnterCrit(0LL, 0LL);
  UserSetLastError(0);
  v5 = PtiCurrent(v4);
  v6 = (const char *)(*((_QWORD *)v5 + 57) + 976LL);
  v36 = v6;
  v9 = CheckClipboardAccess(v7);
  if ( !v9 )
  {
    if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
    {
      ThreadProcessId = (const wchar_t *)v6;
      LODWORD(TimeQuadPart) = -2147024891;
      v11 = "AccessDenied";
      v36 = "AccessDenied";
      v35 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v8,
        (int)&unk_14037638B,
        v10,
        (__int64)&v35,
        (void **)&v36,
        (__int64)&TimeQuadPart,
        &ThreadProcessId);
    }
    else
    {
      v11 = "AccessDenied";
    }
    if ( (unsigned int)dword_1403AAA30 <= 5 || !tlgKeywordOn((__int64)&dword_1403AAA30, 1LL) )
      goto LABEL_58;
    v14 = (unsigned __int8 *)&unk_14037634B;
LABEL_57:
    ThreadProcessId = (const wchar_t *)v6;
    LODWORD(TimeQuadPart) = -2147024891;
    v36 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v8,
      v14,
      v12,
      v13,
      (void **)&v36,
      (__int64)&TimeQuadPart,
      &ThreadProcessId);
LABEL_58:
    ClipboardData = 0LL;
    goto LABEL_59;
  }
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v5 + 57), 2u);
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v5 + 130, 0, 0) & 0x20000000) != 0 )
      v16 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 57) + 752LL) + 32LL) & 2;
    else
      v16 = 0;
    if ( v16 )
    {
LABEL_50:
      UserSetLastError(5);
      if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
      {
        ThreadProcessId = (const wchar_t *)v6;
        LODWORD(TimeQuadPart) = -2147024891;
        v11 = "RestrictedThread";
        v36 = "RestrictedThread";
        v35 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v8,
          (int)&unk_140376273,
          v33,
          (__int64)&v35,
          (void **)&v36,
          (__int64)&TimeQuadPart,
          &ThreadProcessId);
      }
      else
      {
        v11 = "RestrictedThread";
      }
      if ( (unsigned int)dword_1403AAA30 <= 5 || !tlgKeywordOn((__int64)&dword_1403AAA30, 1LL) )
        goto LABEL_58;
      v14 = (unsigned __int8 *)&unk_140376233;
      goto LABEL_57;
    }
    HasUILimit = 0;
  }
  if ( HasUILimit )
    goto LABEL_50;
  if ( !*(_DWORD *)(*((_QWORD *)v5 + 57) + 868LL) || (unsigned int)InForegroundQueue(v5, 1u) && (a1 == 1 || a1 == 13) )
  {
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v38, v9);
    TimeQuadPart = (unsigned int)Feature_ReadClipboardEvent__private_featureState;
    if ( (Feature_ReadClipboardEvent__private_featureState & 0x10) == 0 )
    {
      LODWORD(TimeQuadPart) = Feature_ReadClipboardEvent__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_ReadClipboardEvent__private_descriptor,
        Feature_ReadClipboardEvent__private_featureState | 1,
        3u,
        1LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        TimeQuadPart,
        3,
        (__int64)&Feature_ReadClipboardEvent__private_descriptor);
    }
    LODWORD(ThreadProcessId) = 0;
    TimeQuadPart = 0LL;
    v23 = *((_QWORD *)v9 + 10);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 16);
      ThreadProcessId = (const wchar_t *)PsGetThreadProcessId(*(PETHREAD *)v24);
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v24 + 456));
    }
    v35 = PsGetProcessCreateTimeQuadPart(**((PEPROCESS **)v5 + 57));
    EtwTraceUiAuditReadClipboard(
      *(unsigned int *)(*((_QWORD *)v5 + 57) + 56LL),
      &v35,
      (unsigned int)ThreadProcessId,
      &TimeQuadPart,
      *((_DWORD *)v9 + 28));
    LODWORD(Src) = a1;
    ClipboardData = xxxGetClipboardData((struct tagTHREADINFO **)v9, a1, (__int64)&Src);
    if ( ClipboardData )
      RtlCopyToUser(a2, &Src, 0x10uLL);
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v38);
    if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
    {
      ThreadProcessId = (const wchar_t *)v6;
      if ( ClipboardData )
      {
        LastError = 0;
      }
      else
      {
        LastError = UserGetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
      }
      LODWORD(TimeQuadPart) = LastError;
      v36 = "FunctionExit";
      v35 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v8,
        (int)&unk_1403761A7,
        v25,
        (__int64)&v35,
        (void **)&v36,
        (__int64)&TimeQuadPart,
        &ThreadProcessId);
    }
    if ( !ClipboardData )
    {
      v27 = UserGetLastError();
      v28 = v27 < 0;
      if ( v27 > 0 )
        v28 = 1;
      if ( v28 && (unsigned int)dword_1403AAA30 > 5 && tlgKeywordOn((__int64)&dword_1403AAA30, 1LL) )
      {
        ThreadProcessId = (const wchar_t *)v6;
        v29 = UserGetLastError();
        if ( v29 > 0 )
          v29 = (unsigned __int16)v29 | 0x80070000;
        LODWORD(TimeQuadPart) = v29;
        v36 = "FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v30,
          byte_14037611B,
          v31,
          v32,
          (void **)&v36,
          (__int64)&TimeQuadPart,
          &ThreadProcessId);
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
    {
      ThreadProcessId = (const wchar_t *)v6;
      LODWORD(TimeQuadPart) = -2147024891;
      v36 = "UnsupportedFormatForLowBoxApp";
      v35 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v17,
        (int)&unk_1403762FF,
        v18,
        (__int64)&v35,
        (void **)&v36,
        (__int64)&TimeQuadPart,
        &ThreadProcessId);
    }
    if ( (unsigned int)dword_1403AAA30 > 5 && tlgKeywordOn((__int64)&dword_1403AAA30, 1LL) )
    {
      ThreadProcessId = (const wchar_t *)v6;
      LODWORD(TimeQuadPart) = -2147024891;
      v36 = "UnsupportedFormatForLowBoxApp";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v19,
        byte_1403762BF,
        v20,
        v21,
        (void **)&v36,
        (__int64)&TimeQuadPart,
        &ThreadProcessId);
    }
    ClipboardData = 0LL;
    UserSetLastError(5);
  }
LABEL_59:
  UserSessionSwitchLeaveCrit(v8);
  return ClipboardData;
}
