/*
 * XREFs of NtUserSetMenuContextHelpId @ 0x1402BD250
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserSetMenuContextHelpId(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v10);
  v4 = ValidateHmenu(a1, 64LL);
  v5 = 0LL;
  v11 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v10, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v10)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10[0] + 40LL) + 40LL) & 0x40) == 0 )
  {
    v6 = v11;
    if ( !v11 )
      v6 = *(_QWORD *)v10[0];
    v5 = 1LL;
    *(_DWORD *)(*(_QWORD *)(v6 + 40) + 48LL) = a2;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  UserSessionSwitchLeaveCrit(v7);
  return v5;
}
