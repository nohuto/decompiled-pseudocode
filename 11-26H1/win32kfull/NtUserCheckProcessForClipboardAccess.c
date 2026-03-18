/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x140249EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140001008 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1400FC590 (LockProcessByClientId.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14025E14C (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1402942C4 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(unsigned int a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // r15d
  int v5; // edi
  __int64 v6; // r9
  PVOID v7; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rcx
  struct tagPROCESSINFO *ProcessInfo; // rsi
  const struct tagTHREADINFO *i; // r14
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  const wchar_t *v18; // [rsp+30h] [rbp-88h] BYREF
  __int64 v19[3]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v20[24]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v21; // [rsp+68h] [rbp-50h]
  __int64 v22; // [rsp+D0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = 0;
  Object = 0LL;
  v5 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v22, 1LL);
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    CLockProcessByPid::CLockProcessByPid((__int64)v20, v3, 1024, v6, 1);
    if ( !v21 || (ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v20)) == 0LL )
    {
      v5 = 0;
      UserSetLastError(87);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v20);
      goto LABEL_27;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v20);
  }
  else
  {
    if ( (int)LockProcessByClientId((void *)(int)v3, (PEPROCESS *)&Object) < 0 )
      goto LABEL_3;
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    ProcessInfo = (struct tagPROCESSINFO *)ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      v9 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      ProcessInfo = (struct tagPROCESSINFO *)(v9 & ProcessWin32Process);
    }
    if ( !ProcessInfo )
    {
LABEL_3:
      v5 = 0;
      UserSetLastError(87);
      goto LABEL_27;
    }
  }
  for ( i = (const struct tagTHREADINFO *)*((_QWORD *)ProcessInfo + 41);
        i;
        i = (const struct tagTHREADINFO *)*((_QWORD *)i + 87) )
  {
    v4 = InForegroundQueue(i, 1);
    if ( v4 )
      break;
  }
  if ( !v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( !*(_DWORD *)(CurrentProcessWin32Process + 868) )
    {
      v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v14 = *((_DWORD *)ProcessInfo + 267);
      if ( v14 <= (unsigned int)v13 )
        v4 = (unsigned int)v13 - v14 <= 0x1F4;
      if ( (unsigned int)dword_1403AA9F8 > 5 && tlgKeywordOn((__int64)&dword_1403AA9F8, 0x400000000000LL) )
      {
        v18 = (const wchar_t *)((char *)ProcessInfo + 976);
        LODWORD(v22) = v4;
        v19[0] = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v15,
          (int)&unk_140375AA6,
          v16,
          (__int64)v19,
          (__int64)&v22,
          &v18);
      }
    }
  }
  RtlWriteULongToUser(a2, v4);
  v7 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_27:
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
