/*
 * XREFs of NtUserDestroyMenu @ 0x1401F4A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  __int64 v2; // rbx
  struct _HEAD *v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+28h] [rbp-28h]
  __int64 v9[2]; // [rsp+30h] [rbp-20h] BYREF
  struct _HEAD *v10; // [rsp+40h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v7);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v9);
  v2 = ValidateHmenu(a1, 32LL);
  v10 = 0LL;
  if ( v2 != *(_QWORD *)v9[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v9);
    if ( v2 )
    {
      v9[0] = *(_QWORD *)(v2 + 152);
      ++*(_DWORD *)(v9[0] + 8);
    }
    else
    {
      v9[0] = gSmartObjNullRef;
    }
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v9)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v3 = v10;
    if ( !v10 )
      v3 = *(struct _HEAD **)v9[0];
    v4 = DestroyMenu(v3);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v9);
  if ( v7[0] )
  {
    v5 = v8;
    --*(_DWORD *)(v8 + 28);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
