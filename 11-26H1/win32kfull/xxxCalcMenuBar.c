/*
 * XREFs of xxxCalcMenuBar @ 0x140009E50
 * Callers:
 *     NtUserCalcMenuBar @ 0x14025DF00 (NtUserCalcMenuBar.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x14000AC68 (xxxMenuBarCompute.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  unsigned int v12; // ebx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  _QWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v15);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 && *(_QWORD *)(a1 + 168) )
  {
    v16 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v15);
    v10 = v16;
    if ( !v16 )
      v10 = *(_QWORD *)v15[0];
    v11 = PtiCurrent();
    Win32HM_LockIntoThread<0>(v11, v10, &BugCheckParameter3);
    *(_DWORD *)(*(_QWORD *)(v10 + 40) + 40LL) |= 0x200u;
    xxxMenuBarCompute((unsigned int)v15, a1, a4, a2, a5[2] - *a5 - a2 - a3);
    v12 = *(_DWORD *)(*(_QWORD *)v15[0] + 68LL);
    *(_DWORD *)(*(_QWORD *)(v14 + 40) + 40LL) &= ~0x200u;
    Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>((ULONG_PTR)&BugCheckParameter3);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v15);
    return v12;
  }
  else
  {
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v15);
    return 0LL;
  }
}
