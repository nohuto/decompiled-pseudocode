/*
 * XREFs of NtUserThunkedMenuInfo @ 0x14020F5E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuInfo @ 0x14000CF70 (xxxSetMenuInfo.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B390 (--$-0VSmartObjStackRef@@@-$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV-$SmartObjStackRef@UtagMENU@@@.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

__int64 __fastcall NtUserThunkedMenuInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v9[3]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v10; // [rsp+58h] [rbp-30h] BYREF
  __int128 v11; // [rsp+68h] [rbp-20h]
  __int64 v12; // [rsp+78h] [rbp-10h]

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v9);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v10 = *(_OWORD *)a2;
  v11 = *(_OWORD *)(a2 + 16);
  v12 = *(_QWORD *)(a2 + 32);
  v4 = ValidateHmenu(a1, (BYTE4(v10) & 8) != 0 ? 1024 : 64);
  v5 = 0;
  v9[2] = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v9, v4);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v9) && (*(_DWORD *)(*(_QWORD *)(*v9[0] + 40) + 40LL) & 0x40) == 0 )
  {
    Win32HMThreadLock<tagMENU>::Win32HMThreadLock<tagMENU>(BugCheckParameter3, v9);
    v5 = xxxSetMenuInfo(v9, (__int64)&v10);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v9);
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
