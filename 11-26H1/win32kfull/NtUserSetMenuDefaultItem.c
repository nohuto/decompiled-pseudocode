/*
 * XREFs of NtUserSetMenuDefaultItem @ 0x140224710
 * Callers:
 *     <none>
 * Callees:
 *     _SetMenuDefaultItem @ 0x14000F3B0 (_SetMenuDefaultItem.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v13);
  v6 = ValidateHmenu(a1, 512LL);
  v14 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v13, v6);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v13)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v7 = v14;
    if ( !v14 )
      v7 = *(_QWORD *)v13[0];
    v8 = SetMenuDefaultItem(v7, a2, a3);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v13);
  if ( v11[0] )
  {
    v9 = v12;
    --*(_DWORD *)(v12 + 28);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
