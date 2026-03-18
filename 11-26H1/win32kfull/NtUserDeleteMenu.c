/*
 * XREFs of NtUserDeleteMenu @ 0x14000D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140032F98 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserDeleteMenu(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v11);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004LL);
    v7 = 0;
  }
  else
  {
    v6 = ValidateHmenu(a1, 32LL);
    v7 = 0;
    v12 = 0LL;
    if ( v6 != *(_QWORD *)v11[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v11);
      if ( v6 )
      {
        v11[0] = *(_QWORD *)(v6 + 152);
        ++*(_DWORD *)(v11[0] + 8LL);
      }
      else
      {
        v11[0] = gSmartObjNullRef;
      }
    }
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v11)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11[0] + 40LL) + 40LL) & 0x40) == 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11[0] + 40LL) + 40LL) & 0x200) == 0 )
    {
      v8 = v12;
      if ( !v12 )
        v8 = *(_QWORD *)v11[0];
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, v8);
      v7 = xxxRemoveDeleteMenuHelper(v11, a2, a3, 1LL);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v11);
  UserSessionSwitchLeaveCrit();
  return v7;
}
