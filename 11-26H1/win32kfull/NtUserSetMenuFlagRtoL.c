/*
 * XREFs of NtUserSetMenuFlagRtoL @ 0x14025DE40
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetMenuFlagRtoL(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v7);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v9);
  v2 = ValidateHmenu(a1, 64LL);
  v10 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v9, v2);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v9) )
  {
    v3 = 0LL;
  }
  else
  {
    v4 = v10;
    if ( !v10 )
      v4 = *(_QWORD *)v9[0];
    v3 = 1LL;
    *(_DWORD *)(*(_QWORD *)(v4 + 40) + 40LL) |= 0x20u;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v9);
  if ( v7[0] )
  {
    v5 = v8;
    --*(_DWORD *)(v8 + 28);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}
