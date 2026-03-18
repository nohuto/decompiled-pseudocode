/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x14004B410
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuItemInfo @ 0x14000E028 (xxxSetMenuItemInfo.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     AccessMaskFromMenuItemInfo @ 0x140049CA0 (AccessMaskFromMenuItemInfo.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B390 (--$-0VSmartObjStackRef@@@-$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV-$SmartObjStackRef@UtagMENU@@@.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        ULONG64 a5,
        __int64 a6)
{
  _OWORD *v10; // rax
  int v11; // ebx
  __int64 v12; // rcx
  unsigned __int64 ULong64FromUser; // rax
  ULONG64 v14; // rdx
  __int64 v15; // rdi
  bool v16; // zf
  int inserted; // eax
  __int64 v18; // rcx
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 *v22[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-B8h]
  int v24; // [rsp+48h] [rbp-B0h]
  struct _UNICODE_STRING v25; // [rsp+50h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-98h] BYREF
  _OWORD v27[5]; // [rsp+70h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+C8h] [rbp-30h] BYREF

  memset_0(v27, 0, sizeof(v27));
  DestinationString = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v22);
  v10 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v27[0] = *v10;
  v27[1] = v10[1];
  v27[2] = v10[2];
  v27[3] = v10[3];
  v27[4] = v10[4];
  v11 = 0;
  if ( a6 )
  {
    v25 = 0LL;
    *(_DWORD *)&v25.Length = RtlReadULongFromUser(a6);
    ULong64FromUser = RtlReadULong64FromUser(a6 + 8);
    v25.Buffer = (PWSTR)ULong64FromUser;
    DestinationString = v25;
    if ( (ULong64FromUser & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = ULong64FromUser + v25.Length + 2LL;
    if ( v14 <= ULong64FromUser || v14 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( v25.Length > v25.MaximumLength || (v25.Length & 1) != 0 )
    {
      if ( (v25.Length & 1) != 0 )
      {
        v24 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5044LL);
      }
      ExRaiseAccessViolation();
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  if ( (BYTE4(v27[0]) & 1) == 0 || (HIDWORD(v27[0]) & 0xFFFFEF74) == 0 )
  {
    if ( a4 )
    {
      v15 = ValidateHmenu(a1, 16LL);
      v23 = 0LL;
      if ( v15 != *v22[0] )
      {
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)v22);
        if ( v15 )
        {
          v22[0] = *(__int64 **)(v15 + 152);
          ++*((_DWORD *)v22[0] + 2);
        }
        else
        {
          v22[0] = (__int64 *)gSmartObjNullRef;
        }
      }
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v22)
        && (*(_DWORD *)(*(_QWORD *)(*v22[0] + 40) + 40LL) & 0x40) == 0 )
      {
        v16 = (*(_DWORD *)(*(_QWORD *)(*v22[0] + 40) + 40LL) & 0x200) == 0;
        goto LABEL_24;
      }
    }
    else
    {
      v20 = AccessMaskFromMenuItemInfo(v12, SBYTE4(v27[0]), SWORD6(v27[0]));
      v21 = ValidateHmenu(a1, v20);
      v23 = 0LL;
      if ( v21 != *v22[0] )
      {
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)v22);
        if ( v21 )
        {
          v22[0] = *(__int64 **)(v21 + 152);
          ++*((_DWORD *)v22[0] + 2);
        }
        else
        {
          v22[0] = (__int64 *)gSmartObjNullRef;
        }
      }
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v22) )
      {
        v16 = (*(_DWORD *)(*(_QWORD *)(*v22[0] + 40) + 40LL) & 0x40) == 0;
LABEL_24:
        if ( v16 )
        {
          Win32HMThreadLock<tagMENU>::Win32HMThreadLock<tagMENU>(BugCheckParameter3, v22);
          if ( a4 )
            inserted = xxxInsertMenuItem((__int64)v22, a2, a3, (__int64)v27, &DestinationString.Length);
          else
            inserted = xxxSetMenuItemInfo(v22, a2, a3, (__int64)v27, (__int64)&DestinationString);
          v11 = inserted;
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        }
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v22);
  UserSessionSwitchLeaveCrit(v18);
  return v11;
}
