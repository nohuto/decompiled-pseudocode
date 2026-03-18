/*
 * XREFs of xxxLoadSysMenu @ 0x14000BE58
 * Callers:
 *     xxxGetSystemMenu @ 0x140121614 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x14022E810 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     xxxClientLoadMenu @ 0x14000A328 (xxxClientLoadMenu.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxSetMenuInfo @ 0x14000CF70 (xxxSetMenuInfo.c)
 *     xxxSetMenuItemInfo @ 0x14000E028 (xxxSetMenuItemInfo.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned __int8 *__fastcall xxxLoadSysMenu(int a1)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v3; // rbx
  struct tagTHREADINFO *v4; // rax
  _BYTE v5[24]; // [rsp+38h] [rbp-59h] BYREF
  char *v6[2]; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-31h] BYREF
  _DWORD v8[3]; // [rsp+70h] [rbp-21h] BYREF
  __int128 v9; // [rsp+7Ch] [rbp-15h]
  __int64 v10; // [rsp+8Ch] [rbp-5h]
  int v11; // [rsp+94h] [rbp+3h]
  _DWORD v12[18]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v13; // [rsp+E0h] [rbp+4Fh]

  v10 = 0LL;
  v11 = 0;
  v9 = 0LL;
  memset_0(v12, 0, 0x50uLL);
  v6[1] = (char *)(unsigned __int16)a1;
  v6[0] = 0LL;
  result = xxxClientLoadMenu(0LL, v6);
  v3 = result;
  if ( result )
  {
    v4 = PtiCurrent();
    Win32HM_LockIntoThread<0>(v4, v3, BugCheckParameter3);
    v8[0] = 40;
    v8[1] = -2147483632;
    v8[2] = 0x4000000;
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v5, v3);
    xxxSetMenuInfo(v5, v8);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v5);
    v12[0] = 80;
    v12[1] = 128;
    v13 = 8LL;
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v5, v3);
    xxxSetMenuItemInfo((unsigned int)v5, 61536, 0, (unsigned int)v12, 0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v5);
    if ( a1 != 48 )
    {
      v13 = 11LL;
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v5, v3);
      xxxSetMenuItemInfo((unsigned int)v5, 61472, 0, (unsigned int)v12, 0LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v5);
      v13 = 10LL;
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v5, v3);
      xxxSetMenuItemInfo((unsigned int)v5, 61488, 0, (unsigned int)v12, 0LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v5);
      v13 = 9LL;
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v5, v3);
      xxxSetMenuItemInfo((unsigned int)v5, 61728, 0, (unsigned int)v12, 0LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v5);
    }
    if ( !Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3)
      || (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
    {
      v3 = 0LL;
    }
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
    return v3;
  }
  return result;
}
