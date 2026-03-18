/*
 * XREFs of NtUserCheckMenuItem @ 0x14000A5D0
 * Callers:
 *     <none>
 * Callees:
 *     _CheckMenuItem @ 0x14000ABE4 (_CheckMenuItem.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserCheckMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _BYTE v10[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  _QWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck(v10);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v12);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL);
LABEL_13:
    v8 = -1;
    goto LABEL_10;
  }
  v6 = ValidateHmenu(a1, 256LL);
  v13 = 0LL;
  if ( v6 != *(_QWORD *)v12[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v12);
    if ( v6 )
    {
      v12[0] = *(_QWORD *)(v6 + 152);
      ++*(_DWORD *)(v12[0] + 8LL);
    }
    else
    {
      v12[0] = gSmartObjNullRef;
    }
  }
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v12)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_13;
  }
  v7 = v13;
  if ( !v13 )
    v7 = *(_QWORD *)v12[0];
  v8 = CheckMenuItem(v7, a2, a3);
LABEL_10:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v12);
  if ( v10[0] )
    --*(_DWORD *)(v11 + 28);
  UserSessionSwitchLeaveCrit();
  return v8;
}
